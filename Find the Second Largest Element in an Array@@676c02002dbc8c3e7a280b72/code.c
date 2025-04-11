#include<stdio.h>
int main(){
    int n,large=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=large){
            large = arr[i];
        }
        
    }
    printf("%d",large);

    return 0;
}