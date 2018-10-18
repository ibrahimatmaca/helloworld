class Robot
    attr_accessor :isim, :sahip
    def initialize(isim,sahip)
        @isim = isim
        @sahip = sahip
    end
    def merhaba_de
        puts "Merhaba! Benim adım #{@isim}.Beni #{@sahip} oluşturuldu."        
    end
end

turk_bot = Robot.new("Turk Robot","Hasan") 
puts turk_bot.inspect
turk_bot.isim = "Hamdullah"
puts turk_bot.inspect
turk_bot.merhaba_de