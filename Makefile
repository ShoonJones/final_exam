count: final_exam.cc
	g++ final_exam.cc
clean:
	-rm *.o
	-rm -rf html latex

doc: final_exam.cc
	doxygen -g doc.conf
	doxygen doc.conf

	
