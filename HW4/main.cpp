#include <iostream>
#include "lexer.h"
using namespace std;

int main(int argc, char* argv[])
{
    int num = 1;
    Lexer lexer;
    lexer.openfile(argv[1]);

    while(true)
    {
        // scan a token in object
        Token* t = lexer.scan();
        if(lexer.iseof()) break;

        // toString() will call the class of its counterpart
        cout << num++ << "\tToken: " << t->toString() << "\t";
        cout << "( ";
        // the tag of the token
        t->mark(t->tag);
        cout << " )" << endl;
    }
    cout << num++ << "\tEnd of file reached" << endl;
    lexer.closefile();

    return 0;
}
