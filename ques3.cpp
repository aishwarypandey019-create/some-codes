#include<iostream>
using namespace std;
   
    // void modify(int a)
    // {
    //     a = 0;
    // }
    // int main()
    // {
    //     int x = 10;
    //     modify(x);
    //     cout<< x <<  "\n";
    //     return 0;
    // }  
       


                //  PASS BY REFERENCE

     void modify(int &a)
    {
        a = 0;
    }
    
    int main()
    {
        int x = 10;
        modify(x);
        cout<< x <<  "\n";
        return 0;
    }



