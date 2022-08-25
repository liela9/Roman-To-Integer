#include <stdio.h>

int main(){
  printf("Expected Output: 3. Output: %d\n", romanToInt("III"));
  printf("Expected Output: 58. Output: %d\n", romanToInt("LVIII"));
  printf("Expected Output: 1994. Output: %d\n", romanToInt("MCMXCIV"));
  
  return 0;
}
