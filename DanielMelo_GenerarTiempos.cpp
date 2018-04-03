#include <cstdlib>

#include <iostream>

#include <ctime>






int fibo(n)
{
  if(n == 0)
    {
      return 0;
    }
  elif(n == 1)
    {
      return 1;
    }
  else
    {
      return fibo(n-1) + fibo(n-2);
    }

}
float get_time(n)
{
  clock_t t;

  t = clock();

  fibo(n);

  t = clock() - t;

  float time = ((float)t)/CLOCKS_PER_SEC;

  return 0;
}

  
  
