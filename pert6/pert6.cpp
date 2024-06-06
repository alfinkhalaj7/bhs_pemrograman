@startuml sample

    left to right direction

    actor User as "User"
    rectangle program{
        User -- (menu)
        (menu) .> (choice 1) : extends
        (menu) .> (choice 2) : extends
        (choice 2) .> (exit)
        (choice 1) .> (input Nama Depan)
        (input Nama Depan) ._> (input Nama Tengah) : include
        (input Nama Tengah) ._> (input Nama Belakang) : include
        (input Nama Belakang) ._> (show Full Name) : include
    }
@enduml
