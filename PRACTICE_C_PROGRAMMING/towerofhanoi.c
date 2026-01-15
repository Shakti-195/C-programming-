#include<stdio.h>
//recursive function to solve tower of hanoi 

void towerofhanoi(int n,char from_rod,char to_rod,char aux_rod){

    if(n==1){
        printf("Move disk1 from rod %c to rod %c\n",from_rod,to_rod);
        return;
    }

    towerofhanoi(n-1,aux_rod,to_rod,from_rod);
    printf("Move disk %d from rod %c to rod %c",n,from_rod,to_rod);
    towerofhanoi(n-1,aux_rod,to_rod,from_rod);
}

int main(){
    int n;
    printf("Enter the number of disks:");
    scanf("%d",&n);
    printf("Steps to solve the tower of hanoi problem with %d disks:\n",n);
    towerofhanoi(n,'A','B','C');
        return 0;
}