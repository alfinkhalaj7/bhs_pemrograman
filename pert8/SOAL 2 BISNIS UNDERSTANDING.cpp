@startuml

actor User
participant "Warteg App" as App

User -> App: Start Application
App -> App: Clear Screen
App -> App: Display Welcome Message
App -> User: Pause for User Input
User -> App: Continue

App -> App: Clear Screen
App -> App: Display Menu

loop User makes selections
    User -> App: Selects Menu Item
    App -> App: Display Item Options
    User -> App: Selects Option
    User -> App: Enter Quantity
    App -> App: Calculate Total for Item
    App -> App: Store Item Total
    User -> App: Any More Orders? (Y/N)
end

App -> App: Calculate Total Order
App -> App: Calculate Tax (10%)
App -> App: Calculate Final Amount

App -> User: Display Total Order, Tax, and Final Amount

@enduml

