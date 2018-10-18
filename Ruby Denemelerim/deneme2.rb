# Bu denemede koleksiyonlar bölüm 7
=begin
    
end
sayilar = [1,2,3,4,5,6,7]
print sayilar
sayilar.unshift(-1) Bu satırda sayilar dizisinin ilk elemanı olarak -1'i eklemiş olduk.
sayilar.push(11) Bu satırda da 11 sayısını diziye son eleman olarak eklemiş olduk.
puts " " Alt satıra geçmek için bırakılmış boşluklar
print sayilar 
sayilar.pop Bu metod ile en sondaki sayıyı diziden çıkarmış olduk.
puts " "
print sayilar
sayilar.shift Bu metod ise dizinin ilk elemanını diziden çıkarmış olduk.
puts " "
print sayilar
=end
    #sayilar = [1,2,3,677,89,0,7,5,]
    #print sayilar
    #sayilar.insert(3,61)  # insert metod ile ilki dizinin indisi ikincisi eklenecek eleman olduğu sürece diziye eleman ekleyebiliriz
    #puts " "
    #print sayilar
dizi =%w[a r a b a]
print dizi
dizi.delete "a" #istediğimiz elemanı ve kopyalarını silmeye yarıyor
puts " "
print dizi
dizi.clear #diziyi bastan asagı temizlemeye yarıyor
puts " "
print dizi
puts "         "
# Çok boyutlu diziler
cins = [['Kedi','Aslan'],['Bulbul',['Kartal','Sahin']]]
puts cins[0][1] #=>Aslan


