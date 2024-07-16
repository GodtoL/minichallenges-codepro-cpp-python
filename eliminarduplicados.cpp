# include <iostream>
# include <vector>
# include <algorithm>

void deleteDuplicates(std::vector<int>& numbers) {
    std::sort(numbers.begin() , numbers.end());
    numbers.erase(std::unique(numbers.begin() , numbers.end()), numbers.end());
}

int main(){
    std::vector<int> numbers = {1, 0, 5, 7, 12, 45, 78, 6, 1, 7};
    
    std::cout << "La lista inicial es:\n";
    for (int number : numbers){
        std::cout << " " << number;}
    std::cout << std::endl;
    
    deleteDuplicates(numbers);

    std::cout << "La lista sin duplicados es:\n";
    for (int number : numbers){
        std::cout << " " << number;}
    
    return 0;
}