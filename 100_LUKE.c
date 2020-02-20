# include <stdio.h>
#include <time.h> 
# include <string.h>
# include <stdbool.h>
# include <math.h>
# include <stdlib.h>
#define LN printf("\n");
void ASCIIlogo();
void delay(int);
int simpleinterest();
bool palindrome ( unsigned long long int i );
unsigned long long int reverse ( unsigned long long int i );
bool lychrel ( unsigned long long int i);
int celcius();
int swap();
int area();
int calculation();
int ugly_number_check();
int getSum(int n);
bool checkAbundant(int n);
int Abundant_number();
bool checkDeficient(int n);
int Deficient_number();
bool chkkaprekar(int n);
int Kaprekar_number();
int Lychrel_number();
bool lychrel( unsigned long long int i);
unsigned long long int reverse( unsigned long long int i);
bool palindrome ( unsigned long long int i);
int first_15_narcissistic() ;
int first_10_lucus() ;
unsigned long int cataLan(unsigned int i);
int first_10_catalan();
int SumOfSquNum(int givno);
bool checkHappy(int chkhn);
int is_Happy_number();
int DigiCount(int n);
bool chkDisarum(int n);
int is_Disarium_Number();
bool chkHarshad(int n);
int is_Harshad_Number();
int is_Pronic_Number();
bool chkAutomor(int num1);
int is_Authomorphic();
int is_Duck_Number();
int ProDivSum(int n);
bool chkAmicable(int a,int b);
int are_Amicable_pairs();
void chkPrime(long int n);
void AllCombination(long int a);
int is_circular_prime();
int first_10_Fermat();
int can_be_expressed_as_sum_of_2_cubes();
int is_Mersenne();
int first_20_numbers_of_Pell_series();
int lenCount(int nm);
int is_Keith();
int Keith_or_not_with_explanation();
int roots();
int bill();
int OTHER1();
int OTHER2();
int OTHER3();
int OTHER4();
int OTHER5();
long factorial(int);
long find_ncr(int, int);
long find_npr(int, int);
int OTHER6();
int OTHER7();
int OTHER8();
int OTHER9();
int OTHER10();
int OTHER11();
int OTHER12();
int OTHER13();
int OTHER14();
void merge(int [], int, int [], int, int []);
int OTHER15();
int OTHER16();
int OTHER17();
int OTHER18();
int OTHER19();
int OTHER20();
int OTHER21();
int OTHER22();
void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void INTEGER();
void PATTERN();
void OTHER();
void reverseSentence();
int S1();
int S2();
int S3();
int S4();
int S5();
int S6();
int S7();
int S8();
void STRING();

int main(){
    ASCIIlogo();
    int choise=1;
    while(choise){
        printf("........................................................................................................................\n");
        printf("...............................                                                         ................................\n");
        printf("...............................   INPUT 0 to EXIT ENTER ANY OTHER NUMBER TO CONTINUE    ................................\n");
        printf("...............................                                                         ................................\n");
        printf("........................................................................................................................\n");
        scanf("%d",&choise);
        int choise2=1;
        while (choise2){
            printf("\e[1;1H\e[2J");;
            printf("CHOOSE from following category number");LN
            printf("0 ==> EXIT\n1 ==> INTEGER \n2 ==> PATTERN\n3 ==> STRING\n4 ==> OTHER");LN
            scanf("%d",&choise2);
            switch(choise2){
                case 0:
                    break;
                case 1:{
                    INTEGER();
                    break;
                }
                case 2:{
                    PATTERN();
                    break;
                }
                case 3:{
                    STRING();
                    break;
                }
                case 4:{
                  OTHER();
                  break;
                }
                default:
                    printf("ENTER SOMETING FROM THE LIST\n");
                    break;
            }
    
        }
        
    }
    return 1;
}

//DELAY function to create fancy effect in ASCII art
void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) 
        ; 
} 

//CONTAINS ASCII LOGO for fun
void ASCIIlogo(){
  printf("                                                ......                                              \n");
  printf("                                              'lxo:'..,:.                                           \n");
  printf("                                           :OX0:    .dx.                                          \n");
  printf("                                          ;0NNNxc,..c0k'                                          \n");
  printf("                                         .kWWWWWNX0Oko'                                           \n");delay(1);
  printf("                                         ,KMWWWWWKl'.                                             \n");
  printf("                                         .kMMMM0o,                                                \n");
  printf("                                          cNMMNc   'ol.                                           \n");
  printf("                                           :OWWl.  .cc.                                           \n");
  printf("                                            .;ddl'                                                \n");
  printf("                                                ..                                                \n");
  printf("                                                                                                  \n");
  printf("                                                                                                  \n");delay(1);
  printf("                                                                    ....                          \n");
  printf("                                                          ...':oodx0KXXK0ko,                      \n");
  printf("                          .;ldddl'                    .,cxKXXNWMMMMMMMMMMMMXo.                    \n");
  printf("                      .;lxKWMMMMMX:              .;lxOKWMMMMMMMWNNXK000KNMMMWk.                   \n");
  printf("                     ;0WMMMMMMMMMMXl.          'o0WMMMMMMMWKxol:,.... ..,xNMMWo                   \n");
  printf("                    cXMMMMMMMMMMMMMWo.         ;OXMMMMMWXd;.             '0MMMx.                  \n");
  printf("                  .oNMMMMMMMMN0kxkKWNd.        .:kMMMWKo.                .OMMMd                   \n");
  printf("                 .xWMMMMMN0d:'.   .oXWO,        .dMMM0'                  :XMMX:                   \n");delay(1);
  printf("                'kWMMMWXx;.         ,kNKc.       lWMMx.                 '0MMWx.                   \n");
  printf("              ,xXMMMNOc.             .c0Nk,      lWMMx.                'OWMM0,                    \n");
  printf("             '0MMMNx;                  .oXNd.   .lWMWo              .,l0WMMK;                     \n");
  printf("             :NMWO;                      :KWKc..,xWMNc            .o0WMMMM0;                      \n");
  printf("            'OMWx.                        ,0MWK0KNMMN:          ,dXWMMMMXx'                       \n");
  printf("            oWMO.                          ,KMMMMMMMX:       .;kNMMMMW0o'                         \n");
  printf("           ,KMMd                            cNMMMMMMNc    .:d0WMMMMWKo.                           \n");delay(1);
  printf("           oWMMx.                            cKWMMMMM0:;lONWMMMMN0d;.                             \n");
  printf("           ;0WMx.                             .dXNMMMMWWMMMWXOdl,.                                \n");
  printf("            .:o,                               ,kKMMMMMMWOl,.                                     \n");
  printf("                                               ,xKMMMMMWd.                                        \n");
  printf("                                               'o0MMMMMMO'                                        \n");
  printf("                                               .:kMMMWWMM0;                                       \n");delay(1);
  printf("                                               .;kMM0clKWMNd.                                     \n");
  printf("                                               .;kMMd  ,OWMW0c.                                   \n");
  printf("                                               .:kMMd   .kWMMWk'                                  \n");
  printf("                                               .cOMMx.   .kWMMMKl.                                \n");
  printf("                                               'l0MMk.    .xNMMMWKl.                              \n");
  printf("                                               'd0MMx.     .cKMMMMWO,                             \n");
  printf("                                               'o0MMk.       ;KWMMNk,                             \n");delay(1);
  printf("                                               'l0MMO.        ,ooc,.                              \n");
  printf("                                               'o0MMO.                                            \n");
  printf("                                               'o0MMk.                                            \n");
  printf("                                               .;kMMd                                             \n");
  printf("                                               .,xMMd                                             \n");
  printf("                                               .cOMMx.                                            \n");
  printf("                                               .lOMMO.                                            \n");delay(1);
  printf("                                               'o0MM0'                                            \n");
  printf("                                               ,xKMM0'                                            \n");
  printf("                                               lXNMMX;                                            \n");
  printf("                                              .xWWMMWo                                            \n");
  printf("                                               oXNMMMk.                                           \n");
  printf("                                               .,l0Xk,                                            \n");delay(1);
  printf("                                                  .'.                                             \n");
  printf("                                                                                                  \n");
  printf("                                                                                                  \n");
  printf("                                                                                                  \n");delay(1);
  printf("                                            #####  #   # \n");
  printf("                                            #    #  # #  \n");
  printf("                                            #####    #   \n");
  printf("                                            #    #   #   \n");
  printf("                                            #    #   #   \n");
  printf("                                            #####    #   \n");
  printf("             \n");delay(1);
  printf("                            #          #     #    #    #    ####### \n");
  printf("                            #          #     #    #   #     #       \n");
  printf("                            #          #     #    #  #      #       \n");delay(1);
  printf("                            #          #     #    ###       #####   \n");
  printf("                            #          #     #    #  #      #       \n");
  printf("                            #          #     #    #   #     #       \n");
  printf("                            #######     #####     #    #    ####### \n");
}

void INTEGER(){
    int choise5=1;
    while (choise5){
        LN
        printf("****CHOOSE from following category number****\n\n");LN
        printf("---------------- 0 ---------------- \nEXIT");
        printf("---------------- 2 ---------------- \ncalculate simple intrest\n");
        printf("---------------- 3 ---------------- \nconvert farenhit to celcius\n");
        printf("---------------- 4 ---------------- \nswap two numbers\n");
        printf("---------------- 5 ---------------- \ncalculate area of circle or rectangle\n");
        printf("---------------- 6 ---------------- \nbasic calculation\n");
        printf("---------------- 7 ---------------- \ncheck whether a given number is an ugly number or not\n");
        printf("---------------- 8 ---------------- \ncheck whether a given number is Abundant or not\n");
        printf("---------------- 9 ---------------- \ncheck whether a given number is Deficient or not\n");
        printf("---------------- 10 ---------------- \ncheck whether a given number is a Kaprekar number or not\n");
        printf("---------------- 11 ---------------- \ncheck whether a number is Lychrel number or not\n");
        printf("---------------- 12 ---------------- \ngenerate and show the first 15 narcissistic decimal numbers\n");
        printf("---------------- 13 ---------------- \ndisplay the first 10 lucus numbers\n");
        printf("---------------- 14 ---------------- \ndisplay the first 10 catalan numbers\n");
        printf("---------------- 15 ---------------- \ncheck a number is a Happy or not\n");
        printf("---------------- 16 ---------------- \ncheck whether a number is Disarium or not\n");
        printf("---------------- 17 ---------------- \ncheck if a number is Harshad Number or not\n");
        printf("---------------- 18 ---------------- \ncheck whether a number is a Pronic Number or Heteromecic Number or not\n");
        printf("---------------- 19 ---------------- \ncheck if a number is Authomorphic or not\n");
        printf("---------------- 20 ---------------- \ncheck whether a number is a Duck Number or not\n");
        printf("---------------- 21 ---------------- \ncheck two numbers are Amicable numbers or not\n");
        printf("---------------- 22 ---------------- \ncheck if a given number is circular prime or not. \n");
        printf("---------------- 23 ---------------- \ndisplay first 10 Fermat numbers \n");
        printf("---------------- 24 ---------------- \nto find any number between 1 and n that can be expressed as the sum of two cubes in two (or more) different ways. \n");
        printf("---------------- 25 ---------------- \nCheck if a number is Mersenne number or not \n");
        printf("---------------- 26 ----------------  \nprint the first 20 numbers of the Pell series. \n");
        printf("---------------- 27 ----------------  \ncheck if a number is Keith or not. \n");
        printf("---------------- 28 ----------------  \ncheck if a number is Keith or not(with explanation). \n");
        printf("---------------- 29 ----------------  \nroot of equation aX^2 + bx + c\n");
        printf("---------------- 30 ----------------  \ncalculate bill\n");
        printf(" ---------------- 0  ----------------  \nEXIT\n");
        scanf("%d",&choise5);
        delay(1);
        switch(choise5){
            case 1:
            break;
            case 2:{
                simpleinterest();
                break;
            }
            case 3:{
                celcius();
                break;
            }
            case 4:{
                swap();
                break;
            }
            case 5:{
                area();
                break;
            }
            case 6:{
                calculation();
                break;
            }
            case 7:{
                ugly_number_check();
                break;
            }
            case 8:{
                Abundant_number();
                break;
            }
            case 9:{
                Deficient_number();
                break;
            }
            case 10:{
                Kaprekar_number();
                break;
            }
            case 11:{
                Lychrel_number();
                break;
            }
            case 12:{
                first_15_narcissistic();
                break;
            }
            case 13:{
                first_10_lucus();
                break;
            }
            case 14:{
                first_10_catalan();
                break;
            }
            case 15:{
                is_Happy_number();
                break;
            }
            case 16:{
                is_Disarium_Number();
                break;
            }
            case 17:{
                is_Harshad_Number();
                break;
            }
            case 18:{
                is_Pronic_Number();
                break;
            }
            case 19:{
                is_Authomorphic();
                break;
            }
            case 20:{
                is_Duck_Number();
                break;
            }
            case 21:{
                are_Amicable_pairs();
                break;
            }
            case 22:{
                is_circular_prime();
                break;
            }
            case 23:{
                first_10_Fermat();
                break;
            }
            case 24:{
                can_be_expressed_as_sum_of_2_cubes();
                break;
            }
            case 25:{
                is_Mersenne();
                break;
            }
            case 26:{
                first_20_numbers_of_Pell_series();
                break;
            }
            case 27:{
                is_Keith();
                break;
            }
            case 28:{
                Keith_or_not_with_explanation();
                break;
            }
            case 29:{
                roots();
                break;
            }
            case 30:{
                bill();
                break;
            }
            default:
                printf("select from the list !\n");
                break;
        }
        delay(1);
        printf("0 - EXIT\n");LN
    }

}
void OTHER(){
    int choise3=1;
    while (choise3){
        LN
        printf("****CHOOSE from following category number****\n\n");LN
        printf(" ---------------- 0 ----------------- \nEXIT");
        printf(" ---------------- 2 ----------------- \nC program to check leap year\n");
        printf(" ---------------- 3 ----------------- \nSum of digits of a number in C\n");
        printf(" ---------------- 4 ----------------- \nFactorial in C using a for loop\n");
        printf(" ---------------- 5 ----------------- \nHCF LCM\n");
        printf(" ---------------- 6 ----------------- \nprogram to convert decimal to binary\n");
        printf(" ---------------- 7 -----------------  \nprogram to find nPr and nCr using a function\n");
        printf(" ---------------- 8 -----------------  \nFibonacci series program in C\n");
        printf(" ---------------- 9 -----------------  \nprogram to find maximum element in an array\n");
        printf(" ---------------- 10 ----------------  \nprogram to find minimum element in array\n");
        printf(" ---------------- 11 ----------------  \nLinear search in C\n");
        printf(" ---------------- 12 ----------------  \nBinary search in C\n");
        printf(" ---------------- 13 ----------------  \nprogram to reverse an array\n");
        printf(" ---------------- 14 ----------------  \nprogram to insert an element in an array\n");
        printf(" ---------------- 15 ----------------  \nprogram to delete an element from an array\n");
        printf(" ---------------- 16 ----------------  \nprogram to merge two arrays\n");
        printf(" ---------------- 17 ----------------  \nBubble sort program\n");
        printf(" ---------------- 18 ----------------  \nInsertion sort\n");
        printf(" ---------------- 19 ----------------  \nSelection sort\n");
        printf(" ---------------- 20 ----------------  \nMatrix addition\n");
        printf(" ---------------- 21 ----------------  \nSubtract matrices\n");
        printf(" ---------------- 22 ----------------  \nTranspose of a matrix\n");
        printf(" ---------------- 23 ----------------  \nMatrix multiplication");
        printf(" ---------------- 0  ---------------- \nEXIT\n");LN
        scanf("%d",&choise3);
        delay(1);
        switch(choise3){
            case 2:{
                OTHER1();
                break;
            }
            case 3:{
                OTHER2();
                break;
            }
            case 4:{
                OTHER3();
                break;
            }
            case 5:{
                OTHER4();
                break;
            }
            case 6:{
                OTHER5();
                break;
            }
            case 7:{
                OTHER6();
                break;
            }
            case 8:{
                OTHER7();
                break;
            }
            case 9:{
                OTHER8();
                break;
            }
            case 10:{
                OTHER9();
                break;
            }
            case 11:{
                OTHER10();
                break;
            }
            case 12:{
                OTHER11();
                break;
            }
            case 13:{
                OTHER12();
                break;
            }
            case 14:{
                OTHER13();
                break;
            }
            case 15:{
                OTHER14();
                break;
            }
            case 16:{
                OTHER15();
                break;
            }
            case 17:{
                OTHER16();
                break;
            }
            case 18:{
                OTHER17();
                break;
            }
            case 19:
            {OTHER18();
                break;
            }
            case 20:{
                OTHER19();
                break;
            }

            case 21:{
                OTHER20();
                break;
            }
            case 22:{
                OTHER21();
                break;
            }
            case 23:{
                OTHER22();
                break;
            }
            default:
                printf("select from the list !");LN
                break;
        }
        delay(1);
        printf("0 - EXIT\n");LN
    }
}
void PATTERN(){
    int choise4=1;
    while (choise4){
        LN
        printf("****CHOOSE from following category number****\n\n");LN
        printf("0 \t==> EXIT");
        printf("---------------- 2 ----------------  \n    *\n   ***\n  *****\n *******\n*********\n");
        printf("---------------- 3 ----------------  \n*\n**\n***\n****\n*****\n");
        printf("---------------- 4 ----------------  \n   *\n  *A*\n *A*A*\n*A*A*A*\n");
        printf("---------------- 5 ----------------  \n   1\n   232\n  34543\n 4567654\n567898765\n");
        printf("---------------- 6 ----------------  \n1  2  4  7\n3  5  8 11\n6  9 12 14\n10 13 15 16\n");
        printf("---------------- 7 ----------------  \n  *\n ***\n*****\n ***\n  *\n");
        printf("---------------- 8 ----------------  \nFLOYDS TRIANGLE\n1\n2 3\n4 5 6\n7 8 9 10\n\n");
        printf("---------------- 0 ----------------  ==> EXIT\n");LN
        scanf("%d",&choise4);
        delay(1);
        switch(choise4){
            case 2:{
                pattern1();
                break;
            }
            case 3:{
                pattern2();
                break;
            }
            case 4:{
                pattern3();

                break;
            }
            case 5:{
                pattern4();

                break;
            }
            case 6:{
                pattern5();
                break;
            }
            case 7:{
                pattern6();
                break;
            }
            case 8:{
                pattern7();
                break;
            }
            default:
                printf("select from the list !");LN
                break;
        }
        delay(1);
    }
}
void STRING(){
    int choise5=1;
    while (choise5){
        LN
        printf("****CHOOSE from following category number****\n\n");
        printf("0 ==> EXIT");
        printf(" ---------------- 2 ----------------  \nLength of a String\n");
        printf(" ---------------- 3 ----------------  \nConcatenate Two Strings\n");
        printf(" ---------------- 4 ----------------  \nCopy String Without Using strcpy()\n");
        printf(" ---------------- 5 ----------------  \nRemove all Characters in a String Except Alphabets\n");
        printf(" ---------------- 6 ----------------  \nSort Elements in Lexicographical Order (Dictionary Order)\n");
        printf(" ---------------- 7 ----------------  \nFind the Frequency of a Character\n");
        printf(" ---------------- 8 ----------------  \nProgram to count vowels, consonants etc.\n");
        printf(" ---------------- 9 ----------------  \nReverse a Sentence Using Recursion\n");
        scanf("%d",&choise5);
        delay(1);
        switch(choise5){
            case 2:{
                S4();
                break;
            }
            case 3:{
                S5();
                break;
            }
            case 4:{
                S6();
                break;
            }
            case 5:{
                S7();
                break;
            }
            case 6:{
                S8();
                break;
            }
            case 7:{
                S1();
                break;
            }
            case 8:{
                S2();
                break;
            }
            case 9:{
                S3();
                break;
            }
            default:
                printf("select from the list !\n");
                break;
        }
        delay(1);
    }
}


//OTHER
// C program to check leap year
int OTHER1()
{
  int year;
 
  printf("Enter a year to check if it is a leap year\n");
  scanf("%d", &year);
 
  if (year%400 == 0) // Exactly divisible by 400 e.g. 1600, 2000
    printf("%d is a leap year.\n", year);
  else if (year%100 == 0) // Exactly divisible by 100 and not by 400 e.g. 1900, 2100
    printf("%d isn't a leap year.\n", year);
  else if (year%4 == 0) // Exactly divisible by 4 and neither by 100 nor 400 e.g. 2020
    printf("%d is a leap year.\n", year);
  else // Not divisible by 4 or 100 or 400 e.g. 2017, 2018, 2019
    printf("%d isn't a leap year.\n", year);  
   LN
  return 0;
}

// Sum of digits of a number in C
int OTHER2()
{
   int n, t, sum = 0, remainder;

   printf("Enter an integer\n");
   scanf("%d", &n);

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }

   printf("Sum of digits of %d = %d\n", n, sum);

   return 0;
}

//Factorial in C using a for loop
int OTHER3()
{
  int c, n, f = 1;
 
  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);
  for (c = 1; c <= n; c++)
    f = f * c;
 
  printf("Factorial of %d = %d\n", n, f);
 
  return 0;
}

//HCF LCM
int OTHER4() {
  int a, b, x, y, t, gcd, lcm;

  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);

  a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

  gcd = a;
  lcm = (x*y)/gcd;

  printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
  printf("Least common multiple of %d and %d = %d\n", x, y, lcm);

  return 0;
}

// C program to convert decimal to binary
int OTHER5()
{
  int n, c, k;

  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);

  printf("%d in binary number system is:\n", n);

  for (c = 31; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
}

// C program to find nPr and nCr using a function

int OTHER6()
{
   int n, r;
   long ncr, npr;
 
   printf("Enter the value of n and r\n");
   scanf("%d%d",&n,&r);
   
   ncr = find_ncr(n, r);
   npr = find_npr(n, r);
   
   printf("%dC%d = %ld\n", n, r, ncr);
   printf("%dP%d = %ld\n", n, r, npr);
 
   return 0;
}

long find_ncr(int n, int r) {
   long result;
   
   result = factorial(n)/(factorial(r)*factorial(n-r));
   
   return result;
}
 
long find_npr(int n, int r) {
   long result;
   
   result = factorial(n)/factorial(n-r);
   
   return result;
}
 
long factorial(int n) {
   int c;
   long result = 1;
 
   for (c = 1; c <= n; c++)
      result = result*c;
 
   return result;
}

// Fibonacci series program in C
int OTHER7()
{
  int n, first = 0, second = 1, next, c;

  printf("Enter the number of terms\n");
  scanf("%d", &n);

  printf("First %d terms of Fibonacci series are:\n", n);

  for (c = 0; c < n; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }

  return 0;
}

//C program to find maximum element in an array
int OTHER8()
{
  int array[100], maximum, size, c, location = 1;

  printf("Enter the number of elements in array\n");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  maximum = array[0];

  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }

  printf("Maximum element is present at location %d and its value is %d.\n", location, maximum);
  return 0;
}

//C program to find minimum element in array
int OTHER9()
{
    int array[100], minimum, size, c, location = 1;
   
    printf("Enter number of elements in array\n");
    scanf("%d", &size);
   
    printf("Enter %d integers\n", size);
   
    for (c = 0; c < size; c++)
        scanf("%d", &array[c]);
   
    minimum = array[0];
   
    for (c = 1; c < size; c++)
    {
        if (array[c] < minimum)
        {
           minimum = array[c];
           location = c+1;
        }
    }
   
    printf("Minimum element is present at location %d and its value is %d.\n", location, minimum);
    return 0;
}

//Linear search in C
int OTHER10()
{
  int array[100], search, c, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}

//Binary search in C
int OTHER11()
{
  int c, first, last, middle, n, search, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}

//C program to reverse an array
int OTHER12()
{
   int n, c, d, a[100], b[100];

   printf("Enter the number of elements in array\n");
   scanf("%d", &n);

   printf("Enter array elements\n");

   for (c = 0; c < n ; c++)
      scanf("%d", &a[c]);

   /*
    * Copying elements into array b starting from end of array a
    */

   for (c = n - 1, d = 0; c >= 0; c--, d++)
      b[d] = a[c];

   /*
    * Copying reversed array into the original.
    * Here we are modifying original array, this is optional.
    */

   for (c = 0; c < n; c++)
      a[c] = b[c];

   printf("Reverse array is\n");

   for (c = 0; c < n; c++)
      printf("%d\n", a[c]);

   return 0;
}

//C program to insert an element in an array
int OTHER13()
{
   int array[100], position, c, n, value;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &position);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
 
   array[position-1] = value;
 
   printf("Resultant array is\n");
 
   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);
 
   return 0;
}

//C program to delete an element from an array
int OTHER14()
{
   int array[100], position, c, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
   }

   return 0;
}

//C program to merge two arrays

int OTHER15() {
  int a[100], b[100], m, n, c, sorted[200];

  printf("Input number of elements in first array\n");
  scanf("%d", &m);

  printf("Input %d integers\n", m);
  for (c = 0; c < m; c++) {
    scanf("%d", &a[c]);
  }

  printf("Input number of elements in second array\n");
  scanf("%d", &n);

  printf("Input %d integers\n", n);
  for (c = 0; c < n; c++) {
    scanf("%d", &b[c]);
  }

  merge(a, m, b, n, sorted);

  printf("Sorted array:\n");

  for (c = 0; c < m + n; c++) {
    printf("%d\n", sorted[c]);
  }

  return 0;
}

void merge(int a[], int m, int b[], int n, int sorted[]) {
  int i, j, k;

  j = k = 0;

  for (i = 0; i < m + n;) {
    if (j < m && k < n) {
      if (a[j] < b[k]) {
        sorted[i] = a[j];
        j++;
      }
      else {
        sorted[i] = b[k];
        k++;
      }
      i++;
    }
    else if (j == m) {
      for (; i < m + n;) {
        sorted[i] = b[k];
        k++;
        i++;
      }
    }
    else {
      for (; i < m + n;) {
        sorted[i] = a[j];
        j++;
        i++;
      }
    }
  }
}

//Bubble sort program
int OTHER16()
{
  int array[100], n, c, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

  return 0;
}

//Insertion sort
int OTHER17()
{
  int n, array[1000], c, d, t, flag = 0;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 1 ; c <= n - 1; c++) {
    t = array[c];

    for (d = c - 1 ; d >= 0; d--) {
      if (array[d] > t) {
        array[d+1] = array[d];
        flag = 1;
      }
      else
        break;
    }
    if (flag)
      array[d+1] = t;
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }

  return 0;
}

//Selection sort
int OTHER18()
{
  int array[100], n, c, d, position, t;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0; c < (n - 1); c++) // finding minimum element (n-1) times
  {
    position = c;

    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }
    if (position != c)
    {
      t = array[c];
      array[c] = array[position];
      array[position] = t;
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
    printf("%d\n", array[c]);

  return 0;
}

//Matrix addition
int OTHER19()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
   
   printf("Sum of entered matrices:-\n");
   
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
 
   return 0;
}

//Subtract matrices
int OTHER20()
{
   int m, n, c, d, first[10][10], second[10][10], difference[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
     for (d = 0 ; d < n; d++)
       scanf("%d", &first[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
     for (d = 0; d < n; d++)
         scanf("%d", &second[c][d]);
 
   printf("Difference of entered matrices:-\n");
 
   for (c = 0; c < m; c++) {
     for (d = 0; d < n; d++) {
       difference[c][d] = first[c][d] - second[c][d];
       printf("%d\t",difference[c][d]);
     }
     printf("\n");
   }
 
   return 0;
}

//Transpose of a matrix
int OTHER21()
{
  int m, n, c, d, matrix[10][10], transpose[10][10];
 
  printf("Enter the number of rows and columns of a matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of the matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &matrix[c][d]);
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      transpose[d][c] = matrix[c][d];
 
  printf("Transpose of the matrix:\n");
 
  for (c = 0; c < n; c++) {
    for (d = 0; d < m; d++)
      printf("%d\t", transpose[c][d]);
    printf("\n");
  }

  return 0;
}

//Matrix multiplication
int OTHER22()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}









//PATTERN CODES
/*
    *
   ***
  *****
 *******
*********
*/
void pattern1()
{
  int row, c, n;

  printf("Enter the number of rows in pyramid of stars to print\n");
  scanf("%d", &n);

  for (row = 1; row <= n; row++)  // Loop to print rows
  {
    for (c = 1; c <= n-row; c++)  // Loop to print spaces in a row
      printf(" ");

    for (c = 1; c <= 2*row - 1; c++) // Loop to print stars in a row
      printf("*");

    printf("\n");LN
  }
}

/*
*
**
***
****
*****
*/
void pattern2()
{
  int n, c, k;

  printf("Enter number of rows\n");
  scanf("%d", &n);

  for (c = 1; c <= n; c++)
  {
    for(k = 1; k <= c; k++)
      printf("*");

    printf("\n");LN
  }
}

/*
   *
  *A*
 *A*A*
*A*A*A*
*/
void pattern3()
{
  int n, c, k;

  printf("Enter number of rows\n");
  scanf("%d", &n);

  for (c = 1; c <= n; c++)
  {
    for (k = 1; k <= n-c; k++)
      printf(" ");

    for (k = 1; k < c; k++)
      printf("*A");

    printf("*\n");LN
  }
}

/*
    1
   232
  34543
 4567654
567898765
*/
void pattern4()
{
  int n, c, row, t = 1;

  scanf("%d", &n);

  for (row = 1; row <= n; row++) {
    for (c = 1; c <= n - row; c++)
      printf(" ");

    t = row;

    for (c = 1; c <= row; c++) {
      printf("%d", t);
      t++;
    }

    t = t - 2;

    for (c = 1 ; c < row; c++) {
      printf("%d", t);
      t--;
    }

    printf("\n");LN
  }
}

/*
1  2  4  7
3  5  8 11
6  9 12 14
10 13 15 16
*/
void pattern5()
{
  int n, p = 1, a[100][100], j, m, k, r;

  scanf("%d", &r);

  for (j = 1; j <= r; j++) {
    m = 0;
    n = j;
    for (k = 1; k <= j; k++)
      a[m++][--n] = p++;
  }

  for (j = 1; j <= r-1; j++) {
    m = j;
    n = r-1;
    for (k = 1; k<= r-j; k++)
      a[m++][n--] = p++;
  }

  for (j = 0; j <= r-1; j++) {
    for (k = 0; k <= r-1; k++)
      printf("%d ", a[j][k]);
    printf("\n");LN
  }
}

/*
  *
 ***
*****
 ***
  *
*/
void pattern6()
{
  int n, c, k, space = 1;

  printf("Enter number of rows\n");
  scanf("%d", &n);

  space = n - 1;

  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");

    space--;

    for (c = 1; c <= 2*k-1; c++)
      printf("*");

    printf("\n");
  }

  space = 1;

  for (k = 1; k <= n - 1; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");

    space++;

    for (c = 1 ; c <= 2*(n-k)-1; c++)
      printf("*");

    printf("\n");LN
  }
}

/*
FLOYDS TRIANGLE
1
2 3
4 5 6
7 8 9 10
*/
void pattern7()
{
  int n, i,  c, a = 1;

  printf("Enter the number of rows of Floyd's triangle to print\n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (c = 1; c <= i; c++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");LN
  }
}









//INTEGER BASED 
// root of equation aX^2 + bx + c
int roots()
{
    int a,b,c,x1,x2,u;
    printf("enter the values");
    scanf("%d%d%d",&a,&b,&c);
    u=(b*b-4*a*c);
    x1=(-b+sqrt(u))/2*a;
     x2=(-b-sqrt(u))/2*a;
     printf("\n roots of equation are %d %d",x1,x2);
}
// calculate bill
int bill()
{
    float bill,unit,rate;
    printf("enter how much unit is used");
    scanf("%f",&unit);
    rate=4.0;
    bill=unit*rate;
    printf("one month bill is %f\n",bill);

}
//Write a program in C to calculate simple intrest
int simpleinterest()
{
    int time;
    float si,pa,rate;
    printf("enter the values");
    scanf("%f%f%d",&pa,&rate,&time);
    si=(pa*rate*time)/100.0;
    printf("si is%f",si);

}
//Write a program in C to convert farenhit to celcius
int celcius()
{
    float celcius,farenhit;
    printf("enter the value of temp");
    scanf("%f",&farenhit);
    celcius=(5*((farenhit-32)/9));
    printf("temp. on celcius is %f",celcius);
}

//Write a program in C to swap two numbers
int swap()
{
    int x,y,z;
    printf("enter the values");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("\n the values of x:%d",x);
    printf("\n the values of y:%d",y);
}

//Write a program in C to calculate area of circle or rectangle
int area()
{
    int radius;
    float pi,area,aor;
    printf("enter the value of radius");
    scanf("%d",&radius);
    pi=3.14;
    area=(pi*radius*radius);
    printf("AREA OF CIRCLE=%f",area);
    aor=radius*area;
     printf("AREA OF RECTANGLR=%f",aor);
}

//Write a program in C to perform basic calculation
int calculation()
{
    int a,b,sum,sub,mul,div;
    printf("enter the values of a&b");
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("sum=%d, sub=%d, mul=%d, div=%d",sum,sub,mul,div);

}

//Write a program in C to check whether a given number is an ugly number or not.
int ugly_number_check()
{
int n,x=0;
  printf("\n\n Check whether a given number is an ugly number:\n");
  printf("----------------------------------------------------\n");
  printf("Input an integer number: ");
  scanf("%d",&n);

      if (n <= 0) {  
            printf("Input a correct number.");  
        }
       while (n != 1) 
       {  
            if (n % 5 == 0) 
            {  
                n /= 5;  
            } 
            else if (n % 3 == 0) 
            {  
                n /= 3;  
            } 
            else if (n % 2 == 0) 
            {  
                n /= 2;  
            } 
            else 
            {  
                printf("It is not an ugly number.\n"); 
                x = 1;  
                break;  
            }  
        } 
		        if (x==0)
		        { 
                printf("It is an ugly number.\n");
                }
}

//Write a program in C to check whether a given number is Abundant or not.
int getSum(int n)
{
    int sum = 0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            if (n/i == i)
                sum = sum + i;
            else 
            {
                sum = sum + i;
                sum = sum + (n / i);
            }
        }
    }
    sum = sum - n;
    return sum;
}
bool checkAbundant(int n)
{
    return getSum(n) > n;

}
int Abundant_number()
{
int n;
  printf("\n\n Check whether a given number is an Abundant number:\n");
  printf(" --------------------------------------------------------\n");
  printf(" Input an integer number: ");
  scanf("%d",&n);

    checkAbundant(n)? printf(" The number is Abundant.\n") : printf(" The number is not Abundant.\n");
    return 0;
}

//Write a program in C to check whether a given number is Deficient or not.
bool checkDeficient(int n)
{
    return (getSum(n) < n);
}
int Deficient_number()
{
int n;
  printf("\n\n Check whether a given number is Deficient or not:\n");
  printf(" -----------------------------------------------------\n");
  printf(" Input an integer number: ");
  scanf("%d",&n);
    checkDeficient(n)?   printf(" The number is Deficient.\n") :   printf(" The number is not Deficient.\n");
    return 0;
}

//Write a program in C to check whether a given number is a Kaprekar number or not.
bool chkkaprekar(int n)
{
    if (n == 1)
       return true;
    int sqr_n = n * n;
    int ctr_digits = 0;
    while (sqr_n)
    {
        ctr_digits++;
        sqr_n /= 10;
    }
    sqr_n = n*n; 
    for (int r_digits=1; r_digits<ctr_digits; r_digits++)
    {
         int eq_parts = pow(10, r_digits);

         if (eq_parts == n)
            continue;
         int sum = sqr_n/eq_parts + sqr_n % eq_parts;
         if (sum == n)
           return true;
    }
    return false;
}
int Kaprekar_number()
{
int kpno;
  printf("\n\n Check whether a given number is a Kaprekar number: \n");
  printf(" -------------------------------------------------------\n");
  printf(" Input a number: ");
  scanf("%d",&kpno);
		  if (chkkaprekar(kpno)==true)
		  {
		   printf("%d is a Kaprekar number. \n",kpno);
		  }
		  else
		  {
		   printf("%d is not a Kaprekar number. \n",kpno);
		  }
}

//Write a program in C to check whether a number is Lychrel number or not.
int Lychrel_number()
{
	unsigned long long int i=0;
	int count=0,num1;
  printf("\n\n Check whether a given number is a Lychrel number or not: \n");
  printf(" -------------------------------------------------------------\n");
  printf(" Input a number: ");
  scanf("%d",&num1);
		if(lychrel(num1))
		{
	printf(" The given number is Lychrel.\n\n");
		}
		else
		{
			printf(" The given number is not Lychrel.\n\n");
		}
	return 0;
}
bool lychrel( unsigned long long int i )
{
	int j; /*iteration counter*/
	bool lychrel = true;
	i = i + reverse ( i );

	for ( j = 1; j <= 30 ; j++ )
	{
		if ( palindrome ( i ) )
		{
			lychrel = false;
			break;
		}
		i = i + reverse ( i );
	}

	return lychrel;
}
unsigned long long int reverse( unsigned long long int i )
{
	unsigned long long int ret = 0;
	while ( i != 0 )
	{
		ret *= 10;
		ret += i % 10;
		i /= 10;
	}
	return ret;
}

bool palindrome ( unsigned long long int i )
{
	return ( i == reverse ( i ) );
}

//Write a program in C to generate and show the first 15 narcissistic decimal numbers
int first_15_narcissistic() 
{
	printf("\n\n Find the first 15 narcissistic decimal numbers: \n");
	printf(" -----------------------------------------------------\n");
	printf(" The first 15 narcissistic decimal numbers are: \n");
    int i,ctr,j,orn,n,m,sum;
    orn=1;
    for (i=1;i<=15;)
    {
    ctr=0;
    sum=0;
    n=orn;
       while(n>0) 
       {
          n=n/10;
           ctr++;
       }
        n=orn;
       while(n>0) 
       {
          m=n % 10;
          sum=sum+pow(m,ctr);
          n=n/10;
       }
       if(sum==orn)
       {
           	printf("%d ",orn);
        i++;
       }
    orn++;
    }
	printf("\n");
}

//Write a program in C to display the first 10 lucus numbers
int first_10_lucus() 
{
	printf("\n\n Find the first 10 lucus numbers: \n");
	printf(" -------------------------------------\n");
	printf(" The first 10 Lucus numbers are: \n");

    int n = 10;  
     int n1 = 2, n2 = 1, n3;  
        if (n > 1)
		{  
			printf("%d %d ",n1,n2);
            for(int i = 2; i < n; ++i)
			{  
                n3 = n2;  
                n2 += n1;  
                n1 = n3;  
				printf("%d ",n2);
            } 
			printf("\n");
        }  
        else if (n == 1)
        {
		printf("%d ",n2);		
			printf("\n");		   
        }
        else 
        { 
			printf("Input a positive number.\n");
        }
}  

//Write a program in C to display the first 10 catalan numbers.
unsigned long int cataLan(unsigned int n)
{
    if (n <= 1) return 1;
    unsigned long int catno = 0;
    for (int i=0; i<n; i++)
        catno += cataLan(i)*cataLan(n-i-1);
    return catno;
}
int first_10_catalan()
{
printf("\n\n Find the first 10 catalan numbers: \n");
printf(" --------------------------------------\n");
printf(" The first 10 catalan numbers are: \n");
    for (int i=0; i<10; i++)
	printf("%lu ",cataLan(i));
	printf("\n");		
    return 0;
} 

//Write a program in C to check a number is a Happy or not.
int SumOfSquNum(int givno)
{
    int SumOfSqr = 0;
    while (givno)
    {
        SumOfSqr += (givno % 10) * (givno % 10);
        givno /= 10;
    }
    return SumOfSqr;
}
bool checkHappy(int chkhn)
{
    int slno, fstno;
    slno = fstno = chkhn;
    do
    {
        slno = SumOfSquNum(slno);
        fstno = SumOfSquNum(SumOfSquNum(fstno));
    }
    while (slno != fstno);
    return (slno == 1);
}
int is_Happy_number()
{
int hyno;
	printf("\n\n Check whether a number is Happy number or not: \n");
	printf(" ---------------------------------------------------\n");
	printf(" Input a number: ");
	scanf("%d",&hyno);

    if (checkHappy(hyno))
	printf("%d is a Happy number.\n",hyno);
    else
	printf("%d is not a Happy number.\n",hyno);
} 

//Write a program in C to check whether a number is Disarium or not
int DigiCount(int n)
{
    int ctr_digi = 0;
    int tmpx = n;
    while (tmpx)
    {
        tmpx = tmpx/10;
 
        ctr_digi++;
    }
    return ctr_digi;
}
bool chkDisarum(int n)
{
    int ctr_digi = DigiCount(n);
    int s = 0; 
    int x = n;
    int pr;
    while (x)
    {
        pr = x % 10;
        s = s + pow(pr, ctr_digi--);
        x = x/10;
    }
    return (s == n);
}
int is_Disarium_Number()
{
int dino;
printf("\n\n Check whether a number is Disarium Number or not: \n");
printf(" ------------------------------------------------------\n");
printf(" Input a number: ");
 scanf("%d",&dino);	
	
    if( chkDisarum(dino))
	printf(" The given number is a Disarium Number.\n");
    else
	printf(" The given number is not a Disarium Number.\n");
    return 0;
}

//Write a program in C to check if a number is Harshad Number or not.
bool chkHarshad(int n)
{
    int s = 0;
	int tmp;
    for (tmp=n; tmp>0; tmp /= 10)
        s += tmp % 10;
    return (n%s == 0);
}
int is_Harshad_Number()
{
    int hdno;
	printf("\n\n Check whether a number is Harshad Number or not: \n");
	printf(" ---------------------------------------------------\n");
	printf(" Input a number: ");
	scanf("%d",&hdno);
 
     if( chkHarshad(hdno))
	printf(" The given number is a Harshad Number.\n");
    else
	printf(" The given number is not a Harshad Number.\n");
    return 0;
}

//Write a program in C to check whether a number is a Pronic Number or Heteromecic Number or not.
int is_Pronic_Number()
{
    int prno,i,n,flg;
	printf("\n\n Check whether a number is a Pronic Number or Heteromecic Number or not: \n");
	printf(" ----------------------------------------------------------------------------\n");
	printf(" Input a number: ");
	scanf("%d",&prno);
    for(i=1;i<=prno;i++)
        {
            if(i*(i+1)==prno) 
            {
            flg=1;
            break;
            }
        }
  
            if(flg==1)
            {
			printf(" The given number is a Pronic Number.\n");
            }
            else
            {
			printf(" The given number is not a Pronic Number.\n");
            }
}

//Write a program in C to check if a number is Authomorphic or not
bool chkAutomor(int num1)
{
    int sqno = num1 * num1;
    while (num1 > 0)
    {
        if (num1 % 10 != sqno % 10)
            return false;
        num1 /= 10;
        sqno /= 10;
    }
    return true;
}
int is_Authomorphic()
{
    int auno;
 printf("\n\n Check whether a number is an Authomorphic Number or not: \n");
 printf(" ------------------------------------------------------------\n");
 printf(" Input a number: ");
 scanf("%d",&auno);	
 
      if( chkAutomor(auno))
        printf(" The given number is an Automorphic Number.\n");
    else
        printf(" The given number is not an Authomorphic Number.\n");
    return 0;
}

//Write a program in C to check whether a number is a Duck Number or not.
int is_Duck_Number()
{
    int dno,dkno,r,flg;
	flg=0;
 printf("\n\n Check whether a number is a Duck Number or not: \n");
 printf(" ----------------------------------------------------\n");
 printf(" Input a number: ");
 scanf("%d",&dkno);
 dno=dkno;
    while(dkno>0)
        {
            if(dkno % 10 == 0)
            {
            flg=1;
            break;
            }
			dkno/=10;
        }
            if(dno>0 && flg==1)
            {
             printf(" The given number is a Duck Number.\n");
            }
            else
            {
             printf(" The given number is not a Duck Number.\n");
            }
}

//Write a program in C to check two numbers are Amicable numbers or not.
int ProDivSum(int n)
{
    int sum = 1;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            sum += i;
            if (n/i != i)
                sum += n/i;
        }
    }
    return sum;
}
bool chkAmicable(int a,int b)
{
    return(ProDivSum(a) == b && ProDivSum(b) == a);
}
int are_Amicable_pairs()
{
    int n, i, j, ctr,nm1,nm2;
 printf("\n\n Check whether two numbers are Amicable pairs or not: \n");
 printf("\n Sample: (220, 284), (1184, 1210), (2620, 2924).. \n");
 printf(" --------------------------------------------------------\n");	
		printf(" Input the 1st number : ");
		scanf("%d",&nm1);
		printf(" Input the 2nd number : ");
		scanf("%d",&nm2);  
   

      if( chkAmicable(nm1,nm2))
        printf(" The given numbers are an Amicable pair.\n");
    else
        printf(" The given numbers are not an Amicable pair.\n");
    return 0;
}

//Write a program in C to check if a given number is circular prime or not.
int flg;
void chkPrime(long int n)
{
    long int i;
    i=n-1;
    while(i>=2)
    {
        if(n%i==0)
        {
            flg=1;
        }
        i--;
    }
}
void AllCombination(long int a)
{
  long int b1,c1,d1,e1,i,j,k,s1,z1,v1,x[8],y[8],m;
  b1=a;
  i=0;
  while(b1>0)
  {
      y[i]=b1 % 10;
      b1=b1/10;
      i++;
  }
  c1=0;
  for(j=i-1;j>=0;j--)
  {
    x[c1]=y[j];
    c1++;
  }
  m=i;
  while(m>0)
  {
     c1=m-1;
     d1=i-1;
     e1=0;
     s1=0;
     while(e1<i)
     {
       z1=pow(10,d1);
       v1=z1*x[c1%i];
       c1++;
       d1--;
       e1++;
       s1=s1+v1;
     }
     m--;
     chkPrime(s1);
  }
}
int is_circular_prime()
{
    long int num1;
 printf("\n\n Check whether a given number is circular prime or not: \n");
 printf(" -----------------------------------------------------------\n");
    printf(" Input a Number: ");
    scanf("%li",&num1);
      flg=0;
      AllCombination(num1);
      if(flg==0)
      {
        printf(" The given number is a circular prime Number.\n");
      }
    else
    {
        printf(" The given number is not a circular prime Number.\n");
    }
    return 0;	
	printf("\n");
}

//Write a program in C to display first 10 Fermat numbers
int first_10_Fermat()
{
    int n=0;
	double result;
	printf("\n\n Display first 10 Fermat numbers:\n");
	printf("-------------------------------------\n");
	printf(" The first 10 Fermat numbers are: \n");
while (n <= 10) 
		{
            result= pow(2, pow(2, n)) + 1;
            n++;
            printf("%lf \n",result);
        }
}

//Write a program in C to find any number between 1 and n that can be expressed as the sum of two cubes in two (or more) different ways.
int can_be_expressed_as_sum_of_2_cubes()
{
    int a,b,c,d,n;
	double result;
	printf("\n\n Find the numbers between a range that can be expressed as the sum of two cubes:\n");
	printf("------------------------------------------------------------------------------------\n");
	printf(" The numbers in the above range are: \n");
         n = 100000;  
        for (int a = 1; a <= n; a++) 
		{  
            int a3 = a*a*a;  
            if (a3 > n) break;  
  
            for (int b = a; b <= n; b++) 
			{  
                int b3 = b*b*b;  
                if (a3 + b3 > n) break;  
  
                 for (int c = a + 1; c <= n; c++) 
				 {  
                    int c3 = c*c*c;  
                    if (c3 > a3 + b3) break;  
  
                    for (int d = c; d <= n; d++) 
					{  
                        int d3 = d*d*d;  
                        if (c3 + d3 > a3 + b3) break;  
  
                        if (c3 + d3 == a3 + b3) 
						{  
                            printf(" %d = ",(a3+b3));  
                            printf("%d^3 + %d^3 = ",a,b);   
                            printf("%d^3 + %d^3",c,d);   
                            printf("\n"); 
                        }  
                    }  
                }  
            }  
        }
}

//Write a program in C to Check if a number is Mersenne number or not.
int is_Mersenne()
{
    int n,p,ans,i,n1;
	double result;
	printf("\n\n Check whether a given number is Mersenne number or not:\n");
	printf("------------------------------------------------------------\n");
	printf(" Input a number: ");
    scanf("%d",&n);
    n1=n+1;
        p = 0;
        ans = 0;
        for(i=0;;i++)
        {
            p=(int)pow(2,i);
            if(p>n1)
            {
                break;
            }
            else if(p==n1)
            {
               printf(" %d is a Mersenne number.\n",n);
               ans=1;
            }
        }
  if(ans==0)
  {
   printf(" %d is not a Mersenne number.\n",n);
  }	
}

//Write a program in C to print the first 20 numbers of the Pell series.
int first_20_numbers_of_Pell_series()
{
	int n,a=1,b=0,c;
	printf("\n\n Find the first 20 numbers of the Pell series: \n");
	printf(" --------------------------------------------------\n");	
    printf(" The first 20 numbers of Pell series are: \n");
    c=0;
    printf(" %d ",c);
    for(n=1; n<20; n++)
     {
      c= a + 2*b;
      printf("%d ",c);
      a = b;
      b = c;
     }
	 printf("\n");
}

//Write a program in C to check if a number is Keith or not.
int lenCount(int nm)
{  int ctr=0;
    while(nm>0)
    {
        nm=nm/10;
        ctr++;
     }
     return ctr; 
}

int is_Keith()
{
    int num1=0,arr1[10],num2=0,flg=0,i=0,sum=0;
	printf("\n\n Check whether a number is Keith or not: \n");
	printf(" Sample Keith numbers: 197, 742, 1104, 1537, 2208, 2580, 3684, 4788, 7385..\n");
	printf(" --------------------------------------------------------------------------\n");	
	printf(" Input a number : ");
    scanf("%d",&num1);
    num2=num1;
    for(i=lenCount(num2)-1;i>=0;i--)
    {
        arr1[i]=num1 % 10;
        num1/=10;
    }
    while(flg==0)
    {
        for(i=0;i<lenCount(num2);i++)
            sum+=arr1[i];
        if(sum==num2)
        {
            printf(" The given number is a Keith Number.\n");
            flg=1;
        }
        if(sum>num2)
        {
            printf(" The given number is not a Keith number.\n");
            flg=1;
        }
        for(i=0;i<lenCount(num2);i++)
        {
            if(i!=lenCount(num2)-1)
                arr1[i]=arr1[i+1];
            else
                arr1[i]=sum;
        }
        sum=0;
    }
}

//Write a program in C to check if a number is Keith or not(with explanation).
int Keith_or_not_with_explanation()
{
    int num1=0,arr1[10],num2=0,flg=0,i=0,sum=0,kk;
	printf("\n\n Check whether a number is Keith or not: \n");
	printf(" Sample Keith numbers: 197, 742, 1104, 1537, 2208, 2580, 3684, 4788, 7385..\n");
	printf(" -----------------------------------------------------------------------\n");	
	printf(" Input a number : ");
    scanf("%d",&num1);
    num2=num1;
    for(i=lenCount(num2)-1;i>=0;i--)
    {
        arr1[i]=num1 % 10;
        num1/=10;
    }
    while(flg==0)
    {
        for(i=0;i<lenCount(num2);i++)
            sum+=arr1[i];
        if(sum==num2)
        {
            flg=1;
            kk=1;
        }
        if(sum>num2)
        {
            flg=1;
            kk=0;
        }
        for(i=0;i<lenCount(num2);i++)
        {
            printf(" %d",arr1[i]);
            if(i!=lenCount(num2)-1)
                {
				arr1[i]=arr1[i+1];
                printf(" + ");
				}
            else
                {
				arr1[i]=sum;
                printf(" = %d",arr1[i]);
				}
        }
        printf("\n");
        sum=0;
    }
            if(kk==1)
            {
            printf(" The given number is a Keith Number.\n");
            }
            if(kk==0)
            {
            printf(" The given number is not a Keith Number.\n");
            }            
}



//STRING CODES
//Find the Frequency of a Character
int S1() {
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}

//Program to count vowels, consonants etc.
int S2() {
    char line[150];
    int vowels, consonant, digit, space;

    vowels = consonant = digit = space = 0;

    printf("Enter a line of string: \n");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i) {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U') {
            ++vowels;
        } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            ++consonant;
        } else if (line[i] >= '0' && line[i] <= '9') {
            ++digit;
        } else if (line[i] == ' ') {
            ++space;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);
    return 0;
}

//Reverse a Sentence Using Recursion
int S3() {
    printf("Enter a sentence: \n");
    reverseSentence();
    return 0;
}
void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}

//Length of a String
int S4() {
    char s[] = "Programming is fun\n";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}

//Concatenate Two Strings
int S5() {
    char s1[100] = "programming ", s2[] = "is awesome";
    int i, j;

    // length of s1 is stored in i
    for (i = 0; s1[i] != '\0'; ++i) {
        printf("i = %d\n", i);
    }

    // concatenating each character of s2 to s1
    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }

    // terminating s1 string
    s1[i] = '\0';

    printf("After concatenation: \n");
    puts(s1);

    return 0;
}

//Copy String Without Using strcpy()
int S6() {
    char s1[100], s2[100], i;
    printf("Enter string s1: \n");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s\n", s2);
    return 0;
}

//Remove all Characters in a String Except Alphabets
int S7() {
    char line[150];
    printf("Enter a string: \n");
    gets(line);
    int j;
    for (int i = 0; line[i] != '\0'; ++i) {
        while (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0')) {
            for (j = i; line[j] != '\0'; ++j) {
                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
    }
    printf("Output String: ");
    puts(line);
    return 0;
}

//Sort Elements in Lexicographical Order (Dictionary Order)
int S8() {
    char str[5][50], temp[50];
    printf("Enter 5 words: \n");


    // Getting strings input
    for (int i = 0; i < 5; ++i) {
        fgets(str[i], sizeof(str[i]), stdin);
    }

    // storing strings in the lexicographical order
    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nIn the lexicographical order: \n");
    for (int i = 0; i < 5; ++i) {
        fputs(str[i], stdout);
    }
    return 0;
}