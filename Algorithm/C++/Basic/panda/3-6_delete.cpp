#include <iostream>

using namespace std;

int main()
{
    // delete 연산자
    /*
    사용한 메모리를 다시 메모리 폴로 환수
    환수된 메모리는 프로그램의 다른 부분이 다시 사용
     */

    int *ps = new int;
    //메모리 사용
    delete ps; // new 를 사용했다면 꼭 delete 필수!!
    /*
    1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다
    2. 같은 메모리 블록을 연달아 두번 delete로 해제할 수 없다
    3. new[] 로 메모리를 대입할 경우 delete[]로 해제한다
    4. new를 사용할 시 대괄호를사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다.
     */
    double *p3 = new double[3]; // p3에는 double형 데이터 3개를 저장할 수 있는 공간이 대입됨.
    p3[0] = 0.2;                // 각각의 인덱스에 값을 초기화시킴                  //p3를 배열처럼 취급.
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 + 1; // pointer의 데이터 형의 바이트 수 증가. 따라서 더블의 바이트 수만큼 주소 증가.
    // 포인터를 증가시킨다. p3가 단순한 배열이라면 값 변경 X.
    // p3 에 1을 더한다는 의미는. p3 자체가 'double형 데이터 3개를 저장할 수 있는 공간'에 대한 변수이기 떄문에
    // +1 은 double형 데이터 공간 한개로 의미되기 때문에 " Now p3[0] is 0.5 and p3[1] is 0.8 "

    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << "\n.";

    p3 = p3 - 1; // 다시 시작 위치를 지시한다
    delete[] p3; //배열 메모리를 해제한다
    cin.get();

    return 0;
};