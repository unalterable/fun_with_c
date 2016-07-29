import time

start = time.time()
i=0
while i < 100000000:
  i+=1
  pass

end = time.time()

print(end-start)
