#include<ctype.h>
#include<string.h>
#include<stdio.h>


char caesarCipher0(char message[],int shift,char encrypted[]){
int len = strlen(message);
for(int i=0;i<len;i++){
    encrypted[i] =message[i] +3;
}
}