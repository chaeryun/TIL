#include <bits/stdc++.h> // 헤더파일. STL 라이브러리 import.  <bits/stdc.h> 는 모든 표준 라이브러리가 포함된 헤더.

using namespace std; //std라는 namespace를 사용하겠다. 원래는 std::cin로 호출해야하지만 std를 기본으로 설정하겠다는 의미.
// namespace는 모든 식별자(변수, 함수, 형식 등의 이름)이 고유하도록 보장하즌 코드 영역을 정의.

string a; // 문자열 선언

int main(){  // main 함수를 하나만, 무조건 만들어야한다.
  cin >> a;  // 입력
  cout << a << "\n";  // 출력   
  return 0;   // exit call
}
