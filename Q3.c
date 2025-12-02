#include <stdio.h>

int main(){

    int n;
    printf("Number of terms : ");
    scanf("%d",&n);
    if(n==0){
        printf(" ");
    }
    else if(n==1){
        printf("0");
    }
    else{
        int a=0;
        int b=1;
        printf("%d %d ",a,b);
        for(int i=3;i<=n;i++){
            int c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
    }
    
    return 0;
}