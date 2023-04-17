void List::sortDataMerge(){
    sortDataMerge(0,last);
}

void List::sortDataMerge(const int& leftEdge, const int& rightEdge){   if(leftEdge>=rightEdge){
        return;
    }

    ///divide y venceras
    int m((leftEdge + rightEdge) / 2);

    sortDataMerge(leftEdge, m);
    sortDataMerge(m+1, rightEdge);

    ///copia el auxiliar
    static int aux[ARRAYSIZE];
    for(int n(leftEdge); n<=rightEdge; n++){
        aux[n] = data[n];
    }

    ///intercalacion
    int i(leftEdge), j(m+1), x(leftEdge);

    while(i<=m and j <= rightEdge){
            while(i <= m and aux[i] <= aux[j]){
                data[x++] = aux[j++];
            }

    if(i <= m){
        while(j<=rightEdge and aux[j] <= aux[i]){
            data[x++] = aux[j++];
            }
        }
    }

    while(i<=m){
        data[x++] = aux[i++];
    }

    while(j<=rightEdge){
        data[x++] = aux[j++];
    }
}
