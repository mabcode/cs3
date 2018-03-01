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
                if(chefTurn){
                        ctl--;
                        if(value == '1')
                                chef++;
                }
                else if(!chefTurn){
                        otl--;
                        if(value == '1')
                                other++;
                }

               if(count <=  10){
                      if(chef-other > (otl-5)){
                            cout << "TEAM-A" << " " << count <<endl;
                            break;
                      }
                      else if (other - chef > (ctl-5)){
                            cout << "TEAM-B" << " " << count << endl;
                            break;
                      }
               }
               else{

                      if(count%2==0  && chef > other){
                            cout<<"TEAM-A" << " " << count << endl;
                            break;
                      }
                      else if(count%2==0  && chef < other ){
                            cout << "TEAM-B" << " " << count << endl;
                            break;
                      }

                      else if(count == 20){
                            cout<< "TIE"<<endl;
                            break;
                      }
               }
               count++;
              if(chefTurn){
                chefTurn = false;
                continue;
              }
              else{
                chefTurn = true;
                continue;
              }
        }
    ss.clear();
    }
return 0;
}
