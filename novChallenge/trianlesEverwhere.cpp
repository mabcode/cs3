#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    int t_cases =0;
    long long tri=0;
    long long temp =0;
    long long total =1;
    istringstream ss;
    string line_input;
       
    getline(cin, line_input);
    ss.str(line_input);
    ss >>t_cases; 
    ss.clear();
    
     while(t_cases-- != 0){
        getline(cin, line_input);
        ss.str(line_input);
	ss >> tri; 
        ss.clear();
        
       /* while(tri-- !=0){
                total = ((total*3+2)%(1000000007));
        }
       */


       cout<< static_cast<long long>((2*(pow(3,tri+1))-3)/3) %1000000007;
        
        cout<<endl;
     }
return 0;
}


