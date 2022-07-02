#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,e;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    c=a/b;
    d=b/a;
    if (a==0&&b==0)
    {
        printf("the no of operations is 0");
    }
    if (a==0||b==0)
    {
        printf ("the no of operations is -1");
    }
    if (a%2!=0 && b%2!=0)
    {
        printf("the no of operations is -1");
}
    if (a=b)
    {
        printf("the no of operations is %d",a);
    }
    if (a>b)
    {

e= 0.5*c + a;
            printf("the no of operations is %d",e);
        }


 if  (b>a)
    {


            printf("the no of operations is %d",d/2+b);
        }


}