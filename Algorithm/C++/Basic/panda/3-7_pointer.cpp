#include <iostream>
#define SIZE 20
#include <cstring>

using namespace std;

int main()
{

    char animal[SIZE]; // animal은 상수 사이즈에 의해서 크기가 20인 char 형 배열.
    char *ps;          // char형의 포인터 ps.
    //  !!! 컴파일 시간에 배열의 크기를 결정하는 것보다  (21번쨰 줄 주석으로 )

    cout << "동물 이름을 입력하십시오.\n";
    cin >> animal; // 입력 받으면 animal 이라는 char 형 배열에 집어 넣음

    ps = new char[strlen(animal) + 1]; // '+ 1' 을 하는 이유는 널 문자 포함하기 위해.
    // strlen 은 실제길이보다는 문자열의 개수를 리턴하기 때문에
    // 문자열 뒤에 숨어있는 '\0' null 문자까지 알아내지 봇한다.  그래서 +1을 해준다.
    // 영문자는 한글자 1바이트, 한글은 2바이트 (안녕하세요 : 문자열길이->10)
    // !!! 실행 시간에 배열의 크기를 결정 하는게 메모리 적 차원에서 더 유리하다!!!!!!
    // 동적(다이나믹) 구조체 생성 가능. 다음 파일로!

    strcpy(ps, animal);
    // strcpy 를 통해서 animal 의 값을 ps 에 복사.

    cout << "입력하신 동물 이름을 복사하였습니다." << endl;
    cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int *)animal << " 입니다." << endl;
    cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int *)ps << " 입니다." << endl;
    // 복사된 동물 주소와 입력받은 동물 주소가 다르다.
    // 입력하신 동물 이름은 Panda이고, 그 주소는 0x7ffee726f180 입니다.
    // 복사된 동물 이름은 Panda이고, 그 주소는 0x7fb7fcd04080 입니다.

    delete[] ps;
    return 0;
}