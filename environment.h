#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Env
{
  struct Element *first;
}Env;

typedef struct Element{
  char* str;
  void* type;
  struct Element *next;
}Element;

void add(Env *env,char* var_name, void* type);
void* find(Env *env, char* var_name);
