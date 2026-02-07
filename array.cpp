// #include <iostream> 
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     cout<< sizeof(long);
//     return 0;
// }
//find smallest no. in an array:
#include <iostream>
using namespace std;

int main(){
    int arr [] = {-10,20,30,-400,-5,-51};
    int size = 6;
    int idx;
    

    int smallest = INT16_MAX ;
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i]<smallest){
    //         smallest = arr[i];
    //     }
    // }
    
    for (int i = 0; i < size; i++)//with min function
    {
        smallest = min(arr[i],smallest);
        //to print index:
        if (  arr[i] == smallest ){
            idx = i ;
        }
        
    }
    
    cout << "Smallest no is stored at : "<< idx <<endl;
    
}
