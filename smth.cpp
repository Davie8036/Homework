#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char* argv[]){
    if(argc!=2){


        cout<<"Ogtagortsir"<<argv[0]<<endl;
        return 1;
    }
    ifstream file(argv[1]);
    if(!file){
        cerr<<"eroor file not found"<<endl;
        return 1;
    }
    cout<<file.rdbuf();
    return 0;
}
