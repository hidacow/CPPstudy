#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

double calvalue(vector<double>coefficient, double x) {
    double ans = 0;
    for (int i = coefficient.size()-1; i >=0; i--) {
        ans += coefficient[i] * pow(x, i);
    }
    return ans;
}

void solve(vector<double>coefficient) {
    double upper = 1, lower = 0, midvalue = 0.5;
    bool isrise = false;
    if (calvalue(coefficient, 0) < calvalue(coefficient, 1))isrise = true;
    while ((upper-lower) >= pow(10, -8)) {
        if (calvalue(coefficient, midvalue) > 0) {
            if (isrise)upper = midvalue;
            else lower = midvalue;

        }
        if (calvalue(coefficient, midvalue) < 0) {
            if (isrise)lower = midvalue;
            else upper = midvalue;
        }
        if (calvalue(coefficient, midvalue) == 0){
            cout<<midvalue;
            return;
        }
        midvalue = (lower + upper) / 2;

    }
    cout << lower;
}

int main() {
    double num;
    int cnt = 0;
    vector<double> a;
    char ch;
    while (cin >> num) {
        a.push_back(num);
        ch = getchar();
        if (ch == '\n' || ch == EOF) {
            cout << "Case " << ++cnt << ": ";
            reverse(a.begin(), a.end());
            solve(a);
            cout << endl;
            a.clear();
        }
    }
}
