#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>

void removeSmallerThanL(std::unordered_set<int>& numSet, int l) {
    for (auto it = numSet.begin(); it != numSet.end();) {
        if (*it < l) {
            it = numSet.erase(it);
        }
        else {
            ++it;
        }
    }
}

void removeSmallerThanM(std::list<int>& numList, int m) {
    for (auto it = numList.begin(); it != numList.end();) {
        if (*it < m) {
            it = numList.erase(it);
        }
        else {
            ++it;
        }
    }
}

void removeSmallerThanN(std::vector<int>& numVector, int n) {
    for (auto it = numVector.begin(); it != numVector.end();) {
        if (*it < n) {
            it = numVector.erase(it);
        }
        else {
            ++it;
        }
    }
}

int main() {
    std::vector<int> Vecnumbers = { 2, 8, 5, 12, 3, 10 };
    int n = 7;
    std::list<int> numbers = { 2, 3, 5, 374, 5 };
    int m = 9; 
    std::unordered_set<int> Setnumbers = { 10, 5, 7, 8, 24, 25 };
    int l = 9;

    removeSmallerThanN(Vecnumbers, n);
    removeSmallerThanM(numbers, m);
    removeSmallerThanL(Setnumbers, l);

    std::cout << "Unordered set after removing " << l << ": ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    


    std::cout << "List after removing " << m << ": ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector after removing " << n << ": ";
    for (int num : Vecnumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

