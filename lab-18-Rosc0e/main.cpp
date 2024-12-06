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
    for(int i = 0; i < numTrees; i++) {
        treeTop();
        treeTrunk(height);
        cout << endl;
    }
}

int main() {
    int height, numTrees;
    
    cout << "Enter tree height: ";
    cin >> height;
    
    cout << "Enter number of trees: ";
    cin >> numTrees;
    
    drawTrees(height, numTrees);
    
    return 0;
}