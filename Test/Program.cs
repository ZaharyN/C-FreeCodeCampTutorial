

Animal animal = new Animal("grey");
Animal dog = new Dog("grey");

animal.ProduceSound();
dog.ProduceSound();
class Animal
{
    public Animal(string color)
    {
        Color = color;

    }
    public virtual void ProduceSound()
    {
        Console.WriteLine("AAAAAA");
    }
    public string Color { get; set; }
}

class Dog : Animal
{
    private string color = "grey";
    public Dog(string color) 
        : base(color)
    {
    }

    public override void ProduceSound()
    {
        Console.WriteLine("Woof woof");
    }
}




