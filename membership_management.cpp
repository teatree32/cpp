#include <iostream>
#include<vector>
#include<string>
using namespace std;

class information {
private:
	string name;
	string phonenumber;
public:
	information(string n, string pnum) : name(n), phonenumber(pnum) {}
	void setName(string& n) { name = n; }
	void setPhoneNumber(string& pnum) { phonenumber = pnum; }
	string getName() { return name; }
	string getPhoneNumber() { return phonenumber; }
};
bool Check( vector<information>& info,  string& n,  string& pnum) {
	for (int i = 0; i < info.size(); i++) {
		if (info[i].getName() == n && info[i].getPhoneNumber() == pnum) {
			return true;
		}
	}
	return false;
}
void Modify(vector<information>& info, string& n, string& pnum) {
	for (int i = 0; i < info.size(); i++) {
		cout << "���ο� ȸ�� ����" << endl;
		cout << "�̸� : ";
		cin >> n;
		cout << "��ȭ��ȣ : ";
		cin >> pnum;
		cout << endl;
		info[i].setName(n);
		info[i].setPhoneNumber(pnum);
		cout << "ȸ�� ���� ������ �Ϸ�Ǿ����ϴ�." << endl << endl;
		return ;
	}
}

int num = 0;

int manu(){
	cout << "***** SWING ȸ�� ���� ���� ���α׷� *****" << endl << endl;
	cout << "1. ȸ������" << endl;
	cout << "2. �α���" << endl;
	cout << "3. ȸ�� ���� ����" << endl;
	cout << "4. ����" << endl << endl;
	cout << "��ȣ�� �Է��ϼ��� : ";
	cin >> num;
	cout << endl;
	return 0;

}
int main() {
	string name;
	string phoneNumber;
	vector<information> members;

	while (1) {
		manu();

		if (num == 1) {
			cout << "*****ȸ�� ������ �����մϴ� *****" << endl << endl;
			cout << "�̸��� �Է��ϼ��� : ";
			cin >> name;
			cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
			cin >> phoneNumber;
			cout << endl;
			
			if (Check(members, name, phoneNumber)==false) {
				cout << "ȸ�������� �Ϸ�Ǿ����ϴ�." << endl << endl;
				members.push_back(information(name, phoneNumber));
			}
			else {
				cout << "�̹� ��ϵ� �����Դϴ�." << endl << endl;
			}
		}
		else if (num == 2) {
			cout << "***** �α����� �����մϴ� *****" << endl << endl;
			cout << "�̸��� �Է��ϼ��� : ";
			cin >> name;
			cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
			cin >> phoneNumber;
			cout << endl;
			if (Check(members, name, phoneNumber) == false) {
				cout << "ȸ�� ������ ��ġ���� �ʽ��ϴ�." << endl << endl;
			}
			else {
				cout << "�α����� �Ϸ�Ǿ����ϴ�." << endl << endl;
				cout << "**** swing " << name <<"���� �����մϴ� *****"<< endl << endl;
			}
		}
		else if (num == 3) {
			cout << "***** ȸ�� ���� ������ �����մϴ� *****" << endl << endl;
			cout << "�̸� : ";
			cin >> name;
			cout << "��ȭ��ȣ : ";
			cin >> phoneNumber;
			cout << endl;
			if (Check(members, name, phoneNumber) == false) {
				cout << "ȸ�� ������ ��ġ���� �ʽ��ϴ�." << endl << endl;
			}
			else {
				Modify(members, name, phoneNumber);
			}
		}
		else if (num == 4) {
			cout << "SWING ȸ�� ���� ���� ���α׷��� �����մϴ�." << endl;
			return 0;
		}
		else {
			cout << "��Ȯ�� ��ȣ�� �Է����ּ���." << endl << endl;
		}
	}

}