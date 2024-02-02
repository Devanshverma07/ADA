#include<iostream>
#include <cstdlib>
#include<time.h>

using namespace std;
void selecSort(int a[], int n){
    //let a be the list of n natural numbers
    for(int i=0;i<n;i++){
        int j=i;
        for(int k=i+1;k<n;k++){
            if(a[k]<a[j]){
                j=k; 
            }
           
        } 
        if(i!=j) {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    
}
  int main(){
    int t1,t2,y[100],x[100];
    int z=0;
  
   

    for(int i=1000;i<100000;i=i+1000){
        int a[i];
    ///to generate random number from n to i    
        for(int j=1;j<=i;j++){
            a[j]=rand()%i;
        }
        clock_t t1=clock();
        for(int l=1;l<=10;l++){
            selecSort(a,i);
        }
        clock_t t2=clock();
            float avgT= float(t2-t1)/10;
            x[z]=i;
            y[z]=avgT;
            
            cout<<x[z]<<" "<<y[z]<<endl;
            z++;
        }
    }
