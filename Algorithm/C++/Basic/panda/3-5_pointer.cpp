#include <iostream>

using namespace std;

int main()
{
    //변수 선언  과정
    // 변수데이터형, 변수명 선언. 메모리를 대입하는 공간 : 주소
    int val = 3;

    cout << &val << endl; // 0x7ffee7153208
    // C++ :객체지향 프로그래밍
    /*컴파일 시간이 아닌 실행시간에 어떠한 결정을 내릴 수 있다.
    - 배열을 하나 생성.
    재래적 절차적 프로그래밍 : 배열의 크기가 컴파일 시간에 미리 결정되어야 한다.
    객체지향 프로그래밍 : 배열의 크기를 실행 시간에 결정된다.
    [20] :배열 사이즈가 20개인 배열을 생성했다. 그런데 200개를 넣어야 하는 경우가 생긴다.
    일주일에 한번 200개 배열 사용한다 치자.
    재래적 절차적 프로그래밍에서는 항상 200개짜리 배열을 만들어 놔야한다.
    객체지향에서는 20개의 배열을 쓰다가 가끔 200개로 선언할 수 있다.

    포인터의 요지 : 사용할 주소에 이름을 붙인다.
    즉, 포인터는 포인터의 이름이 주소를 나타낸다
    간접값 연산자, 간접 참조 연산자 : *
     */
    // int *a; // c style
    // int* b; // c++ style
    // int* c, d; // c는 포인터 변수, d 는 일반적인 int 형 변수로 선언된다

    int a = 6; // int a 초기화
    int *b;    // b 는 포인터값

    b = &a; // b에 a의 주소값 대입 : 주소값에는 연산하는게 의미가 없다.

    cout << "a의 값 " << a << endl;    //0x7ffee6a8c208 // a의 값 6
    cout << "*b의 값 " << *b << endl;  // *b의 값 6

    cout << "a의 주소 " << &a << endl;  // a의 주소 0x7ffee6a8c204
    cout << "*b의 주소 " << b << endl;  // *b의 주소 0x7ffee6a8c204

    *b = *b + 1; // 주소값에는 연산하는게 의미가 없다.  주소를 변화시키는 것 뿐

    // 프로그램을 실행하는 동안에 이름이 없는 메모리, 즉 결정되지 않은 메모리를 대입할 수 있다는 점이
    // 포인터의 진정한 의미!

    cout << "이제 a의 값은 " << a << endl;

    return 0;
};