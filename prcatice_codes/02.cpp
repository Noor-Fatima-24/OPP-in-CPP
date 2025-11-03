#include<iostream>
using namespace std;

class book {

private:
       int arr[5] , brr[5] , crr[5];
public:
      void input(){
        cout<<"enter values in 1st array :"<<endl;
        for (int i=0 ; i<5 ; i++)
            cin>>arr[i];
        
        cout<<"enter values in 2nd array :"<<endl;
        for (int i=0 ; i<5 ; i++)
            cin>>brr[i];
      }

      void sum(){
            for (int i = 0; i < 5; i++)
                crr[i] = arr[i] + brr[i] ;
      }
       void display(){
        cout<<"sum of arrays : "<< endl;
        for (int i = 0; i < 5; i++)
        {
            cout<<crr[i]<<endl;
        }
        
       }
};

int main()
{
    book obj;
    obj.input();
    obj.sum();
    obj.display();
    return 0;
}