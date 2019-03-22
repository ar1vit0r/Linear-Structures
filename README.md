# Exercícios para Algoritmos e Estrutura de Dados I - Estruturas Lineares

Declaro que o presente trabalho contém código desenvolvido exclusivamente por mim e que não foi compartilhado de nenhuma forma com terceiros a não ser o professor da disciplina. Compreendo que qualquer violação destes princípios será punida rigorosamente de acordo com o Regimento da UFPEL.

(Preencha com seus dados)

- Nome completo: Ari Vitor Lazzarotto
- Username do Bitbucket: darkzx1fn0q
- Email @inf: avdslazzarotto@inf.ufpel.edu.br


## Descrição

As estruturas de dados implementadas nestes exercícios serão importantes para a implementação dos trabalhos práticos da disciplina. Portanto, comece tão cedo quanto possível a programar e testar. Não se limite aos testes fornecidos.

**Para esses exercícios, supõe-se que o aluno já realizou anteriormente o tutorial de Bitbucket com sucesso.** Caso ainda não tenha feito, pare aqui e só volte quando tiver.

Cada subdiretório possui um _header_ com as assinaturas das funções a serem implementadas, um _Makefile_ para compilá-las e dois arquivos fonte _C_. Por exemplo, para listas sequenciais:

* _ls.h_ é o _header_
* _ls.c_ é o arquivo que deverá conter as implementações
* _teste.c_ é o arquivo que realiza alguns testes para verificar a sanidade da biblioteca

O arquivo _simplegrade.h_ inclui definições de funções para o teste. Muitas destas funções são apenas para imprimir na saída padrão com determinadas cores. Outras contam com parâmetros e realizam algum tipo de teste nas saídas. 

## Como usar

O aluno deve fazer _fork_ com uma cópia privada deste repositório (e mantê-la privada). Qualquer código que não tenha sido expressamente desenvolvido pelo aluno ou que tenha sido divulgado e copiado por outro aluno implicará imediatamente nas punições previstas no Regimento da Universidade para todos os alunos envolvidos, bem como nota **ZERO** nos trabalhos relacionados.

Para trabalhar em uma estrutura de dados que não dependa das outras, basta entrar no diretório e usar o _make_ diretamente lá.

Executar _make_ no diretório raiz do repositório fará com que _make_ seja executado nos subdiretórios. 

Para executar os testes de apenas uma estrutura de dados, use _make target_ onde _target_ é uma das regras no _Makefile_.

Para rodar testes no Travis, não esqueça de alterar a receita no _travis.yml_ para definir quais testes devem ser executados (linhas na seção _script_).

##  Cronograma

Cada implementação será cobrada na aula prática subsequente à aula prática onde o exercício começou. Após a implementação das filas, os alunos deverão executar todos os testes no Bitbucket.

## Perguntas

1. Como os diferentes _Makefiles_ sabem onde encontrar a biblioteca _simplegrade.h_?
2. É uma boa ideia implementar todas as funções na própria _simplegrade.h_? Dê uma razão contra e uma a favor.
3. Como está sendo contabilizada a nota?
3. Para que serve a _flag_ **-Wall**?
4. Para que serve a _flag_ **-O1**?
5. Para que serve a _flag_ **-g**?
6. Para que serve a _flag_ **-I**?
7. Para que o _.PHONY_ no _Makefile_?
8. O que precisa ser mudado nos Makefiles de pilha e fila para usar as listas implementadas anteriormente? 

## Referências

- [1] https://github.com/pilla/simplegrade
- [2] https://pt.wikibooks.org/wiki/Programar_em_C/Makefiles
- [3] man gcc
- [4] man make
 
