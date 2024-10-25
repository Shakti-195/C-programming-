//while loop
//program 1
#include<stdio.h>

int main(){
    int x=2 , i=0;
    while(i<5){
        printf("like karo\n");
        i++;
    }
}
//program 2
#include<stdio.h>
int main(){
    int x=3,y=4;
    while(x<y){
        printf("%d ,",x+y);
        y=y-x;
        x=y-x;
        
    }
    return 0;
}

//program 3
//first 10 Natural Numbers
#include<stdio.h>
int main(){
int i=1;

while(i<=10){
    printf("%d\n", i);
    i++;
}
}
//program 4
//First 10 Even Numbers
#include<stdio.h>
int main(){
    int i=1;
    while(i<=10){
        printf("%d\n",2*i);
        i++;
    }
    
}
//program 5
//first 10 odd numbers in reversed order
#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",11-i);
        i++;
    }
}

____________________________________________________________________________________
