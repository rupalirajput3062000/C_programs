// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int s;
//     char c;
//     short v;
//     printf("Size of s is : %d byte (s)",sizeof(s));
//     printf("Size of s is : %d byte (s)",sizeof(c));
//     printf("Size of s is : %d byte (s)",sizeof(v));
//     printf("Size of s is : %d byte (s)",sizeof(float));
// }

// #include<stdio.h>
// #include<limits.h>
// void main(){
//     printf("Signed short min value : %d\n",SHRT_MIN);
//      printf("Signed short max value : %d\n",SHRT_MAX);
//       printf("Unsigned short max value : %d\n",USHRT_MAX);
    
// }
// #include<stdio.h>
// #include<limits.h>
// void main(){
//     printf("Signed int min value : %d\n",INT_MIN);
//      printf("Signed int max value : %d\n",INT_MAX);
//       printf("Unsigned int max value : %u\n",UINT_MAX);
    
// }
// for character replace INT by CHAR and for long by LONG

// #include<stdio.h>
// void main(){
//     int x=10,y;
//     int a=10,b;
//         y= ++x;
//         b=a++;
//         printf("x is %d and y is %d\n",x,y);
//         printf("a is %d and b is %d",a,b);
// }

#include<stdio.h>
void main(){
    int a=2,b=3;
    printf("%d %d\n",a,b);
    b=a++ + b--;
    printf("%d %d\n",a,b);
    a=a-- + ++b;
    printf("%d %d\n",a,b);
    b=++a + --b;
    printf("%d %d\n",a,b);
}