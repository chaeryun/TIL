#include <iostream>

using namespace std;

int main()
{
    // 열거체 (enum)
    // 기호 상수를 만드는 것에 대한 또다른 방법.

    enum spectrum
    {
        red,
        orange,
        yellow,
        green,
        blue,
        violet,
        indigo,
        ultraviolet
    }; // red, orange ... : 열거자라 칭함

    /*
    enum spectrum{red = 0, orange = 2, yellow = 4, green,
    blue, violet, indigo, ultraviolet};
    // 직접 열거자들의 값을 초기화 해줄 수 있다. 대신 정수만 가능
    // 초기화하지 않은 값들은 1씩 더해져서 갖게 됨.
    ex) green = 5, blue = 6, violet = 7, indigo = 8 , ultraviolet= 9
    */

    /*
    1. spectrum을 새로운 데이터형 이름으로 만든다
    2. red, orange, yellow ... 다양한 수를 0에서부터 7까지 정수값을 각각
    나타내는 기호 상수로 만든다. red = 0, orange = 1
     */

    spectrum a = orange; // 기호상수 이기 때문에 산술 연산 안됨. 정수형으로 대입은 가능
    cout << a << endl;   // 1

    int b;    // int 형으로 선언해서 대입은 가능.
    b = blue; // 4
    b = blue + 3;
    cout << b << endl;

    return 0;
};