#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    string continuar;
    vector<int>  numeros;
    int numero;
    int escolha;
    int soma;


    do {

        cout << "insira um elemento no vetor!: ";
        cin>> numero;

        numeros.push_back(numero);


        cout << "quer continuar?: (s ou n)";
        cin >> continuar;

    } while(continuar == "s") ;


    do {

        cout
        << "[1]Se quiser imprimir somatoria dos elementos: "<<endl
        << "[2]Se quiser imprimir a media dos elemntos: "<<endl
        << "[3]Se quiser imprimir a mdia e a somatória do elementos: " <<endl
        << "[4]Para substituir por zero numeros repetidos e imprimir somatoria: " <<endl
        << "[5]Para substituir por zero numeros repetidos e imprimir somatoria e a média: "<<endl
        << "[6]Para mostrar o vetor odernado: " <<endl
        << "[0]Para sair da aplicação: " <<endl;

        cin >> escolha;

        switch(escolha){

            case 1:
                cout << "opção 1" << endl;

                soma = 0;

                for(int i= 0; i < numeros.size(); i++){

                    soma = soma + numeros[i];
                }
                cout << soma <<endl;

            break;

            //---------------------------------------------------
            case 2:
                cout << "opção 2";
                            //soma
                for(int i= 0; i < numeros.size(); i++){
                    soma = soma + numeros[i];
                }
                cout << "MEDIA: " << soma / numeros.size()<<endl;

            break;

            //---------------------------------------------------
            case 3:
                cout << "opção 3";
                     cout << "opção 1" << endl;

                soma = 0;

                for(int i= 0; i < numeros.size(); i++){

                    soma = soma + numeros[i];
                }
                cout << soma <<endl;

                    for(int i= 0; i < numeros.size(); i++){
                        soma = soma + numeros[i];
                    }
                    cout << "MEDIA: " << soma / numeros.size()<<endl;


            break;

            //---------------------------------------------------
            case 4:
                cout << "opção 4";
                for(int i = 0; i < numeros.size(); i++){

                    if(numeros[i] < 0 ){
                        numeros[i] = 0;
                    }
                }
                  for(int i= 0; i < numeros.size(); i++){
                    soma = soma + numeros[i];
                }
                cout << "MEDIA: " << soma / numeros.size()<<endl;
            break;

            //---------------------------------------------------
            case 5:

                cout << "opção 5";
                soma = 0;

                for(int i = 0; i < numeros.size(); i++){

                    int elemento = numeros[i];


                    for(int j = 0; j < numeros.size(); j++){

                        if ( elemento == numeros[j] && i != j){
                            numeros[j] = 0;
                        }
                    }
                }

                //soma
                for(int i= 0; i < numeros.size(); i++){
                    soma = soma + numeros[i];
                }
                cout << "MEDIA: " << soma / numeros.size()<<endl;

            break;


            case 6:
                cout << "opção 6" << endl;
                  sort(numeros.begin(), numeros.end());
                  
                    for(int i= 0; i < numeros.size(); i++){
                        cout<< numeros[i] <<endl;
                        
                    }

            break;

            default:
            cout << "opcao invalida";
            break;

        }


    }while(escolha != 0);

return 0;
}
