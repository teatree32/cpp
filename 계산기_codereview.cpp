#include <iostream>
#include <cmath>
using namespace std;

int main() {
    while (true) {
        double a, b, r; int c; cout << "=============================\n  ���п� ���� ���α׷�\n=============================\n����� ����� �����ϼ���:\n1. ���ϱ�\n2. ����\n3. ���ϱ�\n4. ������\n5. �ŵ�����\n6. ������\n7. ����\n8. �ڻ���\n9. ź��Ʈ\n"; cin >> c;
        if (c == 1 || c == 2 || c == 3 || c == 4 || c == 5) { cout << "ù ��° ���� �Է�: "; cin >> a; cout << "�� ��° ���� �Է�: "; cin >> b; }
        else if (c == 6 || c == 7 || c == 8 || c == 9) { cout << "���� �Է�: "; cin >> a; }

        switch (c) {
        case 1: r = a + b; break;
        case 2: r = a - b; break;
        case 3: r = a * b; break;
        case 4: if (b == 0) { cout << "0���� ���� �� �����ϴ�.\n"; continue; } r = a / b; break;
        case 5: r = pow(a, b); break;
        case 6: if (a < 0) { cout << "������ �������� ����� �� �����ϴ�.\n"; continue; } r = sqrt(a); break;
        case 7: r = sin(a); break;
        case 8: r = cos(a); break;
        case 9: r = tan(a); break;
        default: cout << "��ȿ���� ���� �����Դϴ�.\n"; continue;
        }
        /*
        �� ����� �Լ��� ǥ���ϸ� �������� ���� �� �ֽ��ϴ�.
        �� ��� ����� �ϴ� �Լ��� ����� main �Լ��� �� ������ ����� ���� �� �����ϴ�.
        */

        cout << "-----------------------------\n ���: " << r << endl << "-----------------------------\n";
        char cont; cout << "��� �Ͻðڽ��ϱ�? (y/n): "; cin >> cont;
        if (cont == 'n' || cont == 'N') break;
        cout << "=============================\n\n";
    }
    return 0;
}
