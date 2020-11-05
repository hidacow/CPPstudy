#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
    char c;
    int wins = 0, losses = 0;
    string input = "";
    while (cin>>c) {
        input += c; //record the input for second judge
        if (c == 'W')wins++;
        if (c == 'L')losses++;
        if ((wins >= 11&&wins-losses>1) || (losses >= 11&&losses-wins>1)) { //judge whether a match ends
            cout << wins << ":" << losses << endl;  //print the result
            wins = 0; losses = 0;   //clear wins and losses
        }
        if (c == 'E') {
            cout << wins << ":" << losses << endl << endl;  //print the current result
            wins = 0; losses = 0;   //clear wins and losses
            istringstream istr(input);  //reuse the input as istr
            while (istr >> c) { //get everychar from the istr
                if (c == 'W')wins++;
                if (c == 'L')losses++;
                if ((wins >= 21&&wins-losses>1) || (losses >= 21&&losses-wins>1)) { //judge whether a match ends
                    cout << wins << ":" << losses << endl;
                    wins = 0; losses = 0;
                }
                if (c == 'E') cout << wins << ":" << losses << endl;


            }
            return 0;   //exit immediately in case there're chars after 'E'
        }

    }
}
