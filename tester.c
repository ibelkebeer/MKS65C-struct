#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "ramen.c"

int main(){
  struct ramen r1, r2, r3, r4;
  struct ramen ramens[] = {r1, r2, r3, r4};
  char* types[] = {"standard", "cheese", "ice", "carbo", "2x"};
  int intensities[] = {1,2,3,4,5};
  unsigned long seed_time = time(NULL);
  srand(seed_time);
  printf("The seed for this run is: %lu\nUse this to configure for problems.\n", seed_time);

  // ramens[0] != the first struct ramen in the array!
  struct ramen chosen_ramen = ramens[rand() % 4];
  struct ramen * ramen_pointer = &(chosen_ramen);

  set_type(ramen_pointer, types[rand() % 5]);
  set_intensity(ramen_pointer, intensities[(int)(rand() % 5)]);

  printf("==== Test Suite ====\n");
  print(chosen_ramen);
  printf("Retrieving type only: %s\n", get_type(ramen_pointer));
  printf("Original intensity for standard ramen: %d\n",get_intensity(chosen_ramen));
  set_intensity(ramen_pointer, 3);
  printf("New intensity for standard ramen: %d\n", get_intensity(chosen_ramen));
  set_type(ramen_pointer, types[rand() % 5]);
  printf("Your ramen has evolved! Now it is of type %s!\n", get_type(ramen_pointer));
  return 0;
}
