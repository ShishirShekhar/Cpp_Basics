/*
Project 8-1

Convert the Help system from project 3-3 to Help class.
*/

#include <iostream>
using namespace std;

// A class that encapsulates a help system.
class Help{
    public:
        void helpon(char what);
        void showmenu();
        bool isvalid(char ch);
};

// Display help information.
void Help::helpon(char what){
	switch (what){
		case '1':
			cout << "The if statement:\n\n";
			cout << "if (condition) statement;\n";
			cout << "else statement;\n";
			break;
		case '2':
			cout << "The switch statement:\n\n";
			cout << "switch (expression){\n";
			cout << "\tcase constant:\n";
			cout << "\t\tstatement sequence;\n";
			cout << "\t\tbreak;\n";
			cout << "}\n";
			break;
		case '3':
			cout << "The for: \n\n";
			cout << "for(init; condition; increament) statement;\n";
			break;
		case '4':
			cout << "The while loop: \n\n";
			cout << "while(condition) statement;\n";
			break;
		case '5':
			cout << "The do-while loop: \n\n";
			cout << "do {\n";
			cout << "\tstatement;\n";
			cout << "} while (condition);\n";
			break;
		case '6':
			cout << "The break: \n\n";
			cout << "break;\n";
			break;
		case '7':
			cout << "The continue: \n\n";
			cout << "continue;\n";
			break;
		case '8':
			cout << "The goto: \n\n";
			cout << "goto label;\n";
			break;
    }
    cout << "\n";
}

// Show help menu.
void Help::showmenu(){
    cout << "Help on:\n";
    cout << "\t1. if\n";
    cout << "\t2. switch\n";
    cout << "\t3. for\n";
    cout << "\t4. while\n";
    cout << "\t5. do-while\n";
    cout << "\t6. break\n";
    cout << "\t7. continue\n";
    cout << "\t8. goto\n";
    cout << "Choose one(q to quit): ";
}

// Return true if selection is valid.
bool Help::isvalid(char ch){
    if (ch < '1' || ch > '8' && ch != 'q') 
        return false;
    else
        return true;
}

int main(){
    string choice;
    Help hlpob; // create an instance of the class Help.

    // Use Help object to display information.
    for (;;){
        do{
            hlpob.showmenu();
            cin >> choice;
			if (choice.length() > 1){
				cout << "Incorrect Input!" << endl;
			}
        } while (!hlpob.isvalid(choice[0]));
			
		if (choice[0] == 'q') break;
		cout << '\n';                                          

		hlpob.helpon(choice[0]);
    }
    return 0;
}
