#include <stdio.h>

int main(){
  printf("Expected Output: 3. Output: %s\n", romanToInt("III"));
  printf("Expected Output: 58. Output: %s\n", romanToInt("LVIII"));
  printf("Expected Output: 1994. Output: %s\n", romanToInt("MCMXCIV"));
  
  return 0;
}
