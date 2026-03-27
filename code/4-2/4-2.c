#include <stdio.h>

void swap_endian(int *x){
    unsigned char* addr = (unsigned char*)&x;

    printf("%x", *addr);
    printf("%x", *(addr + 1));
    printf("%x", *(addr + 2));
    printf("%x", *(addr + 3));

}

int main(){
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
}
