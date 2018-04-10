First.png Second.png : GraficaPrimer.py First.txt GraficaSegundo.py Second.txt
	python3 GraficaPrimer.py 
	python3 GraficaSegundo.py
Second.png: GraficaSegundo.py Second.txt
	python3 GraficaSegundo.py
First.txt Second.txt: FODE SODE
	./FODE>First.txt
	./SODE>Second.txt
SODE FODE : SecondOrder.cpp FirstOrder.cpp       
	c++ SecondOrder.cpp -o SODE
	c++ FirstOrder.cpp -o FODE