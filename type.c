#include<stdlib.h>
#include<stdio.h>
#include"type.h"

Type* createType(Tag tag, Type* left, Type* right){
  Type* tmp = malloc(sizeof(Type));

  tmp->tag = tag;
  tmp->left = left;
  tmp->right = right;

  return tmp;
}

char* convertEnumToString(Tag tag) {
  switch(tag) {
    case INT:
      return 'INT';
    break;
    case BOOL:
      return 'BOOL';
    break;
    case CHAR:
      return 'CHAR';
    break;
    case PTR:
      return 'PTR';
    break;
    case ARR:
      return 'ARR';
    break;
    case FUNC:
      return 'FUNC';
    break;
    case PROD:
      return 'PROD';
    break;
  }
}

void displayType(Type* type){

  // TAG(lhs, rhs)
  printf("%c(", convertEnumToString(type->tag));
  if (type->left) {
    displayType(type->left);
  }

  printf(",");

  if (type->right) {
    displayType(type->right);
  }

  printf(")");
}

int EqualTo(Type* type1, Type* type2){
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
  Type* type = malloc(10*sizeof(*type));
  Type* l = malloc(sizeof(*l));
  l->tag = INT;
  l->left = NULL;
  l->right = NULL;

  Type* r = malloc(sizeof(*r));
  r->tag = PROD;
  r->left = NULL;
  r->right = NULL;

  Type* m = malloc(sizeof(*m));
  m->tag = FUNC;
  m->left = l;
  m->right = r;

  type[0].tag = CHAR;
  type[0].left = m;
  type[0].right = l;

  displayType(type);
  return 0;
}
