#include <cpp4c/smartptr.h>
#include <stdlib.h>

struct smartptr *smartptr_make(void *original) {
  struct smartptr *ptr = (struct smartptr *)malloc(sizeof(struct smartptr));
  ptr->v = original;
  ptr->references = 1;
  return ptr;
}

struct smartptr *smartptr_clone(struct smartptr *pointer) {
  pointer->references++;
  return pointer;
}

void smartptr_cleanup_ref(struct smartptr **pointer) {
  (*pointer)->references--;
  if ((*pointer)->references <= 0) {
    free((*pointer)->v);
    free(*pointer);
  }
}
