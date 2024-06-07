Dado uma sequência de texto de um chat, Lattes escreveu uma aplicação para mostrar uma bandeira relacionado ao idioma antes do texto.

Ele utilizou herança nas suas classes, criando uma classe Base texto que armazena a mensagem, e duas classes derivadas que tem uma constante diferente da bandeira e o método getTexto para mostrar a bandeira e a mensagem. Lattes criou uma lista da classe Texto. Para cada entrada, ele alocava um objeto da classe derivada correspondente e adicionava na lista. Finamente, ele chama a função imprimir_chat que recebe a lista, e seu desejo é imprimir o texto com a bandeira correta, chamando o método getTexto de cada entrada na lista.

O problema é que Lattes não conseguiu escrever algumas linhas de código:

1. Na função imprimir_chat ele não soube como iterar (percorrer cada elemento) da lista de texto.
2. Na função imprimir_chat ele ainda precisa chamar o método getTexto e redirecioná-lo para std::cout.
3. No final do main, ele não sabe como liberar a memória dos objetos alocados com delete.

Ajude Lattes a terminar seu programa, lembre que você precisara declarar algumas funções como virtuais!