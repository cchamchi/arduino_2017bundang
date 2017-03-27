import serial
ser = serial.Serial('/dev/cu.wchusbserial1410', 9600)
while True:
    print ser.readline()
ser.close()
