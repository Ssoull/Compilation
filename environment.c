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
  return 0;
}
