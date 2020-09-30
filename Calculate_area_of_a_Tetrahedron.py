import math 
def vol_tetra(side): 
    volume = (side ** 3 / (6 * math.sqrt(2))) 
    return round(volume, 2) 
  

side = 3
vol = vol_tetra(side) 
print(vol)
