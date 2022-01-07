// print numbers in increasing and decreasing order

                // incdec(5) // print(5) and return it to main()                              1,2,3,4,5
                // |
                // print(5)->indec(4)  // print (4) and return to incdec(5)
                //             |
                //             print(4) -> incdec(3) // print(3) return to indec(4)
                //                         |
                //                         print(3) -> incdec(2) // print(2) and return to incdec(3)
                //                                         |            
                //                                         print(2) -> incdec(1)    // print(1) and return to indec(2)   
                //                                                      |             
                //                                                      print(1) -> indec(0) // return; to incdec(1)
                // 5,4,3,2,1

#include<bits/stdc++.h>
using namespace std;

void incdec(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    incdec(n-1);
    cout<<n<<" ";
}

int main() {
    int n;
    cin>>n;

    incdec(n);
    return 0;
}