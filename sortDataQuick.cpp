void List::sortDataQuick(){
    sortDataQuick(0, last);
}

void List::sortDataQuick(const int& leftEdge, const int& rightEdge){
    if(leftEdge >= rightEdge){
        return;
    }

    ///separacion
    int i(leftEdge), j(rightEdge);

    while(i<j){
        while (i<j and data[i] <= data[rightEdge]){
            i++;
        }

        while(i<j and data[j] >= data[rightEdge]){
            j--;
        }

        if(i != j){
            swapData(data[i], data[j]);
        }
    }

    if(i != rightEdge){
        swapData(data[i], data[rightEdge]);
    }

    ///divide y venceras
    sortDataQuick(leftEdge, i-1);
    sortDataQuick(i+1, rightEdge);
}
