@startuml Pert5
start
:Menu pilihan;
while (pilih !='5') is (control statement iteration)
        :Display Menu;
        :Get User Input(pilih);
        if (pilih =='1') then (case 1)
                  :Get Input (a,b);
                  :Call tambah(a,b);
        else if (pilih =='2') then (case 2)
                 :Get input (a,b);
                 :Call kurang(a,b);
        else if (pilih =='3') then (case 3)
                 :Get input (a,b);
                 :Call kali(a,b);
        else if (pilih =='4') then (case 4)
                 :Get input (a,b);
                 :Call bagi(a,b);
        else 
                 :Display "Pilihan Salah"
        endif
endwhile (control statement)
:Display "EXIT";
stop

@enduml
