#include "ruby.h"
#include "math.h"
#include "test.h"

static VALUE test_module = Qnil;

// module Test
//   def say_hello
//     do something
//   end
// end
void Init_test(){
  test_module = rb_define_module("Test");
  rb_define_method(test_module, "say_hello", say_hello, 0);
}

// oh lol..
int factorial(int n){
  if (n <= 1) 
    return 1;
  else
    return n * factorial(n - 1);
}

// so what?
VALUE say_hello(void) {
  int i;
  double num;
  
  for(i = 0; i < 10000000; i++) {
    num = sin(factorial(5));
  }
  printf("sin = %e\n", num);
  
  return Qnil;
}
