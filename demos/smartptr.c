
#include <cpp4c/smartptr.h>
#include <stdio.h>
#include <stdlib.h>

void inner_func(smartptr_t val_ptr) {
  smartptr_wrap_param(val_ptr);
  int *value = smartptr_value(val_ptr, int);
  printf("value: %d smartptr_value: %d\n", *value,
         *smartptr_value(val_ptr, int));

  *value = 10;
}

int main() {
  int *value = (int *)malloc(sizeof(int));
  *value = 1;
  printf("value: %d\n", *value);
  smartref smartptr_t ptr = smartptr_make(value);

  smartref smartptr_t test = smartptr_clone(ptr);
  *smartptr_value(test, int) = 11;
  inner_func(ptr);
  printf("value: %d\n", *smartptr_value(test, int));

  return 0;
}
