Considere uma figura que é formada por formas geométricas do tipo quadrado, triângulo, círculo e que não se intersectam.

Implemente uma classe Figura que armazene estas formas geométricas e implemente um método calcula_area() que retorna o somatório de todas as areas das formas geométricas.

- Utilize uma classe abstrata e polimorfismo para as formas geométricas.

Implemente o main que leia a seguinte estrutura:

- Primeira linha contém n, o número de formas geométricas da figura.

- Seguido por n linhas começando com uma string da forma geométrica, podendo ser "quadrado", "triangulo", ou "circulo".

- No caso de quadrado, a linha contêm um float que representa o lado do quadrado.

- No caso de triângulo, a linha contêm dois floats que representam a altura e a largura do triângulo.

- No caso de círculo, a linha contêm um float que representa o raio do círculo.

Exemplo entrada:

5

quadrado 5

triangulo 2 3

circulo 10

quadrado 2

triangulo 5 5

Saída:

358.5