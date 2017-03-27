import serial
import matplotlib.pyplot as plt

ser = serial.Serial('/dev/cu.wchusbserial1410', 9600)

siny=[]
for x in range(0,100):
    y=ser.readline()
    print y
    siny.append(float(y))

print siny

plt.plot(siny)

plt.show()

ser.close()
