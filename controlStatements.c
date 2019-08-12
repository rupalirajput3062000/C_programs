#include<stdio.h>
#include<conio.h>
// void main(){
//     int y;
//     printf("Enter the number to check");
//     scanf("%d",&y);
//     if(y%2==0)
//     {
//         printf("%d is an even number",y);

//     }
//     else
//     {
//        printf("%d is an odd number",y);  
//     }
    
// }

// void main()
// {
//     signed char c=120;
//     while(++c)
//     {
//         printf("%c:%d\n",c,c);
//     }
// }

// void main()
// {
//     int i=1;
//     while(i<=10)
//     {
//         printf("i is %d\n",i);
//         i++;
//     }
// }

// nested while loop

// void main()
// {
//     int i=0,j=0;
//     while(++i<=5)
//     {
//         while(++j<=5)
//         {
//             printf("%d\n",j);
//         }
//         printf("%d\n",j);
//     }
// }

// void main()
// {
//     int i=0,j=0;
//     while(i++ <=3)
//     {
//         while(j++ <=3)
//         {

//         }

//     }
//     printf("%d\t %d ",i,j);
// }

// for loop

// void main()
// {
//     int n,i,sum =0;
//     printf("Enter how many numbers you want to add");
//     scanf("%d",&n);
//     for (i=1;i<=n;i++)
//     {
//         sum+=i;
//     }
//     printf("\nSum of numbers is %d",sum);
// }

// program to check perfect number

// void main()
// {
//     int n,i,sum=0;
//     printf("Enter number you want to check to be perfect or not ");
//     scanf("%d",&n);
//     for (i=1;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             sum+=i;
//         }
//     }
//     if (sum == n)
//     {
//         printf("%d is perfect number",n);
//     }
//     else
//     {
//         printf("%d is not a  perfect number",n);
//     }
    
// }

//  printing pattern

// void main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }

// void main()
// {
//     int i,j;
//     for(i=5;i>=1;i--)
//     {
//         for(j=i;j<=5;j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }

// void main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=5;j>=i;j--)
//         {
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }

// void main()
// {
//     int i,j,k;
//     for(i=1;i<=5;i++)
//     {
//         for(j=i;j<5;j++)
//         {
//             printf("   ");
//         }
//         for(k=1;k<=i;k++)
//         {
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }

void main()
{
    int i,j,k,n,c=80;
    printf("Enter number of rows you want to print");
    scanf("%d",&n);
    for(i= 1 ;i<=n ;i++)
    {
    for(j= 1 ;j<=(c/2)-1; j++)
    {
      printf("  "); 
    }
    for(k=i  ;k>=2*i-1 ;k--)
    {
        printf(" * ");
        
    }
    printf("");
    }
}