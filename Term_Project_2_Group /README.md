# 🇬🇧 Trigonometric Functions via Taylor Series

This project is developed for the **CMPE 140 - Computer Programming 1** course at **Kadir Has University**. It implements basic trigonometric functions from scratch using mathematical Taylor series expansions, without relying on the standard C++ `<cmath>` trigonometric library for primary calculations.

**Project Features & Logic:**
* **Custom Implementations:** Contains hardcoded math functions (`mySin`, `myCos`, `myTan`, `myCot`) calculating values dynamically using the Taylor series.
* **Convergence Control (Epsilon):** The algorithmic loops calculate terms iteratively and automatically terminate when the difference between the current and previous term falls below a $0.001$ epsilon threshold.
* **Mathematical Proofs:** The execution begins by mathematically proving the fundamental identities: $sin^{2}x+cos^{2}x=1$ and $tan(x)*cot(x)=1$.

---

# 🇹🇷 Taylor Serisi ile Trigonometrik Fonksiyonlar


Bu proje, **Kadir Has Üniversitesi CMPE 140 - Bilgisayar Programlama 1** dersi kapsamında geliştirilmiştir. Temel trigonometrik fonksiyonlar, C++ standart kütüphanesinin hazır fonksiyonları kullanılmadan, doğrudan Taylor serisi açılımları ile sıfırdan modellenmiştir.

**Proje Özellikleri ve Algoritma Mantığı:**
* **Özel Fonksiyonlar:** Trigonometrik hesaplamalar (`mySin`, `myCos`, `myTan`, `myCot`) Taylor serisi algoritmalarıyla manuel olarak kodlanmıştır.
* **Yakınsama Kontrolü (Epsilon):** Döngüler her adımda yeni terimi hesaplar. Yeni terim ile bir önceki terim arasındaki fark, belirlenen $0.001$ epsilon değerinin altına düştüğünde işlem minimum hata payı ile sonlandırılır.
* **Matematiksel İspat:** Program, işlemlerine $sin^{2}x+cos^{2}x=1$ ve $tan(x)*cot(x)=1$ temel trigonometrik özdeşliklerinin ispatını ekrana yazdırarak başlar.
