#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"


/*
int myprint(struct poke mon){
  printf("the name of %c is %s of pokedex %d", mon, mon.name, mon.index);
  return 0;
  }*/

struct poke choosePoke(struct poke array[]){
  srand(time(0));
  return array[rand()%9];
}
