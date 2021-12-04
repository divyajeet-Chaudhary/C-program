#include <stdio.h>
#include<stdbool.h>

int main()
{
    //sizeof evaluates the size of variable
    int a;
    float b;
    char c;
    double d;

    printf("size of int is:%d\n",sizeof(a));
    printf("size of float is:%d\n",sizeof(b));
    printf("size of char is:%d\n",sizeof(c));
    printf("size of double is:%d",sizeof(d));
    return 0;
}