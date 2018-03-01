#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int t_cases =0;
    long long n=0;//sting length 
    long long a=0;//values to repeat
    long long loop=0; 
    char letter[27]= {'0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    istringstream ss;
    string line_input;
       
    getline(cin, line_input);
    ss.str(line_input);
    ss >>t_cases; 
    ss.clear();

    while(t_cases-- != 0){
    getline(cin, line_input);
    ss.str(line_input);
    ss >> n >> a;
    
    loop = n/a;

    if(loop >= 1)
    	cout << "3 ";
    else
    	cout << "1 ";

     int loop =1;
     for(int i = 1; i <= n ;i++){
	    cout<< letter[loop];
	    loop++;
	    if(loop > a )
	      loop=1;
	    }
    cout << endl;
    ss.clear();
    }
/*
Input:
4
5 2
12 26
8 26
7 2
ababab
abacba

Output:
3 aaabb
1 hapybirthday
1 codechef
3 aaababb

*/
}
//ababab
