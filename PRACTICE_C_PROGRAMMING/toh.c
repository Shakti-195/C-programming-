#include <stdio.h>
void toh(int n, char A,char B,char C){

    if(n==1){
        printf("Move disk1  %c to %c\n",A,B);
        return;
    }

    toh(n-1,C,B,A);
    printf("Move disk %d From %c to %C",n,A,B);
    toh(n-1,A,B,C);
}
   int main(){
    int n;
    printf("ENter the number of disks:");
    scanf("%d",&n);
    printf("Steps to solve the tower of hanoi problem with %d disks:\n",n);
    toh(n,'A','B','C');
       return 0;

    }

