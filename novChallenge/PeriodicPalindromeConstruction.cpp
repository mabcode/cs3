#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int t_cases =0;
    long long n=0;//sting length 
    long long p=0;//values to repeat
    long long loop=0;
	
    istringstream ss;
    string line_input;
       
    getline(cin, line_input);
    ss.str(line_input);
    ss >>t_cases; 
    ss.clear();

    while(t_cases-- != 0){
        getline(cin, line_input);
        ss.str(line_input);
	ss >> n >> p;
	ss.clear();

	if(n <= 2 || p <= 2){
		cout<<"impossible"<<endl;
		continue;
	}		
	loop = ( n / p);

	while(loop-- != 0){
	    for(int i = 1; i <= p ;i++){
	    	if(i==1 || i ==p)
		    cout<< "a";
		else
		    cout<< "b";
	    }
	}
	cout << endl;
    }
        

return 0;
}
