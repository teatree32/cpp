#include <iostream>
using namespace std;

int num = 0; //라면 번호 변수
char a; // Y/N 구분 변수
int b = 0; // 라면 개수 변수
int totalprice = 0; //누적된 라면 가격 변수



int order() { //메뉴 함수 정의

	cout << "***** 슈니의 라면가게에 오신 것을 환영합니다 *****" << endl << endl;
	cout << "1. 일반 라면 (3500원)" << endl;
	cout << "2. 김치 라면 (4000원)" << endl;
	cout << "3. 치즈 라면 (4200원) " << endl;
	cout << "4. 떡 라면 (4300원)" << endl;
	cout << "5. 떡 만두 라면 (4500원)" << endl << endl;
	cout << "구매하실 라면 번호를 입력해 주세요(종료는 0) : ";
	cin >> num;
	return 0;
}

int total(int* sum, int* p) {//라면 가격 구하는 함수 정의
	int sumsum = (*sum * *p);
	return sumsum;
}

int main() {
	
	string menu[] = { "일반 라면", "김치 라면", "치즈 라면", "떡 라면", "떡 만두 라면" };
	int price[] = { 3500, 4000, 4200, 4300, 4500 };
	int* sum = NULL;
	sum = price; // 라면 가격 포인터
	int* p = &b; //라면 개수 포인터

	
	while (1) {
		order(); //메뉴 출력
		

		if (num < 6 && num > 0) {//1~5 라면 선택할 때
			cout << menu[num-1] << "을(를) 구매하시겠습니까?(Y/N) : ";
			cin >> a;
			if (a == 'Y') {//Y를 입력할 때
				cout << "구매하실 라면 개수를 입력해 주세요 : ";
				cin >> b;
				cout << menu[num-1] << b << "개를 구매하셨습니다. " << endl;
				cout << "가격은 " << total(&price[num-1], &b) << "원 입니다." << endl << endl;
				totalprice += total(&price[num-1], &b);
			}
			else if (a == 'N') {//N을 입력할 때
				continue;
			}
			else { //Y/N 이외에 다른것을 입력할 때
				cout << "잘못된 입력입니다." << endl;
			}
		}

		else if (num == 0) {//0을 이력할 때

			cout << "총 가격은 " <<  totalprice << "원 입니다." << endl;
			return 0;

		}

		else {//0~5이외에 다른것을 입력할 대
			
			cout << "제대로 된 숫자를 입력해주세요." << endl << endl;
		}
	}
}