#include <iostream>
#include <string>
#include <map>
#include <stack>
#include <cctype>
#include <sstream>

void processAtoms(const std::string& formula, std::map<std::string, int>& atomCounts) {
    std::stack<std::map<std::string, int>> stack;
    std::stack<int> multipliers;
    std::map<std::string, int> currentMap;
    size_t len = formula.length();
    size_t i = 0;

    while (i < len) {
        if (isalpha(formula[i])) {
            
            std::string element;
            element += formula[i++];
            if (i < len && islower(formula[i])) {
                element += formula[i++];
            }

           
            int count = 0;
            while (i < len && isdigit(formula[i])) {
                count = count * 10 + (formula[i++] - '0');
            }
      
            if (count == 0) {
                count = 1;
            }

            currentMap[element] += count;
        } else if (formula[i] == '(') {
        
            stack.push(currentMap);
            multipliers.push(1);
            currentMap.clear();
            i++;
        } else if (formula[i] == ')') {
          
            i++;
            int count = 0;
            while (i < len && isdigit(formula[i])) {
                count = count * 10 + (formula[i++] - '0');
            }
            if (count == 0) {
                count = 1;
            }

           
            for (auto& [atom, atomCount] : currentMap) {
                atomCount *= count;
            }

         
            std::map<std::string, int> tempMap = stack.top();
            stack.pop();
            for (const auto& [atom, atomCount] : currentMap) {
                tempMap[atom] += atomCount;
            }
            currentMap = tempMap;
        } else {
            i++;  
        }
    }

    // Finalize the counts
    atomCounts = currentMap;
}

int main() {
    std::string formula;
    std::map<std::string, int> atomCounts;
    int totalAtoms = 0;


    std::cin >> formula;

    processAtoms(formula, atomCounts);

    for (const auto& pair : atomCounts) {
        totalAtoms += pair.second;
    }

   
    std::cout << totalAtoms << '\n';

    return 0;
}
