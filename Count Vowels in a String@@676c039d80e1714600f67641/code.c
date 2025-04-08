#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,len,sum;
    scanf("%s",str);
    len =strlen(str);
    sum=0;
    for(i=0;i<len;i++){
        if(str[i]='a'|| str[i]='e'|| str[i]='i' || str[i]='o' || str[i]='u'){
            sum+=1;
        }
    }printf("%d",sum);
    return 0;
}