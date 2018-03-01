#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int size =0;//size of matrix
    int start=0;// start of matrix
    int change=0;//change value
    int index=1;
    int count=1;
    
    istringstream ss;
    string line_input;
       
    getline(cin, line_input);
    ss.str(line_input);
    ss >>size >> start >> change; 
    ss.clear();
    
        // 5 10 7   
    
    int decoy=start;

    while(index <= size){
        if(count == index){
                for(int i = decoy ; i > (decoy-size+(index-1)) ; i--){
                        cout<< i << " ";
                }
                count=1;
                start--;
                cout<<endl;
        }
        
        if(count < index){
                for(int i = 0 ; i < index ; i++){
                        cout<<start+i*(change+1)<< " ";
                        count++;
                        decoy=start+i*(change+1)-1;
                }
        continue; 
        }

   index++; 
  
    }

     
    return 0;    
} 
