public class Person{

    String firstName;
    Integer age;
    
    public Person(){
        Person(null, null);
    }

    public Person(Integer age){
        Person(null, age);
    }

    public Person (String firstName , Integer age){
        this.firstName = firstName;
        this.age = age;
    }
}