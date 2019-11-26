#include <iostream>
#include <string>
using namespace std;


/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
    int qtd, iguais, cont;
    iguais=0;
    qtd=texto.length();
    for(cont=0; cont<qtd; cont++)
    {
        if(texto[cont]==letra)
            iguais++;
    }
    return iguais;
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
void substituirLetra(char letra1,char letra2, string texto)
{
    int qtd, cont;
    qtd=texto.length();
    for(cont=0; cont<qtd; cont++)
    {
        if(texto[cont]==letra1)
            texto[cont]=letra2;
    }
    cout<<texto;
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
    int qtd, pos;
    qtd=0;
    pos=texto.find (palavra, 0);
    while(pos!=-1)
    {
        qtd++;
        pos=texto.find (palavra, pos+1);
    }
    return qtd;
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
    int pos, qtd;
    qtd=palavra1.length();
    pos = texto.find (palavra1, 0);
    while(pos!=-1)
    {
        texto.replace (pos, qtd, palavra2);
        pos=texto.find (palavra1, pos+1);
    }
    cout<< texto;

}

int main(){
    char letra, letrasub, letraasub;
    string texto, palavra, palavrasub, palavraasub;
    int escolha, qtd;
	cout << "Entre com o texto para fazer o teste:";
	getline (cin, texto);
	cout<< "1- Contar letras";
	cout<< "\n2- Substituir letras";
	cout<< "\n3- Contar palavras";
	cout<< "\n4- Substituir palavras";
    cout<< "\nEscolha:";
	cin>> escolha;
	if (escolha==1)
    {
        cout<< "Entre com a letra a ser contada:";
        cin>> letra;
        qtd=contaLetras(letra, texto);
        cout<< "Quantidade:"<<qtd;
    }
    else
        if(escolha==2)
        {
            cout<< "Entre com a letra a ser substituida:";
            cin>> letrasub;
            cout<< "Entre com a letra a substituir:";
            cin>> letraasub;
            substituirLetra (letrasub, letraasub, texto);
        }
        else
            if(escolha==3)
            {
                cout<< "Entre com a palavra a ser contada:";
                cin>> palavra;
                qtd=contaPalavras(palavra, texto);
                cout<< "Quantidade:"<<qtd;
            }
            else
            {
                cout<< "Entre com a palavra a ser substituida:";
                cin>> palavrasub;
                cout<< "Entre com a palavra a substituir:";
                cin>> palavraasub;
                substituirPalavras (palavrasub, palavraasub, texto);
            }
	return 0;
}
