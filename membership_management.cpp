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
		cout << "새로운 회원 정보" << endl;
		cout << "이름 : ";
		cin >> n;
		cout << "전화번호 : ";
		cin >> pnum;
		cout << endl;
		info[i].setName(n);
		info[i].setPhoneNumber(pnum);
		cout << "회원 정보 수정이 완료되었습니다." << endl << endl;
		return ;
	}
}

int num = 0;

int manu(){
	cout << "***** SWING 회원 정보 관리 프로그램 *****" << endl << endl;
	cout << "1. 회원가입" << endl;
	cout << "2. 로그인" << endl;
	cout << "3. 회원 정보 수정" << endl;
	cout << "4. 종료" << endl << endl;
	cout << "번호를 입력하세요 : ";
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
			cout << "*****회원 가입을 진행합니다 *****" << endl << endl;
			cout << "이름을 입력하세요 : ";
			cin >> name;
			cout << "전화번호를 입력하세요 : ";
			cin >> phoneNumber;
			cout << endl;
			
			if (Check(members, name, phoneNumber)==false) {
				cout << "회원가입이 완료되었습니다." << endl << endl;
				members.push_back(information(name, phoneNumber));
			}
			else {
				cout << "이미 등록된 정보입니다." << endl << endl;
			}
		}
		else if (num == 2) {
			cout << "***** 로그인을 진행합니다 *****" << endl << endl;
			cout << "이름을 입력하세요 : ";
			cin >> name;
			cout << "전화번호를 입력하세요 : ";
			cin >> phoneNumber;
			cout << endl;
			if (Check(members, name, phoneNumber) == false) {
				cout << "회원 정보가 일치하지 않습니다." << endl << endl;
			}
			else {
				cout << "로그인이 완료되었습니다." << endl << endl;
				cout << "**** swing " << name <<"님을 응원합니다 *****"<< endl << endl;
			}
		}
		else if (num == 3) {
			cout << "***** 회원 정보 수정을 진행합니다 *****" << endl << endl;
			cout << "이름 : ";
			cin >> name;
			cout << "전화번호 : ";
			cin >> phoneNumber;
			cout << endl;
			if (Check(members, name, phoneNumber) == false) {
				cout << "회원 정보가 일치하지 않습니다." << endl << endl;
			}
			else {
				Modify(members, name, phoneNumber);
			}
		}
		else if (num == 4) {
			cout << "SWING 회원 정보 관리 프로그램을 종료합니다." << endl;
			return 0;
		}
		else {
			cout << "정확한 번호를 입력해주세요." << endl << endl;
		}
	}

}