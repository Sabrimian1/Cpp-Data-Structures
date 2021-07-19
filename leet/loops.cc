#include <iostream>
#include <vector>

int main(){
    std::vector<int> arr;

    for(int i = 1; i < 4; i++){
        arr.push_back(i);
    }


    for (int i = 0; i < arr.size(); i++){
        for (int j = i+1; j < arr.size(); j++){
            std::cout << arr[i] + arr[j] << std::endl;
        }
    }


    // for(int i = 0; i < 11; i++){
    //     for (int j = i; j >= 0; j--){
    //         std::cout << j << ' ';
    //     }

    //     std::cout << std::endl;
    // }
}