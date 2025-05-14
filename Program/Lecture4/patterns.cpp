#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // 1234
    // 1234
    // 1234
    // 1234
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){      
    //         cout<<j<<" ";

    //     }
    //     cout<<endl;
    // }


    // A B C D
    // A B C D
    // A B C D
    // A B C D
    // for(int i=0; i<n; i++){
    //     char ch = 'A';
    //     for(int j=0; j<n; j++){
    //         cout<<ch<<" ";
    //         ch = ch+1;

    //     }
    //     cout<<endl;
    // }

    // 123
    // 456
    // 789

    // for(int i=0; i<n; i++){
    //     for(int j=(i*n)+1; j<=(n*i)+n; j++){
    //         cout<<j<<" ";

    //     }
    //     cout<<endl;
    // }


    // A B C 
    // D E F 
    // G H I 
//     char ch='A';
//    for(int i=0; i<n; i++){
//         for(int j=(i*n)+1; j<=(n*i)+n; j++){
//             cout<<ch<<" ";
//             ch++;

//         }
//         cout<<endl;
//     }



    // * 
    // * * 
    // * * * 
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<"*"<<" ";
    //     }cout<<endl;
    // }


    // 1 
    // 2 2 
    // 3 3 3 
    // for(int i=1; i<=n; i++){
    //     for(int j=0; j<i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;

    // }
    

    // A 
    // B B 
    // C C C 
    // D D D D 
    // char ch = 'A';
    // for(int i=1; i<=n; i++){
    //     for(int j=0; j<i; j++){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    //     ch++;
    // }

    // 1 
    // 1 2 
    // 1 2 3 
    // 1 2 3 4   

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }


    // 1 
    // 2 1 
    // 3 2 1 
    // 4 3 2 1 
    // for(int i=0; i<n; i++){
    //     for(int j=i+1;j>=1; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }


// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 

//     // Thoda sa dekhna pada tha 
    // int num =1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;

    // }




    // A 
    // B C 
    // D E F 
    // G H I J 
    // char c='A';
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<c<<" ";
    //         c++;
    //     }
    //     cout<<endl;
    // }


    // A 
    // B A 
    // C B A 
    // D C B A 
    // E D C B A 

    // for(int i=0; i<=n; i++){
    //     char c='A';
    //     for(int j=i; j>=0; j--){
    //         cout<<char(c+j)<<" ";
    //     }
    //     cout<<endl;
    // }





    // 11111
    // 2222
    // 333
    // 44
    //     5

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(j<i){
    //             cout<<" ";
    //         }else{
    //             cout<<i+1;
    //         }
    //     }
    //     cout<<endl;
    // }


    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1;j++ ){
            cout<<" ";
        }
        for(int j=1; j<=i+1; j++){
            cout<<j;
        }
        for(int j=1; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
    


  
}