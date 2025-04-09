#include<stdio.h>
int isPrime(int n){
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum +=1;
        }
    }if(sum>2){
        return 0;
    }else{
        return 1;
    }return 0;
}