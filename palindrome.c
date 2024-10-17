#include<stdio.h>

int main(){
    int num,rev = 0,rem,orig;

    //prompt user for input 
    printf("Enter a number:");
    scanf("%d",&num);
    //Store the original number
    orig = num;

    //reverse the number 
    while(num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num /=10;
    }

    //check if the original number and reversed number are the same 

    if(orig == rev){
        printf("%d is a palindrome.\n",orig);
    }else{
       printf("%d is not  a palindrome.\n",orig); 
    }

    return 0; //end of the program 



}
