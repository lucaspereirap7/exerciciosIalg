#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int corr,quart,andar,quantreserv,numerp,temphos,cont = 0;
    char tipomonstro;
    string nomearquivo;
    cin>>nomearquivo;
    ifstream monstros(nomearquivo);
    monstros>>quantreserv;
    while(cont<quantreserv){
        monstros>>tipomonstro>>numerp>>temphos;
        if(tipomonstro == 'm' or tipomonstro == 'z'){
          andar=1;
        }else if(tipomonstro == 'l' or tipomonstro == 'd'){
        andar=2;
        }else if(tipomonstro == 'h' or tipomonstro == 's'){
        andar=3;
        }else if (tipomonstro == 'v' or tipomonstro == 'f'){
            andar=4;
        }
        if(numerp<2){
            corr = 1;
        }else if(numerp == 2){
            corr = 2;
        }else if(numerp >=3){
            corr = 3;
        }
        if(temphos<=2){
            quart =1;
        }else if(temphos==3 or temphos==4){
            quart=2;
        }else if(temphos==5 or temphos==6){
            quart=3;
        }else if(temphos>=7){
            quart=4;
        }
	cout<<andar<<corr<<quart;
	cont++;         
        }
}
