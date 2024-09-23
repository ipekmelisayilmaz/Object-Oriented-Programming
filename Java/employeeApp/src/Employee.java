//yerleşik arayüzlerin uygulanması
public class Employee implements Comparable{//nesnenin doğal sıralamasını tanımlamak için kullanılan bir arayüzdür
    private String fullName;//Wrapper sınıfları büyük harfle (Integer, Double, Boolean)
    private Double salary;

    public String getFullName() {
        return fullName;
    }

    public Double getSalary() {
        return salary;
    }
    
    public void setFullName(String fullName) {
        this.fullName = fullName;
    }

    public void setSalary(Double salary) {
        this.salary = salary;
    }

    public Employee(String fullName, Double salary) {
        this.fullName = fullName;
        this.salary = salary;
    }
    @Override
    public String toString() {
        return // super.toString(); super class (base class) geçersiz kılınmak amacıyla alt satırda yapı güncellendi
        getFullName() +" "+ getSalary();
    }
 //Unboxing, genellikle bir wrapper sınıfını (örneğin, Integer, Double, vb.) ilgili temel veri türüne dönüştürmeyi ifade eder.
    @Override
    public int compareTo(Object other) {//Bu arayüzü uygulayan sınıflar, kendi nesnelerini karşılaştırmak için compareTo metodunu tanımlamak zorundadır. 
       if(other instanceof Employee)
       {
        Employee emp = (Employee)other; //kutudan çıkarma - cast(tip dönüşümü) if (other instanceof Employee)  other nesnesinin Employee türünde olup olmadığının kontrolü 
        //Eğer true ise, bu durumda other nesnesini Employee türüne dönüştürüyor:
        // return this.getFullName().compareTo(emp.getFullName());   İsme göre artan sıralama
       // return (int)Math.round((this.getSalary()-emp.getSalary())); maaşa göre artan sıralama
        return (int)Math.round((emp.getSalary() - this.getSalary()));//maaşa göre azalan sıralama

       }
        throw new RuntimeException("An error occured");
    }
}
