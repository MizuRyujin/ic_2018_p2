2� Projeto de Introdu��o � Computa��o 2018/2019

"Settlers of Catan" Simples

	Trabalho realizado por: 
	Miguel Fern�ndez - a21803644
	Nuno Galego - a21804797
	Jo�o Rebelo - a21805230

Descri��o:
	Neste ficheiro est� a descri��o do jogo "Catan Simples", as regras do jogo com dados importantes da sua execu��o e conclus�es que tir�mos com tudo isto.
	No ficheiro do projeto est�o tamb�m 2 fluxogramas do programa tal como todos os ficheiros .c e headers necess�rios para o funcionamento do mesmo.

Estruturas de dados feitas:
	-Estrutura de mapa;
	-Estrutura de jogador que inclui uma estrutura de recursos e territ�rio;
	-Estrutura de N� para ser utilizada na cria��o da grelha chamando a estrutura do mapa;

Algoritmos relevantes:
	-Header criado para alocar a mem�ria para o mapa;
	-Header de jogador que inclui todos os prot�tipos de fun��o para o funcionamento de 1 turno;

Manual de utilizador:
	Para compilar � s� correr o ficheiro makefile.
	Como jogar:
		Jogo 1v1, ganha o jogador que chegar mais r�pido aos 6 Pontos de Vit�ria.
		O jogo inicia-se, cada jogador tem que escrever o seu nome e escolher a sua casa de partida. 
		De seguida o Jogador 1 lan�a os dados, se o n�mero que este lan�ou for igual a uma das coordenadas, Norte, Sul, Este e Oeste, o Jogador 1 ganha o recurso que estiver na coordenada que acertou, se o n�mero que lan�ar n�o for igual a nenhuma coordenada, este n�o ganha nada.
		Depois passa para a pr�xima fase em que o jogador pode trocar 4 de um recurso por 1 de outro recurso ou trocar 10 de um recurso por 1 ponto de vit�ria.
		Pode tamb�m comprar mais aldeias com 1 de cada recurso menos ferro e/outransformar aldeias em cidades (cada aldeia comprada arrecada 1 ponto de vit�ria para o comprador e cada cidade arrecada 2 pontos de vit�ria).
		De seguida joga o Jogador 2 tendo este as mesmas escolhas, o jogo s� acaba quando 1 dos jogadores ganhar.	

Conclus�es e mat�ria aprendida:
	Tivemos problemas com arrays, listas e matrizes na cria��o da grelha, inclusive ao colocar a grelha em forma de quadro colocando-a horizontalmente.
 	Foi dif�cil criar as estruturas e garantir que os valores destas fossem alterados conforme o desejado.
	Conseguimos organizar programas em bibliotecas sem ter necessidade de definir vari�veis globaisevitando ficheiros .c demasiado extensos e desorganizados.
	

Refer�ncias: 
	Para este projeto, as refer�ncias mais diretas que utiliz�mos foram tiradas da aula 12 de IC, utilizando os cprogs e os slides dados pelo professor que nos ajudaram imenso a organizar e a estruturar o nosso programa.
	Tamb�m tir�mos algumas d�vidas diretamente com o professor, para outras d�vidas us�mos um livro chamado "Linguagem C" de Lu�s Damasou ent�o pesquis�mos no Stack Overflow.
	Tivemos algumas discuss�es de ideias com colegas, o Jo�o David e o Rodrigo Pinheiro.

	