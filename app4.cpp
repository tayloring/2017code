#include<iostream>

using namespace std;

int main() {

	int y, d;
	int b = 0;
	cout << "��������ݺ�������";
	cin >> y >> d;
	int i = 0;
	int m[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	

	if(y%4==0||y%400==0||y%100!=0){

		m[1] = 29;
		
		for (i = 0; i < 12; i++) {
			b += m[i];

			if (d - b == 0) {
				cout << y << "��"
					<< i + 2 << "��"
					<< m[i] << "��"; break;
			}
			if (d - b <= 31 && d - b>0&&i==0) {
				cout << y << "��"
					<< i + 3 << "��"
					<< d - b-29 << "��"; break;


			}
			if (d - b <= 31 && d - b>0) {
				cout << y << "��"
					<< i + 2 << "��"
					<< d - b << "��"; break;


			}

		}
	

		

	}else{

		
			for (i = 0; i < 12; i++) {

				b += m[i+1];

				if (d - b == 0) {
					cout << y << "��"
						<< i + 2 << "��"
						<< m[i] << "��"; break;
				}
				if (d - b <= 31 && d - b>0) {
					cout << y << "��"
						<< i + 2 << "��"
						<< d - b << "��"; break;


				}
				

			}

		

	}





}