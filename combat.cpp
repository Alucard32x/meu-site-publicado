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
	cout<<("Fa�a o teste para saber qual seria o seu exercito na segunda guerra mundial: \n\n");
	cout<<("Responda a estas perguntas: \n\n");
	cout<<("Ps:Use o capslock se n�o vai travar. \n\n"); //aviso inoscente
	cout<<("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.-..-.-.-.-.-.-.-.\n\n");
	cout<<("[1]No campo de batalha, o que voc� faria sob fogo cruzado? \n\n"); //quest�o um
	cout<<("A--Usaria meu intelecto para evasivar a saraivada de fogo, e posteriormente acharia um local para me abrigar. \n\n");
	cout<<("B--Atiraria de volta e partiria para cima, no intuito de deixar meus compatriotas recuarem, sacrificando minha vida. \n\n");
	cout<<("C--I am the fucking CHUCK NORRIS!!!! \n\n");
	cout<<("\n\n");
	cout<<("\n\n");
	cout<<("Escolha sua alternativa: ");Sleep(5000);
	cin>>escolha;
	cout<<("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n\n");
	cout<<("[2]Supondo que voc� seja o m�dico, e seus compatriotas precisem de voc�, o que faz? \n\n"); //questao dois
	cout<<("A--Tento salvar o m�ximo de pessoas, pois estes est�o na mesma causa que eu. \n\n");
	cout<<("B--Salvo uns dois e saio correndo. \n\n");
	cout<<("C--Dou uma morfina para os menos feridos e mato os mais feridos. \n\n");
	cout<<("\n\n");
	cout<<("\n\n");
	cout<<("Escolha sua alternativa: ");Sleep(5000);
	cin>>escolha1;
	cout<<("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n\n");
	cout<<("[3]Seu superior lhe manda para uma miss�o suicida, o que voc� faz? \n\n"); //questao tres
	cout<<("A--Vou sem medo, pois estou aqui para servir, e n�o para ser servido \n\n");
	cout<<("B--Vou, por�m protestando e com medo \n\n");
	cout<<("C--Nem fodendo \n\n");
	cout<<("\n\n");
	cout<<("\n\n");
	cout<<("Escolha sua alternativa: ");Sleep(5000);
	cin>>escolha2;
	cout<<("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n\n");
	//fa�a suas escolhas com sabedoria
	if(escolha=="A" && escolha1=="A" && escolha2=="A"){
		cout<<("Parabens, voc� � um exemplo de soldado americano dos filmes hollywoodianos!!! \n\n");
	}
	if(escolha=="B" && escolha1=="B" && escolha2=="B"){
		cout<<("�...Voc� � um filho da puta por natureza, por�m quando precionado, � poss�vel tirar uma coragem de voc�.");
	}
	if(escolha=="C" && escolha1=="C" && escolha2=="C"){
		cout<<("Voc� � o tipico individualista, que pensa que os fracos devem morrer e apenas os fortes devem se sobressair. \n\n");
	}
	if(escolha=="A" && escolha1=="A" && escolha2=="B"){
		cout<<("Voc� � um bom soldado, tenta dar o seu m�ximo, mesmo sendo um fraco... \n\n");
	}
	if(escolha=="A" && escolha1=="A" && escolha2=="C"){
		cout<<("Voc� � um soldado mediano, sem gra�a e at� mesmo...Falso. \n\n");
	}
	if(escolha=="A" && escolha1=="B" && escolha2=="C"){
		cout<<("Vemos que �s uma pessoa bipolar, onde em um momento � fod�o e em outro um covarde completo. \n\n");
	}
	if(escolha=="A" && escolha1=="B" && escolha2=="B"){
		cout<<("Voc� � um fingido. Pensou que seria f�cil, mas � dificil. \n\n");
	}
	if(escolha=="A" && escolha1=="C" && escolha2=="A"){
		cout<<("Cara...s� uma coisa, procure um m�dico, voc� j� ta sequelado antes mesmo de lutar. \n\n");
	}
	if(escolha=="A" && escolha1=="C" && escolha2=="B"){
		cout<<("Tu ta ali s� pra lutar...Pouco importa se vai morrer, por�m n�o quer ir sozinho. \n\n");
	}
	if(escolha=="B" && escolha1=="A" && escolha2=="A"){
		cout<<("Voc� � um turr�o e brucutu... S� isso te define \n\n");
	}
	if(escolha=="B" && escolha1=="A" && escolha2=="B"){
		cout<<("Pregui�oso!!Voc� �...ha deixa pra l� j� esqueci. \n\n");
	}
	if(escolha=="B" && escolha1=="A" && escolha2=="C"){
		cout<<("Seu sedent�rio!! Voc� � praticamente um vegetal em forma de soldado. \n\n");
	}
	if(escolha=="B" && escolha1=="B" && escolha2=="A"){
		cout<<("Voc� � como o apendice, apenas existe, mas n�o tem fun��o. \n\n");
	}
	if(escolha=="B" && escolha1=="B" && escolha2=="C"){
		cout<<("Cara, na moral, vai dormir!!! \n\n");
	}
	if(escolha=="B" && escolha1=="C" && escolha2=="A"){
		cout<<("Tu � um cara legal, espero que consiga viver...mesmo sendo quase imposs�vel \n\n");
	}
	if(escolha=="C" && escolha1=="C" && escolha2=="A"){
		cout<<("Tu � tipo o soldado perfeito, por�m ainda tem algumas falhas...cof cof individualista. \n\n");
	}
	if(escolha=="C" && escolha1=="A" && escolha2=="B"){
		cout<<(" Vai la Joe Rambo, tu � foda.\n\n");
	}
	if(escolha=="C" && escolha1=="B" && escolha2=="A"){
		cout<<("Temos um Arnold Schwazeneger aqui!!! \n\n");
	}
	if(escolha=="C" && escolha1=="C" && escolha2=="A"){
		cout<<("Voc� � aquele cara que ningu�m gosta, mas na hora do aperto...ainda continuam te odiando. \n\n");
	}
	if(escolha=="C" && escolha1=="C" && escolha2=="B"){
		cout<<("Com um soldado desses, quem precisa de alem�o; \n\n");
	}	
	//foi mal pela porrada de ifs
	system("pause");
	return 0;
}

