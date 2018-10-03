#include <stdio.h>
#include <string.h>

struct ramen {char type[256]; int intensity;};

void print(struct ramen sample_ramen){
  printf("Type of ramen: %s\nIntensity: %d\n", sample_ramen.type, sample_ramen.intensity);
}

char* get_type(struct ramen sample_ramen){
  return sample_ramen.type;
}

int get_intensity(struct ramen sample_ramen){
  return sample_ramen.intensity;
}

void set_type(struct ramen * sample_ramen, char* name){
  strcpy(sample_ramen -> type, name);
}

void set_intensity(struct ramen * sample_ramen, int new_intensity){
  sample_ramen -> intensity = new_intensity;
}
