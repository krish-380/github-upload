#include<stdio.h>

int main()
{
    int  num1, num2;

    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    if(num1 > num2)
    {
        printf("Number 1 is maxm %d/n",num1);
    }
    else
    {
        printf("Number2  is max %d\n",num2);
    }
        return 0;
}