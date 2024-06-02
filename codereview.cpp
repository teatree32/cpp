
#include <iostream>
#include <string>
using namespace std;

int main() {
	string menu[] = { "일반 라면", "김치 라면", "치즈 라면", "떡 라면", "떡 만두 라면" };
	int prices[] = { 3500, 4000, 4200, 4300, 4500 };
	/*
	메뉴를 배열로 정의했으니, 
	밑에처럼 텍스트가 아닌 배열을 활용하여 메뉴화면을 구성하면 중복을 줄일 수 있을것 같습니다. 
	*/
	int totalcomprice = 0; 
	/*
	라면의 총 구매 가격을 의미하는것 같습니다.
	변수명이 직관적이지 않아 의미를 이해하기가 어렵습니다.
	보다 명확하고 직관적인 변수명을 사용하면 좋을것 같습니다.
	*/
	while (true) { //무한루프
		cout << endl;
		cout << "***** 슈니의 라면가게에 오신 것을 환영합니다 *****" << endl;
		cout << "1. 일반 라면 (3500원)" << endl;
		cout << "2. 김치 라면 (4000원)" << endl;
		cout << "3. 치즈 라면 (4200원)" << endl;
		cout << "4. 떡 라면 (4300원)" << endl;
		cout << "5. 떡 만두 라면 (4500원)" << endl;
		cout << endl;
		cout << "구매하실 라면 번호를 입력해 주세요(종료는 0) : ";
		/*
		메뉴화면을 구성하는 코드를 main 함수가 아니라 다른 함수로 분리하여 작성하면 좋을것 같습니다.
		*/

		int num;
		cin >> num;

		if (num == 0) {
			cout << "총 가격은 " << totalcomprice << "원 입니다." << endl;
			break;
		}

		if (num >= 1 && num <= 5) {
			cout << menu[num - 1] << "을(를) 구매하시겠습니까? (Y/N) ";

			char choice;
			cin >> choice;

			choice = toupper(choice);

			if (choice == 'Y') {
				cout << "구매하실 라면 개수를 입력해 주세요 : ";

				int comnum;
				cin >> comnum;
				/*
				라면의 구매 개수를 의미하는것 같습니다.
				변수명이 직관적이지 않아 의미를 이해하기가 어렵습니다.
				보다 명확하고 직관적인 변수명을 사용하면 좋을것 같습니다.
				*/

				if (comnum > 0) {
					int totalcomnum = prices[num - 1] * comnum;
					/*
					라면의 구매 가격을 의미하는것 같습니다.
					변수명이 직관적이지 않아 의미를 이해하기가 어렵습니다.
					보다 명확하고 직관적인 변수명을 사용하면 좋을것 같습니다.
					*/
					totalcomprice += totalcomnum;
					/*
					라면 총 구매 가격을 나타내기 위해 라면 구매 가격을 누적하는 것으로 보입니다.
					이렇게 누적하는 것도 좋지만 포인터를 사용하여 main 함수가 아닌 다른 함수로 분리하여 작성하면 더 좋을것 같습니다.
					*/
					cout << "가격은 " << totalcomnum << "원 입니다." << endl;
				}
				
				else {
					cout << "잘못된 수량입니다. 다시 입력해주세요." << endl;
				}
			}
			else if (choice == 'N') {
				continue;
			}
			else {
				cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
			}
		}
		else {
			cout << "잘못된 메뉴 번호입니다. 다시 입력해주세요." << endl;
		}
	}
}
