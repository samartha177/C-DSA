////for smallest number in array
// #include<iostream>
// using namespace std ;

// int main()
// {
//     int arr [] = {5,16,22,1,-15,24};
//     // cout<<sizeof(arr)<<endl ;
//     // int size = 6;
//     int smallest = INT8_MAX ;

//     for (int i = 0; i < sizeof(arr); i++)
//     {
//         if (arr[i]<smallest)
//         {
//             smallest = arr[i];
//         }

//     }
//     cout<<smallest ;

//     return 0;
// }
// // for index of smallest number in an array;
// #include<iostream>
// using namespace std;

// int main(){

//     int arr[] = {5,15,35,65,-12,-155,-26,-99};
//     int smallest = INT8_MAX;
//     int index;

//     for(int i = 0 ; i < sizeof(arr);i++){

//         if (arr[i]<smallest){

//             smallest = arr[i];
//             index = i;
//         }
//     }
//     cout<<index;

// }
// #include <iostream>
// using namespace std;
// void changearr(int arr[] , int size){
//     for(int i = 0 ; i < size ; i++){
//         arr[i] = 2* arr[i];
//     }
// }

// int main()
// {
//     int arr[] = {1,2,3};
//     changearr(arr , 3);
//     for (int i = 0; i < 3; i++)
//     {
//         cout<< arr[i]<< ',' ;
//     }

//     return 0;
// }
// // Linear search:
// #include <iostream>
// using namespace std;
// int ls(int arr[], int size, int target, int idx)
// {

//     for (int i = 0; i < size; i++)
//     {
//         if (target == arr[i])
//         {
//             idx = i;
//             return idx;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {100, 58, 22, 33, 45, 68, 75};
//     int size = 7;
//     int target;
//     int idx = -1;
//     cout << "Enter the target";
//     cin >> target;
//     idx = ls(arr, size, target, idx);
//     if (idx == -1)
//     {
//         cout << "Sry element not found in the Array";
//     }
//     else
//     {
//         cout << idx;
//     }
//     return 0;
// }
// // Reverse an Array(2Pointer approach)
// #include <iostream>
// using namespace std;

// int revarr(int arr[] , int size){
//     int start = 0 ;
//     int end = size - 1;

//     while (start<end)
//     {
//         swap(arr[start] , arr[end]);
//         start++ ; 
//         end-- ;
//     }
    

// }
// int main()
// {
//     int arr [] = {4,2,7,8,1,2,5};
//     int size = 7;
//     revarr(arr , size);
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i];
//         if (arr[i] != arr[size-1])
//         {
//             cout<<",";
//         }
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr [] = {1,2,3,4};
//     int max = INT8_MIN ; 
//     int min = INT8_MAX ;
//     int size = 4;
//     int mini , maxi ;
//     for (int i = 0; i < size; i++)
//     {
//        if (arr[i]>max)
//        {
//             max = arr[i];
//             maxi = i ;
//        }
       
//     }
//     for (int i = 0; i < size; i++)
//     {
//        if (arr[i]<min)
//        {
//             min = arr[i];
//             mini = i;
//        }
       
//     }
//     cout<<"Before swaping"<<endl;
//     cout<<"Max:"<<max<<endl ;
//     cout<<"Min:"<< min<<endl ;
//     cout<<"After Swaping: ";

//     swap(arr[mini] , arr[maxi]);
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    


//     return 0;
// }


// //finding unique elements in an array
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[] = {1,2,2,1,3,4};
//     int size = 6 ;
//     for (int i = 0; i < size; i++)
//     {
//         bool isUnique = true;
//         for (int j = 0; j < size; j++)
//         {
//             if (i != j && arr[i] == arr[j])
//             {
//                 isUnique = false;
//                 break;
//             }
//         }
//         if (isUnique)
//         {
//             cout << arr[i] << " ";
//         }
//     }
    
//     return 0;
// }
////vectors!!
#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> vec = {1,2,3};
    cout<< vec[0]<< endl;
    return 0;
}












