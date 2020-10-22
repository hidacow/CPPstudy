#include <iostream>
using namespace std;

typedef long long LL;   //use LL for long long

/*
QuickMultiplyMod
Be able to calculate (a*b)%c
even when a*b is very very big
*/

LL QuickMultiplyMod(LL a, LL b, LL c)
{
    return (a * b - (LL)((long double)a / c * b) * c + c) % c;
}

/*
QuickPowerMod
Be able to calculate (a^b)%c
even when a^b is very very big
*/
LL QuickPowerMod(LL a, LL b, LL c) {
    LL ans = 1;
    a = a % c;
    while (b > 0) {
        if (b % 2 == 1)
            ans = QuickMultiplyMod(ans, a, c);
        b = b / 2;
        a = QuickMultiplyMod(a, a, c);
    }
    return ans;
}

/*
Extended GCD
solve the equation: ax +by = gcd(a, b) = c
*/
void exgcd(LL a, LL b, LL& x, LL& y/*,LL& c*/) { //in this program, we needn't know c
    if (!b) { y = 0; x = 1; /*c = a*/; return; }
    exgcd(b, a % b, y, x/*, c*/);
    y -= a / b * x;
}

/*
Get Inverse Element
If c is the inverse element of b (equal to inv(b)=c)
then
(b*c)%m=1
*/

LL inv(LL a, LL m) {
    LL x, y/*,c*/;
    exgcd(a, m, x, y/*,c*/);
    return (x % m + m) % m;
}


/*
The key to solve this problem is to know
(d*e)%(phi(m))=1
P.S. phi() is Euler's totient function
to solve this, we need to get phi(m)
As m=p*q, p and q are prime, phi(m)=(p-1)*(q-1)
then we can use inv(e,phi(m)) to get d
We can now use d to decrypt the numbers
*/
int main() {
    int T, n;
    LL d, e, p, q, m, b;
    cin >> T; //get data group count
    for (int i = 1; i <= T; i++) {
        cin >> e >> p >> q >> n;
        m = p * q;  //calculate m
        d = inv(e, (p - 1) * (q - 1));   //get d
        for (int j = 1; j < n; j++) {
            cin >> b;
            cout << QuickPowerMod(b, d, p * q) << " ";  //use decrypt rule
        }
        cin >> b;
        cout << QuickPowerMod(b, d, p * q) << endl; //handle the printout of the last element, which has no " " after it
    }


}
