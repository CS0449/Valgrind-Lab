#include <stdio.h>
#include <stdlib.h>

struct Node {
   struct Node *l;
   struct Node *r;
};

struct Node* mk()
{
   struct Node *x = malloc(sizeof(struct Node));
   x->l = NULL;
   x->r = NULL;
   return x;
}

struct Node* t;

void createTree()
{
   t       = mk();   // A
   t->l    = mk();   // B
   t->r    = mk();   // C
   t->l->l = mk();   // D
   t->l->r = mk();   // E
   t->r->l = mk();   // F
   t->r->r = mk();   // G

   /* To fix, comment these out */
   t->l->l = NULL;
   t->r = NULL;
}

void deleteTree()
{
   /* To fix, fill in with free() calls. Order of freeing is important.
    * Be careful not to access memory that has already been freed. */
}

int main()
{
   createTree();
   deleteTree();
   return 0;
}

