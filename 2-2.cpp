#include <iostream>
#include <stdlib.h>
using namespace std;

void fun(int &a, int &b);

int main()
{
  int x = 10;
  int y = 20;
  cout << x << "," << y << endl;
  fun(x, y);
  cout << x << "," << y << endl;
  
  return 0;
}

void fun(int &a, int &b)
{
  int c = 0;
  c = a;
  a = b;
  b = c;
}