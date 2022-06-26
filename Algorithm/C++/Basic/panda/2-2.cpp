#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // short < int < long < long long
    /*
    int는 4바이트이다.
    이 바이트의 최대값은 2147483647 이다.
    short은 2바이트이다.  -32768 ~ 32767
    이 바이트의 최대값은 32767 이다.
    long은 8바이트이다.
    이 바이트의 최대값은 9223372036854775807 이다.
    long long은 8바이트이다.
    이 바이트의 최대값은 9223372036854775807 이다.
    */
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int는 " << sizeof n_int << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;

    cout << "short은 " << sizeof n_short << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;

    cout << "long은 " << sizeof n_long << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;

    cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;

    // 음의 범위는 사용하지 않겠다! unsigned를 쓰면 좀더 넓은 범위 사용 가능
    unsigned int a = -1;
    cout << a << endl;
    unsigned short b = -1; // 0 ~ 65535
    cout << b << endl;     // 65535
    unsigned long c = -1;
    cout << c << endl;
    unsigned long long d = -1;
    cout << d << endl;

    return 0;
}
