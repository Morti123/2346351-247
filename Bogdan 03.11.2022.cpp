#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	//1
	/*int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		
 }
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";

	}*/
	//2
	/*int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];

	}
	for (int i = 4; i >=0; i--) {
		cout << arr[i] << " ";

	}*/
	//3
	/*int arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		}
	for (int i = 0; i < 10; i+=2) {
			cout << arr[i] << " ";
	}
	*/
	//4
	/*Array1.Дано целое число N(> 0).Сформировать и вывести целочисленный
		массив размера N, содержащий N первых положительных нечетных чисел :
	1, 3, 5, . . . .*/
	/*const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i += 1) {
		cin >> mas[i];
	}
	for (int i = 0; i < n; i+=1) {
		if (i % 2 != 0 && i > 0) {
			cout << mas[i] << " ";
		}
	}*/
	/*Array2.Дано целое число N(> 0).Сформировать и вывести целочисленный
		массив размера N, содержащий степени двойки от первой до N - й: 2, 4,
		8, 16, . .*/
	/*const int n = 10;
	int mas[n];
	int kv;
	for (int i = 1; i < n; i++) {
		kv = pow(2, i);
		cout << kv << " ";
	}*/
	//cam1
	/*int mas[10];
	int pl = 0;
	for (int i = 0; i < 10; i++) {
		cin >> mas[i];
		if (mas[i] > 0) {
			pl += 1;
		}
	}
	cout << pl;*/
	//cam2
	/*int mas[10];
	int pl = 0;
	int ne = 0;
	for (int i = 0; i < 10; i++) {
		cin >> mas[i];
		if (mas[i] %2 == 0) {
			pl += 1;
		}
		else {
			ne += 1;
		}
	}
	cout << pl << " " << ne;*/
	//cam4
	/*int mas[10];
	int pl = 1;
	for (int i = 0; i < 10; i++) {
		cin >> mas[i];
		if (mas[i] % 3 == 0 || mas[i] % 5 !=0) {
			pl = pl*mas[i];
		}
	}
	cout << pl;*/
	//cam3
	/*int mas[10];
	int pl = 0;
	for (int i = 0; i < 10; i++) {
		cin >> mas[i];
		if (mas[i] % 3 != 0) {
			pl = pl + mas[i];
		}
	}
	cout << pl;*/
	//cam5
	/*int mas[10];
	double pl = 0;
	int q = 0;
	for (int i = 0; i < 10; i++) {
		cin >> mas[i];
		if (mas[i] % 2 != 0) {
			pl = pl + mas[i];
			q += 1;
		}
	}
	cout << pl/q;*/











	return 0;
}

