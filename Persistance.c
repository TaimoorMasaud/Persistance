//We assume the number has ten digits or less
//Persistence means how many steps or iterations it took to get a single digit number
#include<stdio.h>
int main()
{
    int n,a,b,c,i,product=1,j=1,number_of_digits=0,persistence=0;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    a=n;
    c=n;
    while(a>=10)
    {
        for (i=1000000000;i>=1;i=i/10)
        {
            b=c/i;
            c=c%i;
            if (b>0)
            {
                number_of_digits=number_of_digits+1;
            }
        }
        for (i=1;i<number_of_digits;i++)
        {
            j=j*10;
        }

        for (;j>=1;j=j/10)
        {
            b=a/j;
            a=a%j;
            product=product*b;
        }
        a=product;
        c=product;
        product=1;
        number_of_digits=0;
        j=1;
        persistence=persistence+1;
    }

    printf("\nPersistence is : %d ",persistence);
}
