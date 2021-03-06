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
      return "INT";
    break;
    case BOOL:
      return "BOOL";
    break;
    case CHAR:
      return "CHAR";
    break;
    case PTR:
      return "PTR";
    break;
    case ARR:
      return "ARR";
    break;
    case FUNC:
      return "FUNC";
    break;
    case PROD:
      return "PROD";
    break;
  }
}

void displayType(Type* type){

  // TAG(lhs, rhs)
  printf("%s(", convertEnumToString(type->tag));
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
  
  return 0;
}
