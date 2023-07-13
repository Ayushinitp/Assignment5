//1

// #include <stdio.h>
//  int main(){
//     int  a;
//     printf("Enter a number : ");
//      scanf("%d",&a);
//      if(a>0)
//      printf("%d is positive",a);
//      else
//      printf("%d is non positive",a);
//      return 0;
//  }




//2

// #include <stdio.h>
//  int main(){
//      int a;
//      printf("Enter a number : ");
//      scanf("%d",&a);
//      if(a%5)
//      printf("Not divisible by 5");
//      else
//      printf("Divisible by 5");
//      return 0;
//  }




//3

// #include <stdio.h>
//  int main(){
//      int a;
//      printf("Enter a number : ");
//       scanf("%d",&a);
//       if(a%2)
//       printf("%d is an odd number ",a);
//       else
//       printf("%d is an even number",a);
//       return 0;
//  }




//4

// #include <stdio.h>
//  int main(){
//     int a;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     if(a/2*2==a)
//     printf("%d is an even nummber ",a);
//     else
//     printf("%d is an odd number ",a);
//     return 0;
//      }



//6

// #include <stdio.h>
//  int main(){
//     int a, count=0;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     while(a>0){
//         count++;
//         a=a/10;
//     }
//     if(count==3)
//     printf("It is a 3 digit number");
//     else
//     printf("It is a %d digit number", count);
//     return 0;
//  }



//7

// #include <stdio.h>
//  int main(){
//      int a,b;
//      printf("Enter two numbers : ");
//      scanf("%d%d",&a,&b);
//      if(a>=b)
//      printf("%d is greater",a);
//      else
//       printf("Greater is %d",b);
//       return 0;

//  }




//8

// #include <stdio.h>
//  int main(){
//     int a,b,c,d;
//     printf("Enter a , b, c respectively : ");
//     scanf("%d%d%d",&a,&b,&c);
//     d=b*b-4*a*c;
//     if(d>0)
//     printf("Roots are real and distinct");
//     else if(d==0)
//     printf("Roots are real and equal");
//     else
//     printf("Roots are imaginary");
//     return 0;
//  }



//9    leap year

// #include <stdio.h>
//  int main(){
//     int year;
//     printf("Enter a yera : ");
//     scanf("%d",&year);
//     if(year%100){
//         if(year%4)
//         printf("Not a leap year");
//         else
//         printf("Leap year");
//     }
//     else{
//         if(year%400)
//         printf("Not a leap year");
//         else
//         printf("Leap year");
//     }
//     return 0;
//  }



//9 optimized   using  ternary operator

// #include <stdio.h>
//  int main(){
//     int year;
//     printf("Enter a yera : ");
//     scanf("%d",&year);
//    printf (year%100?(year%4?("Not a leap year"):("Leap year")):(year%400?("Not a leap year") : ("Leap year")));
    
//     return 0;
//  }




//10

// #include <stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers : ");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b){
//         if(a>c)
//         printf("%d is greatest",a);
//         else
//         printf("%d is greatest",c);

//     }
//     else{
//         if(b>c)
//     printf("%d is greater",b);
        
//         else
//         printf("%d is greater",c);
//     }
//     return 0;
// }



//10 optimized using ternary operator

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("output : %d", a>b?(a>c?a:c):(b>c?b:c));
    return 0;
}