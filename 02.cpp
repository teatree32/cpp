#include <iostream>
using namespace std;

int num = 0; //��� ��ȣ ����
char a; // Y/N ���� ����
int b = 0; // ��� ���� ����
int totalprice = 0; //������ ��� ���� ����



int order() { //�޴� �Լ� ����

	cout << "***** ������ ��鰡�Կ� ���� ���� ȯ���մϴ� *****" << endl << endl;
	cout << "1. �Ϲ� ��� (3500��)" << endl;
	cout << "2. ��ġ ��� (4000��)" << endl;
	cout << "3. ġ�� ��� (4200��) " << endl;
	cout << "4. �� ��� (4300��)" << endl;
	cout << "5. �� ���� ��� (4500��)" << endl << endl;
	cout << "�����Ͻ� ��� ��ȣ�� �Է��� �ּ���(����� 0) : ";
	cin >> num;
	return 0;
}

int total(int* sum, int* p) {//��� ���� ���ϴ� �Լ� ����
	int sumsum = (*sum * *p);
	return sumsum;
}

int main() {
	
	string menu[] = { "�Ϲ� ���", "��ġ ���", "ġ�� ���", "�� ���", "�� ���� ���" };
	int price[] = { 3500, 4000, 4200, 4300, 4500 };
	int* sum = NULL;
	sum = price; // ��� ���� ������
	int* p = &b; //��� ���� ������

	
	while (1) {
		order(); //�޴� ���
		

		if (num < 6 && num > 0) {//1~5 ��� ������ ��
			cout << menu[num-1] << "��(��) �����Ͻðڽ��ϱ�?(Y/N) : ";
			cin >> a;
			if (a == 'Y') {//Y�� �Է��� ��
				cout << "�����Ͻ� ��� ������ �Է��� �ּ��� : ";
				cin >> b;
				cout << menu[num-1] << b << "���� �����ϼ̽��ϴ�. " << endl;
				cout << "������ " << total(&price[num-1], &b) << "�� �Դϴ�." << endl << endl;
				totalprice += total(&price[num-1], &b);
			}
			else if (a == 'N') {//N�� �Է��� ��
				continue;
			}
			else { //Y/N �̿ܿ� �ٸ����� �Է��� ��
				cout << "�߸��� �Է��Դϴ�." << endl;
			}
		}

		else if (num == 0) {//0�� �̷��� ��

			cout << "�� ������ " <<  totalprice << "�� �Դϴ�." << endl;
			return 0;

		}

		else {//0~5�̿ܿ� �ٸ����� �Է��� ��
			
			cout << "����� �� ���ڸ� �Է����ּ���." << endl << endl;
		}
	}
}