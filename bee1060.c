#include <stdio.h>
int main(){

    int cont, vz;
    float vlo;

    vz=0;
    for(cont=1; cont<=6; cont++){
        scanf("%f", &vlo);

        if(vlo>0){
            vz=vz+1;
        }
    }
    printf("%d valores positivos\n", vz);

    return 0;
}
