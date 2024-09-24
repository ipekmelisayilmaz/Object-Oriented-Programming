public class Orchestra {
    private Instrument[] instruments = { new Guitar(), new Piano() };//array list'de tanımlanan nesneler

    public void playAll() {
        for(Instrument instrument : instruments){//Instrument interfacesinin referansını tutar (instrument)
            instrument.play();//Instrument interfacesinde imzalanan play() metodu çağırılabiliyor
        }
    }
}
