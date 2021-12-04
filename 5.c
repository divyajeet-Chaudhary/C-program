#include <stdio.h>

int main()
{
    //relational operator
    int a=20;
    int b=10;
    int c=a>b;
    int d=a<b;
    int e=a==b;
    int f=a!=b;
    printf("check if a>b:%d\n",c);
    printf("check if a<b:%d\n",d);
    printf("check if a=b:%d\n",e);
    printf("check if a!=b:%d",f);
    return 0;
}