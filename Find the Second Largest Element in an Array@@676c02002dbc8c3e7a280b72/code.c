#include<stdio.h>
int main(){
    int n,large=0,index = 0 , small = 1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=large){
            large = arr[i];
        }
    }
    for(int i = 0;i<n;i++){
        if((large - arr[i]) !=0 && (large - arr[i])<small){
            small = (large-arr[i]);
            index=i;
        }

    }
    printf("%d",large);

    return 0;
}