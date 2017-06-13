/*
*Autor: Walter Martínez Santana
*/
int N=n,i,j;
	float *A, *B, *C;
	int m, P=1,U=6;
	srand(time(NULL));
	
	
	
	A=(float *)malloc(SIZE);
	B=(float *)malloc(SIZE);
	C=(float *)malloc(SIZE);
	for(m=0;m<N*N;m++){
		A[m]=(float)P+(int)(((U-P+1.0)*rand())/(RAND_MAX+1.0));
		//B[m]=(float)P+(int)(((U-P+1.0)*rand())/(RAND_MAX+1.0));
		C[m]=(float)0;
	}
	
	//Transpuesta de A
	for( i = 0;i<N;i++)
		for(j=0;j<N;j++)
			B[j + i*N] = A[i + j*N];
