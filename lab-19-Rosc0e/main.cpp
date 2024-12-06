#include <iostream>
using namespace std;

void treeTop() {
    cout << "   ^   " << endl;
    cout << "  / \\ " << endl;
    cout << " /   \\" << endl;
    cout << "/_____\\" << endl;
}

void treeTrunk(int height) {
    for(int i = 0; i < height; i++) {
        cout << "  | |  " << endl;
    }
}

void drawTrees(int height, int numTrees) {
    static int totalTrees = 0;
    
    for(int i = 0; i < numTrees; i++) {
        treeTop();
        treeTrunk(height);
        cout << endl;
        totalTrees++;
    }
    
    cout << "There are currently " << totalTrees << " trees in the forest." << endl;
}

int main() {
    int height, numTrees;
    char choice;
    
    do {
        cout << "Enter tree height: ";
        cin >> height;
    
        cout << "Enter number of trees: ";
        cin >> numTrees;
    
        drawTrees(height, numTrees);
        
        cout << "Do you want more trees (Y/N) ?: ";
        cin >> choice;
        
    } while (choice == 'Y' || choice == 'y');
    
    return 0;
}
