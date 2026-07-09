#include<iostream>
using namespace std;


         // MYAPPROACH (IN THIS I HAVE TO USE 4 VARIABLES BUT FOR BETTER COMPLEXITY I SHOULD USE 
         // 2 VARIABLES BY FINDING CONNECTION BETWEEN I AND J . )


// int main()
// {
//     int i,j,z=1;
//     for(i=4;i>=0;i--){
//         int k = 0;
//         while(k<i){
//             cout<<" ";
//             k++;
//         }
        
//         for(j=0;j<z;j++)
//         {
//             cout<<"*";
//         }
//         z=z+2;
        
//         cout<<"\n";
//     }

// }   


           // BETTER APPROACH

//  int main()
// {
//     int n;
//     cin>> n;
//     for(int i =0;i<n;i++){

//         for(int j=0;j < n-i-1;j++){
//              cout<< " ";
//         }
//         for(int j=0;j < 2*i+1;j++){
//             cout << "*";
//         }
//         cout<<endl;
//     }
// }           


                    //PATTERN 8

                
int main()
{
      int n ;
      cin >> n;
      
      for(int i=0;i<n;i++){
            
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for(int j=0;j< 2*n -(2*i+1);j++){
            cout<<"*";
        }
        cout << endl;
      }

}