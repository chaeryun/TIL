#include <iostream>

using namespace std;

int main()
{
    //공용체(union)  -> 운영체제나 하드웨어 구조에 자주 사용. 메모리를 아낄 수는 있지만 잘 쓰진 않음
    //서로 다른 데이터형을 한번에 한가지만 보관할 수 있음

    union Myunion
    {
        int intVal;
        long longVal;
        float floatVal;
    };

    Myunion test;
    test.intVal = 3;
    cout << test.intVal << endl; // 3
    test.longVal = 33;
    cout << test.intVal << endl;  // 33
    cout << test.longVal << endl; // 33
    test.floatVal = 3.3;
    cout << test.intVal << endl;   // 1079194419
    cout << test.longVal << endl;  // 1079194419
    cout << test.floatVal << endl; // 3.3

    return 0;
}