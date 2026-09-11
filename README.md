# Person.cpp

📄 **Source Code**: [Person/Person.cpp](Person/Person.cpp)

A simple C++ project demonstrating **Encapsulation** using the `clPerson` class.

## Class Overview

The `clPerson` class represents a person with the following properties:

| Property   | Access         |
|------------|----------------|
| ID         | Read Only      |
| FirstName  | Read and Write |
| LastName   | Read and Write |
| FullName   | Read and Write (computed) |
| Email      | Read and Write |
| Phone      | Read and Write |

## Methods

- `GetID()`
- `SetFirstName()` / `GetFirstName()`
- `SetLastName()` / `GetLastName()`
- `GetFullName()`
- `SetEmail()` / `GetEmail()`
- `SetPhone()` / `GetPhone()`
- `SendEmail(Subject, Body)`
- `SendSMS(Message)`
- `Print()`

## Rule

Objects can only be created using the **Constructor**, because all properties are `private`.

## Example Usage

```cpp
clPerson Person1(10, "Mohammed", "Abu-Hadhoud", "my@gmail.com", "098342343");
Person1.Print();
Person1.SendEmail("Hi", "How are you?");
Person1.SendSMS("How are you?");
```

## Output

![Program Output](output.png)

## Requirements

- Visual Studio 2022 or any C++ compiler supporting C++11 or later.

## Author

Abdulrahman Al-Haritani

