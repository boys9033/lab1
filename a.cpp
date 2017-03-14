#include<stdlib.h>
#include<iostream>
using namespace std;

int main(int argc, char **argv)
{
   int n = atoi(argv[1]);

   do{
      cout << n <<" ";
      if(n%2 == 1)
        n = 3*n+1;
      else
        n /= 2;
   }while(n != 1);
   cout << n << endl;

   return 0;
}

