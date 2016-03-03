#pragma once

#include <stdio.h>

class Heap {
public:
	int d;
	int* data;
	int n;

	Heap(int* s, int n);
	~Heap() { delete[] data; }
	Heap(Heap& c) {	n = c.n; d = c.d; 
		data = new int[n];
		for (int i = 0; i < n; i++) data[i] = c.data[i];
	}  

	int Min_child(int idx);

	void Setd(int _d) { d = _d; }
	
	void Down(int idx);
	void Up(int idx);
	void Heapify();

	void Sort();

	void print() {for(int i = 0; i < n; i++) printf("%d ", data[i]);}
};