#include<stdio.h>
int main(){
    int n;
    scanf("%d",n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int issorted = 0;
    for( int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            issorted=1;
            break;
        }
    }  if(issorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}