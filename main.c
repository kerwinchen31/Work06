#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "func.h"

int main(){
  struct poke a;
  strcpy(a.name, "cyndaquil");
  a.index = 155;

  printf("%s\n",a.name);
  printf("%d\n",a.index);

  struct poke b;
  strcpy(b.name, "snivy");
  b.index = 495;

  struct poke c;
  strcpy(c.name, "servine");
  c.index = 496;

  struct poke d;
  strcpy(d.name, "serperior");
  d.index = 497;

  struct poke e;
  strcpy(e.name, "tepig");
  e.index = 498;

  struct poke f;
  strcpy(f.name, "pignite");
  f.index = 499;

  struct poke g;
  strcpy(g.name, "emboar");
  g.index = 500;

  struct poke h;
  strcpy(h.name, "oshawott");
  h.index = 501;

  struct poke i;
  strcpy(i.name, "dewott");
  i.index = 502;

  struct poke j;
  strcpy(j.name, "samurott");
  j.index = 503;

  struct poke pokedex[10] = {a,b,c,d,e,f,g,h,i,j};

  for(int x=0; x<10; x++){
    printf("%d: %s, %d\n", x, pokedex[x].name, pokedex[x].index);
  }

  struct poke randPoke = choosePoke(pokedex);
  printf("Random pokemon: %s, Index: %d\n", randPoke.name, randPoke.index);

  myprint(randPoke);
  
  changeVals(&a, "victini", 494);
  
  for(int x=0; x<10; x++){
    printf("%d: %s, %d\n", x, pokedex[x].name, pokedex[x].index);
  }
  myprint(a);
  
  return 0;
}
