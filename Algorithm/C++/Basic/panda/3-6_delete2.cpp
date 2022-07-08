#include <iostream>

using namespace std;

int main()
{

    double *p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    /* p3에 포함된 배열들의 위치가 1씩 옆으로 옮겨졌다는 의미입니다.

    단, 보다 엄밀히 말하자면 p3는 double 데이터형이기 때문에 8byte씩 옆으로 옮겨졌다는 표현이 보다 정확합니다.

    (당연히 p3의 데이터형을 int로 바꾼다면 4byte씩 옆으로 옮겨지겠죠?)

    p3[0]의 주소를 ` X `라 할때, p3 배열의 주소는 아래와 같습니다.

    &p3[0] = X

    &p3[1] = X + 8byte

    &p3[2] = X + 16byte

    p3 + 1의 주소는 아래와 같습니다.

    &p3[0] = X + 8byte

    &p3[1] = X + 16byte

    &p3[2] = X + 24byte

    저희 예제 상에서,

    X에는 0.2, X+8byte에는 0.5, X+16byte에는 0.8이 저장되어 있기 때문에,

    연산을 하기 전 p3[0]은 0.2를 가리키게 되고, 연산을 진행한 후 에는 0.5를 가리키게 됩니다.

    직접 코드를 만들어 실행해보시면 보다 쉽게 이해가 될 것 같습니다 :) */
    cout << "p3[0] is " << p3[0] << " at " << &p3[0] << endl;
    cout << "p3[1] is " << p3[1] << " at " << &p3[1] << endl;
    cout << "p3[2] is " << p3[2] << " at " << &p3[2] << endl;

    p3 = p3 + 1;

    cout << "p3[0] is " << p3[0] << " at " << &p3[0] << endl;
    cout << "p3[1] is " << p3[1] << " at " << &p3[1] << endl;
    cout << "p3[2] is " << p3[2] << " at " << &p3[2] << endl;

    p3 = p3 - 1;
    delete[] p3;

    return 0;
}