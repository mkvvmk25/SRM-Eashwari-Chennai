#include<stdio.h>
#include<stdlib.h>
int* createIntMemoDma(int size)
{
  int bytes = size * sizeof(int);
  int *ptr = // 1001
      (int*)malloc(bytes);
  return ptr;
}
float* createFloatMemoDma(int size)
{
  int bytes = size * sizeof(float);
  float *ptr = // 1001
      (float*)malloc(bytes);
  return ptr;
}


int main()
{
  // to create a memo for a integer
  // DMA ?
  int *ptr = createIntMemoDma(5);
  int *a = createIntMemoDma(1);
  int *b = createIntMemoDma(4);
  int *c = createIntMemoDma(3);
}