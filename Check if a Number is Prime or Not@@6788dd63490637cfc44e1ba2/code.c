#include<stdio.h>
int main(){
int n,i;
scanf("%d",&n);
int sum=0;
for(i=0;i<=n;i++){
    if(n%i==0){
        sum = +1;
    }
}if(sum>2){
    printf(" NotPrime");
}else{
    printf("Prime");
}










    return 0;
}