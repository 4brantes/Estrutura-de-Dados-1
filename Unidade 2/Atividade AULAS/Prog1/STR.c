int comprimento(char* s) {
    int i;
    int n = 0; // Contador
    for (i = 0; s[i] != '\0'; i++) {
        n++;
    }
    return n;
}

void copia(char* dest, char* orig) {
    int i;
    for (i = 0; orig[i] != '\0'; i++) {
        dest[i] = orig[i];
    }
    dest[i] = '\0'; // Fecha a cadeia copiada
}

void concatena(char* dest, char* orig) {
    int i = 0; // Índice usado na cadeia destino, inicializado com zero
    int j = 0; // Índice usado na cadeia origem, inicializado com zero
    
    // Encontrar o final da cadeia destino
    while (dest[i] != '\0') {
        i++;
    }

    // Concatena a cadeia origem no final da cadeia destino
    while (orig[j] != '\0') {
        dest[i] = orig[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Fecha a cadeia destino
}
