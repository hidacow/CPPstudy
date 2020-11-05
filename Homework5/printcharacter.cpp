#include<iostream>
using namespace std;
char charstr[16][13] = { "□□□□", "□□□■", "□□■□", "□□■■","□■□□","□■□■", "□■■□", "□■■■","■□□□","■□□■", "■□■□", "■□■■","■■□□","■■□■", "■■■□", "■■■■" };
//in linux,"□" and "■" takes 3 spaces to store, need to allocate 4*3+1=13 not 9

int main() {
    int cnt = 0;
    char a[33][2];
    while (cin>>a[1]) { //get the first two char
        cout << "Case " << ++cnt << ":" << endl;
        int printcnt = 0;
        for(int i=1;i<=32;i++){
            if (i != 1)cin >> a[i]; //get two char at a time
            if (a[i][0] >= '0' && a[i][0] <= '9') { //judge the first char
                cout << charstr[a[i][0] - 48];  //convert the char to its actual value
                printcnt += 4;  //note how many blocks have printed
            }
            if (a[i][0] >= 'A' && a[i][0] <= 'F') {
                cout << charstr[a[i][0] - 55];  //convert the char to its actual value
                printcnt += 4;
            }
            if (a[i][1] >= '0' && a[i][1] <= '9') { //judge the second char
                cout << charstr[a[i][1] - 48];
                printcnt += 4;
            }
            if (a[i][1] >= 'A' && a[i][1] <= 'F') {
                cout << charstr[a[i][1] - 55];
                printcnt += 4;
            }
            if (printcnt == 16) {   //judge whether need to endl
                printcnt = 0;
                cout << endl;
            }
        }

    }
}
