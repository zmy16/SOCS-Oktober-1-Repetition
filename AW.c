#include <stdio.h>

int main() {
	int T;
	
	scanf("%d", &T);
	
	for(int i = 1; i <= T; i++){
		int N;
		scanf("%d", &N);
		
		int nilai[N];
		int jumlahHadiah;
		int maxNilai;
		
		for(int j = 0; j < N; j++){
			scanf("%d", &nilai[j]);
		
			if(nilai[j] > maxNilai){
				maxNilai = nilai[j];
				jumlahHadiah = 1;
		
			}else if(nilai[j]==maxNilai) jumlahHadiah++;
		}
		printf("Case #%d: %d\n", i, jumlahHadiah);
	}
	
	
    return 0;
}
