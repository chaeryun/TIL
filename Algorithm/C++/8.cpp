/* sizeof 연산자
sizeof(x) : x의 크기를 알려줌
x 에는 형(int, float...) 또는 변수 이름이 들어갈 수 있다.

*/

#include <stdio.h>

int main(){
    printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
    int a; char b; float c; double d;
    printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
    // 4 1 4 8 출력. int 크기 4

} 