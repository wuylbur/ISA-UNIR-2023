// Clase para la calculadora

class Calculadora {
public:
    double suma(double a, double b) {
        return a + b;
    }

    double resta(double a, double b) {
        return a - b;
    }

    double multiplicacion(double a, double b) {
        return a * b;
    }

    double division(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            // division por cero da error
            throw std::runtime_error("Error: división por cero");
        }
    }

    double raiz_cuadrada(double a) {
        if (a >= 0) {
            //utilizamos el metodo de bakhshali
            double x = a;
            double precision = 0.001;
            while (true) {
                double raiz_previa = x;
            x = (x + a / x) / 2.0;
                if (fabs(x - raiz_previa) < precision) {
                  return round(x * 1000) / 1000; // Redondear a 3 decimales
                }
            }
        } else {
            throw std::runtime_error("Error: número negativo");
        }
    }

}