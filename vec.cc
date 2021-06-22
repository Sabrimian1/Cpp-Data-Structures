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
