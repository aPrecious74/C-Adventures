#include <stdio.h>
#include <cs50.c>
int N = 3;

int main(void)
{
//Create an array of scores
int scores[N]; 
int sum;

//user inputs the scores and then average them up
for (int i = 0; i < N; i++)
{
   sum += scores[i]= get_int("Score: ");
}
float average = (float)sum/N;
printf("Average:%f\n", average);
}
