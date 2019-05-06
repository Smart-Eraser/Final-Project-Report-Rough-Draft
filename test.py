
# This file is executed on every boot (including wake-boot from deepsleep)

#import esp

#esp.osdebug(None)

#import webrepl

#webrepl.start()

from SMclientV2 import wifi, WaitForInstructions, client

client = client()

client.wifi()

AllBounds = []

while True:
  AllBounds = client.WaitForInstructions(AllBounds)
  print(AllBounds)
