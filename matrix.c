#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
void iteration_4(int argc, string argv[], double result_3[]);
void iteration_3(int argc, string argv[],double result_2[]);
void iteration_2(int argc, string argv[], double result_1[]);
void iteration_1(int argc, string argv[],double result[]);

int main(int argc, string argv[])
{ double result_3[30];


   iteration_4(argc,argv,result_3);

   {for(int n=0;n<3;n++)
   {for(int i=6*n +1 ;i< 6*(n+1) +1; i++)
   {
      if(i>3 && i<7)
      {
         printf("%.2f ",result_3[i]);
      }
      else if(i>9&&i<13)
      {
         printf("%.2f ",result_3[i]);
      }
      else if(i>15&&i<19)

       {printf("%.2f ", result_3[i]);}
      else
   {

   }}
      printf("\n");}}}




void iteration_4(int argc, string argv[], double result_3[])
{double result_2[30];


   iteration_3(argc,argv,result_2);
   for(int n=0;n<3;n++)
   {for(int i=6*n +1 ;i< 6*(n+1) +1; i++)
   { if(i>0 && i<7)
      {
      result_3[i]=(result_2[i])-(result_2[6*n+2]*result_2[i+6]/(double)result_2[6*(n+1)+2]);
      }
      else
      {
        result_3[i] = result_2[i];
      }}}}







void iteration_3(int argc, string argv[],double result_2[])
{
   int index =1;

double result_1[30];
iteration_2(argc,argv,result_1);
double value;

   for(int n=0; n<3;n++)
{for(int i=6*n +1 ;i< 6*(n+1) +1; i++)
   {if(i>0 && i<7)
      {
         value = result_1[i]-result_1[6*n+3]*result_1[i+6]/(double)result_1[6*(n+1)+3];
      }
      else if(i>6 && i<13)
      {
         value = result_1[i]- result_1[6*n+3]*result_1[i+6]/(double)result_1[6*(n+1)+3];
      }
      else
      {
         value = result_1[i]/result_1[6*n+3];
      }
      result_2[index++]= value;}}}



void iteration_2(int argc, string argv[], double result_1[])
 {
   int index =1;

   double result[30];



    iteration_1(argc,argv,result);
    double value;
     for(int n=0; n<3;n++)
 {for(int i=6*n +1 ;i< 6*(n+1) +1; i++)
   {if(i>6 && i<13)
   {
      value= result[i]/result[6*n+2];

   }
   else if(i>12 && i<19)
   {
      value = ((double)(result[i]))- ((result[6*n+2])*(result[i-6])/(double)result[6*(n-1)+2]);
   }
   else
   {value = (double)result[i];}
   result_1[index++]= value;
}
}}

void iteration_1(int argc, string argv[],double result[])
{int index =1;

    double value;

    for(int n=0; n<3;n++)


 {for(int i=6*n +1 ;i< 6*(n+1) +1; i++)

   {if(i>6 && i<13)
   {
      int z = atoi(argv[6*(n) +1]);
      value =  (atoi(argv[i])) - z*atoi(argv[(i-6)])/(double)atoi(argv[6*(n-1)+1]);
   }


    else if(i>12 && i<19)
    { int z = atoi(argv[6*(n) +1]);
   value = (atoi(argv[i]))- z*atoi(argv[(i-12)])/(double)atoi(argv[6*(n-2)+1]);
 }

    else
   {  value = (atoi(argv[i]))/(double)atoi(argv[6*n+1]);}
     result[index++]=value;
}
 }

}
