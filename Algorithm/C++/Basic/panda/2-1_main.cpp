#include <iostream> // 전처리 지시자. iostream에 f12 눌러보면 cout, endl 함수정의된 것을 볼 수 있다.

/*
c++에서 함수를 사용하고자 한다면
반드시 그 함수의 원형을 미리 정의하여야 합니다.
*/

using namespace std; // cout과
// ';' 종결자로서 세미콜론 이용

int main()
{
    // c++ 코드에는 반드시
    // main의 이름을 가지고 있는 함수가 있어야 한다. 우리가 실행시키는 함수가 main 함수

    cout << "Hello";
    cout << "World!" << endl;

    cout << "Hello World!" << endl;

    return 0;
}
