#include <iostream>
#include <cassert>
#include "fizzbuzz.h"

using namespace std;

void test(){
  for(int i = 1; i < 100; i++){
    string s = "";
    if(i % 3 == 0){
      s += "fizz";
    }
    if(i % 5 == 0){
      s += "buzz";
    }
    const string& ret = fizzbuzz(i);
    cout << i << " : " << ret << endl;
    assert( ret == s );
  }
}

void time_calculate(){
}

int main( int argc, char* argv[] ){
  test();
  time_calculate();
  return 0;
}
