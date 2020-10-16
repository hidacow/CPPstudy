#include<iostream>

using namespace std;

void oadd(int num1,int num2){
    cout<<num1+num2<<endl;
}
void ominus(int num1,int num2){
    cout<<num1-num2<<endl;
}
void omultiply(int num1,int num2){
    cout<<num1*num2<<endl;
}
void simplify(int n,int m){

	int m0 = m, n0 = n;    //m0和n0保存m和n的原始值
	while (m%n != 0) {
		int temp = m ;
		m = n;
		n = temp%n;
	}
	cout << n0 / n << "/" << m0 / n << endl;

}
void odevide(int num1,int num2){
    if (num1%num2==0)cout<<num1/num2<<endl;
    else{
    cout<<num1/num2<<"+";
    simplify(num1%num2,num2);
    }
}


int main() {
    int num1,num2;
    char c;
    char ch;
    int flag;
    while (cin >> num1>>c>>num2) {

        ch = getchar();

        if (ch == '\n'||ch==EOF) {
            switch(c){
                case '+':
                    oadd(num1,num2);
                    break;
                case '-':
                    ominus(num1,num2);
                    break;
                case '*':
                    omultiply(num1,num2);
                    break;
                case '/':
                    odevide(num1,num2);
                    break;
            }
        }
    }
}
