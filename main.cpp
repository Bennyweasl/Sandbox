#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>

//4 byte in memory
struct Rectangle
{
  int length; //2bytes in memory
  int width;  //2bytes in memory
};
//4 byte in memory
struct Complex
{
  int real;      //2bytes in memory
  int imaginary; //2bytes in memory
};
//77 byte in memory
struct Student
{
  int roll;         //2bytes in memory
  char name[25];    //25 bytes in memory
  char dept[10];    //10 bytes in memory
  char address[50]; //50 bytes in memory
};

int main()
{
  //these arrays are in the main of memory
  int A[5];
  int B[5] = {2, 4, 6, 8, 10};
  for (int i = 0; i < 5; i++)
  {
    printf("%d", B[i]);
  }
  //in main on stack
  struct Rectangle r = {10, 5};

  //accessing the struct
  r.length = 15;
  r.width = 10;
  printf("Area of Rectangle is %d", r.length * r.width);

  struct Student s;
  s.roll = 10;

  //C language allocate 5*2 bytes in heap with a pointer
  int *pointerC;
  pointerC = (int *)malloc(5 * sizeof(int));

  //C++ language allocate 5*2 bytes in heap with a pointer
  int *j;
  j = new int[5];

  //references another name give to a variable
  int a = 10;
  int &ref = a;

  struct Rectangle *p = &r;

  //access via pointer
  (*p).length = 20;
  p->length = 20;

  //putting something in heap
  p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
}