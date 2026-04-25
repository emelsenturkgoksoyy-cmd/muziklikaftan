
🥁 Mehter Marşı – Arduino Projesi

İki Buzzer ile Mehter Marşı Çalma
📌 Özellikler

    Tek dosya (.cpp) ile çalışır
    İki buzzer senkron çalar
    Cızırtı azaltılmış
    Tinkercad ve gerçek Arduino uyumlu

⚙️ Donanım Gereksinimleri

    Arduino Uno veya benzeri
    2 adet passive buzzer
    2 adet direnç (220Ω veya 330Ω)
    Breadboard ve jumper kablolar

Bağlantılar
Buzzer 	Arduino Pin
Sağ el (melodi) 	8
Sol el (bas) 	9
💻 Yazılım

    Arduino IDE veya Tinkercad kullanabilirsiniz
    Kod dosyasını açın ve yükleyin
    Buzzer’lar aynı anda melodiyi çalmaya başlayacak

📝 Kod Özet

    melody[] → Sağ el melodisi
    bassMelody[] → Sol el bas notaları
    tone(pin, freq) → Notayı çalar
    noTone(pin) → Buzzer’ı durdurur

// Örnek kullanım
tone(BUZZER1, melody[i]);
tone(BUZZER2, bassMelody[i]);
delay(noteDurations[i]);
noTone(BUZZER1);
noTone(BUZZER2);
        

🔧 Notlar

    Bass ve melodiyi aynı anda çalmak için tone() fonksiyonları aynı anda çağrılır
    Her notadan sonra kısa bir boşluk (delay(30)) cızırtıyı azaltır
    Melodi ve bas notaları kolayca değiştirilebilir

💡 İleri Seviye

Projeyi daha görsel hâle getirmek için Tinkercad simülasyonları ekleyebilir, hangi buzzer hangi notayı çalıyor görsel olarak takip edebilirsiniz.
