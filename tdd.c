// Clase para los tests
class TestCalculadora {
public:
    void runTests() {
        testSuma();
        
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
    
  
};

int main() {
    TestCalculadora testCalc;
    testCalc.runTests();
    return 0;
}