#include<stdio.h>

int main()
{
    int num,q,count=0, cnt, rem, result = 0, mul = 1;
    printf("enter the num : ");
    scanf("%d", &num);

    q = num;
    while(q != 0)
    {
        count++;
        q = q/ 10;
    }

    q = num;
    cnt = count;

    while(q != 0)
    {
        rem = q % 10;
        while(cnt != 0)
        {
            mul = mul * rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        mul = 1;
        q = q/10;
    }

    if(result == num)
    {
        printf("the %d is Armstrong Number", num);
    }
    else
    {
        printf("the %d is not Armstrong Number ", num);
    }

    return 0 ;
}

