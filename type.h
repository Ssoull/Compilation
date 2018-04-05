#ifndef TYPE_H_
#define TYPE_H_

typedef enum {INT, BOOL, CHAR, PTR, ARR, FUNC, PROD} Tag;

typedef struct Type {
  Tag tag;
  struct Type* left;
  struct Type* right;
  int min;
  int max;
} Type;

Type* createType(Tag tag, Type* left, Type* right);
void displayType(Type* type);
int EqualTo(Type* type1, Type* type2);


#endif
