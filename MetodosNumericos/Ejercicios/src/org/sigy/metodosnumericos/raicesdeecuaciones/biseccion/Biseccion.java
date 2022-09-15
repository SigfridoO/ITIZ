package org.sigy.metodosnumericos.raicesdeecuaciones.biseccion;

import java.util.function.Function;

import static java.lang.Math.abs;

public class Biseccion {
    private Double limiteSuperior;
    private Double limiteInferior;
    private Double error;

    public Biseccion(Double limiteInferior, Double limiteSuperior, Double error) {
        this.limiteInferior = limiteInferior;
        this.limiteSuperior = limiteSuperior;
        this.error = error;
    }

    public void calcular (Function <Double, Double> fun) {


        Double xl = this.limiteInferior;
        Double xu = this.limiteSuperior;
        Double xr = 0D;
        Double xrAnterior;

        Double errorRelativoPorcentual = null;
        Double prueba;

        int iteracionesMaximas = 20;
        int i = 0;

        do {
            i++;
            xrAnterior = xr;
            xr =  (xl + xu)/2;

            if (!xr.equals(0D)) {
                errorRelativoPorcentual = abs((xr-xrAnterior)/xr)* 100;
            }

            prueba = fun.apply(xl)*fun.apply(xr);

            if (prueba < 0D) {
                xu = xr;
            } else if (prueba > 0D){
                xl = xr;
            }else{
                errorRelativoPorcentual = 0D;
            }

            System.out.println("i= " + i +  ", xr = " + xr + ", error = " + error + ", errorRelativoPorcentual = " + errorRelativoPorcentual);
        }while (abs(errorRelativoPorcentual) > abs(error) && i < iteracionesMaximas );
        System.out.println("=========================");
        System.out.println("El resultado es = " + xr);
    }
}
