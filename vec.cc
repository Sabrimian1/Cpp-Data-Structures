#include <iostream>


namespace sab{
    template<Typename T>
    class Vector{
        public:
            Vector(){
                ptr = new T[1];
                capacity = 1;
                current = 0;
            };

            void push_back(T inst){
                if (current == capacity){
                    T* temp = new T[capacity * 2]
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

            void get_total{
                std::cout << current << std::endl;
            };




        private:
            T* ptr;

            int capacity;

            int current;
    }


}

int main(){

}
