#include <iostream>

using namespace std;

int main()
{
    /*
    c++ 에서 문자열을 다루는 방법중 하나인 string
    c스타일로 string 객체를 초기화 할 수 있다.
    cin을 사용하여 입력받을 수 있다.
    cout 을 사용하여 출력 가능
    !!! String 만의 장점 : 배열은 다른 배열에 통쨰로 대입할 수 없지만 string은 가능!!!
    */
    char char1[20]; // char 형 배열
    char char2[20] = "jaguar";
    string str1;
    string str2 = "panda";
    // char1 = char2; //틀리다   배열은 대입 불가!!!
    str1 = str2;             // 맞다       string은 대입 가능!!!
    cout << str1[0] << endl; // p
    cout << str1 << endl;    // panda
    return 0;

    return 0;
}