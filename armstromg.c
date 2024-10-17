#include <stdio.h>
#include <math.h>

int main(){
    int num,orig,rem, n=0;
    float result =0.0;
    
    //prompt user for input 
    printf("Enter an integer:");
    scanf("%d",&num);
    orig = num;
    
    //Find the number of digits 
    while(orig != 0){
        orig /=10;
        ++n;
    }
    orig=num;//store num into orig
    
    //calculate the sum of nth powers of the digits 
    while(orig != 0){
        rem = orig % 10;
        result += pow(rem,n);
        orig /= 10;
    }
    //check if num is an Armstrong number 
    if((int) result == num){
        printf("%d is an Armstrong number.\n",num);
        
    }else{
     printf("%d is not  an Armstrong number.\n",num);   
     
     return 0;//End of the program
    }
}
