#include <stdio.h>
#include<stdbool.h>

int main()
{
    //logical operator
    bool a=true;
    bool b=false;
    int c=a&&b;
    int d=a||b;

    printf("%d\n",c);
    printf("%d",d);
    return 0;
}