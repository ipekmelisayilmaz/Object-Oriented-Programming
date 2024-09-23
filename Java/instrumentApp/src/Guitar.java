public class Guitar implements Instrument {

    @Override
    public void play() {
        System.out.println ("playing the guitar...");
    } // Guitar sınıfı Instrument arayüzünün gereklerini yerine getirmeli , implemente edilmemiş metotlar implemente edilmeli
     
    public void setChord(){
    
        System.out.println("The guitar has been tuned." );
    }
}
