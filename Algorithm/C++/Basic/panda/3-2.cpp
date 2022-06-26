#include <iostream>
#include <cstring> // strlen() 함수를 사용하기 위해서 (문자열 길이 반환). cstring 헤더에 정의 되어 있음.


using namespace std;

int main(){
    //사용자 입력
    const int Size = 15;
    char name1[Size]; //비어있는 배열. 배열 사이즈 15
    char name2[Size] = "C++programing"; //문자열 상수로 초기화된 배열

    cout << "안녕하세요! 저는 " << name2;
    cout << "입니다! 성함이 어떻게 되시나요?\n";
    cin >> name1; //'입력받아 name1' 에 저장
    //cin.get(name1, Size);
    cout << "음, " << name1 << "씨, 당신의 이름은 ";
    cout << strlen(name1) << "자입니다만\n";
    cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다. \n"; //sizeof : 변수 바이트 크기 반환.
    //sizeof는 함수가 아닌 컴파일 시간에 해결되는 엄연한 연산자
    cout << "이름이 " << name1[0] << "자로 시작하는군요.\n";
    name2[3] = '\0'; // 처음 세문자를 출력하기 위해서 3번째 index에 null 문자 삽입
    cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
    cout << name2 << endl;

    return 0;
}