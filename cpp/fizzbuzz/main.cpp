#include <iostream>
#include <cassert>
#include <ctime>
#include "fizzbuzz.h"

using namespace std;

void test(){
  for(int i = 1; i < 100; i++){
    string expected = "";
    if(i % 15 == 0){
      expected = "fizzbuzz";
    }
    else if(i % 5 == 0){
      expected = "buzz";
    }
    else if(i % 3 == 0){
      expected = "fizz";
    }
    else{
      char s[10];
      sprintf(s, "%d", i);
      expected = s;
    }

    auto ret = fizzbuzz(i);
    cout << i << " : " << ret << endl;
    assert( ret == expected );
  }
}

void time_calculate(){
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
    time_calculate();
  }
  return 0;
}
