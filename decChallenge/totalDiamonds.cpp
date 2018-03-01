
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    char value;
    int chef =0;
    int other =0;
    bool chefTurn = true;
    int count =1;

    istringstream ss;
    string line_input;
       
    while(getline(cin, line_input)){
        ss.str(line_input);
        int ctl=10;
        int otl=10;
        count =1;
        chef =0;
        other =0;
        chefTurn=true;

        while(ss >>value){
        }
    }
    return 0;
}
