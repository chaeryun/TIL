#include <iostream>

using namespace std;

int main(){
    //데이터형 변환
    /*
    --> 1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
    2. 수식에 데이터형을 혼합하여 사용했을 때
    3. 함수에 매개변수를 전달할때
    */
    int a = 3.141592;
    cout << a << endl; // int라서 3 으로 출력 : 위 1번 사항의 경우에 해당

    //강제적으로 데이터형 변환 시킬 때
    // typeName(a) or (typeName)a
    char ch = 'M';
    cout << (int)ch << " " << ch << " " << int(ch) << endl; // 77 M 77

    //static_cast<typeName>
    cout << static_cast<int>(ch) << endl; // 77
    
    return 0;
}