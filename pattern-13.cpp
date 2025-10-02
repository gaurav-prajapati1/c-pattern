// 1 2 3 4 5 6 7 8 9 10 
//   2 3 4 5 6 7 8 9 10
//     3 4 5 6 7 8 9 10
//       4 5 6 7 8 9 10
//         5 6 7 8 9 10
//           6 7 8 9 10
//             7 8 9 10
//               8 9 10
//                 9 10 
//                   10

#include <iostream>
using namespace std;
int main(){
    int i, j;
    for (i = 1; i <= 10; i++){
        for (j = 1; j <= 10; j ++){
            if ( j>=i)
                
               cout << j;
            else 
               
               cout << " ";

        }
        cout << endl;
    }
}