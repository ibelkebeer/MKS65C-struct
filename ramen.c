#include <stdio.h>
#include <string.h>
struct ramen{char type[256]; int intensity;};

char* print(){
  
}

int main(){
  struct ramen standard;
  strcpy(standard.type, "standard");
  standard.intensity = 2;
  struct ramen cheese; 
  strcpy(cheese.type, "cheese");
  cheese.intensity = 1;
  struct ramen ramens[] = {standard, cheese}; 
  printf("%s\n",ramens[0].type);
  return 0;
}
