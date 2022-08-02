/***
16. 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
What is the sum of the digits of the number 2
1000?
Ans: 1366
******/
#include<stdio.h>

#define MAXDIGITS 500
#define EXPONENT 1000

int main()
{
    int largeNum[MAXDIGITS] = {0};
    int i, j, temp, carry, sum;
    
    largeNum[0] = 1;
    
    for (i = 0; i < EXPONENT; i++) {
        carry = 0;
        
        for(j=0; j < MAXDIGITS; j++) {
            temp = 2 * largeNum[j] + carry;
            carry = 0;
            
            if (temp > 9){
                largeNum[j] = temp % 10;
                carry = temp/10;
            }else
            largeNum[j] = temp;
            
        }
    }
    sum = 0;
    for (i = MAXDIGITS - 1;i >= 0; i--){
        printf("%d", largeNum[i]);
        sum += largeNum[i];
    }
    printf("*\n%d\n",sum);
    
    return 0;
}
