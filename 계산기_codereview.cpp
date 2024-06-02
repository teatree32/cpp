#include <iostream>
#include <cmath>
using namespace std;

int main() {
    while (true) {
        double a, b, r; int c; cout << "=============================\n  공학용 계산기 프로그램\n=============================\n사용할 기능을 선택하세요:\n1. 더하기\n2. 빼기\n3. 곱하기\n4. 나누기\n5. 거듭제곱\n6. 제곱근\n7. 사인\n8. 코사인\n9. 탄젠트\n"; cin >> c;
        if (c == 1 || c == 2 || c == 3 || c == 4 || c == 5) { cout << "첫 번째 숫자 입력: "; cin >> a; cout << "두 번째 숫자 입력: "; cin >> b; }
        else if (c == 6 || c == 7 || c == 8 || c == 9) { cout << "숫자 입력: "; cin >> a; }

        switch (c) {
        case 1: r = a + b; break;
        case 2: r = a - b; break;
        case 3: r = a * b; break;
        case 4: if (b == 0) { cout << "0으로 나눌 수 없습니다.\n"; continue; } r = a / b; break;
        case 5: r = pow(a, b); break;
        case 6: if (a < 0) { cout << "음수의 제곱근은 계산할 수 없습니다.\n"; continue; } r = sqrt(a); break;
        case 7: r = sin(a); break;
        case 8: r = cos(a); break;
        case 9: r = tan(a); break;
        default: cout << "유효하지 않은 선택입니다.\n"; continue;
        }
        /*
        각 계산을 함수로 표현하면 가독성을 높일 수 있습니다.
        각 계산 기능을 하는 함수를 만들어 main 함수를 더 간결히 만들면 좋을 것 같습니다.
        */

        cout << "-----------------------------\n 결과: " << r << endl << "-----------------------------\n";
        char cont; cout << "계속 하시겠습니까? (y/n): "; cin >> cont;
        if (cont == 'n' || cont == 'N') break;
        cout << "=============================\n\n";
    }
    return 0;
}
