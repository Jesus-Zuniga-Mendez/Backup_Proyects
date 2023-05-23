#include <iostream>
#include "Element.h"
#include "Queue.h"
#include <chrono>
#include <random>
#include <string>

#define Data Element<double> // vagancia
using namespace std;

int rand_gen(int elements){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator (seed);
    std::uniform_int_distribution<int> distribution(0, elements-1);
    int number=distribution(generator);
    return(number);
}

int main(int argc, char* argv[])
{
    int elements;
    int rand_num;
    int num_cola;
    int nuevo_elemento;

    elements=int(argv[1][0])-48;
    int rem_itms[elements];

    Queue<int> q[elements];

    for (int i=0; i<elements; i++){
        rem_itms[i]=0;
        q[i]=Queue<int>();
    }

    for (int i=0; i<17; i++){
        num_cola=rand_gen(elements);
        if (i>=8){
            for (int k=0; k<elements; k++){
               if (rem_itms[k]==rem_itms[k-1]){
                    num_cola=k-1;
                }
                if (rem_itms[k]<=2 || rem_itms[k]==0){
                    num_cola=k;
                }
            }
        }
        nuevo_elemento=rand_gen(40);
        cout<<"                    ";
        q[num_cola].enqueue(nuevo_elemento);
        rem_itms[num_cola]++;
    }
        for (int c=0; c<elements; c++){
        cout<<endl;
        cout<<"Cola "<<c+1<<":";
        for(int i=0; i<rem_itms[c]; i++){
            int elemento = q[c].dequeue();
            q[c].enqueue(elemento);
            cout<<elemento<<" ";
        }
    }

    int k=0;
    int p=0;
    int elemento;
    int counter=0;
    char prioridad;
    int posicion=0;
    cout<<endl;
    cout<<endl;

    for (int i=0; i<17; i++){
        elemento=q[p].dequeue();
        if (rem_itms[p]>0){
            cout<<elemento<<" ";
            rem_itms[p]--;
            i--;
        }
        counter++;
        prioridad=argv[2][k];
        posicion=int(prioridad)-'0';

        if (counter==posicion){
            k=k+2;
            p++;
            counter=0;
            string Dato2=argv[2];

            if (k>Dato2.size()){
                k=0;
                p=0;
            }

        }

    }
}

