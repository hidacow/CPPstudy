#include<iostream>
using namespace std;
int main() {
	int a1, a2, a3, a4, a5, a6, n1, n2;
	int m[4] = { 0,5,3,1 };	//num of 2*2 products can be put in the free space
	while (cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6) {
		if (a1 + a2 + a3 + a4 + a5 + a6 == 0)return 0;	//end the program
		int ans = a6 + a5 + a4 + (a3 + 3) / 4;	//create boxes to fit 6*6,5*5,4*4,3*3 products
		n2 = 5 * a4 + m[a3 % 4];	//calculate maximum num of 2*2 products can be put in boxes created by 4*4 & 3*3 products
		if (a2 > n2)	//if there're still 2*2 products left
			ans += (a2 - n2 + 8) / 9;	//create boxes for them
		n1 = 36 * (ans - a6) - 25 * a5 - 16 * a4 - 9 * a3 - 4 * a2;	//calculate maximum num of 1*1 products can be put in previously created boxes
		if (a1 > n1)	//if there're still 1*1 products left
			ans += (a1 - n1 + 35) / 36;	//create boxes for them
		cout << ans << endl;	//print out the answer
	}
	return 0;
}
