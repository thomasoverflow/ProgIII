Crie a classe **ObjetoCubo** que tenha o método calcular_volume() sem parâmetros.

Crie a classe **ObjetoEsfera** que também tenha o método calcular_volume() sem parâmetros (considere pi=3.14).

Objetos de ambas as classes devem ter construtores que inicializem estes atributos.

Crie a classe **ObjetoMetal** que tenha o método std::string aparencia() sem parâmetros que retorne "metálico".

Crie a classe **ObjetoVidro** que também tenha o método std::string aparencia() sem parâmetros que retorne "transparente".

As classes podem ter quantos atributos você achar necessário.

Crie outras classes com herança para poder instanciar os seguintes objetos na main nesta ordem:

- Um cubo de vidro, de tamanho 5x5x5.

- Uma esfera de metal de raio 10.

- Uma esfera de vidro de raio 5.

As classes devem utilizar herança múltipla, e implementar o método info() que imprime na tela:

"Objeto de volume " << calcular_volume() << " e de aparência " << aparencia() << std::endl;

Os objetos devem chamar o método info na sequencia anterior.