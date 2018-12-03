cont = 0
estado = 0

cadeia = str(input("Insira sua cadeia de Caracteres a ser Compilada"))

##AUTOMATOS NÚMEROS
if cadeia[0].isdigit() == 1:
    estado = 1

    for x in cadeia:
        while cont < len(cadeia):
            if estado == 1:
                if cadeia[cont].isdigit() == 1:
                    estado = 2
                    if cont == len(cadeia):
                        print('É um dígito!')
                elif cadeia[cont] == '-':
                    esatdo = 1   

            if estado == 2:
                if cadeia[cont].isdigit() == 1:
                    estado = 3
            if estado == 3:
                if cadeia[cont].isdigit() == ',':
                    estado = 4
                elif cadeia[cont].isdigit == 1:
                    estado = 3
            if estado == 4:
                if cadeia[cont].isdigit() == 1:
                    print('É um dígito!')
                elif cadeia[cont].isdigit() == 1:
                    estado == 4
            cont += 1

##PALAVRAS RESERVADAS
if len(cadeia) >2 and cadeia[0].isalpha() == 1 and cadeia[1].isalpha() == 1:
    estado = 1

    for x in cadeia:
        while cont < len(cadeia):
            if estado == 1:
                if cadeia[cont].isalpha() == 1:
                    estado = 2
            if estado == 2:
                if cadeia[cont].isalpha() == 1:
                    estado = 3
            if estado == 3:
                if cadeia[cont].isalpha() == 1:
                    estado = 3
                elif cont == len(cadeia):
                    print('É uma palavra Reservada!')
            cont += 1

##IDENTIFICADORES
