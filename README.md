# ISA2023
Actividad Grupal UNIR 2023 Ingeniería Software Avanzada
Los compañeros que han intervenido son  Jorge Bea, Israel Cerro y Gonzalo Castro.

En esta actividad nos centraremos en profundizar en técnicas y herramientas específicas relacionadas con la mejora de la calidad del proceso y del producto software. Como hemos estudiado, una de las prácticas recomendadas por XP es el desarrollo dirigido por pruebas, donde las pruebas funcionales del sistema se diseñan al comienzo, antes de realizar su implementación. Hemos profundizado sobre esta idea en uno de los temas de la asignatura, estudiando TDD, ATDD y BDD. También hemos visto cómo el modelo CMMI permite ayudar a las organizaciones a mejorar sus procesos de producción de software mejorando así, en última instancia, la calidad del producto.

Esta actividad está formada por dos ejercicios que deberán realizarse de manera grupal:

	Una primera parte en la que desarrollaréis una calculadora científica empleando la técnica TDD.
	Una segunda parte en la que reflexionaréis sobre el modelo CMMI y lo aplicaréis proponiendo una ruta de mejora de proceso en un entorno ágil.

Objetivos de la actividad

Con esta actividad pretendemos alcanzar los siguientes objetivos:

	Desarrollar un producto sencillo utilizando los principios del desarrollo dirigido por pruebas.
	Aprender a utilizar los fundamentos de un sistema de control de versiones, publicando el código en un repositorio público online.
	Aprender a buscar en Internet información de calidad y específica para resolver un problema concreto.
	Comprender la utilidad de la representación continua del modelo CMMI aplicado a dos áreas de proceso concretas.
	Analizar las metas específicas de dos áreas de proceso y proponer prácticas adecuadas para conseguirlas.
	Saber relacionar los conceptos estudiados sobre metodologías ágiles al comienzo de la asignatura, con la manera de mejorar los procesos organizacionales que propone el CMMI.

Descripción del primer ejercicio: Desarrollo de una calculadora con TDD

En este trabajo deberás implementar una aplicación sencilla empleando una de las técnicas de desarrollo estudiadas en este tema: TDD o BDD. Para ello, tendrás completa libertad a la hora de elegir la tecnología, lenguaje y framework de desarrollo más apropiados según tu experiencia e intereses.

La aplicación consistirá en una calculadora sencilla capaz de realizar las siguientes operaciones:

1.	Suma y resta de números reales.
2.	Multiplicación y división de números reales.
3.	Raíz cuadrada de números reales. Deberéis identificar un método de cálculo aproximado, al no poder utilizar funciones de la librería matemática.
4.	Función exponencial con base e. Deberéis identificar un método de cálculo aproximado, al no poder utilizar funciones de la librería matemática.

Para las operaciones 3 y 4 no podrás hacer uso de ninguna librería matemática y deberás utilizar operaciones básicas como la suma, resta, multiplicación y división, empleando para ello las funciones de la propia calculadora implementadas en los pasos anteriores. La precisión alcanzada en los cálculos debe ser superior a 10-3.

No existe ninguna restricción en cuanto a la tecnología o formato de la aplicación. Puede ser una simple aplicación de línea de comandos en C# o en Java, una aplicación con GUI, una aplicación web, una aplicación móvil Android, una API… Encontrarás tutoriales específicos relacionados con las técnicas TDD y BDD para casi cualquier lenguaje y frameworks de desarrollo moderno existentes.

Se trata, por tanto, de encontrar un tutorial, manual o artículo, relacionado con la tecnología más interesante para ti. Puede que el tutorial utilice como ejemplo específico el desarrollo de una calculadora, pero en cualquier caso te será fácil adaptar las indicaciones a una aplicación como la propuesta.

Basándote en el tutorial, deberás resolver la actividad implementando de manera incremental y secuencial las funcionalidades de suma, resta, multiplicación, división, raíz cuadrada y exponencial, teniendo en cuenta las limitaciones impuestas.

Durante el trabajo de desarrollo deberás utilizar un sistema de control de versiones Git. Se trata de dejar reflejada cualquier modificación mediante un commit en la rama master o main del repositorio.

Es importante que en la secuencia de commits refleje que defines la prueba correspondiente a cada funcionalidad antes de su implementación. Cualquier actividad de refactorización del código también debería quedar reflejada en la secuencia de commits. 

Finalmente, deberás publicar el código en un repositorio online, como GitHub o Bitbucket (también de tu elección), no siendo necesario el envío de código con la actividad, sino únicamente un enlace al repositorio que contiene el código con la actividad resuelta según la técnica propuesta.

Existen diferentes maneras de organizar el trabajo dentro del equipo:

	Puede haber compañeros que definan las pruebas, y otros se encarguen de su implementación.
	Se puede repartir el trabajo de implementación de las diferentes funciones entre los integrantes del equipo.
	Si la aplicación dispone de interfaz gráfica, puede haber compañeros encargados del diseño e implementación de estas, y otros encargados de implementar la funcionalidad de cálculo.
