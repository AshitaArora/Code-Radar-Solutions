#include<stdio.h>
int isPrime(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum +=1;
        }
    }if(sum==2){
        return 1;
    }else{
        return 0;
    };
}