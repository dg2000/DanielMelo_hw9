#include <cstdlib>

#include <iostream>

#include <ctime>


using std::cout;

using std::endl;


int fibonacci(int n)
{

  //Casos base
  if(n == 0)
    {
      return 0;
    }
  else if(n == 1)
    {
      return 1;
    }

  //Recursividad hasta llegar a caso base
  else
    {
      return fibonacci(n-1) + fibonacci(n-2);
    }

}
float get_time(int n)
{
  clock_t t;

  t = clock();

  fibonacci(n);

  t = clock() - t;

  float time = ((float)t)/CLOCKS_PER_SEC;

  return time;
}

int main()
{
  int i;

  //Corro hasta n = 35 veces la serie de fibonacci y miro la demora

  for(i = 0; i < 35; i++)
    {
      cout << i << " " << get_time(i) << endl;
    }

  return 0;
}


  
  
