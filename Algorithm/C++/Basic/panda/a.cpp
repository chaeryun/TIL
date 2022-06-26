#include <iostream>

using namespace std;

int main()
{

    short month1[] = {1, 2, 3}; // 데이터형 short 2byte(-32,768 ~ 32,767)
    cout << month1[0] << endl;  // 1
    cout << month1[1] << endl;  // 2
    cout << month1[5] << endl;  // 0

    return 0;
}