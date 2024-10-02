//print the fiobonacci series....

#include<stdio.h>
int main(){

//declare variables...
int n,i,a=0,b=1,c;

//Ask user for the number of terms in the Fibonacci series

printf("Enter the number of terms:");
scanf("%d",&n); // Read the number of terms from the user

// Print the header for the Fibonacci series
printf("The fibonacci series is :");

// Print the current value of 'a', followed by a tab space
for(i=0;i<n;i++){

    printf("%d\t",a);
    
    c=a+b; // Calculate the next Fibonacci number
    a=b;   // Update 'a' to the current 'b'
    b=c;   // Update 'b' to the next number 'c'
}
return 0; // Return 0 to indicate the program ended successfully
}
