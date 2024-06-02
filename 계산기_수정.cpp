#include <iostream>
#include <cmath>
using namespace std;

// 더하기 함수
double add(double a, double b) {
    return a + b;
}

// 빼기 함수
double subtract(double a, double b) {
    return a - b;
}

// 곱하기 함수
double multiply(double a, double b) {
    return a * b;
}

// 나누기 함수
double divide(double a, double b) {
    if (b == 0) {
        throw "0으로 나눌 수 없습니다.";
    }
    return a / b;
}

// 거듭제곱 함수
double power(double a, double b) {
    return pow(a, b);
}

// 제곱근 함수
double squareRoot(double a) {
    if (a < 0) {
        throw "음수의 제곱근은 계산할 수 없습니다.";
    }
    return sqrt(a);
}

// 사인 함수
double sine(double a) {
    return sin(a);
}

// 코사인 함수
double cosine(double a) {
    return cos(a);
}

// 탄젠트 함수
double tangent(double a) {
    return tan(a);
}

int main() {
    while (true) {
        int num;
        cout << "=============================\n  공학용 계산기 프로그램\n=============================\n사용할 기능을 선택하세요:\n1. 더하기\n2. 빼기\n3. 곱하기\n4. 나누기\n5. 거듭제곱\n6. 제곱근\n7. 사인\n8. 코사인\n9. 탄젠트\n";
        cin >> num;

        double a, b, r;
        switch (num) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "첫 번째 숫자 입력: "; cin >> a; 
            cout << "두 번째 숫자 입력: "; cin >> b;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "숫자 입력: "; cin >> a;
            break;
        default:
            cout << "유효하지 않은 선택입니다.\n"; continue;
        }

        switch (num) {
        case 1: r = add(a, b); break;
        case 2: r = subtract(a, b); break;
        case 3: r = multiply(a, b); break;
        case 4: r = divide(a, b); break;
        case 5: r = power(a, b); break;
        case 6: r = squareRoot(a); break;
        case 7: r = sine(a); break;
        case 8: r = cosine(a); break;
        case 9: r = tangent(a); break;
        }

        cout << "-----------------------------\n 결과: " << r << endl << "-----------------------------\n";

        char cont;
        cout << "계속 하시겠습니까? (y/n): ";
        cin >> cont;
        if (cont == 'n' || cont == 'N') break;
     
        cout << "=============================\n\n";
    }
    return 0;
}
