

#ifndef ECUACION_H
#define ECUACION_H

class Ecuacion {
    public:
        Ecuacion();
        void establecerValores(float, float, float);
        void calcular();
        void imprimir();

    private:
        float a;
        float b;
        float c;
    
};

#endif /* ECUACION_H */

