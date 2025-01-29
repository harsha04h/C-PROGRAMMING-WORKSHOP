#include <stdio.h>
int main() 
{
    int num,x;
    num=10;
    x=num++ ++ ++;
    //x=((num++)++)++);
    //x=((++num)++num)++num;
    printf("Value of x = %d",x);
    
    return 1;
}
