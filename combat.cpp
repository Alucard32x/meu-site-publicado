#include<iostream>
#include<string>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#include<string>
#include<stdio.h>
#include<fstream>
#include<windows.h>

using namespace std;

int main(){
	string escolha;
	string escolha1;
	string escolha2;
	setlocale(LC_ALL,"portuguese");
	cout<<("Faça o teste para saber qual seria o seu exercito na segunda guerra mundial: \n\n");
	cout<<("Responda a estas perguntas: \n\n");
	cout<<("Ps:Use o capslock se não vai travar. \n\n"); //aviso inoscente
	cout<<("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.-..-.-.-.-.-.-.-.\n\n");
	cout<<("[1]No campo de batalha, o que você faria sob fogo cruzado? \n\n"); //questão um
	cout<<("A--Usaria meu intelecto para evasivar a saraivada de fogo, e posteriormente acharia um local para me abrigar. \n\n");
	cout<<("B--Atiraria de volta e partiria para cima, no intuito de deixar meus compatriotas recuarem, sacrificando minha vida. \n\n");
	cout<<("C--I am the fucking CHUCK NORRIS!!!! \n\n");
	cout<<("\n\n");
	cout<<("\n\n");
	cout<<("Escolha sua alternativa: ");Sleep(5000);
	cin>>escolha;
	cout<<("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n\n");
	cout<<("[2]Supondo que você seja o médico, e seus compatriotas precisem de você, o que faz? \n\n"); //questao dois
	cout<<("A--Tento salvar o máximo de pessoas, pois estes estão na mesma causa que eu. \n\n");
	cout<<("B--Salvo uns dois e saio correndo. \n\n");
	cout<<("C--Dou uma morfina para os menos feridos e mato os mais feridos. \n\n");
	cout<<("\n\n");
	cout<<("\n\n");
	cout<<("Escolha sua alternativa: ");Sleep(5000);
	cin>>escolha1;
	cout<<("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n\n");
	cout<<("[3]Seu superior lhe manda para uma missão suicida, o que você faz? \n\n"); //questao tres
	cout<<("A--Vou sem medo, pois estou aqui para servir, e não para ser servido \n\n");
	cout<<("B--Vou, porém protestando e com medo \n\n");
	cout<<("C--Nem fodendo \n\n");
	cout<<("\n\n");
	cout<<("\n\n");
	cout<<("Escolha sua alternativa: ");Sleep(5000);
	cin>>escolha2;
	cout<<("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n\n");
	//faça suas escolhas com sabedoria
	if(escolha=="A" && escolha1=="A" && escolha2=="A"){
		cout<<("Parabens, você é um exemplo de soldado americano dos filmes hollywoodianos!!! \n\n");
	}
	if(escolha=="B" && escolha1=="B" && escolha2=="B"){
		cout<<("É...Você é um filho da puta por natureza, porém quando precionado, é possível tirar uma coragem de você.");
	}
	if(escolha=="C" && escolha1=="C" && escolha2=="C"){
		cout<<("Você é o tipico individualista, que pensa que os fracos devem morrer e apenas os fortes devem se sobressair. \n\n");
	}
	if(escolha=="A" && escolha1=="A" && escolha2=="B"){
		cout<<("Você é um bom soldado, tenta dar o seu máximo, mesmo sendo um fraco... \n\n");
	}
	if(escolha=="A" && escolha1=="A" && escolha2=="C"){
		cout<<("Você é um soldado mediano, sem graça e até mesmo...Falso. \n\n");
	}
	if(escolha=="A" && escolha1=="B" && escolha2=="C"){
		cout<<("Vemos que és uma pessoa bipolar, onde em um momento é fodão e em outro um covarde completo. \n\n");
	}
	if(escolha=="A" && escolha1=="B" && escolha2=="B"){
		cout<<("Você é um fingido. Pensou que seria fácil, mas é dificil. \n\n");
	}
	if(escolha=="A" && escolha1=="C" && escolha2=="A"){
		cout<<("Cara...só uma coisa, procure um médico, você já ta sequelado antes mesmo de lutar. \n\n");
	}
	if(escolha=="A" && escolha1=="C" && escolha2=="B"){
		cout<<("Tu ta ali só pra lutar...Pouco importa se vai morrer, porém não quer ir sozinho. \n\n");
	}
	if(escolha=="B" && escolha1=="A" && escolha2=="A"){
		cout<<("Você é um turrão e brucutu... Só isso te define \n\n");
	}
	if(escolha=="B" && escolha1=="A" && escolha2=="B"){
		cout<<("Preguiçoso!!Você é...ha deixa pra lá já esqueci. \n\n");
	}
	if(escolha=="B" && escolha1=="A" && escolha2=="C"){
		cout<<("Seu sedentário!! Você é praticamente um vegetal em forma de soldado. \n\n");
	}
	if(escolha=="B" && escolha1=="B" && escolha2=="A"){
		cout<<("Você é como o apendice, apenas existe, mas não tem função. \n\n");
	}
	if(escolha=="B" && escolha1=="B" && escolha2=="C"){
		cout<<("Cara, na moral, vai dormir!!! \n\n");
	}
	if(escolha=="B" && escolha1=="C" && escolha2=="A"){
		cout<<("Tu é um cara legal, espero que consiga viver...mesmo sendo quase impossível \n\n");
	}
	if(escolha=="C" && escolha1=="C" && escolha2=="A"){
		cout<<("Tu é tipo o soldado perfeito, porém ainda tem algumas falhas...cof cof individualista. \n\n");
	}
	if(escolha=="C" && escolha1=="A" && escolha2=="B"){
		cout<<(" Vai la Joe Rambo, tu é foda.\n\n");
	}
	if(escolha=="C" && escolha1=="B" && escolha2=="A"){
		cout<<("Temos um Arnold Schwazeneger aqui!!! \n\n");
	}
	if(escolha=="C" && escolha1=="C" && escolha2=="A"){
		cout<<("Você é aquele cara que ninguém gosta, mas na hora do aperto...ainda continuam te odiando. \n\n");
	}
	if(escolha=="C" && escolha1=="C" && escolha2=="B"){
		cout<<("Com um soldado desses, quem precisa de alemão; \n\n");
	}	
	//foi mal pela porrada de ifs
	system("pause");
	return 0;
}

