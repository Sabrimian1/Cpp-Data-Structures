#pragma once
#include <iostream>



namespace sab{

    template<typename T>
    class Vector{
        public:
            Vector(){
                ptr = new T[1];
                capacity = 1;
                current = 0;
            };

            ~Vector(){
                delete [] ptr;
            }

            void push_back(T inst){
                if (current == capacity){
                    T* temp = new T[capacity * 2];
                    for(int i = 0; i < capacity; i++){
                        temp[i] = ptr[i];
                    }

                    delete [] ptr;
                    capacity *= 2;
                    ptr = temp;
                }

                ptr[current] = inst;
                current++;
            };



            void get_total(){
                std::cout << current << std::endl;
            };

            void get_from_index(int index){
                if (index < current){
                    std::cout<< ptr[index] << std::endl;
                }
            }

            void print(){
                for (int i = 0; i < current; i++){
                    std::cout << ptr[i] << std::endl;
                }
            }




        private:
            T* ptr;

            int capacity;

            int current;
    };


};

