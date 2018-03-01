#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int t_cases =0;
    long long people =0;
    long long razRate =0;
    long long value =0;
    long long high =10000000000;
    long long low =0;
	
    istringstream ss;
    string line_input;
       
    getline(cin, line_input);
    ss.str(line_input);
    ss >>t_cases; 
    ss.clear();
    
     while(t_cases-- != 0){
        getline(cin, line_input);
        ss.str(line_input);
	ss >> people >> razRate; 
        ss.clear();

	getline(cin, line_input);
        ss.str(line_input);
        ss >> value;
	if(value > razRate)
	    high = value;
	if(value < razRate)
	    low=value;

	if(people == 1 && value == razRate)
		cout<<"YES" << endl;
	else if(people == 1 && value != razRate)
		cout<<"NO" << endl;



       for(int i = 2; i <=  people ;i++){
	  ss >> value;
	  if((value == razRate) && (i ==  people)){
		cout<<"YES" << endl;
	  }
	  else if(value > razRate && value < high){
		high=value;
	  }
	  else if(value < razRate && value > low){
		low=value;
	  }
	  else{
		cout<<"NO" << endl;
		break;
	  }
       }
       high=10000000000;
       low=0;
       ss.clear();
    }

/*
2
5 200
600 300 100 350 200
5 890
5123 3300 783 1111 890
*/
   // cout<< "YES" << endl;
   // cout<< "NO" << endl;

return 0;
}
