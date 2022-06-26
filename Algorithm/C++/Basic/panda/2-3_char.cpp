#include <iostream>

using namespace std;

int main(){
    //char : 작은 문자형; 아스키코드
    int a = 77;

    char b = a;
    cout << b << endl;
    
    char c  = 'a';  
    cout << c << endl;
    // null 문자때문에 char는 작은따옴표('') c++에서 문자는 정수형으로 저장된다.
    // null 문자 '\0' 필요
    char d[] = {'a', 'b', 'c', '\0'};
    // 큰따옴표 에는 명시적으로 null 문자가 포함 -> 예를들어 "a" = 'a' + '\0' 
    cout << d << endl;
    
    return 0;
}