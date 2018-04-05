#include<stdlib.h>
#include<stdio.h>
#include"type.h"

struct Type* creaType(enum Tag,struct Type*,struct Type*){

}

void displayType(struct Type* type){
  printf("Tag : %d", type->tag )
  printf("Fils : ")
}

int EqualTo(struct Type* type1, struct Type* type2){
  if (type1->tag != type2->tag)
    return 0;

  if (type1->left && type2->left){
    if (!EqualTo(type1->left, type2->left))
      return 0;
    }
  else if(type1->left || type2->left)
    return 0;

  if (type1->right && type2->right){
    if (!EqualTo(type1->right, type2->right))
      return 0;
    }
  else if(type1->right || type2->right)
    return 0;

  return 1;
}

int main(int argc, char const *argv[]) {

  return 0;
}
