# proyecto-POO
Avances para mi proyecto para la materia de Pensamiento computacional orientado a objetos.
Mi proyecto consistirá en una tienda de donas, que vende donas con 3 bases diferentes: donas de levadura, donas de pastel y donas de papa.

La primera opción sería elegir la base de la dona, luego se eligirían "los atributos" que en este caso son el RELLENO, la CUBIERTA y la DECORACIÓN.

Para el primer avance, se declararon  tres clases: dona_levadura, dona_papa y dona_pastel, en los archivos: dona_levadura.h, dona_papa.h y dona_pastel.h respectivamente, se mandan a llamar las clases en el archivo tienda.cpp y se muestra un ejemplo de cada dona, al imprimir el valor de sus atributos (ingresado por el usuario) en formato de "ticket".

Para el segundo avance, se creó un UML para mostrar las distintas clases que conforman el programa, la clase dona_levadura, dona_papa y dona_pastel, ahora heredan sus características de la clase dona, y tienen una relación de agregación con la clase tienda, a través de la cual se pueden hacer pedidos.

En el tercer avance, actualizo los archivos, ahora se muestra la relación de HERENCIA de la clase Dona, con las clases: Dona_pastel, Dona_levadura y Dona_papa, además, agrego la clase Pedido, para poder hacer las preguntas sobre el relleno, la cubierta y la decoración deseadas. Agrego un método a la clase Dona para poder imprimir los atributos en el ticket final, mando llamar todo para poder hacer que el programa funcione en el archivo main. Actualizo el diagrama UML con la nueva estructura del programa.

El programa ya no funciona si se responden carácteres que no se encuentran entre las opciones. (En el caso de las preguntas de menú y si deseas ordenar otra dona).
