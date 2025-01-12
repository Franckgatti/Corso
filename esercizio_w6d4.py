print("Calcolo del perimetro di una figura tra:")
print("1) quadrato")
print("2) cerchio")
print("3) rettangolo")
scelta= int(input("inserisci il numero corrispondente alla figura desiderata "))

if scelta == 1: 
    lato = int(input("Inserisci la misura del lato: "))
    perimetro = lato*4
    print("La misura del perimetro è: ", perimetro)

elif scelta == 2:
    raggio = int(input("Inserisci la misura del raggio: "))
    circonferenza = 2*raggio*3.14
    print("La misura della circonferenza è: ", circonferenza)
    
elif scelta == 3:
    base = int(input("Inserisci la misura della base: "))
    altezza = int(input("Inserisci la misura dell'altezza': "))
    perimetro=2*base + 2*altezza
    print("La misura del perimetro è: ", perimetro)
    
else:
    print("Scelta non valida")
