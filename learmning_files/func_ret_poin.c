#include<stdio.h>
//program to show a function returns pointer
int *fun(int *p, int n){
    p = p + n;
    return p;
}
main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10}, n, *ptr;
    n = 5;
    ptr = fun(arr, n);
    printf("arr = %p, ptr = %p, *ptr = %d\n",arr, ptr, *ptr);
}