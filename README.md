# UAV-Altitude-Safety-Check
Bu simülasyon, bir İHA'nın anlık irtifa verilerini analiz ederek uçuşun güvenli olup olmadığını denetleyen bir karar destek sistemi modelidir. Gelen irtifa koduna göre sistem otomatik olarak "Acil Durum", "Düşük İrtifa" veya "Güvenli" durumlarını belirler.

Bu simülasyon, bir İHA'nın anlık irtifa verilerini analiz ederek uçuşun güvenli olup olmadığını denetleyen bir karar destek sistemi modelidir. Gelen irtifa koduna göre sistem otomatik olarak "Acil Durum", "Düşük İrtifa" veya "Güvenli" durumlarını belirler.
Bu yazılımda aşağıdaki kritik programlama yapıları kullanılmıştır:

Veri Sınıflandırma: if-else if blokları kullanılarak sayısal veriler (metre) mantıksal durumlara (kategorilere) dönüştürülmüştür.

Switch-Case Yapısı: Kategorize edilen durumlar, hızlı ve okunabilir bir switch-case yapısıyla işlenerek ekrana uygun uyarı mesajları basılmıştır.

Mantıksal Operatörler: && (VE) operatörü ile belirli aralıkların (Örn: 15-30 metre arası) kontrolü sağlanmıştır.

Mevcut sistemde irtifa verisi kullanıcıdan (cin) alınmaktadır. Bir sonraki aşamada bu verinin bir sensörden veya rastgele veri üreticiden (random generator) alınması planlanmaktadır.
