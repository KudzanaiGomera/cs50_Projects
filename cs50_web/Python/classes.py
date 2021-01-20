class Flight():
    def __init__(self, capacity):
        self.capacity = capacity
        self.passengers = []

    def open_seats(self):
        return self.capacity - len(self.passengers)

    def add_passanger(self, name):
        if not self.open_seats():
            return False
        self.passengers.append(name)
        return True

flight = Flight(4)

people =  ["Kudzai", "Steve", "John", "Adam", "Jimmy", "Amos"]

people.sort()

for person in people:
    if flight.add_passanger(person):
        print(f"We added {person} to fight successfully.")
    else:
        print(f"No more seats for {person}")

