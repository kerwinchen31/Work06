#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "func.h"

struct poke choosePoke(struct poke array[]){
  srand(time(0));
  return array[rand()%10];
}

int myprint(struct poke mon){
  printf("The pokedex index of %s is %d\n", mon.name, mon.index);
  return 0;
}

int changeVals(struct poke *mon, char *s, int ind){
  strcpy(mon->name, s);
  mon->index = ind;
  return 0;
}
