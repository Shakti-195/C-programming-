//check weather the number is even or odd 
#include<stdio.h>
int main(){
    int a;
    printf("Enter The Number:");
    scanf("%d",&a);

    if(a%2==0){
        printf("The Given Number Is Even....","%d",a);

    }else{
        printf("The Given Number Is odd....","%d",a);

    }
    return 0;
}
