#ifndef _SMARTPTR_H_
#define _SMARTPTR_H_

struct smartptr {
  void *v;
  int references;
};

typedef struct smartptr *smartptr_t;

#define smartref __attribute__((cleanup(smartptr_cleanup_ref)))

#define smartptr_value(ptr, t) (t *)((ptr)->v)
#define smartptr_wrap_param(ptr)                                               \
  smartref smartptr_t __smartptr_param_wrapper_##ptr = smartptr_clone(ptr)

struct smartptr *smartptr_clone(struct smartptr *pointer);
struct smartptr *smartptr_make(void *original);
void smartptr_cleanup_ref(struct smartptr **pointer);

#endif
