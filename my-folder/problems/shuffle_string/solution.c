

char * restoreString(char * s, int* indices, int indicesSize){
    char *new_s = calloc(indicesSize+1, sizeof(char));
    for (int i = 0; i < indicesSize; i++)
        new_s[indices[i]] = s[i];

    return new_s;
}