#include <iostream>
#include <cassert>
#include <ctime>
#include "fizzbuzz.h"

using namespace std;

void test_divide_with_3(){
    assert( fizzbuzz(3) == "fizz" );
    assert( fizzbuzz(9) == "fizz" );
    assert( fizzbuzz(123 * 3) == "fizz" );
}

void test_divide_with_5(){
    assert( fizzbuzz(5) == "buzz" );
    assert( fizzbuzz(20) == "buzz" );
    assert( fizzbuzz(100 * 5) == "buzz" );
}

void test_divide_with_15(){
    assert( fizzbuzz(15) == "fizzbuzz" );
    assert( fizzbuzz(45) == "fizzbuzz" );
    assert( fizzbuzz(123 * 15) == "fizzbuzz" );
}

void test_divide_with_other(){
    assert( fizzbuzz(1) == "1" );
    assert( fizzbuzz(23) == "23" );
    assert( fizzbuzz(1198) == "1198" );
}

void test(){
  test_divide_with_3();
  test_divide_with_5();
  test_divide_with_15();
  test_divide_with_other();
}

void calculate_time(){
  auto start = clock();
  for(int i = 0; i < 1000000; i++){
    fizzbuzz(i);
  }
  auto end = clock();
  cout << (float)(end - start) / CLOCKS_PER_SEC << " sec." << endl;
}

int main( int argc, char* argv[] ){
  if(argc == 1){
    test();
  }
  else{
    calculate_time();
  }
  return 0;
}

