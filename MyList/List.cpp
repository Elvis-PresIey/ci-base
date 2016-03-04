#include "List.h"


Heap::Heap(int* s, int _n) {
	d = 2;
	n = _n;
	data = new int[n];
	for (int i = 0; i < n; i++)
		data[i] = s[i];
}


int Heap::Min_child(int i) {
	if (i * d + 1 >= n) return 0;
	else {
		int fi = i * d + 1;
		int li = ((i + 1) * d); // > n) ? n : ((i + 1) * d);
		if (li >= n - 1) li = n - 1;
		int mi = fi;
		int md = data[mi];
		for (int j = fi; j <= li; j++) if (data[j] < md) { md = data[j]; mi = j; }
		return mi;
	}
	return 0;
}


void Heap::Up(int idx) {
	int pi = (idx - 1) / idx;
	while ((idx)&&(data[pi] > data[idx])) {
		int tmp = data[pi];
		data[pi] = data[idx];
		data[idx] = tmp;
		idx = pi;
		pi = (idx - 1) / idx;
	}
}

void Heap::Down(int idx) {
	int mc = Min_child(idx);
	while ((mc) && (data[mc] < data[idx])) {
		int tmp = data[mc];
		data[mc] = data[idx];
		data[idx] = tmp;
		idx = mc;
		mc = Min_child(mc);
	}
}

void Heap::Heapify() {
	for (int i = n - 1; i >= 0; i--) Down(i);
}


void Heap::Sort() {
	//print();
	Heapify();
	//print();
	int last = n;
	while (n) {
		int tmp = data[n - 1];
		data[n - 1] = data[0];
		data[0] = tmp;
		n--;
		//printf("\n");
		//print(); printf("****");
		Down(0);
		//print();
 	}
	n = last;
	/*for (int i = 0; i < n % 2; i++) {
		int tmp = data[i];
		data[i] = data[n - 1 - i];
		data[n - 1 - i] = tmp;
	}*/
}

