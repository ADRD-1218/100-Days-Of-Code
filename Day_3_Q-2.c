#include<stdio.h>
int main() {
    int a = 10 ,b = 5 ,c;
    printf("Before Swapping a = %d\nb = %d\n" ,a ,b);
    c = b;
    b = a;
    a = c;
    printf("After Swapping a = %d\nb = %d\n" ,a ,b);
    
    return 0;
}
