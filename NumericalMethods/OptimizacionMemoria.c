/*
*Autor: Walter Martínez Santana
*/

//Optimizacion de memoria
	//Almacenamos la parte debajo de la diagonal y la diagonal de la matriz
	int nuevoSize = N*(N+1)/2;
	
	j=0;
	int k;
	B=(float *)malloc(nuevoSize*sizeof(float));
	for(m=0;m<N;m++){
		for(k=m;k<N;k++){
				B[j++]=C[m + N*k];
		}
		
	}
