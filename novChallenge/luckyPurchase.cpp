#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

struct comp {
    	string laptop;
	long long price;
    };

bool priceCompare(comp lhs, comp rhs) { return lhs.price < rhs.price; }

int main() {

    
    long long laptopCount =1;
    istringstream ss;
    string line_input;
    long long four=0;
    long long seven=0;

    getline(cin, line_input);
    ss.str(line_input);
    ss >>laptopCount; 
    ss.clear();

    comp *info = new comp[laptopCount];  

    string temp;
                
    for(long long i = 0 ; i < laptopCount ; i++){
    	getline(cin, line_input);
    	ss.str(line_input);
    	ss >> info[i].laptop >> temp;
	info[i].price = stol(temp);

	for(long long j = 0 ; j < temp.length() ; j++){
            if(temp[j] == '4')
                four++;
            else if(temp[j] == '7')
                seven++;
            
            else info[i].price=0;

            if(j == temp.length()-1 && four != seven)
                info[i].price=0;
        }
    	ss.clear();
        four=0;
        seven=0;
    }
  
    sort(info,info+laptopCount,priceCompare);
 
    for(long long i = 0 ; i < laptopCount ; i++){
        if(info[i].price != 0){
            cout<< info[i].laptop;
            return 0;
        }
        else if (info[i].price == 0 && i == laptopCount-1){
                cout << "-1";        
        }
    
    }
    delete[] info;

return 0;
}
