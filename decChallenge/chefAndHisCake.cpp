#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    int t_cases =0;
    int n = 0;
    int m = 0;
    long long r_count=0;
    long long g_count=0;
    bool oddRow = true;
    
    char value;

    istringstream ss;
    string line_input;
       
    getline(cin, line_input);
    ss.str(line_input);
    ss >>t_cases; 
    ss.clear();
    
     while(t_cases-- != 0){
        getline(cin, line_input);
        ss.str(line_input);
	ss >> n >> m; 
        ss.clear();
        
        for(int i = 1 ; i <= n ;i++) {
                getline(cin, line_input);
                ss.str(line_input);

                for(int j =1 ; j <= m ; j++){
                ss >> value;
                
                if(oddRow){
                        if(j % 2 != 0){
                                if(value == 'R'){
                                        g_count+=5;
                                    
                                }
                                
                                else{
                                        r_count+=3;
                                }
                      
                        }
                        else{
                                if(value == 'R'){
                                       r_count+=5; 
                                 }
                                
                                else{
                                       g_count+=3;
                                }
                       }
                       if(j == m)
                              oddRow=false; 
                }
               
                else if(!oddRow){
                        if(j % 2 != 0){

                                if(value == 'R'){
                                        r_count+=5;
                                    
                                }
                                
                                else{
                                        g_count+=3;
                                }
                      
                        }
                        else{
                                if(value == 'R'){
                                       g_count+=5; 
                                 }
                                
                                else{
                                       r_count+=3;
                                }
                       }
                       if(j == m)
                              oddRow=true; 
                
                }
                }
                                
                ss.clear();

        }
        
        if(r_count <= g_count)
                cout<<r_count<<endl;
        else
                cout<<g_count<<endl;

                r_count=0;
                g_count=0;
                oddRow = true;
                
                
     }
return 0;
}


