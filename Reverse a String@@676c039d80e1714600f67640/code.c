#include<stdio.h>
#include<string.h>
int main(){
    int i,len;
    char str[100],temp;
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<len/2;i++){
    temp=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=temp;}
    

    return 0;
}