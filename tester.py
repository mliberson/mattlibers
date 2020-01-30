import numpy as np
import subprocess as sp
import math as m



outfile = open('results.txt','w')

for x in range(10000):

	np.random.seed()

	n1 = np.random.uniform(-100,100)
	n2 = np.random.uniform(-100,100)
	d = np.random.uniform(0,100)

	Zblackbox = sp.check_output(["./blackbox",str(n1),str(n2),str(d)])

	Zcomputed = n1*n1+n2*n2

	Zblackbox = float(Zblackbox)

	diff = m.fabs(Zblackbox - Zcomputed)

	diff = str(diff)

	outfile.write(diff + '\n')

outfile.close()



