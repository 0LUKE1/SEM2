#include<stdio.h>
void main()
{
    char *T;
    int I,J,K;
    char *ARRAY[5]={"SUNIL","ANIL","DILIP","JAY","BHARAT"};
    clrscr();
    for(I=0;I<5;I++)
    {
       printf("%s \t",ARRAY[I]);
    }
    printf("\n");
    for(I=0;I<4;I++)
    {
      for(J=0;J<4-I;J++)
      {
 K=strcmp(ARRAY[J],ARRAY[J+1]);
 if(K>0)
 {
   T=ARRAY[J];
   ARRAY[J]=ARRAY[J+1];
   ARRAY[J+1]=T;
 }
      }
    }
    for(I=0;I<5;I++)
    {
       printf("%s \t",ARRAY[I]);
    }
getch();
}