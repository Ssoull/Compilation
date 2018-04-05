#include "environment.h"

void add(Env *env, char* var_name, void* type_var){
  Env *tmp = env;
  
  while(tmp->first->next)
  {
    
    printf("Coucou");
    tmp->first = tmp->first->next;
  }
   printf("Coucou2");
  Element *elem = malloc(sizeof(*elem));
  elem->str = var_name;
  elem->type = type_var;
  tmp->first = elem;
}

void* find(Env env, char* var_name){
  void* type;
  //TODO
  return type;
}

int main(){
  Env* env = malloc(sizeof(env));
  char* type = "type";
  add(env, "name",type);
  printf("%s, %s\n",env->first->type, env->first->str);
  return 0;
}
