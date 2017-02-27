#include<iostream>

using namespace std;

int main() {

	int y, d;
	int b = 0;
	cout << "请输入年份和整数：";
	cin >> y >> d;
	int i = 0;
	int m[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	

	if(y%4==0||y%400==0||y%100!=0){

		m[1] = 29;
		
		for (i = 0; i < 12; i++) {
			b += m[i];

			if (d - b == 0) {
				cout << y << "年"
					<< i + 2 << "月"
					<< m[i] << "日"; break;
			}
			if (d - b <= 31 && d - b>0&&i==0) {
				cout << y << "年"
					<< i + 3 << "月"
					<< d - b-29 << "日"; break;


			}
			if (d - b <= 31 && d - b>0) {
				cout << y << "年"
					<< i + 2 << "月"
					<< d - b << "日"; break;


			}

		}
	

		

	}else{

		
			for (i = 0; i < 12; i++) {

				b += m[i+1];

				if (d - b == 0) {
					cout << y << "年"
						<< i + 2 << "月"
						<< m[i] << "日"; break;
				}
				if (d - b <= 31 && d - b>0) {
					cout << y << "年"
						<< i + 2 << "月"
						<< d - b << "日"; break;


				}
				

			}

		

	}





}