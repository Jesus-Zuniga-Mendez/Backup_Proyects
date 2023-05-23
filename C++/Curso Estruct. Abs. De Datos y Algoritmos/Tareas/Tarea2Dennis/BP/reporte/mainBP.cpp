#include <iostream>
#include <cstring>
#include "Element.h"
#include "Stack.h"

using namespace std;
#define Data Element<char> // vagancia

int main(int argc, char **argv)
{
    Stack<char> s;
    int id=0;
    int id2=0;
    int id3=0;
    if (argc==1){
        cout<<"Cadena vacia";
        return(0);
    }
    for (int k=1; k<argc; k++){
        id=0;
        id2=0;
        id3=0;

        for (int i=0; i<(strlen(argv[k])); i++) {
            if ((argv[k][i]=='(') || (argv[k][i]=='{') || (argv[k][i]=='[')|| (argv[k][i]=='<')){
                s.push(argv[k][i]);
                id2++;
            }
            if ((argv[k][i]==')') || (argv[k][i]==']') || (argv[k][i]=='}')|| (argv[k][i]=='>')){
                id3++;
            }
            if((argv[k][i]==')') || (argv[k][i]=='}') || (argv[k][i]==']')|| (argv[k][i]=='>')){
                if ((argv[k][i]==')' && s.peek()=='(')||(argv[k][i]=='}' && s.peek()=='{')||(argv[k][i]==']' && s.peek()=='[')||(argv[k][i]=='>' && s.peek()=='<')){
                     s.pop();
                     id++;
                }
            }
        }
        if ((id==id2)&&(id2==id3)){
            cout<<"Cadena: "<<k<<" balanceada "<<endl ;
        }
        else{
            cout<<"Cadena: "<<k<<" no balanceada "<<endl ;
        }

    }

}
