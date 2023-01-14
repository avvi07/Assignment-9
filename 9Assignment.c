
// 1. Write a program which takes the month number as an input and display number of days in that month.

// #include<stdio.h>
// int main()
// {
//     int x;

//     while (1)
//     {    
//         printf("Enter a number: ");
//         scanf("%d",&x);
//         switch (x)
//         {
//         case 1:
//             printf("January has 31 days.\n");
//             break;
//         case 2:
//             printf("February has 28 or 29 days.\n");
//             break;    
//         case 3:
//             printf("March has 31 days.\n");
//             break;
//         case 4:
//             printf("April has 30 days.\n");
//             break;
//         case 5:
//             printf("May has 31 days.\n");
//             break;
//         case 6:
//             printf("June has 30 days.\n");
//             break;
//         case 7:
//             printf("July has 31 days.\n");
//             break;
//         case 8:
//             printf("August has 30 days.\n");
//             break;
//         case 9:
//             printf("September has 31 days.\n");
//             break;
//         case 10:
//             printf("October has 30 days.\n");
//             break;
//         case 11:
//             printf("November has 31 days.\n");
//             break;
//         case 12:
//             printf("December has 30 days.\n");
//             break;

//         default:
//             printf("Invalid number\n");
//             break;
//         }
//         if (x>12)
//         {
//             break;
//         }
//     }
//     return 0;
// }

// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

// #include<stdio.h>
// int main()
// {
//     int x,a,b;

//     while (1)
//     {
//         printf("\n1. Addition.");
//         printf("\n2. Subtraction.");
//         printf("\n3. Multiplication.");
//         printf("\n4. Division.");
//         printf("\n5. Exit.");
//         printf("\nEnter a number: ");
//         scanf("%d",&x);
//         switch (x)
//         {
//         case 1:
//             printf("\nEnter two numbers:");
//             scanf("%d %d",&a,&b);
//             printf("\nSum is %d",a+b);
//             break;
//         case 2:
//             printf("\nEnter two numbers:");
//             scanf("%d %d",&a,&b);
//             printf("\nDifference is %d",a-b);
//             break;
//         case 3:
//             printf("\nEnter two numbers:");
//             scanf("%d %d",&a,&b);
//             printf("\nProduct is %d",a*b);
//             break;
//         case 4:
//             printf("\nEnter two numbers:");
//             scanf("%d %d",&a,&b);
//             printf("\nQuotient is %d",a+b);
//             break;
//         case 5:
//             break;
//         }
//         if (x>=5)
//         {
//             break;
//         }
//     }
    
//     return 0;
// }

// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day

// #include<stdio.h>
// int main()
// {
//     int a,b;

//     while (1)
//     {
//       printf("\nEnter the number of day:");
//             scanf("%d",&a); 
//             switch (a)
//             {
//                 case 1:
//                     printf("It is a Monday.");
//                     break;
//                 case 2:
//                     printf("It is a Tuesday.");
//                     break;
//                 case 3:
//                     printf("It is a Wednesday.");
//                     break;
//                 case 4:
//                     printf("It is a Thursday.");
//                     break;
//                 case 5:
//                     printf("It is a Friday.");
//                     break;
//                 case 6:
//                     printf("It is a Saturday.");
//                     break;
//                 case 7:
//                     printf("It is a Sunday.");
//                     break;
//                 default:
//                     break;
//             }
      
//         if (a>7)
//         {
//             break;
//         }

//     }
    
//     return 0;
// }

// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit

// #include<stdio.h>
// int main()
// {
//     int x,a,b,c;

//     while (1)
//     {
        
    
//     printf("\n1. Check whether a given set of three numbers are lengths of an isosceles triangle or not");
//     printf("\n2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
//     printf("\n3. Check whether a given set of three numbers are equilateral triangle");
//     printf("\n4. Exit");
//     printf("\nchoose any one:");
//     scanf("%d",&x);

//     switch (x)
//     {    
//         case 1:
//             printf("\nEnter the lenghts of a triangle:");
//             scanf("%d %d %d",&a,&b,&c);

//             if (a == b)
//             {
//                 printf("It is the lengths of an isosceles triangle.");
//             }
//             else if (b == c)
//             {
//                 printf("It is the lengths of an isosceles triangle.");
//             }
//             else if (c == a)
//             {
//                 printf("It is the lengths of an isosceles triangle.");
//             }
            
//             else
//             {
//                 printf("It is not the lengths of an isosceles triangle.");
//             }
//             break;    
        
//         case 2:
//             printf("\nEnter the lenghts of a triangle:");
//             scanf("%d %d %d",&a,&b,&c);

//             if ((a*a)==(b*b)+(c*c))
//             {
//                 printf("It is the lenghts of a right angle triangle.");
//             }
//             else if ((b*b)==(a*a)+(c*c))
//             {
//                 printf("It is the lenghts of a right angle triangle.");
//             }
//             else if ((c*c)==(a*a)+(b*b))
//             {
//                 printf("It is the lenghts of a right angle triangle.");
//             }
//             else
//             {
//                 printf("It is not the lenghts of a right angle triangle.");
//             }
//             break;

//         case 3:
//             printf("\nEnter the lenghts of a triangle:");
//             scanf("%d %d %d",&a,&b,&c);

//             if (a==b && b==c && c==a)
//             {
//                 printf("It is the lenghts of a equilateral triangle.");
//             }
//             else
//             {
//                 printf("It is not the lenghts of a equilateral triangle.");
//             }
//             break;

//         default:
//             break;
        
//     }
//     if (x>=4)
//     {
//         break;
//     }
    
//     }
//     return 0;
// }

// 5. Convert the following if-else-if construct into switch case:
// if(var == 1)
// System.out.println("good");
// else if(var == 2)
// System.out.println("better");
// else if(var == 3)
// System.out.println("best");
// else
// System.out.println("invalid");

// #include<stdio.h>
// int main()
// {
//     int var;
//     printf("Enter the number:");
//     scanf("%d",&var);
    
//     switch (var)
//     {
//     case 1:
//         printf("good");
//         break;
    
//     case 2:
//         printf("better");
//         break;

//     case 3:
//         printf("best");
//         break;

//     default:
//         printf("invalid");
//         break;

//     }
//     return 0;
// }

// 6. Program to check whether a year is a leap year or not. Using switch statement

// #include<stdio.h>
// int main()
// {
//     int year ;
//     printf("Enter the year: ");
//     scanf("%d",&year);

//     switch (year%400 == 0)
//     {
//     case 0:
//         switch (year%100 == 0)
//         {
//             case 0:
//                 printf("It is a leap year.");
//                 break;
            
//             case 1:
//                 printf("It is not a leap year.");
//                 break;

//         }
//         break;
    
//     case 1:
//         switch (year%4 == 0)
//         {
//             case 1:
//                 printf("It is a leap year.");
//                 break;
            
//             case 0:
//                 printf("It is not a leap year.");
//                 break;

//         }
//         break;
//     }
//     return 0;
// }

// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

// #include<stdio.h>
// int main()
// {
//     float Units,Billwot,Billwt;
//     printf("Enter the Electricity Unit Charges = ");
//     scanf("%f",&Units);

//     switch (Units>50)
//     {
//     case 0:
//         Billwot = Units*0.5;
//         break;
    
//     case 1:
//         switch (Units>150)
//         {
//         case 0:
//             Billwot = 25+(Units-50)*0.75;
//             break;
        
//         case 1:
//             switch (Units>250)
//             {
//             case 0:
//                 Billwot = 25+75+(Units-150)*1.20;
//                 break;
            
//             case 1:
//                 Billwot = 25+75+120+(Units-250)*1.50;
//                 break;
//             }
//             break;
//         }
//         break;
//     }
//     Billwt = Billwot+(Billwot*20/100);
//     printf("The Bill is %.2f Rs.",Billwt);
//     return 0;
// }

// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.

// #include<stdio.h>
// int main()
// {
//     int Number,Chnaged;
//     printf("Enter the number: ");
//     scanf("%d",&Number);

//     switch (Number>=0)
//     {
//     case 0:
//         Chnaged = (-1)*Number;
//         break;
    
//     case 1:
//         Chnaged = (-1)*Number;
//         break;
//     }
//     printf("The changed number is = %d",Chnaged);
//     return 0;
// }

// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.

// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("Enter a even number: ");
//     scanf("%d",&x);

//     switch (x%2==0)
//     {
//     case 0:
//         printf("The given number %d is already odd.",x);
//         break;
    
//     case 1:
//         printf("The given number converted into odd is %d.",x+1);
//         break;
//     }
//     return 0;
// }

// 10. C program to find all roots of a quadratic equation using switch case

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     double x,y,a,b,c,QE,D,R;
//     printf("Enter the vlaues of Quadratic equation: ");
//     scanf("%2lf %2lf %2lf",&a,&b,&c);

//     D = (b*b)-(4*a*c); 

//     switch (D>0)
//     {
//     case 1:
//         x = (-b + sqrt(D))/2*a;
//         y = (-b - sqrt(D))/2*a;
//         printf("The Quadratic equation has two real and different roots = ");
//         printf("%.2lf and %.2lf",x,y);
//         break;
    
//     case 0:
//         switch (D==0)
//         {
//         case 1:
//             x = -b/2*a;
//             printf("The Quadratic equation has only one real root = ");
//             printf("%.2lf",x);
//             break;
        
//         case 0:
//             x = (-b + sqrt(D))/2*a;
//             y = (-b - sqrt(D))/2*a;
//             printf("The Quadratic equation has two complex roots = ");
//             printf("%.2lf and %.2lf",x,y);
//             break;
//         }
//         break;
//     }
//     return 0;
// }