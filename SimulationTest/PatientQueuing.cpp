#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

struct patient {    //define a struct patient
    string ID;  //use string to keep the 0s
    int age;
    int no;
};

bool cmp(patient a, patient b) {    //sorting compare function
    if (a.age >= 60 && b.age >= 60) {   //if is elder
        if (a.age == b.age)return a.no < b.no;  //if is the same age
        else return a.age > b.age;
    }
    else if (a.age >= 60 || b.age >= 60) {  //if only a patient is elder
        return a.age > b.age;
    }
    else {
        return a.no < b.no; //neither of them is elder
    }

}

int main() {
    int n;
    patient a;  //define a temp patient for input
    vector<patient>database;    //define a vector to store the info
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a.ID >> a.age;
        a.no = i;
        database.push_back(a);
    }
    sort(database.begin(), database.end(), cmp);    //sort it
    for (int i = 0; i < database.size(); i++) { //print it out
        cout << database[i].ID << endl;
    }
}
