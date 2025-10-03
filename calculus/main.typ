#set text(
  lang: "es",
  font: "Noto Sans Georgian",
  size: 11pt
)

#set page(
  paper: "us-letter",
  margin: (x: 1.54cm, y: 3.54cm),
  numbering: "1 of 1",
  number-align: right + bottom,
  header: align(center)[
    #grid(
      columns: (20%, 60%, 20%),
      align(left)[
        #image("logo_tec.png", width: auto)
      ],
      align(center)[
        #par(leading: .3cm)[
          #text(size: 18pt)[Tecnológico Nacional de México] \
          Instituto Tecnológico de Querétaro \
          Cálculo diferencial
        ]
      ],
      align(right)[
        #image("logo_itq.png")
      ],
    )
  ],
)
#set text(
)
#set par(
  justify: false,
  leading: 2.0em,
) 
#set par(first-line-indent: (
  amount: 1.27cm,
  all: true,
))

#set enum(numbering: "a)")

#align(center + horizon)[
  #heading(outlined: false)[3.1 Resumen de Estructuras Selectivas] \
  Emilio Rojas Badillo \
  Instituto Tecnológico de Querétaro \
  Cálculo diferencial \
  Francisco Javier Aviles Urbiola \
  #datetime.today().display() \
]

#pagebreak()
#outline()
#pagebreak()

#set heading(numbering: "1.")

= Instrucciones
Investiguen cómo es posible deducir la fórmula general de la ecuación cuadrática, $x = frac(-b #sym.plus.minus root(2, b^2 - 4a dot c) , 2 dot a)$ utilizando dos métodos distintos.
#enum[El método tradicional de completar el trinomio cuadrado perfecto (TCP).][El método de Poh-Shen Loh, basado en la simetría y el promedio de las raíces.]

= Objetivos 
#enum[Comprender los posibles orígenes de la fórmula general que resuelve las ecuaciones polinómicas cuadráticas de una variable.][Practicar la escritura de expresiones matemáticas en Microsoft Word, utilizando los comandos de la referencia de símbolos y
comandos publicada en el apartado Materiales del curso de Classroom.]

#pagebreak()

= Método de Completar el Trinomio Cuadrado Perfecto
Partimos de la forma general de la ecuación cuadrática:
$ "ax"² + "bx" + c = 0 $
$ "donde" a #sym.eq.not 0 $

== Normalización del coeficiente principal
Dividimos toda la ecuación entre el coeficiente cuadrático *a* para obtener un coeficiente unitario en $x²$:
$ x^2 + (b/a)x + c/a = 0 $
Esta operación es válida ya que $a #sym.eq.not 0$ por definición de ecuación cuadrática.
== Aislamiento de términos variables
Transponemos el término constante al miembro derecho:
$ x^2 + (b/a)x = -c/a $
== Completación del cuadrado perfecto
Esta es la operación fundamental del método. Para transformar el miembro izquierdo en un trinomio cuadrado perfecto, seguimos el principio algebraico:
$ (x + p)^2 = x^2 + 2"px" + p^2 $
Comparando con nuestra expresión $ x^2 + (b/a)x $ Identificamos que:
$ 2p = b/a #sym.arrow.r.double p = b/(2a) $
Por lo tanto, el término que completa el cuadrado es:
$ p^2 = [b/(2a)]^2 = b^2/(4a^2) $
Añadimos este término a ambos miembros para preservar la igualdad:
$ x^2 + (b/a)x + b^2/(4a^2) = -c/a + b^2/(4a^2) $

== Factorización y simplificación
El miembro izquierdo es ahora un trinomio cuadrado perfecto:
$ (x + b/(2a))^2 = -c/a + b^2/(4a^2) $
Para combinar los términos del miembro derecho, obtenemos común denominador $4a^2$:
$ (x + b/(2a))^2 = (-4"ac" + b^2)/(4a^2) $
$ (x + b/(2a))^2 = (b^2 - 4"ac")/(4a^2) $

== Extracción de raíz cuadrada
Aplicamos la propiedad de las ecuaciones: $ "si" A^2 = B "entonces" A #sym.eq.not #sym.plus.minus root(2, B)$
$ x + b/(2a) = #sym.plus.minus root(2, (b^2 - 4a c)/(4a^2))  $
$ x + b/(2a) = #sym.plus.minus root(2, b^2 - 4a c)/root(2, 4a^2) $
$ x + b/(2a) = #sym.plus.minus root(2, b^2 - 4a c)/(2a) $
Nótese que $root(2, 4a^2) =  2 dot abs(a)$ pero como el #sym.plus.minus ya indica ambas posibilidades, podemos escribir simplemente $2a$.
== Despeje final de x
$ x = -b/(2a) ± √(b^2 - 4a c)/(2a) $
$ x = (-b ± √(b^2 - 4a c))/(2a) $

#pagebreak()

= Método de Poh-Shen Loh (Método de la Simetría)
Fundamento teórico: Este método se basa en las propiedades de las raíces de la ecuación cuadrática. Por el teorema de Vieta, si $r$ y$ $s son las raíces de $a x^2 + b x + c = 0$, entonces:
$ r + s = -b/a "(suma de raíces)" $
$ r dot s = c/a "(producto de raíces)" $

== Definición del punto de simetría
El promedio aritmético de las raíces representa el punto medio entre ellas:
$ m = (r + s)/2 = -b/(2a) $
Este valor *m* es el eje de simetría de la parábola.
== Representación simétrica de las raíces
Expresamos las raíces como desviaciones simétricas del promedio:
$ r = m + d $
$ s = m - d $
Donde *d* representa la distancia desde cada raíz al centro de simetría.
== Aplicación de la propiedad del producto
Sustituimos en la segunda relación de Vieta:
$ r dot s = (m + d)(m - d) = c/a $
Aplicando la identidad algebraica de diferencia de cuadrados:
$ m^2 - d^2 = c/a $
== Determinación de la desviación d
Despejamos d^2 de la ecuación anterior:
$ d^2 = m^2 - c/a $
Sustituimos $m = -b/(2a)$:
$ d^2 = b^2/(4a^2) - c/a $
$ d^2 = (b^2 - 4a c)/(4a^2) $
Extraemos raíz cuadrada:
$ d = ±√(b^2 - 4a c)/(2a) $
El doble signo refleja la simetría de las dos raíces equidistantes del centro.
== Formulación final de las raíces
Combinamos las expresiones:
$ r, s = 
m #sym.plus.minus d = -b/(2a) #sym.plus.minus root(2, b^2 - 4a c)/(2a) $
$ r, s = (-b ± root(2, b^2 - 4a c))/(2a) $