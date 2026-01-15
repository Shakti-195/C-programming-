#include <stdio.h>

int binarysearch(int arr[],int n,int key){
    int low = 0,high = n-1, mid;

    while(low <= high){
        mid = (low + high)/2;

        if(arr[mid] == key)
        return mid;

        if(arr[mid] < key)
        low = mid + 1;

        else
        high = mid - 1;


    }
    return -1;
}

int main(){
    int a[100],n,key,i;
    scanf("%d",&n);
    
    for(i=0; i<n; i++) 
    scanf("%d",&a[i]);
    scanf("%d",&key);

    int pos = binarysearch(a,n,key);
    
    if(pos == -1) printf("not found\n");
    else printf("found at %d\n",pos + 1);
    return 0;
}