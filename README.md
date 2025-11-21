# proyecto-POO
Avances para mi proyecto para la materia de Pensamiento computacional orientado a objetos.
Mi proyecto consistirá en una tienda de donas, que vende donas con 3 bases diferentes: donas de levadura, donas de pastel y donas de papa.

La primera opción sería elegir la base de la dona, luego se eligirían "los atributos" que en este caso son el RELLENO (True o False) y en caso de True de que sabor el relleno, la CUBIERTA (True o False) y en caso de True el salor de la cubierta, y la decoración (True o False) y en caso de True como será decorada.

Para el primer avance, se declararon  tres clases: dona_levadura, dona_papa y dona_pastel, en los archivos: dona_levadura.h, dona_papa.h y dona_pastel.h respectivamente, se mandan a llamar las clases en el archivo tienda.cpp y se muestra un ejemplo de cada dona, al imprimir el valor de sus atributos (ingresado por el usuario) en formato de "ticket".

Para el segundo avance, se creó un UML para mostrar las distintas clases que conforman el programa, la clase dona_levadura, dona_papa y dona_pastel, ahora heredan sus características de la clase dona, y tienen una relación de agregación con la clase tienda, a través de la cual se pueden hacer pedidos.
