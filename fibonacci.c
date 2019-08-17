// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int n,i,a=0,b=1,c;
//     printf("Enter no. upto how much value you want to find fibonacci series");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         printf("%d\t",a);
//         c=a+b;
//         a=b;
//         b=c;
//     }
// }


// palindrome program

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int n,i,r,sum=0,temp;
//     printf("Enter no. to check is the number is Palindrome");
//     scanf("%d",&n);
//     temp=n;
//     while(n>0)
//     {
//         r = n%10;
//         sum=sum*10+r;
//         n=n/10;
//     }
//     if (temp==sum)
//         printf("%d is a palindrome",temp);
//     else
//         printf("%d is not palindrome",temp);
    
// }


// prime numbers

#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,r,count=0;
    printf("Enter no. to check is the number is Prime");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        count++;
        }
    }
    if (count==2)
        printf("%d is a Prime",n);
    else
        printf("%d is not Prime",n);
    
}