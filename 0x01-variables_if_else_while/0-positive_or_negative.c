#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/** 



* Main - Entry point



* Return: Always success



* /



int main(void)

{

int n;

int L;

int char[] = “Last digit of”



srand (time (o));

n = rand() - RAND_MAX / 2



if  (n > 0)

             printf (“%d is positive\n”,n);

else if (n == 0)

             printf (“%d is zero\n”,n);

else       

             printf (“%d is negative\n”,n);



Return (0);

}

