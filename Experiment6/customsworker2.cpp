#include<iostream>
#include<vector>
using namespace std;
int ans,i, n, t, k, pcount[100001], num;
vector<int>arvtime, nationalities;

//Second version
//704ms
//You can use arrays instead of vector to optimize the speed

int main() {
    cin >> n;
    for(int p=1;p<=n;p++) {
        cin >> t >> k;
        for(int q=1;q<=k;q++) {
            arvtime.push_back(t);   //record current time
            cin >> num;
            nationalities.push_back(num);   //record the passengers' nationalities at the same time
            if (pcount[num]==0)ans++;   //if it's a new nationality then count it
            pcount[num]++;  //add to the count of passengers of this nationality
        }
        for (; t - arvtime[i] >= 86400; i++) {  //judge whether current time satisfies the requirement
            pcount[nationalities[i]]--; //remove it from the count
            if (pcount[nationalities[i]]==0)ans--;  //the count is 0, remove this nationality from ans
        }
        cout << ans << endl;    //print it out
    }
}
