#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <array>
using namespace std;
 
struct info {
                long long index;
                long long value;
};
 
bool indexComp (info lhs, info rhs ){return lhs.index > rhs.index;}
 
bool valueComp (info lhs, info rhs ){return lhs.value > rhs.value;}
 
int main(){
        int numberElements =0;
        int m;
        unsigned long long cc[512][512];
        istringstream ss;
        string line_input;
        
        getline(cin, line_input);
        ss.str(line_input);
        ss >> numberElements;
        ss.clear();
 
        vector<long long> answer;
 
        info* aa = new info[numberElements+1];
        info* catcher = new info[1073741824];

        getline(cin, line_input);
        ss.str(line_input);
        for(long long i = 1 ; i<=numberElements ;i++){
        ss >> aa[i].value;
        aa[i].index=i;
        }
        ss.clear();
//---------------------------------------------------
        long long counter=1;

        getline(cin, line_input);
        ss.str(line_input);

        while(ss >> catcher[counter].value){
        catcher[counter].index=counter;
        counter++;
        }
        counter--;
        ss.clear();
//--------------------------------------------------
        info* bb = new info[counter+1];

        for(long long i =1 ; i <= counter ; i++){
                bb[i].index = catcher[i].index;
                bb[i].value = catcher[i].value;
        }
    
        delete[] catcher;

        getline(cin, line_input);
        ss.str(line_input);
        ss >> m;
        ss.clear();
 
        for(long long i=1; i<=m ;i++){
            getline(cin,line_input);
            ss.str(line_input);
            for(int j=1; j<=m ;j++){
            ss >> cc[i][j];
            }        
            ss.clear();
        }

        if(counter >= numberElements){
        sort(aa+1,aa+numberElements+1,valueComp);
        sort(bb+1,bb+numberElements+1,valueComp);
 
        for(long long i =1 ; i <= counter; i++){
                 
                if(bb[i].value == 0 || aa[i].value == 0){
                        break;
                }
                if(aa[i].index !=  bb[i].index){
                        answer.push_back(aa[i].index);
                        answer.push_back(bb[i].index);
                }
 
        }
        }

        else if(counter < numberElements){
        sort(aa+1,aa+numberElements+1,valueComp);
        sort(bb+1,bb+numberElements+1,valueComp);
 
        for(long long i =1 ; i <= counter; i++){
                 
                if(bb[i].value == 0 || aa[i].value == 0){
                        break;
                }
                if(aa[i].index !=  bb[i].index){
                        answer.push_back(aa[i].index);
                        answer.push_back(bb[i].index);
                }
 
        }
        }

        cout << (answer.size()/2)<<endl;
        for(long long i = 0 ; i < answer.size() ; i++){
               cout<<answer[i]<<" ";
               cout<<answer[++i]<< endl; 
        }
 
            
        delete[] aa;
        delete[] bb;

        return 0;
}
