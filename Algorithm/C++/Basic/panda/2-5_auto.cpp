#include <iostream>

using namespace std;

int main(){

    //auto
    // c++ 는 데이터, 변수를 선언하면서 대입하는 초기화의 방식을 이용 할 때 
    // auto 를 이용하면자동으로 데이터형 결정 가능

    auto a = 100; //n 은 int
    auto b = 1.5; //x는 float
    auto c = 1.3e12L; //y는 double long(long long)
    // auto를 맹신하는 것은 좋은 습관은 아니다.

    auto d = 0.0; // d 는 float
    float e = 0;  // e 는 float
    auto f = 0;   // f 는 int 

    return 0;
}