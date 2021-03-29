#include <stdio.h>
#include <ctype.h>
int main(){
    int a[25];
    char b[25];
    int ax = 0;
    char bx;
    int inpod,outpod;
        for (int i = 0; i < 26; i++){
            ax = ax + 1;
            a[i] = ax;
            }
        for (int j = 0; j < 26; j++){
            b[j] ='a'+j;
            }
        for(int k = 0;k < 26; k++){
            a[k]==b[k];
        }
        printf("Masukan Angka : ");
        scanf("%d",&inpod);
        printf("ini adalah huruf = %c\n",b[inpod % 26]);
}
