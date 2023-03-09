#!/usr/bin/python3
for c in range(97, 123):
    if c != 101 and c != 113:
        Asci_table_alpha = chr(c)
        ascii_Alpha = str(Asci_table_alpha)
        print("{}".format(ascii_Alpha), end="")
