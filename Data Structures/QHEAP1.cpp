/* Challenge link : https://www.hackerrank.com/challenges/qheap1/problem */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numberQuery, typeQuery, number, i;
    vector<int> heap;
    vector<int>::iterator indice;
    cin >> numberQuery;
    while(numberQuery--){
        cin >> typeQuery;
        switch(typeQuery){
            case 1:
                cin >> number;
                i = 0;
                if(!heap.empty()){
                    //order of conditional loop is Very important
                    // if you reverse the two conditions u will fall into
                    //out of range problem.
                    while((i < heap.size()) && (heap.at(i) < number) ){
                        i++;
                    }
                }
                heap.emplace(heap.begin()+i, number);
                break;
            case 2:
                cin >> number;
                indice = find(heap.begin(), heap.end(), number);
                heap.erase(indice);
                break;
            case 3:
                cout << heap.front() << endl;
                break;
        }
    }
    return 0;
}



