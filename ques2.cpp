#include<iostream>
#include<string>

using namespace std;

/*                                               ARRAY
 int main()
 {
    int arr[5] , i = 0;
    arr[0] = 0;
    arr[1] =1;
    arr[2] =2;
    arr[3] =3;
    arr[4] =4;
    while(i<=4)
    {
        cout<< arr[i] << "\n";
        i++;
    }
    return 0;

 }
    */


                                                  /*STRINGS*/


    // int main()
    // {
    //     string s = "Hello Aishwary";
    //     int y=  s.length();
    //     cout << y <<"\n";
    //     cout << s[3] <<"\n";
    //     return 0;
    // }

                                                  // using OOPS


// class solution{

//     public:
//            int findlength(string s){
//             return s.length();
//            }
// };

// int main(){
//     solution obj;//creating object of solution class
//     string s = "Hello World";
//     cout << obj.findlength(s) << endl;
//     return 0;
// }


                                 //  PASSING RETURNING ASSIGNING STRINGS

//  class solution{
//     public:
//          string modifystring(string str){
//             string newStr = str;
//             newStr[0] = 'H';
//             return newStr;
//          }
//  };                               
//  int main(){
//     string original = "hello";
    
//     solution obj;
//     string modified = obj.modifystring(original);
//     cout << "Modified string is : " << modified<<"\n";
//     return 0;
//  }

                           // STRING COMPARISON


class solution{
    public:

    bool comparestring(string str1,string str2)
    {
        return str1 == str2;
    }
};
int main()
{
    solution sol;
    string str1,str2;
    cin>> str1 >> str2 ;

    if(sol.comparestring(str1,str2))
    cout << "Strings are equal\n";
    else
    cout<< "Strings are not equal\n";

    return 0;

}