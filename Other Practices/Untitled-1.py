# class BankAccount:
#     def __init__(self, name):
#         self.name = name
#         self.balance = 0.0

#     def deposit(self, amount):
#         self.balance += amount
#         print(f"Deposited {amount:.2f}. New balance: {self.balance:.2f}")

#     def withdraw(self, amount):
#         if amount > self.balance:
#             print("Insufficient funds")
#         else:
#             self.balance -= amount
#             print(f"Withdrew {amount:.2f}. New balance: {self.balance:.2f}")

#     def check_balance(self):
#         print(f"Balance: {self.balance:.2f}")

#     def save(self, filename):
#         with open(filename, "w") as f:
#             f.write(f"{self.name},{self.balance:.2f}\n")

#     def load(filename):
#         accounts = []
#         with open(filename, "r") as f:
#             for line in f:
#                 name, balance_str = line.strip().split(",")
#                 balance = float(balance_str)
#                 account = BankAccount(name)
#                 account.balance = balance
#                 accounts.append(account)
#         return accounts


# def main():
#     # Ask the user to enter their name
#     name = input("Enter your name: ")

#     # Create a new or load an existing bank account with the given name
#     accounts = BankAccount.load("accounts.txt")
#     for account in accounts:
#         if account.name == name:
#             break
#     else:
#         account = BankAccount(name)
#         accounts.append(account)

#     # Loop indefinitely, allowing the user to make transactions
#     while True:
#         # Print a menu of options
#         print("1. Deposit")
#         print("2. Withdraw")
#         print("3. Check balance")
#         print("4. Quit")

#         # Ask the user to choose an option
#         choice = input("Enter your choice: ")

#         # Process the user's choice
#         if choice == "1":
#             amount = float(input("Enter the amount to deposit: "))
#             account.deposit(amount)
#         elif choice == "2":
#             amount = float(input("Enter the amount to withdraw: "))
#             account.withdraw(amount)
#         elif choice == "3":
#             account.check_balance()
#         elif choice == "4":
#             account.save("accounts.txt")
#             break
#         else:
#             print("Invalid choice")

#     print("Goodbye!")


# if __name__ == "__main__":
#     main()


# Creating a new file and writing data to it
with open("example.txt", "w") as f:
    f.write("Hello, world!")

# Opening the file and reading its contents
with open("example.txt", "r") as f:
    contents = f.read()
    print(contents)
