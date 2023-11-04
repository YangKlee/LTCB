#include <stdio.h>

int main() {
  unsigned long long int gt1 = 1, temp = 0;
  for (int i = 1; i <= 30; i++) {
    gt1 *= i;
    if(i == 30/10)
    {
    	
    	temp += gt1;
    	gt1 = 1;
	}
	
  }
  gt1 *= temp;
  printf("%llu\n", gt1);
  return 0;
}