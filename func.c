#include <stdio.h>
#include <stdlib.h>

struct poke {char name[10]; int index;};

/*
int print(struct poke mon){
  printf("the name of %c is %s of pokedex %d", mon, mon.name, mon.index);
  return 0;
  }*/
//strcopy
int main(){
  struct poke a;
  strcpy(a.name, "cyndaquil");
  a.index = 155;

  printf("%s\n",a.name);
  printf("%d\n",a.index);
  return 0;
}
