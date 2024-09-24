public class Piano implements Instrument, KeyboardInstrument {//instrument ve keyboardinstrument interfacelerinde imzalanan methodları uygulayan class implemente edilmeli

    @Override
    public void play() {//override edilip method yorumlanmalı
        System.out.println("Playing the piano...");
    }

    @Override
    public void press() {
        System.out.println("The key has been pressed.");
    }
    
}