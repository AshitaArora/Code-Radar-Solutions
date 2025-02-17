// Your code here...
#include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
if(a<b){
    printf("Profit");
}if(a>b){
    printf("Loss");
}if(a==b){
    printf("No Profit No Loss");
}




    return 0;
}