#include<iostream>
#include<cmath>
using namespace std;

void cbase(int num, int base) {
	if(num==0){cout<<0;return;}
    int digit = 0;
    while (pow(base, digit) <= num)digit++;
    int converted[16384], remain=num;
    for (int i = digit-1; i >= 0; i--) {
        converted[i] = remain / (pow(base, i));
        remain -= converted[i]* (pow(base, i));
    }
    for (int i = digit - 1; i >=0 ; i--) {
        if (converted[i] <= 9)cout << converted[i];
        else cout << (char)(55 + converted[i]);
    }
}

int main() {
    int m, n, cnt = 0;
    while (cin >> n >> m) {
        cout << "Case " << ++cnt << ": ";
        cbase(n, m);
        cout << endl;
    }


}
