public class Guitar implements Instrument, ElectronicInstrument {

    @Override
    public void play() {
        System.out.println("Playing the guitar..");
    }

    public void setChord() {
        System.out.println("The guitar has been tunned.");//instrumenapp klasöründeki guitar classında tanımlanan public metod
    }

    @Override
    public void tune() {
        System.out.println("Guitar is being tuned.");
    }

}
