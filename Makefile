cpp_vs_python.png: DanielMelo_Graficas.py times_cpp.csv times_python.csv
	python DanielMelo_Graficas.py

times_python.csv: DanielMelo_GenerarTiempos.py
	python DanielMelo_GenerarTiempos.py > times_python.csv

times_cpp.csv: gen_times.x
	./gen_times.x > times_cpp.csv

gen_times.x: 
	c++ DanielMelo_GenerarTiempos.cpp -o gen_times.x

