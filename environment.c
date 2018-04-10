#include "environment.h"

void add(Env *env, char* var_name, void* type_var){
  Env *tmp = env;
  if(tmp->first)
	  while(tmp->first->next)
	  {
	    tmp->first = tmp->first->next;
	  }
  Element *elem = malloc(sizeof(*elem));
  elem->str = var_name;
  elem->type = type_var;
  if(tmp->first)
  	tmp->first->next = elem;
  else
  	tmp->first = elem;
}

void* find(Env *env, char* var_name){
  void* type = NULL;
	Env *tmp = env;
	if(tmp->first)
		while(tmp->first){
			if(strcmp(tmp->first->str,var_name) == 0){
				type = tmp->first->type;
			}
			tmp->first = tmp->first->next;
		}
	if(!type)
		printf("Not Found :( ! \n");
	else
		printf("Found ! \n");
		
  return type;
}

int main(){
  Env* env = malloc(sizeof(Env));
  char* type = "type";
  add(env, "name",type);
  add(env, "name2",type);
  printf("%s, %s\n",env->first->type, env->first->str);
  printf("%s, %s\n",env->first->next->type, env->first->next->str);
  find(env, "name");
  return 0;
}
