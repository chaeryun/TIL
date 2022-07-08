#include <iostream>

using namespace std;

int main()
{
    // c++ 특장점 : 사용자의 정의대로, 입맛대로 자료형을 만들 수 있다
    // 그 특 장점이 가장 잘 드러나는 복합데이터형 :구조체
    // 배열 : 같은 데이터형의 집합
    // 구조체 : 다른 데이터 형이 허용되는 데이터의 집합

    //축구선수에 대한 데이터
    struct Mystruct // struct 자동완성. struct 변수명 : Mystruct
    {
        string name;
        string position;
        int height;
        int weight;
    } B; // 뒤에 붙이면 B라는 구조체 자동으로 만들어짐

    Mystruct A = {// A라는 멤버
                "Son",
                "Striker",
                183,
                77};
    cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;

    B = {};
    cout << B.height << endl; // 0

    // 구조체 역시 배열로 선언 가능
    Mystruct C[2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}};

    cout << C[0].name << endl; // A

    return 0;
}