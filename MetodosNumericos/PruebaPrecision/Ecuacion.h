

#ifndef ECUACION_H
#define ECUACION_H

class Ecuacion {
    public:
        Ecuacion();
        void establecerValores(float, float, float);
        void establecerValoresD(double, double, double);
        void calcular();
        void imprimir();

    private:
        float a;
        float b;
        float c;
        
        double aa;
        double bb;
        double cc;
    
};

#endif /* ECUACION_H */

