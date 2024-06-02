#include <iostream>
#include <cmath>
using namespace std;

// ���ϱ� �Լ�
double add(double a, double b) {
    return a + b;
}

// ���� �Լ�
double subtract(double a, double b) {
    return a - b;
}

// ���ϱ� �Լ�
double multiply(double a, double b) {
    return a * b;
}

// ������ �Լ�
double divide(double a, double b) {
    if (b == 0) {
        throw "0���� ���� �� �����ϴ�.";
    }
    return a / b;
}

// �ŵ����� �Լ�
double power(double a, double b) {
    return pow(a, b);
}

// ������ �Լ�
double squareRoot(double a) {
    if (a < 0) {
        throw "������ �������� ����� �� �����ϴ�.";
    }
    return sqrt(a);
}

// ���� �Լ�
double sine(double a) {
    return sin(a);
}

// �ڻ��� �Լ�
double cosine(double a) {
    return cos(a);
}

// ź��Ʈ �Լ�
double tangent(double a) {
    return tan(a);
}

int main() {
    while (true) {
        int num;
        cout << "=============================\n  ���п� ���� ���α׷�\n=============================\n����� ����� �����ϼ���:\n1. ���ϱ�\n2. ����\n3. ���ϱ�\n4. ������\n5. �ŵ�����\n6. ������\n7. ����\n8. �ڻ���\n9. ź��Ʈ\n";
        cin >> num;

        double a, b, r;
        switch (num) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "ù ��° ���� �Է�: "; cin >> a; 
            cout << "�� ��° ���� �Է�: "; cin >> b;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "���� �Է�: "; cin >> a;
            break;
        default:
            cout << "��ȿ���� ���� �����Դϴ�.\n"; continue;
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

        cout << "-----------------------------\n ���: " << r << endl << "-----------------------------\n";

        char cont;
        cout << "��� �Ͻðڽ��ϱ�? (y/n): ";
        cin >> cont;
        if (cont == 'n' || cont == 'N') break;
     
        cout << "=============================\n\n";
    }
    return 0;
}
