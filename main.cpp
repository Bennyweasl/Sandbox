#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>

void fun2(int i)
{
  int a;
}
void fun1()
{
  int x;
  fun2(x);
}
int main()
{
  int a;   //2-byte 16bit compiler 4-byte 32bit compiler
  float b; //4-byte 16bit compiler 8-byte 32bit compiler
  fun1();
}
