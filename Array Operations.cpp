//operations on ARRAYS

//1. TRAVERSAL
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10],i,n;
    cout<<"Enter no of elements -";
    cin>>n;
    cout<<"Enter Array elements - ";
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"ARRAY - ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// 2. INSERTION AT A SPECIFIC POSITION

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10],i,n,pos,num;
    cout<<"Enter no of elements -";
    cin>>n;
    cout<<"Enter Array elements - ";
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"ARRAY - ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"position at which the element is to be inserted-";
    cin>>pos;
    cout<<endl<<"Element to be inserted- ";
    cin>>num;
    for (int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    n++;
    cout<<"Array after INSERTION- ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

// 3. DELETION OF AN ELEMENT AT SPECIFIC POSITION

#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[10],i,n,pos,num;
    cout<<"Enter no of elements -";
    cin>>n;
    cout<<"Enter Array elements - ";
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"ARRAY - ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"position at which the element is to be deleted-";
    cin>>pos;
    cout<<endl<<"Element to be deleted- ";
    cin>>num;
    for (int i=pos;i<=n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"Array after INSERTION- ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}