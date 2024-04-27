#include <iostream>
using namespace std;

class circle {
private:
	double radius;

public:
	circle(double r) {
		radius = r;
		cout << "***��� �� ���� ����***" << endl << endl;
	}
	~circle() {
		cout << "��� �� ���� ����..." << endl << endl;
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
		cout << "***����� ���� ����***" << endl << endl;
	}
	~cylinder() {
		cout << "����� ���� ����..." << endl << endl;
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
		cout << "***���� ���� ���� ����***" << endl << endl;
	}
	~cone() {
		cout << "���� ���� ���� ����..." << endl << endl;
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
		cout << "***�� ���� ����***" << endl << endl;
	}
	~sphere() {
		cout << "�� ���� ����..." << endl << endl;
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
	cout << "���ϴ� ����� �����ϼ���" << endl;
	cout << "1. ���� ���� ���" << endl;
	cout << "2. ���� �ѷ� ���" << endl;
	cout << "3. ������� ���� ���" << endl;
	cout << "4. ������� �ѳ��� ���" << endl;
	cout << "5. ������ ���� �»�" << endl;
	cout << "6. ���� ���� �»�" << endl;
	cout << "7. ���� �ѳ��� ���" << endl;
	cout << "8. ����" << endl;
	cout << "���� : ";
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
			cout << "������ �Է� : ";
			cin >> radius;
			cout << endl;
			circle circle(radius);
			cout << "���� ���� : " << circle.area() << endl << endl;
		}
				
		else if (num == 2) {
			cout << "������ �Է� : ";;
			cin >> radius;
			cout << endl;
			circle circle(radius);
			cout << "���� �ѷ� : " << circle.perimeter() << endl << endl;
			
		}
		else if (num == 3) {
			cout << "������ �Է� : ";;
			cin >> radius;
			cout << endl;
			cout << "���� �Է� : ";;
			cin >> height;
			cout << endl;
			cylinder cyliner(radius, height);
			cout << "������� ���� : " << cyliner.volume() << endl << endl;
		}			
		else if (num == 4) {
			cout << "������ �Է� : ";;
			cin >> radius;
			cout << endl;
			cout << "���� �Է� : ";;
			cin >> height;
			cout << endl;
			cylinder cyliner(radius, height);
			cout << "������� �ѳ��� : " << cyliner.o_area() << endl << endl;
		}
		else if (num == 5) {
			cout << "������ �Է� : ";;
			cin >> radius;
			cout << endl;
			cout << "���� �Է� : ";;
			cin >> height;
			cout << endl;
			cone cone(radius, height);
			cout << "������ ���� : " << cone.volume() << endl << endl;
		}
		else if (num == 6) {
			cout << "������ �Է� : ";;
			cin >> radius;
			cout << endl;
			sphere sphere(radius);
			cout << "���� ���� : " << sphere.volume() << endl << endl;
		}
		else if (num == 7) {
			cout << "������ �Է� : ";;
			cin >> radius;
			cout << endl;
			sphere sphere(radius);
			cout << "���� �ѳ��� : " << sphere.o_area() << endl << endl;
		}
		else if (num == 8){
			cout << "���α׷��� �����մϴ�." << endl;
			return 0;
		}
		else {
			cout << "�߸��� �����Դϴ�." << endl << endl;
		}
	}

}