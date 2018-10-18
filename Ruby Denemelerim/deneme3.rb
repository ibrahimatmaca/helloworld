#Sözlük oluşturma ve Anahtar Kullanımı
diller = Hash.new('Bilinmiyor') #Hash ile sözlük oluşturuyoruz..
diller['C'] = "Dennis Richae"
diller['Ruby'] = "Yakihuro Mahsumoto"
diller['Java'] = "ibrahim Atmaca"

puts diller[0] # Olmayan bir anahtar girildiğinde yukarıda diller sözlüğünü oluştururken verdiğimiz bilinmeyen dönüyor
puts diller['Java'] # Java anahtarı ile ibrahim Atmaca metnine ulaşıyor.. 

meyve_renk = {elma: 'Kirmizi',armut: 'Sari',portakal: 'Turuncu'} 
# : ile kullandıklarımız burada sembol oluyor hafızada daha az yer kaplaması için sembol oluşturuldu.
puts meyve_renk['elma'] #=> nil  Bu satır nil dönecektir çünkü böyle bir eleman yok
puts meyve_renk[:elma]