#include <iostream>
using namespace std;


int num = 0; //영화 예약 시스템 선택 변수
int a = 0; //좌석 선택시 행을 가르키는 변수
int b = 0; //좌석 선택시 열을 가르키는 변수
int seat[10][6] = { {0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0} };//배열 초기화
int x, y = 0; //인원수 변수 성인:x, 청소년:y
int z = 0; //바꿀 좌석 개수를 가르키는 변수
int sum_x = 0; //누적된 성인 인원수 변수
int sum_y = 0; //누적된 청소년 인원수 변수



int book() { //메뉴 함수 정의

	cout << "**영화 예약 시스템**\n";
	cout << "1. 좌석 예약 시스템 \n2.예약 변경 \n3.프로그램 종료\n";
	cout << "번호를 입력하세요 : ";
	cin >> num;
	return 0;
}

int main() {
	while (1) {
		book(); //메뉴 출력

		if (num == 1) { //1. 좌석 예약시스템
			cout << endl << endl;//예약가능 좌석 보여주기
			cout << "1 2 3 4 5 6" << endl;
			cout << "-----------" << endl;
			cout << endl;

			for (int a = 0; a < 10; ++a) {
				for (int b = 0; b < 6; ++b) {
					cout << seat[a][b] << " ";
				}
				cout << endl;

			}
			cout << endl << "성인(14000원): ";
			cin >> x;
			sum_x += x; //입력된 x값을 누적하여 총 성인 인원수를 구함

			cout << endl << "청소년(11000원): ";
			cin >> y;
			sum_y += y; //입력된 y값을 누적하여 총 청소년 인원수를 구함




			for (int i = 0; i < x + y; ++i) { // 입력한 성인 인원수와 청소년 인원수 만큼 성공할 때까지 반복
				cout << endl << "몇열, 몇번째 좌석을 예약하시겠습니까?" << endl;


				cin >> b;
				cin >> a;

				cout << endl;
				if ((a >= 1 && a <= 10) && (b >= 1 && b <= 6)) { //행과 열을 범위에 맞게 입력했을때
					if (seat[a - 1][b - 1] == 0) { //빈자리라면 예약
						cout << "예약되었습니다." << endl;
						seat[a - 1][b - 1] = 1; //예약좌석으로 바꾸기

					}
					else { // 이미 예약된 좌석일때
						cout << "이미 예약되었습니다. 다른 자리를 선택하세요" << endl;
						i = i - 1;
					}
				}
				else { //행과 열을 범위에 맞지 않게 입력했을때
					cout << "예약가능한 좌석이 아닙니다." << endl;
					i = i - 1;
				}
			}
			cout << endl << endl; //예약을 성공하면 예약한 좌석 보여줌
			cout << "1 2 3 4 5 6" << endl;
			cout << "-----------" << endl;
			cout << endl;

			for (int a = 0; a < 10; ++a) {
				for (int b = 0; b < 6; ++b) {
					cout << seat[a][b] << " ";
				}
				cout << endl;

			}
			cout << endl;

		}
		else if (num == 2) { //2.예약 변경
			cout << endl << endl; //예약된 좌석을 보여줌
			cout << "1 2 3 4 5 6" << endl;
			cout << "-----------" << endl;
			cout << endl;

			for (int a = 0; a < 10; ++a) {
				for (int b = 0; b < 6; ++b) {
					cout << seat[a][b] << " ";
				}
				cout << endl;

			}
			cout << "바꿀 좌석의 갯수를 입력하세요 : ";
			cin >> z;

			for (int o = 0; o < z; ++o) { //변경할 좌석수만큼 성공할때까지 반복
				cout << "현재 좌석과 바꿀 좌석을 입력하세요" << endl;
				cout << "현재 좌석(N열, M번째): ";
				cin >> b;
				cin >> a;

				if ((a >= 1 && a <= 10) && (b >= 1 && b <= 6)) {//현재좌석을 범위에 맞게 입력했을 때
					if (seat[a - 1][b - 1] == 1) {//현재 좌석을 알맞게 입력했을 때
						
						cout << "변경 좌석(n열, m번째): ";

						int c = a - 1; //현재 좌석 행,열값 저장
						int d = b - 1;

						cin >> b;
						cin >> a;

						if ((a >= 1 && a <= 10) && (b >= 1 && b <= 6)) { //변경 좌석을 범위에 맞게 입력했을 때
							if (seat[a - 1][b - 1] == 0) {//빈자리면 변경
								cout << "변경되었습니다." << endl;
								seat[c][d] = 0; //현재 좌석을 빈자리 바꿈
								seat[a - 1][b - 1] = 1; //예약좌석으로 바꾸기
							}
							else if (int(a - 1) == c && int(b - 1) == d) {//현재 좌석과 똑같은 좌석을 입력했을때
								cout << "똑같은 자리 입니다. 다른 좌석을 선택하세요" << endl;
								
								o = o - 1;
							}
							else {//빈자리가 아닐때
								cout << "이미 예약되었습니다. 다른 좌석을 선택하세요" << endl;
							
								o = o - 1;
							}
						}
						else {//변경 좌석을 범위에 맞지 않게 입력했을 때
							cout << "좌석 번호를 다시 입력해주세요" << endl;
							seat[c][d] = 1; //저장한 현재 좌석을 다시 예약된 좌석으로 변경
							o = o - 1;

						}



					}
					else {//현재 좌석을 알맞지 않게 입력했을 때
						cout << "현재 좌석이 틀렸습니다. 다시 입력해주세요" << endl;
						o = o - 1;
					}
				}
				else {// 현재 좌석을 범위에 맞지 않게 입력했을 때
					cout << "좌석 번호를 다시 입력해주세요" << endl;
					o = o - 1;
				}
			}
			cout << endl << endl; //변경된 좌석 보여주기
			cout << "1 2 3 4 5 6" << endl;
			cout << "-----------" << endl;
			cout << endl;

			for (int a = 0; a < 10; ++a) {
				for (int b = 0; b < 6; ++b) {
					cout << seat[a][b] << " ";
				}
				cout << endl;

			}

		}

		else if (num == 3) { //3. 프로그램 종료
			int total = 14000 * sum_x + 11000 * sum_y; //총 성인 인원수에 14000원 곱하고 총 청소년 인원수에 11000원곱해서 더한 총 금액 변수
			cout << "총" << total << "원 입니다."; //총 금액 출력
			return 0;
		}

		else {//1,2,3 외에 다른 숫자를 입력했을 때
			cout << "올바른 숫자를 입력해주세요" << endl << endl;

		}

	}




}