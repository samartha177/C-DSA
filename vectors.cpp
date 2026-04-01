// #include<iostream>
// #include<vector>
// using namespace std ;

// int main(){

//     vector <int> vec = {1,2,3} ;
//     cout << vec[0];
//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <char> vec = {'a','b','c'};
    cout << vec[0] <<endl;
    for ( char val : vec){
        cout << val << endl;
    }


    return 0;

}
