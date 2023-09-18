Algoritmo: Banco Fondos
ENTRADAS: DNI, cbu : enteros + ; saldo: real+ ; tipos: caracter{'D', 'R', 'C', 'M', 'A'}
SALIDA: resultado: R+
VAR.AUX: deposito : real+
A0 inicializar
    deposito <--- 0
    dineroxretiro <--- 0
A1_LEER(dni, cbu, saldo, tipos)
A2_CALCULAR_OPERACIONES
A3_PARAR

A2_ SEGUN (tipos):
        'D': resultado <--- deposito + saldo
             ESCRIBIR(resultado)
        'R': SI(saldo > 0 ) entonces
                resultado <--- saldo - dineroxretiro
                ESCRIBIR(resultado)
             fin_si
        'C': resultado <--- saldo
             ESCRIBIR(resultado)
        'M': ESCRIBIR(dni, cbu)
        'A': ESCRIBIR('Salida exitosa')
    fin_segun    