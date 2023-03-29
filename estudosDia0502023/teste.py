matriz_temperaturas = []

while len(matriz_temperaturas) < 7:
    temperatura = float(input())
    if temperatura < 0:
        break
    matriz_temperaturas.append(temperatura)

media = sum(matriz_temperaturas) / len(matriz_temperaturas)

if 0 <= media <= 3:
    print("Alerta de Temperaturas Extremas - Tendência de forte frio nos próximos dias")

media_duascasas = "{:.2f}".format(media)
media = float(media_duascasas)
print(media)

mediamaior = []
for temperaturaMaior in matriz_temperaturas:
    if temperaturaMaior > media:
        mediamaior.append(temperaturaMaior)

if mediamaior:
    print(mediamaior)
