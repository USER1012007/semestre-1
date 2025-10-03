#import "@preview/codly:1.2.0": *
#show: codly-init

#import "@preview/codly-languages:0.1.8": *
#codly(languages: codly-languages)

#set text(lang: "es")
#set page(
  paper: "us-letter",
  margin: (x: 2.54cm, y: 2.54cm),
  numbering: "1",
  number-align: right + top 
)
#set text(
  font: "Noto Sans Georgian",
  size: 11pt
)
#set par(
  justify: false,
  leading: 2.0em,
) 
#set par(first-line-indent: (
  amount: 1.27cm,
  all: true,
))

#show table.cell.where(y: 0): strong
#set table(
  stroke: (x, y) => if y == 0 or x >= 0 {
    (bottom: 0.9pt + black)
  },
  align: (x, y) => (
    if x > 0 { center }
    else { left }
  )
)

#align(center + horizon)[
  #heading(outlined: false)[3.1 Resumen de Estructuras Selectivas] \
  Emilio Rojas Badillo \
  Instituto Tecnológico de Querétaro \
  Fundamentos de Programación \
  María Luisa Montes Almanza \
  #datetime.today().display() \
]

#pagebreak()
#outline()
#pagebreak()

#set heading(numbering: "1.")

= Introducción
La estructura de control selectiva o alternativa tiene una sola entrada y una sola salida. Se elige una acción (una o varias instrucciones) basándose en una condición. Esta condición es una expresión lógica o booleana que resulta en un valor verdadero (distinto de cero) o falso (cero).
== Tipos de estructuras de control selectivas 
Existen tres tipos principales de estructuras de control selectivas:
- Selectiva Simple `(si / if)`.
- Selectiva Doble `(si/si-no / if/else)`.
- Selectiva Múltiple `(segun_sea / switch)`.

= Estructura de Control Selectiva Simple `( / )`
Esta estructura dirige a la computadora para ejecutar una o más instrucciones solamente si la condición es verdadera (V). Si la condición es falsa (F), la acción se omite y el programa continúa con la siguiente instrucción fuera de la estructura.
== Puntos Clave 
Solo ejecuta acciones en el camino verdadero. Si se requiere ejecutar un bloque de instrucciones, es necesario utilizar `inicio` y `fin` (o llaves `{}`) para agruparlas.

#table(
  columns: 2,
  table.header(
    [Pseudocódigo],
    [Descripción y Ejemplo],
  ),
  [`si (condición) inst 1`],
  [Ejemplo: Si un alumno obtiene una calificación igual o superior a 60, se le notifica que ha aprobado.],
  [`si (cal >= 60) imprimir “Aprobada”`], [Si cal es 75, se imprime "Aprobada". Si cal es 59, no se imprime nada y el programa continúa.],
)
#pagebreak()

= Estructura de Control Selectiva Doble ( / )
Esta estructura dirige a la computadora para ejecutar una acción si la condición es verdadera (V), y otra acción en caso de que sea falsa (F). El programa pasa por una de las dos instrucciones, pero nunca por ambas. Las instrucciones deben ser diferentes en cada caso; de lo contrario, no se necesitaría una estructura selectiva.

== Puntos clave
Permite la ejecución de alternativas exclusivas.

#table(
  columns: 2,
  table.header(
    [Pseudocódigo],
    [Descripción y Ejemplo],
  ),
  [`si (condición) inst 1 sino inst 2`],
  [Ejemplo: Determinar si un número es par o impar. Esto se verifica usando el operador módulo (mod).],
  [`si (num mod 2 = 0) imprimir num "es par" si no imprimir num "es impar"`], [Si el número (num) es 8, la condición es verdadera (8 mod 2 = 0), e imprime "8 es par". Si el número es 5, la condición es falsa, e imprime "5 es impar".],
)

#pagebreak()

= Anidamiento o Escalonamiento ( / )
El anidamiento implica insertar una estructura selectiva dentro de otra. La expresión if-else-if (si-si no-si) se utiliza cuando se necesita verificar varias condiciones secuencialmente.
== Puntos clave
Se usa para establecer rangos de valores o clasificaciones múltiples donde solo una opción es posible.

#table(
  columns: 2,
  table.header(
    [Pseudocódigo],
    [Descripción y Ejemplo],
  ),
  [`si (condición1) inst1(s) sino si (condición2) inst2(s) sino...`],
  [Ejemplo: Clasificar una tecla (dato) según su código ASCII (si es dígito, mayúscula, minúscula, o carácter especial).],
  [`si (dato >= 48 y dato <= 57) imprimir “Es un dígito” si no si (dato >= 65 y dato <= 90) imprimir “es una letra mayúscula” si no si (dato >= 97 y dato <= 122) imprimir “es una letra minúscula” si no imprimir “es un carácter especial”`], [Si el dato es 'a' (ASCII 97), fallan las dos primeras condiciones, pero la tercera (dato >= 97 y dato <= 122) es verdadera, e imprime "es una letra minúscula".],
)

#pagebreak()

= Estructura de Control Selectiva Múltiple ( / )
Esta estructura selecciona entre múltiples alternativas basándose en el valor de una expresión. Es ideal cuando todas las condiciones utilizan la igualdad de una variable o expresión con constantes predefinidas.
== Puntos clave
- La expresión solo acepta valores enteros o caracteres. No permite rangos de valores.
- Se utiliza la palabra reservada salir (break) al final de cada caso (case) para que el control pase al final de la estructura. Si se omite break, el programa seguirá ejecutando los casos siguientes.
- El caso por omisión (caso contrario / default) se ejecuta si ninguna de las constantes coincide con el valor de la expresión.

#table(
  columns: 2,
  table.header(
    [Pseudocódigo],
    [Descripción y Ejemplo],
  ),
  [`segun_sea (expresión) inicio caso exp_const_1: inst1; salir; ... caso contrario: inst_n; fin`],
  [Dado un número (dia) del 1 al 7, imprimir el día de la semana correspondiente.],
  [`segun_sea (dia) inicio caso 1: imprimir “lunes”; salir; ... caso 7: imprimir “domingo”; salir; caso contrario: imprimir “El día no existe”; fin`], [Si el usuario introduce dia = 3, el programa imprime "El día 3 es Miércoles". Si introduce dia = 9, entrará al caso contrario e imprime "El día no existe".],
)
#pagebreak()

= Referencias
Nakamura, M. A. C., & Ancona Valdez, M. de los Á. (2011). Diseño de algoritmos y su codificación en lenguaje C. McGraw-Hill/Interamericana Editores, S.A. de C.V..