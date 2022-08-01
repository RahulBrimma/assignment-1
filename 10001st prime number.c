/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th
prime is 13.
What is the 10,001st prime number?
Ans: 104743*/
#include<stdio.h>
int main()
{
    long int i,n,s;
    s=1;
    for(n=3;s!=10001;n=n+2)
    {
        for(i=3;i<n;i=i+2)
        {
            if(n==0)
            break;
        }
        if(i==n)
        s++;
    }
    printf("10001st Prime number:%li",i);
    return 0;
}
