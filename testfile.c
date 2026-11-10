#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define a 123456
#define pf printf
#define code 401
#define SUB(x,y) (x)-(y)

int main()
{
    //sum of two numbers
    int x=a; //a=123456 number
    float b=12.5 //float values;
    char ch = 'A'
    int c=10,d=5;
    int s= SUB(c,d);
    /*printing the x value,
      float b value,
      char ch character,
      Subtraction of C and D using
      macros*/
    pf("%d %f %c %d\n",x,b,ch,s);
    return 0;
}
