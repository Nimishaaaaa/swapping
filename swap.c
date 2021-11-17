#include <stdio.h>  
void swap (int n, int m)  
{  
    int temp;   
    temp = n;  
    n=m;  
    m=temp;  
    printf("After swapping values in function a = %d, b = %d\n",n,m);   
}  
int main()  
{  
    int a = 10;  
    int b = 20;   
    printf("Before swapping the values in main a = %d, b =   %d\n",a,b); 
    swap(a,b);  
    printf("After swapping values in main a = %d, b = %d\n",a,b);  
}  

void swap (int *n, int *m)  
{  
    int temp;   
    temp = *n;  
    *n=*m;  
    *m=temp;  
    printf("After swapping values in function a = %d, b = %d\n",*n, *m);   
}  

int main()  
{  
    int a = 10;  
    int b = 20;   
    printf("Before swapping the values in main a = %d, b = %d\n",a,b); 
    swap(&a,&b);  
    printf("After swapping values in main a = %d, b = %d\n",a,b);  
    return 0;
}  
