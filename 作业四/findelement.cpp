#include<iostream>
#include<vector>
using namespace std;

int main() {
    int target, num, cnt = 0;
    vector<int> a;
    char ch;
    while (true)
    {
        cin >> target;  //get the target number
        while (cin >> num) {    //get the array
            a.push_back(num);   //put the element into the vector
            ch = getchar();
            if (ch == '\n' || ch == EOF) {//judge whether end of input
                cout << "Case " << ++cnt << ": " << target << ", ";
                int i = a.size() / 2;   //binary search
                int upper = a.size() - 1, lower = 0;
                while (a[i] != target) {
                    if (a[i] > target) {
                        if (upper == i)break;   //end loop if cannot find element
                        upper = i;
                    }
                    else if (a[i] < target) {
                        if (lower == i)break;   //end loop if cannot find element
                        lower = i;
                    }
                    else {
                        break;
                    }
                    i = (lower + upper) / 2;
                }
                if (a[i] != target)cout << "-1";
                else cout << i;
                cout << endl;
                a.clear();  //clear vector
                if(ch==EOF)return 0;    //if is EOF then exit immediately
                break;
            }

        }
        continue;
    }

}
