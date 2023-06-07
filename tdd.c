// Clase para los tests
class TestCalculadora {
public:
    void runTests() {
        testSuma();
        testResta();
        testMultiplicacion();
        testDivision();
        testDivisionPorCero();
        testRaizCuadrada();
        testRaizCuadradaDeNumeroNegativo();
        //si los test se pasan correctamente, lo muestro
        std::cout << "Todos los tests pasaron correctamente." << std::endl;
    }

private:
    //test de la suma
    void testSuma() {
        Calculadora calc;
        double result = calc.suma(2.5, 3.7);
        assert(fabs(result - 6.2) < 0.001);
    }
    //test de la resta
    void testResta() {
        Calculadora calc;
        double result = calc.resta(5.5, 2.3);
        assert(fabs(result - 3.2) < 0.001);
    }
    //test de la multiplicación
    void testMultiplicacion() {
        Calculadora calc;
        double result = calc.multiplicacion(4.2, 3.1);
        assert(fabs(result - 13.02) < 0.001);
    }
    //test de la division
    void testDivision() {
        Calculadora calc;
        double result = calc.division(10.0, 2.5);
        assert(fabs(result - 4.0) < 0.001);
    }
    //tst de la dicison entre cero
    void testDivisionPorCero() {
        Calculadora calc;
        try {
            calc.division(10.0, 0);
        } catch (const std::runtime_error& e) {
            assert(std::string(e.what()) == "Error: división por cero");
        }
    }
    //test de la raiz cuadrada
    void testRaizCuadrada() {
        Calculadora calc;
        double result = calc.raiz_cuadrada(16.0);
        assert(fabs(result - 4.0) < 0.001);
    }
    //test de la reaiz cuadrada de un negativo
    void testRaizCuadradaDeNumeroNegativo() {
        Calculadora calc;
        try {
            calc.raiz_cuadrada(-16.0);
        } catch (const std::runtime_error& e) {
            assert(std::string(e.what()) == "Error: número negativo");
        }
    }
};

int main() {
    TestCalculadora testCalc;
    testCalc.runTests();
    return 0;
}