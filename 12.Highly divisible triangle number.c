#include<stdio.h>
#include<conio.h>
#include<math.h>

int no_of_divisors(long);
int main()
{
                int i,counter;
                long tri_no;
               
                for(i=1;;i++)
                {
                                tri_no=(i+1)*i/2;
                                if(no_of_divisors(tri_no)>500)
                                {
                                                printf("\nAnswer = %ld\n",tri_no,i);
                                                break;
                                }
                               
                }
               
}

int no_of_divisors(long num)
{
                long i;
                double s;

                int counter=0;
               
                for(i=1;i<sqrt((double)num);i++)
                                if(num%i==0)
                                                counter++;

                counter*=2;
                s=sqrt((double)num);
                if(s*s==num)
                                counter++;
                return counter;
}
