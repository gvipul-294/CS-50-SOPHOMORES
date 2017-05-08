 #include <stdio.h>
 #include <stdint.h>
 
 const int BLOCK_SIZE = 512;
 
 int main(int argc, char *agrv[])
 {
    FILE *f;
    
    if ((f = fopen("card.raw", "r")) == NULL)
    {
        printf("Error opening the file \"ecard.raw\"...");
        return 1;
    }
    
    uint8_t buf[512];
    
    int counter = 0;
    FILE *fw = NULL;
    
   
    while (fread(buf, BLOCK_SIZE, 1, f))
    {
        
        if (buf[0] == 0xff && buf[1] == 0xd8 && buf[2] == 0xff
            && (buf[3] == 0xe0 || buf[3] == 0xe1))
        {
            // Close the file, if it is opened
            if (fw != NULL)
                fclose(fw);
    