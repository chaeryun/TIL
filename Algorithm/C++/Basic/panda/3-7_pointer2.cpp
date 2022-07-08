#include <iostream>
#define SIZE 20

using namespace std;

struct MyStruct
{
    char name[20];
    int age;
};

int main()
{

    MyStruct *temp = new MyStruct;

    cout << "당신의 이름을 입력하십시오.\n";
    cin >> temp->name;
    // 3-3 struct 에서는 A.name 으로 적었는데 '.' 대신 '->'연산자 또는 (*temp).age 작성
    //  구조체 변수명 : temp
    cout << "당신의 나이를 입력하십시오.\n";
    cin >> (*temp).age;

    cout << "안녕하세요! " << temp->name << "씨!\n";
    cout << "당신은 " << temp->age << "살 이군요!\n";

    delete temp;

    /*
    new 연산자를 통해 동적으로 선언된 구조체는 화살표 멤버 연산자를 사용하거나
    구조체 변수의 멤버 앞에 *을 붙이고 점을 찍어서 사용하면 구조체의 멤버에 접근 가능하다.
    temp->name
    (*temp).age
     */

    return 0;
}