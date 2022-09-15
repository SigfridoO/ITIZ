package org.sigy.metodosnumericos.raicesdeecuaciones.biseccion;

import java.util.function.Function;
import static java.lang.Math.exp;

public class PruebaBiseccion {
    public static void main(String[] args) {
        Function<Double, Double> fun = c -> 667.38D /c * (1-exp(-0.146843*c)) - 40;
        Biseccion biseccion = new Biseccion(12D,16D, 0.05);

        biseccion.calcular(fun);
    }
}
