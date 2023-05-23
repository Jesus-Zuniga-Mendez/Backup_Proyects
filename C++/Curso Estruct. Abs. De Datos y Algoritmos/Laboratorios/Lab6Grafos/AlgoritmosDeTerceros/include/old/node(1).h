using namespace std;
// ...
class ClassNode{
    public:
        int valor;
        int NodeID;
        ClassNode(int valor, int NodeID){
            this->valor = valor;
            this->NodeID = NodeID;

            cout<<"Nodo creado"<<endl;
        };
        ~ClassNode(){};
        void imprimir(){
            cout<<this->valor;
        };
};

