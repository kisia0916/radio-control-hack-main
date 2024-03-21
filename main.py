defaultText = "Protocol=PulseWidth Raw-Data=0x101F02 23 bits LSB first"
log = []
doneInput = False
while doneInput == False:
    inlog = str(input())
    if inlog != "exit":
        log.append(inlog)
    else:
        break
for i in log:
    if i != defaultText:
        print(i)