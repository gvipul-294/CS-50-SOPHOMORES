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
    
    