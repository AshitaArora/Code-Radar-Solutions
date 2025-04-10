#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0,sum1=0;
    for(i=0;i<n-1;i++){
        if(arr[i]%2==0){
            sum += 1;
        }else{
            sum1 += 1;
        }printf("%d %d",sum,sum1);
    }
    return 0;
}