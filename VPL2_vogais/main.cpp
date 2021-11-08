/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <string>
#include <sstream>

#define LOG(x) std::cout << x << std::endl;

using namespace std;


void Impressao(int a, int e, int i, int o, int u){
    std::cout << "Número de vogais 'a' =" << a << std::endl;
    std::cout << "Número de vogais 'e' =" << e << std::endl;
    std::cout << "Número de vogais 'i' =" << i << std::endl;
    std::cout << "Número de vogais 'o' =" << o << std::endl;
    std::cout << "Número de vogais 'u' =" << u << std::endl;
}

void CompararVogais(string &str1){
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    
    for (int aux = 0; aux <= str1.length(); aux++){
        
        if(str1[aux] == 'a'){
            a++;
        }
        
        if(str1[aux] == 'e'){
            e++;
        }
        
        if(str1[aux] == 'i'){
            i++;
        }
        
        if(str1[aux] == 'o'){
            o++;
        }
        
        if(str1[aux] == 'u'){
            u++;
        }
        
        else {
            continue;
        }
        
    }
    
    Impressao(a,e,i,o,u);
}

int main ()
{
    
    string Palavra;   
    LOG("Insira a palavra desejada: ")
    getline (cin,Palavra);

    CompararVogais(Palavra);

    std::cin.get();
    return 0;
}





