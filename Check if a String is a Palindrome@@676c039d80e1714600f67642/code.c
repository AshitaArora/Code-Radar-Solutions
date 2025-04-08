#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,len,ispalindrome=1;
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<len/2;i++){
        if(str[i]!==str[len-i-1]){
            ispalindrome=0;
            break;    
        }
    }
    if(ispalindrome){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}