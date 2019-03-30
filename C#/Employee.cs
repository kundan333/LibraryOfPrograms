

using System;
class Employee
{
// Private state data.
private string fullName;
private int empID;
private float currPay;
// Constructors.
public Employee(){ }
public Employee(string fullName, int empID, float currPay)
{
this.fullName = fullName;
this.empID = empID;
this.currPay = currPay;
}
public void GiveBonus(float amount)
{ currPay += amount;}
public virtual void DisplayStats()
{
Console.WriteLine("Name: {0} ", fullName);
Console.WriteLine("Pay: {0} ", currPay);
Console.WriteLine("ID: {0} ", empID);
}
public static void Main()
{
Employee e = new Employee("Kundan", 007, 30000);
e.GiveBonus(5000);
e.DisplayStats();
Employee e2;
e2 = new Employee("Kabbu", 1001, 50000);
e2.GiveBonus(1000);
e2.DisplayStats();

}
}
