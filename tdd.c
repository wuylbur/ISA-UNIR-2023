// Clase para los tests
class TestCalculadora {
public:
    void runTests() {
        testSuma();
        testResta();
        testMultiplicacion();
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
  
};

int main() {
    TestCalculadora testCalc;
    testCalc.runTests();
    return 0;
}