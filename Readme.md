# Enunciados:
Realizar un programa que SOLAMENTE utilizando if, printf y scanf y realizando máximo 7 preguntas de si o no pueda adivinar en qué animal de una lista de 10 animales está pensando el usuario () sin preguntar directamente si es ese animal.

Ejemplo 1:

Por favor escoja un animal de esta lista para que el programa intente adivinarlo:<br>
perro - pez<br>
gato - gallina<br>
caballo - pulpo<br>
vaca - cangrejo<br>
cerdo - aguila<br>

¿Su animal tiene pelaje? Si<br>
¿Su animal es consumido en Colombia? No<br>
¿Su animal es carnívoro? Si<br>
¿Su animal es comúnmente denominado "el mejor amigo del hombre"? Si<br>

Su animal es el perro<br>

Ejemplo 2:

Por favor escoja un animal de esta lista para que el programa intente adivinarlo:<br>
perro - pez<br>
gato - gallina<br>
caballo - pulpo<br>
vaca - cangrejo<br>
cerdo - aguila<br>

¿Su animal es cuadrúpedo? No<br>
¿Su animal es acuático? No<br>
¿Su animal puede realizar vuelos largos? No<br>

Su animal es la gallina<br>
Realizar un programa que SOLAMENTE utilizando switch, printf y scanf muestre una palabra en español en color azul con la cantidad de letras que el usuario elija entre 4 y 10 que empiece con la vocal que el usuario decida (sin importar si la ingresa en mayúscula o minúscula), en caso de que el usuario ingrese una opción inválida muestre en rojo “opción inválida, ¿Desea intentar de nuevo?” Dando hasta 3 intentos.

Ejemplo 1:

Por favor escoja la cantidad de letras que tendrá su palabra: 7<br>
Por favor escoja la letra inicial: B<br>
Opción invalida, intente de nuevo (2): z<br>
Opción invalida, intente de nuevo (1): A<br>

Su palabra es: arbitro<br>

Ejemplo 2:

Por favor escoja la cantidad de letras que tendrá su palabra: 11<br>
Opción invalida, intente de nuevo (2): 4<br>
Por favor escoja la letra inicial: t<br>
Opción invalida, intente de nuevo (1): z<br>

Opción inválida.<br>

Problemas while: <br>
Realizar una carita feliz de varios colores utilizando el símbolo "■" (Alt + 254) como se muestra en el dibujo:<br>
■■■■■■■■■■■■■<br>
■■■■□□□□□■■■■<br>
■■□□□□□□□□□■■<br>
■□□□■□□□■□□□■<br>
■□□□□□□□□□□□■<br>
■□□■□□□□□■□□■<br>
■■□□■■■■■□□■■<br>
■■■■□□□□□■■■■<br>
■■■■■■■■■■■■■<br>

Realizar un programa que reciba números por teclado, reste los pares, sume los impares y acabe cuando se ingrese un primo, debe ir imprimiendo todo el proceso y acabar con el resultado y contar cuántos números se operaron al final.<br>

Ejemplo 1:<br>
Ingrese los números a operar:<br>
4 9 9 8 11<br>
-4+9+9-8=6<br>

Ejemplo 2:<br>
Ingrese los números a operar:<br>
-2 4 17<br>
-(-2)-4=-2<br>

Realizar un círculo con el radio que ingrese el usuario utilizando los números primos y el tabulador sin utilizar while anidados<br>

Ejemplo 1:<br>
Ingrese el radio del círculo: 2<br>
&nbsp;&nbsp;2&nbsp;&nbsp;3&nbsp;&nbsp;5<br>
7&nbsp;&nbsp;11&nbsp;13&nbsp;17&nbsp;19<br>
23&nbsp;29&nbsp;31&nbsp;37&nbsp;41<br>
43&nbsp;47&nbsp;53&nbsp;59&nbsp;61<br>
&nbsp;&nbsp;67&nbsp;71&nbsp;73<br>

Ejemplo 2:<br>
Ingrese el radio del círculo: 1<br>
&nbsp;&nbsp;2<br>
3&nbsp;5&nbsp;7<br>
&nbsp;&nbsp;11<br>

Problemas for:<br>

Realizar un programa que SOLAMENTE utilizando switch, if, for, printf, scanf y funciones matemáticas muestre un menú de comida con formato de tabla (utilizando \t) con mínimo 7 opciones y permite escoger la cantidad de opciones que el usuario desee y la cantidad de cada platillo para dar el recibo final, además debe desglosar toda la factura y dar la opción de dividirla para que cada persona pague una parte; se debe redondear hacia arriba en caso de que muestre valores inválidos para la moneda colombiana.<br>

Ejemplo 1:<br>
+------------------------+-----------+<br>
|          MENU          | Precio    |<br>
+------------------------+-----------+<br>
| 1. Hamburguesa  | $12000  |<br>
| 2. Perro                | $10000  |<br>
| 3. Arepa Burguer | $14000  |<br>
| 4. Ensalada          | $8000    |<br>
| 5. Chuzo mixto     | $10000  |<br>
| 6. Chuzo de pollo | $9000    |<br>
| 7. Chuzo de res    | $9000    |<br>
+------------------------+-----------+<br>
¿Cuántas opciones desea seleccionar? 3<br>
Elija la opción de su pedido 1: 1<br>
¿Cuántas Hamburguesas desea? 3<br>
Elija la opción su pedido 2: 4<br>
¿Cuántas ensaladas desea? 2<br>
Elija la opción de su pedido 3: 2<br>
¿Cuántos perros desea? 5<br>
Hamburguesas    3     $36000<br>
Ensaladas           2      $16000<br>
Perros                 5      $50000<br>
Su total es: $102000, ¿Desea dividir la factura? si<br>
¿Cuántas personas pagarán? 5<br>
Cada uno debe pagar $20400, tengan un buen día<br>

Ejemplo 2:<br>
+------------------------+-----------+<br>
|          MENU          | Precio    |<br>
+------------------------+-----------+<br>
| 1. Spaghetti           | $25000  |<br>
| 2. Pizza                 | $18000  |<br>
| 3. Lasagna            | $23000  |<br>
| 4. Penne                | $26000  |<br>
| 5. Ravioli               | $30000  |<br>
| 6. Carne al pesto  | $29000  |<br>
| 7. Ensalada           | $13000  |<br>
+------------------------+-----------+<br>
¿Cuántas opciones desea seleccionar? 4<br>
Elija la opción de su pedido 1: 1<br>
¿Cuántos platos de Spaghetti desea? 3<br>
Elija la opción de su pedido 2: 4<br>
¿Cuántos platos de Penne desea? 2<br>
Elija la opción de su pedido 3: 1<br>
¿Cuántos platos de Spaghetti desea? 2<br>
Elija la opción de su pedido 4: 7<br>
¿Cuántos platos de Ensalada desea? 1<br>
Spaghetti       5      $125000<br>
Penne            2      $52000<br>
Ensalada       1      $13000<br>
Su total es: $190000, ¿Desea dividir la factura? no<br>
Debe pagar $190000, tenga un buen día<br>

Realizar un programa que haga un cuadrado de 7 x 8 utilizando el símbolo "█" (Alt + 219) y mediante el cambio de color haga un juego en el cual el usuario tenga que llevar el cuadro azul (empieza en la esquina 1 - 1) hasta el cuadro verde que se ubica aleatoriamente en el mapa (no se debe ubicar encima o en los próximos 2 cuadros del azul) utilizando WASD, y acabe cuando se utilicen 50 movimientos, al final debe mostrar el puntaje (cuántas veces se llegó al cuadro verde con el cuadro azul).<br>

Ejemplo:<br>
BIENVENIDO<br>
Utilice W para subir, S para bajar, A para ir a la izquierda y D para ir a la derecha, presione enter después de cada comando.<br>
![Alt text](<Captura de Pantalla 2023-09-17 a la(s) 12.36.09 a.m..png>)<br>
¡GANASTE!<br>
Utilizaste 18 movimientos<br>

Realizar un programa que SOLAMENTE utilizando if, system(“clear”), for, printf y scanf "anime" una pelota rebotando la cantidad de veces que el usuario desee.<br>

Ejemplo 1:<br>
¿Cuántas veces desea que rebote la pelota? 3<br>
╔═══╗<br>
║   ║<br>
║ ☺ ║<br>
╚═══╝<br>
╔═══╗<br>
║ ☺ ║<br>
║   ║<br>
╚═══╝<br>
╔═══╗<br>
║   ║<br>
║ ☺ ║<br>
╚═══╝<br>
