#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int sum=0;
for(int i=1;i<=n;i++){
    if(n%i==0){
        sum +=1;
    }
}if(sum>2){
    printf("Not Prime");
}else{
    printf("Prime");
}










    return 0;
}