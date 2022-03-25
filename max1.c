#include<stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1 > num2 && num1 > num3)
    {
        printf("Number 1 is max : %d\n",num1);

    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("Number 2 is max : %d\n",num2);

    }
    else{

        printf("Number 3 is max : %d\n",num3);
    }
    return 0;
}