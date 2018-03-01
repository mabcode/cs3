#include <iostream>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

    int col = 0;
    int row = 0;
    int total =0;

    istringstream ss;
    string line_input;

    getline(cin, line_input);
    ss.str(line_input);
    ss >>row >> col; 
    ss.clear();

    int trix[row][col];

    for(int i =0 ;i < row ; i++){
                getline(cin, line_input);
                ss.str(line_input);
        
                for(int j =0 ; j < col ; j++){
                ss >>trix[i][j]; 
        
                }
    ss.clear();
    }

    total += 2*(row*col);

        for(int i =0 ;i < row ; i++){
                for(int j =0 ; j < col ; j++){
                    if(j==0){
                        total+=trix[i][j];
                     //  cout<<trix[i][j]<<endl;
                    }
                    else{
                        total += abs(trix[i][j]-trix[i][j-1]);
                      //  cout<<abs(trix[i][j]-trix[i][j-1])<< endl;

                    }
                    if(j==(col-1)){
                            total +=trix[i][j];
                      //  cout<< trix[i][j]<<endl;
                    }
                }
        }

        for(int i =0 ;i < col ; i++){
                for(int j =0 ; j < row ; j++){
                    if(j==0){
                         total+=trix[j][i];
                     //    cout<<trix[j][i]<<endl;
                    }
                    else{
                         total += abs(trix[j][i]-trix[j-1][i]);
                     //    cout<<abs(trix[j][i]-trix[j-1][i])<< endl;

                    }
                    if(j==(row-1)){
                        total +=trix[j][i];
                     //   cout<< trix[j][i]<<endl;
                    }
                }
        }
        cout<<total<<endl;
    return 0;
}
