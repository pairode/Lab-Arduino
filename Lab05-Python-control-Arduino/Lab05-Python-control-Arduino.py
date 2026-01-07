

from tkinter import *
from tkinter import ttk
import pyfirmata

port = input("Select correct Port : COM")
comport = "COM" + port
board = pyfirmata.Arduino(comport)

root = Tk()
root.title("Firmta Arduino Controller!")
root.resizable(600, 600)

led = board.get_pin( 'd:13:o')

def On():
    led.write(1)

def Off():
    led.write(0)

ttk.Button(root, text="LED ON",   width="11", command=On).grid(row=1, column=0, ipadx=1, ipady= 1)
ttk.Button(root, text="LED OFF", width="11", command=Off).grid(row=1, column=1, ipadx=1, ipady= 1)

root.mainloop()
# Free code in Description