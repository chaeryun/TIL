#include <iostream>

using namespace std;

int main(){
    int a; //선언
    a = 7; //대입

    int b = 3; //초기화

    a = 5;
    b = 10;

    cout << "a = " << a << ", b = " << b << endl;
    cout << "a = " << &a << ", b = " << &b << endl; //주소값 출력

    return 0;
}