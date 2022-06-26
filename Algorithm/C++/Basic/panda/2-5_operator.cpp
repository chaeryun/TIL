#include <iostream>

using namespace std;

int main()
{

    /* 연산자 : + - * / %
    / : 나누기 (결과값은 '몫', 둘 중 하나라도 부동소수점(실수)인 경우 결과값은 실수)
    % : 나머지 (피연산자가 부동 소수점(실수)인  사용 불가)
    */
    int n = 3 + 2; // 피연산자 : 3, 2  연산자 : +

    cout << n << endl; // 5

    int a = 10;
    int b = 3;

    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a % b;

    cout << "c : " << c << endl; // 13
    cout << "d : " << d << endl; // 7
    cout << "e : " << e << endl; // 30
    cout << "f : " << f << endl; // 3
    cout << "g : " << g << endl; // 1

    // c++가 복잡한 산술 연산을 수행하려면?

    int x = 10;
    int y = 3;
    int z = 5;

    int multiple1 = x + y * z; //(기본적인 일반 대수학 연산 순서를 따라간다.)
    int multiple2 = x / y * z; // 왼쪽에서 오른쪽으로-> a/b = 3, 3 * c = 15

    cout << multiple1 << endl; // 25
    cout << multiple2 << endl; // 15

    int j = 9;
    float m = 5.0;

    cout << j / m << endl; // 1.8

    return 0;
}