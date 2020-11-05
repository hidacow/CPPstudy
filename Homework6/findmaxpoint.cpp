#include<iostream>
#include<vector>
using namespace std;

struct dot {    //define a struct dot
    int dotx = 0;
    int doty = 0;
};

bool isdominated(dot m, dot n) {    //judge whether m is dominated by n
    if (n.dotx >= m.dotx && n.doty >= m.doty)return true;
    else return false;
}

int main() {
    int n;
    vector<dot>dots(105);
    vector<dot>ans;
    while (cin >> n) {  //this problem includes multiple input
        for (int i = 1; i <= n; i++) {
            cin >> dots[i].dotx >> dots[i].doty;    //get the x and y of a dot
        }
        for (int i = 1; i <= n; i++) {
            bool ismaxpoint = true; //set a flag
            for (int j = 1; j <= n; j++) {
                if (i == j)continue;    //skip judging itself
                if (isdominated(dots[i], dots[j])) {
                    ismaxpoint = false; //not maxpoint, exit loop
                    break;
                }
            }
            if (ismaxpoint)ans.push_back(dots[i]);  //add to the answer vector
        }
        while (ans.size()) {    //while there's still elements in the vector
            int minx = ans[0].dotx, mini = 0;   //initialize
            for (int i = 1; i < ans.size(); i++) {
                if (ans[i].dotx < minx) {
                    mini = i;   //replace with dot with smaller x
                    minx = ans[i].dotx;
                }
            }
            cout << "(" << ans[mini].dotx << "," << ans[mini].doty << ")";  //print a dot
            ans.erase(ans.begin() + mini);  //delete the dot from the answer,as it's already printed out
            if (ans.size() != 0)cout << ",";    //don't print "," after the last point
        }
        cout << endl;
        //needn't clear the ans vector as there's no element left
    }
}
