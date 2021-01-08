#include <iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include <iomanip>
#include<cmath>

using namespace std;

int main(){
    int count = 0;
    float sum = 0 ;
    float r = 0 ;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
	    sum += atof(textline.c_str());
	    r += atof(textline.c_str())*atof(textline.c_str()) ;
	    count++;
	}
	
    cout << "Number of data = "<< count;
    cout << setprecision(3);
    cout << "\nMean = "<< sum/count;
    cout << "\nStandard deviation = "<<sqrt((r/count)-((sum/count)*(sum/count)));
}