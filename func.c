#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

struct poke choosePoke(struct poke array[]){
  srand(time(0));
  return array[rand()%9];
}

int myprint(struct poke mon){
  printf("The pokedex index of %s is %d", mon.name, mon.index);
  return 0;
}

int changeVals(struct poke mon, char *s, int index){
  mon.name = s;
  mon.index = index;
  return 0;
}
