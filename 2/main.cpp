#include <iostream>
using namespace std;
int main (){
    int d;
    cin>>d;
    double *p=new double [d];
    for(int i=0;i<d;i++){
        cin>>p[i];
    }
    cout<<"average = ";
    double sum=0;
    for(int j=0;j<d;j++){
        sum=sum+p[j];
    }
    double w;
    w=sum*1.0/d;
    printf("%.2f",w);
    cout<<'\n';
    double max=p[0];
    for(int i=0;i<d;i++){
        if(max<p[i]){
            max=p[i];
        }
    }
    cout<<"max = ";
    printf("%.2f",max);
    cout<<'\n';
    double min=p[0];
    for(int i=0;i<d;i++){
        if(min>p[i]){
            min=p[i];
        }
    }
    cout<<"min = ";
    printf("%.2f",min);
    cout<<'\n';
    delete [] p;
}
