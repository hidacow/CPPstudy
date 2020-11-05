#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

double calvalue(vector<double>coefficient, double x) {//calculate p(x)
    double ans = 0;
    for (int i = coefficient.size()-1; i >=0; i--) {
        ans += coefficient[i] * pow(x, i);
    }
    return ans;
}

void solve(vector<double>coefficient) {
    double upper = 1, lower = 0, midvalue = 0.5;
    bool isrise = false;
    if (calvalue(coefficient, 0) < calvalue(coefficient, 1))isrise = true;  //judge whether p(x) increases in [0,1]
    while ((upper-lower) >= pow(10, -8)) {//need to loop until epsilon<1e-8
        if (calvalue(coefficient, midvalue) > 0) {
            if (isrise)upper = midvalue;    //narrowing range
            else lower = midvalue;

        }
        if (calvalue(coefficient, midvalue) < 0) {
            if (isrise)lower = midvalue;
            else upper = midvalue;
        }
        if (calvalue(coefficient, midvalue) == 0){//if p(midvalue) is root print it right away
            cout<<midvalue;
            return;
        }
        midvalue = (lower + upper) / 2;

    }
    cout << lower;  //IMPORTANT Must Print lower
}

int main() {
    double num;
    int cnt = 0;
    vector<double> a;//define a coefficient array
    char ch;    //define a input char
    while (cin >> num) {
        a.push_back(num);
        ch = getchar();     //detect end of input
        if (ch == '\n' || ch == EOF) {
            cout << "Case " << ++cnt << ": ";
            reverse(a.begin(), a.end());//need to reverse the array
            solve(a);   //solve it
            cout << endl;
            a.clear();  //clear the array for next-time use
        }
    }
}
