#include <stdio.h>
#include <stdlib.h>

int cont = 0;
int jogoucarta = 0

//le as cartas que estao na mao
for(int n = 0; n < 4; n++) {
    for(int m = 0; m < 4; m++) {
        //verifica as cartas que estao na mesa aliada e compara com uma das cartas que possui na mao
        if(carta[mao_inimiga[n]].atk > carta[mesa_aliada[m]].atk) {
            if(carta[mao_inimiga[n]].atk > carta[mesa_aliada[m]].def) {
                cont++;
                break;
            }
        } else if(carta[mao_inimiga[n]].atk < carta[mesa_aliada[m]].atk) {
            continue;
        }
    }
    //se uma carta atender ao condicional, sumona as carta
    if(cont > 0) {
        SumonarCarta(); //sumonar carta que atende aos condicionais
        jogoucarta = 1;
    } else {
        SumonarCarta(); //sumona uma carta
        TrocarModo(); //coloca em modo de defesa
        jogoucarta = 1;
    }

    //se atender ao condicional, quebra o looping
    if(jogoucarta == 1) {
        break;
    //se nao atender ao condicional. continua o looping para outra carta da mao
    } else {
        continue;
    }
}

for(int n = 0; n < 4; n++) {
    if() { //tem carta do adversário na mesa
        //se a carta estiver no modo ataque
        if(carta[mesa_inimigo[n]].modo == 0) {
            //verifica se vale a pena atacar ou colocar em modo defesa
            if(carta[mesa_aliada[n]].atk < carta[mesa_inimigo[n]].atk && carta[mesa_aliada[n]].modo != 1 ) {
                AtacarCarta(); //atacar carta que atende aos condicionais
            } else {
                TrocarModo(); //modo de defesa
            }

            //verifica se vale a pena atacar ou colocar em modo defesa
            if(carta[mesa_aliada[n].atk > carta[mesa_inimigo]].atk && carta[mesa_aliada[n]].modo != 1) {
                TrocarModo(); //modo de defesa
            } else {
                AtacarCarta(); //atacar carta que atende aos condicionais
            }

            //verifica se vale a pena atacar a carta em modo defesa ou colocar em modo de defesa
            if(carta[mesa_aliada[n]].def < carta[mesa_inimigo[n]].atk && carta[mesa_aliada[n]].modo != 0 ) {
                AtacarCarta(); //atacar carta que atende aos condicionais
            } else {
                TrocarModo(); //modo de defesa
            }

            //verifica se vale a pena atacar a carta em modo defesa ou colocar em modo de defesa
            if(carta[mesa_aliada[n].def > carta[mesa_inimigo]].atk && carta[mesa_aliada[n]].modo != 0 ) {
                TrocarModo(); //modo de defesa
            } else {
                AtacarCarta(); //atacar carta que atende aos condicionais
            }


        }
        //se a carta estiver no modo ataque
        if(carta[mesa_inimigo[n]].modo == 1) {
            //verifica se vale a pena trocar a carta para o modo ataque
            if(carta[mesa_aliada[n]].atk < carta[mesa_inimigo[n]].atk && carta[mesa_aliada[n]].modo != 1 ) {
                if(carta[mesa_aliada[n]].def < carta[mesa_inimigo[n]].atk) {
                    TrocarModo(); //modo de ataque
                }
            }
        }

    } else {//atacar vida do adversário
        
    }
}