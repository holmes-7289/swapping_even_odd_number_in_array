#include <stdio.h>

int main()
{
    int arr[]={1,3,3,4,5,6,7,8,9,0};
    printf("Only even Number to be swapped\n");
    int arrlen=sizeof(arr)/sizeof(int);
    int i=0,l=arrlen-1;
    printf("%d\n",arrlen);
    for(i=0;i<arrlen;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");    
    i=0,l=arrlen-1;
    
    while(i<l){
        while(!(arr[i]%2==0))
        i++;
        while(!(arr[l]%2==0))
        l--;
        int t=arr[i];
        arr[i]=arr[l];
        arr[l]=t;
        i++,l--;
    }
    for(i=0;i<arrlen;i++){
        printf("%d ",arr[i]);
    }
    

    return 0;
}

