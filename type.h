#ifndef TYPE_H_
#define TYPE_H_

enum Tag{INT,BOOL,CHAR,PTR,ARR,FUNC,PROD};
struct Type{
  enum Tag tag;
  struct Type* left;
  struct Type* right;
  int min;
  int max;
}

struct Type* creaType(enum Tag,struct Type*,struct Type*);
void displayType(struct Type*);
int EqualTo(struct Type*,struct Type*);


#endif
