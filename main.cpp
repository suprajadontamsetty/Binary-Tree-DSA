#include "BinarySearchTree.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    BinarySearchTree b;
    int input;
    int insert;
    int del;
    while (1)
    {
        cout << endl << endl;
        cout << " Binary Search Tree Operations " << endl;
        cout << " ----------------------------- " << endl;
        cout << " 1. Insertion/Creation " << endl;
        cout << " 2. Printing " << endl;
        cout << " 3. Removal " << endl;
        cout << " 4. Exit " << endl;
        cout << " Enter your choice : ";
        cin >> input;
        system("cls");
        switch (input)
        {
        case 1: cout << " Enter Number to be inserted : ";
            cin >> insert;
            b.insert(insert);
            break;
        case 2: cout << endl;

            cout << " Printing " << endl;
            cout << " --------------------" << endl;
            b.print_postorder();

            break;
        case 3: cout << " Enter data to be deleted : ";
            cin >> del;
            b.remove(del);
            break;
        case 4:
            return 0;

        }
    }
}