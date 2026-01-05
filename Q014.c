// KB value to bits, bytes, MB and GB
#include <stdio.h>

int main(void){
    float kb, bits, bytes, mb, gb;

    printf("KB size: ");
    scanf("%f", &kb);
    bytes = kb / 1000;
    bits = bytes * 8;
    mb = kb / 1000;
    gb = mb / 1000;
    
    printf("Bits: %f\nBytes: %f\nMB: %f\nGB: %f\n", bits, bytes, mb, gb);
    getch();
    return 0;
}