#ifndef SSC_PROGRAMMING_CONTEST_CPP_FIZZBUZZ_H_INCLUDED
#define SSC_PROGRAMMING_CONTEST_CPP_FIZZBUZZ_H_INCLUDED

#include <string>

/*
 nが満たす条件により規定の返り値を返す
   +================+=====================|
   |   << 条件 >>   |    << 返り値 >>     |
   +================+=====================|
   | 3で割り切れる  | "fizz"              |
   |----------------+---------------------|
   | 5で割り切れる  | "buzz"              |
   |----------------+---------------------|
   | 15で割り切れる | "fizzbuzz"          |
   |----------------+---------------------|
   | 上記以外       | nを文字列化したもの |
   +================+=====================|
 */
const std::string& fizzbuzz(int n);


#endif

