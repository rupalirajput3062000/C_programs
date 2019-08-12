/* Factorial program */
#include<stdio.h>
#include<conio.h>
void main()
{
    /*Factorial  
    int n,i,fact=1;
    printf("Enter number whose factorial is to find");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }

    printf("Factorial of %d is %d",n,fact);
    */

   /*sum of given digits 
    int n,r,sum=0,temp;
   printf("Enter the number whose digit sum is to find ");
   scanf("%d",&n);
    temp=n;
   while(n>0)
   {
       r= n%10;
       sum+=r;
       n=n/10;
   }
   printf("Sum of digits of %d is %d",temp,sum);
*/

/*Perfect number */

    int n,i,sum=0;
    printf("Enter number to check if it is perfect or not");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }

    if(sum==n)
    {
        printf("%d is Perfect number",n);
    }
    else
    {
        printf("%d is not Perfect number",n);
    }
    



}