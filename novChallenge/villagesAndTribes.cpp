
#include <iostream>
#include <sstream>
using namespace std;
 
//villages and tribes
int main(){
    int t_cases;
    char temp;
    long long count = 0;
    long long a_count= 0;
    long long b_count =0;
    bool a = false;
    bool b = false;
    bool start = false;

    istringstream ss;
    string line_input;
    
    getline(cin, line_input);
    ss.str(line_input);
    ss >> t_cases;
    ss.clear();
//.A.BB.A.    
    while(t_cases-- != 0){
        getline(cin, line_input);
        ss.str(line_input);
        
        while(ss.peek() != EOF){
            ss >> temp;
            
            if(temp == 'A'){
	    	start=true;
                a_count++;
                if(b){
                    b=false;
                    count =0;
                }
                if(a){
                    a_count += count;
                    count = 0;
                }
                a=true;
            }
            
            else if(temp == 'B'){
	    	start=true;
                b_count++;
                if(a){
                    a=false;
                    count =0;
                }
                if(b){
                    b_count += count;
                    count = 0;
                }
                b=true;
            }
            
            else if(temp == '.' && start){
                count++;
            }
            
            
        }
        ss.clear();
        cout <<a_count << " " << b_count;
        cout << endl;
        
        b_count =0;
        a_count =0;
        count =0;
	start=false;
    }
    return 0;
}
