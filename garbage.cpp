while (cont < strlen(cadeia)) {

  //Iniciar a Verificação;
  //VERIFICA SE É LETRA PARA IDENTIFACDORES OU PALAVRAS RESERVADAS;
  if (isalpha(cadeia[cont]) == 1 || isdigit(cadeia[cont]) == 1) {
    printf("%c", cadeia[cont]);
    cont++;
    if(isalpha(cadeia[cont+1]) == 1 || cadeia[cont+1] == '_' || isdigit(cadeia[cont+1]) == 1){
      printf("%c", cadeia[cont+1]);
      cont++;
    }
    else if(isalpha(cadeia[cont+1]) == 1 && isalpha(cadeia[cont+2]) == 1){
      printf("%c", cadeia[cont+1]);
      printf("%c", cadeia[cont+2]);
      cont++;
    }
    else if(isdigit(cadeia[cont]) == 1){
      printf("%c", cadeia[cont]);
      cont++;
    }
  }

  //VERIFICA SE É CARACTERES ESPECIAIS ou SE É COMENTÁRIO;
  if (isalnum(cadeia[cont]) == 0) {
    if(cadeia[cont] == ';' || cadeia[cont] == ',' ||
        cadeia[cont] == '.' || cadeia[cont] == '*' ||
        cadeia[cont] == '(' || cadeia[cont] == ')' ||
        cadeia[cont] == '=' || cadeia[cont] == '{' ||
        cadeia[cont] == '}' || cadeia[cont] == '/' ||
        cadeia[cont] == '@' || cadeia[cont] == '>' ||
        cadeia[cont] == '<' || cadeia[cont] == '+' ||
        cadeia[cont] == '-' || cadeia[cont] == ':'){

          printf("%c", cadeia[cont]);
          cont++;

          if (cadeia[cont+1] == ';' || cadeia[cont+1] == ',' ||
              cadeia[cont+1] == '.' || cadeia[cont+1] == '*' ||
              cadeia[cont+1] == '(' || cadeia[cont+1] == ')' ||
              cadeia[cont+1] == '=' || cadeia[cont+1] == '{' ||
              cadeia[cont+1] == '}' || cadeia[cont+1] == '/' ||
              cadeia[cont+1] == '@' || cadeia[cont+1] == '>' ||
              cadeia[cont+1] == '<' || cadeia[cont+1] == '+' ||
              cadeia[cont+1] == '-' || cadeia[cont+1] == ':') {

            printf("%c", cadeia[cont+1]);
            cont++;
    }
    else if(cadeia[cont] == '@' || cadeia[cont] == '/'){
      if (cadeia[cont+1] == '@') {
        while(cadeia[strlen(cadeia)] == '\0'){
          printf("%c", cadeia[cont]);
          cont++;
        }
      }
    }
    }
  }
}
