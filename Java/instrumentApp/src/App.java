public class App {
    public static void main(String[] args) throws Exception {//main classda gerekli tanımlamalar yapılır
      Guitar guitar = new Guitar() ;//guitar bir Instrument ise buraya bağlanabilir,setChord() Guitarda tanımlandı Instrument arayüzünde garanti edilmedi Guitardan çağırılmalı
      Instrument piano = new Piano();//piano bir Instrument ise buraya bağlanabilir
        
      guitar.play();
      guitar.setChord();
      piano.play();
    }
}
