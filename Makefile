######### Sintaxe ###########
#regra: dependências
#<TAB>	comando	
#############################

#A regra all: é usada para construir o sistema de forma incremental 
all: saida
	@echo " " 
	@echo "Copilação concluída!!"
	@echo " " 
	 

#==============
#A regra saida: tem como dependências os arquivos objeto, ou seja, para criar o executavel saida precisamos dos 4 arquivos .o 
#O comando cria o executável saida a partir dos arquivos objetos progPrincipal.o mult.o soma.o par.o
saida: ex5.exe apartamentos.exe vendaMenor.exe imoveis.exe casas.exe todos.exe learquivo.exe
	gcc -o saida ex5.exe apartamentos.exe vendaMenor.exe imoveis.exe casas.exe todos.exe learquivo.exe

ex5.exe: ex5.c
	gcc -o ex5.exe -c ex5.c

apartamentos.exe: apartamentos.c
	gcc -o apartamentos.exe -c apartamentos.c

vendaMenor.exe: vendaMenor.c
	gcc -o vendaMenor.exe -c vendaMenor.c

imoveis.exe: imoveis.c 
	gcc -o imoveis.exe -c imoveis.c 

casas.exe: casas.c 
	gcc -o casas.exe -c casas.c 

todos.exe: todos.c 
	gcc -o todos.exe -c todos.c

learquivo.exe: learquivo.c
	gcc -o learquivo.exe -c learquivo.c
#==============
#A regra clean: apaga os arquivos .o ao digitarmos make clean na console
clean: 
	rm -f *.exe

#==============
#A regra execClean: apaga o arquivo executável ao digitarmos make cleanExec na console	
execClean:
	rm -f saida