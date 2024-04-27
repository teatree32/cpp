#include <iostream>
using namespace std;

class circle {
private:
	double radius;

public:
	circle(double r) {
		radius = r;
		cout << "***평면 원 계산기 접속***" << endl << endl;
	}
	~circle() {
		cout << "평면 원 계산기 종료..." << endl << endl;
	}

	double area() {
		return  3.14 * radius * radius;
	}
	double perimeter() {
		return 2 * 3.14 * radius;
	}
};

class cylinder {
private:
	double radius;
	double height;

public:
	cylinder(double r, double h) {
		radius = r;
		height = h;
		cout << "***원기둥 계산기 접속***" << endl << endl;
	}
	~cylinder() {
		cout << "원기둥 계산기 종료..." << endl << endl;
	}

	double volume() {
		return  3.14 * radius * radius * height;
	}
	double o_area() {
		return 2 * 3.14 * radius *radius + 2 * 3.14 * radius * height;
	}
};

class cone {
private:
	double radius;
	double height;

public:
	cone(double r, double h) {
		radius = r;
		height = h;
		cout << "***원뿔 부피 계산기 접속***" << endl << endl;
	}
	~cone() {
		cout << "원뿔 부피 계산기 종료..." << endl << endl;
	}

	double volume() {
		return  3.14 * radius * radius * height / 3;
	}

};

class sphere {
private:
	double radius;

public:
	sphere(double r) {
		radius = r;
		cout << "***구 계산기 접속***" << endl << endl;
	}
	~sphere() {
		cout << "구 계산기 종료..." << endl << endl;
	}

	double volume() {
		return  3.14 * radius * radius * radius * 4 / 3;
	}
	double o_area() {
		return 4 * 3.14 * radius * radius;
	}
};

int num = 0;


int manu() {
	cout << "원하는 계산을 선택하세요" << endl;
	cout << "1. 원의 넓이 계산" << endl;
	cout << "2. 원의 둘레 계산" << endl;
	cout << "3. 원기둘의 부피 계산" << endl;
	cout << "4. 원기둥의 겉넓이 계산" << endl;
	cout << "5. 원뿔의 부피 걔산" << endl;
	cout << "6. 구의 부피 걔산" << endl;
	cout << "7. 구의 겉넓이 계산" << endl;
	cout << "8. 종료" << endl;
	cout << "선택 : ";
	cin >> num;
	cout << endl;
	return 0;
}

int main() {
	double radius;
	double height;

	while (1) {
		manu();

		if (num == 1) {
			cout << "반지름 입력 : ";
			cin >> radius;
			cout << endl;
			circle circle(radius);
			cout << "원의 넓이 : " << circle.area() << endl << endl;
		}
				
		else if (num == 2) {
			cout << "반지름 입력 : ";;
			cin >> radius;
			cout << endl;
			circle circle(radius);
			cout << "원의 둘레 : " << circle.perimeter() << endl << endl;
			
		}
		else if (num == 3) {
			cout << "반지름 입력 : ";;
			cin >> radius;
			cout << endl;
			cout << "높이 입력 : ";;
			cin >> height;
			cout << endl;
			cylinder cyliner(radius, height);
			cout << "원기둥의 부피 : " << cyliner.volume() << endl << endl;
		}			
		else if (num == 4) {
			cout << "반지름 입력 : ";;
			cin >> radius;
			cout << endl;
			cout << "높이 입력 : ";;
			cin >> height;
			cout << endl;
			cylinder cyliner(radius, height);
			cout << "원기둥의 겉넓이 : " << cyliner.o_area() << endl << endl;
		}
		else if (num == 5) {
			cout << "반지름 입력 : ";;
			cin >> radius;
			cout << endl;
			cout << "높이 입력 : ";;
			cin >> height;
			cout << endl;
			cone cone(radius, height);
			cout << "원뿔의 부피 : " << cone.volume() << endl << endl;
		}
		else if (num == 6) {
			cout << "반지름 입력 : ";;
			cin >> radius;
			cout << endl;
			sphere sphere(radius);
			cout << "구의 부피 : " << sphere.volume() << endl << endl;
		}
		else if (num == 7) {
			cout << "반지름 입력 : ";;
			cin >> radius;
			cout << endl;
			sphere sphere(radius);
			cout << "구의 겉넓이 : " << sphere.o_area() << endl << endl;
		}
		else if (num == 8){
			cout << "프로그램을 종료합니다." << endl;
			return 0;
		}
		else {
			cout << "잘못된 숫자입니다." << endl << endl;
		}
	}

}