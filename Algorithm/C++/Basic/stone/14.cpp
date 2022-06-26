#include <stdio.h>

/*
int main(){
  int a = 10;
  int b;

  printf("== 전치 증가 연산 ==\n");
  b = ++a;   // a 에 1을 증가시키고 그 값을 b에 입력시키자. 
  printf("a = %d\n", a);  //  a = 11
  printf("b = %d\n", b);  //  b = 11

}
*/

int main(){
  int a = 10;
  int b;

  printf("== 후치 증가 연산 ==\n");
  b = a++;   // b 에 a를 대입시키고  그 후에 a에 1을 증가시키자. 
  // b = a;
  // a++;    위 두줄 코드와 똑같다.
  printf("a = %d\n", a);  //  a = 11
  printf("b = %d\n", b);  //  b = 10

}