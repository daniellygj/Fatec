package Baralhoo;

import java.util.Random;

public class Baralho {

    private Carta[] cartas = new Carta[56];
    private int qtd = 56;

    public void inicializarBaralho() {
        int indice = 0;

        String[] naipes = {"Paus", "Ouros", "Copas", "Espadas"};
        int naipe = 0;

        while (naipe < 4) {
            for (Integer i = 1; i < 14; i++) {
                if (i == 1)
                    cartas[indice] = new Carta("A", naipes[naipe]);
                else if (i == 11)
                    cartas[indice] = new Carta("Dama", naipes[naipe]);
                else if (i == 12)
                    cartas[indice] = new Carta("Valete", naipes[naipe]);
                else if (i == 13)
                    cartas[indice] = new Carta("Rei", naipes[naipe]);
                else
                    cartas[indice] = new Carta(i.toString(), naipes[naipe]);
                indice++;
            }

            naipe++;
            cartas[indice] = new Carta("coringa", "-");
            indice++;
        }
    }

    public void imprimeBaralho() {
        StringBuilder sb = new StringBuilder();

        for (Carta carta : cartas) {
            if (carta != null) {
                System.out.printf("Carta: %s | Naipe: %s\n", carta.getNome(), carta.getNaipe());
            }
        }
    }

    public void embaralhar() {
        for (int i = 0; i < 56; i++) {
            Random aleatorio = new Random();
            int indice = aleatorio.nextInt(50);

            Carta aux = cartas[indice];
            cartas[indice] = cartas[i];
            cartas[i] = aux;
        }
    }

    public boolean hasCarta() {
        return qtd > 0;
    }

    public Carta distribuirCarta() {
        Carta carta = new Carta();

        for (int i = 0; i < 56; i++) {
            if (cartas[i] != null) {
                carta = cartas[i];
                cartas[i] = null;
                qtd--;
            }
        }
        return carta;
    }
}
