# Introducción al lenguaje C/C++ Práctica 2

<h4 align="center">
:construction: Practica en Desarrollo :construction:
</h4>

## Objetivo

Introducir al estudiante en la sintaxis del lenguaje C, a través de la implementación de programas básicos.

## Materiales

- Computador.
- Compilador [OnlineGDB](https://www.onlinegdb.com/online_c_compiler).


## Práctica

### **Ejercicios para aplicar lógica algorítmica**

1. En la expresión: *for(i=1; i==4; i+=2);* ¿cuántas veces se evalúa la condición?

    En la expresión `for(i=1; i==4; i+=2);`, la condición `i==4` se evalúa solo una vez, al inicio del bucle. 

    El bucle `for` se ejecutará siempre que la condición sea verdadera. Sin embargo, en este caso, la condición `i==4` es falsa desde el principio, ya que `i` se inicializa con el valor `1`. Por lo tanto, el bucle no se ejecutará en absoluto.

    Un bucle `for` consta de tres partes: inicialización, condición y expresión de incremento/decremento. En tu caso, la condición no se cumple desde el principio, por lo que el bucle no se ejecutará y el flujo del programa continuará después del bucle sin ninguna iteración.


2. Incrementar una variable entera j desde 0 hasta n y luego mostrar el resultado.
Hacerlo utilizando 3 bucles diferentes. 

    **Utilizando un bucle for:**

    ~~~
    #include <stdio.h>

    int main() {
        int n;
        printf("Ingrese el valor de n: ");
        scanf("%d", &n);

        printf("Utilizando el bucle for:\n");
        for (int j = 0; j <= n; j++) {
            printf("%d ", j);
        }

        return 0;
    }
    ~~~

    **Utilizando un bucle while:**

    ~~~
    #include <stdio.h>

    int main() {
        int n;
        printf("Ingrese el valor de n: ");
        scanf("%d", &n);

        printf("Utilizando el bucle while:\n");
        int j = 0;
        while (j <= n) {
            printf("%d ", j);
            j++;
        }

        return 0;
    }

    ~~~

    **Utilizando un bucle do-while:**

    ~~~
    #include <stdio.h>

    int main() {
        int n;
        printf("Ingrese el valor de n: ");
        scanf("%d", &n);

        printf("Utilizando el bucle do-while:\n");
        int j = 0;
        do {
            printf("%d ", j);
            j++;
        } while (j <= n);

        return 0;
    }

    ~~~


3. Leer sucesivamente del teclado hasta que aparezca un número comprendido entre 1 y 5. Desarrollar el algoritmo usando la función *scanf()*
~~~
~~~

4. Consulte cómo usar la función *getchar()*. Resuelva el punto anterior usando esta función. 
~~~
~~~

5. Codificar en C un programa que lea 20 caracteres indique cuantas "a" se ingresaron, cuantas "e, u".
~~~
~~~

6. Codificar un algoritmo en C, que imprima los números pares entre 20 y 200. El programa debe imprimir 6 números por línea separados por 4 espacios en blanco.
~~~
~~~

7. Codificar un algoritmo en C, que imprima todos los números primos que hay desde 1 hasta un número x, que que se debe introducir por teclado. El programa debe poder ejecutarse mientras el usuario lo requiera y finalizará al ingresar el valor 0.
~~~
~~~

8. Codificar un algoritmo en C, que imprima el mayor y el menor de una serie de 8 números que vamos introduciendo por teclado.
~~~
~~~

9. Hacer un programa en C, que genere y muestre en pantalla la tabla ASCII.
~~~
~~~

10. Hacer un programa que genere aleatoriamente 100 números, los almacene en un arreglo, luego ingrese un número y determine entre los números almacenados cuales son menores o iguales al número ingresado. Con los mayores calcular su sumatoria.
~~~
~~~