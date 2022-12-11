
## Prerequisiti

- [link dell'associazione ARI di Montecatini Terme](https://arimontecatini.it/index.html)
- S.O. Linux metal 6.0.0-kali3-amd64 #1 SMP PREEMPT_DYNAMIC Debian 6.0.7-1kali1 (2022-11-07) x86_64 GNU/Linu
- scheda AZ-DELIVERY D1 R32;
- [scheda ESP-Prog](https://docs.platformio.org/en/latest/plus/debug-tools/esp-prog.html#drivers);
- [Visual Studio Code - ver 1.72.2](https://code.visualstudio.com) con estensione Platformio;
- [Link per guida debug](https://piolabs.com/blog/insights/debugging-introduction.html);
- [Video tutorial debug](https://www.youtube.com/watch?v=psMqilqlrRQ )


## Descrizione

Il codice viene compilato e caricato sulla board da testare. Quando si inizia il debug il codice viene caricato anche sulla ESP-Prog che megtte in pausa il processore della board quando incontra il punto di interruzione. Quando si passa all'istruzione successiva la ESP-Prog toglie dalla pausa il processore della board che esegue l'istruzione successiva e poi viene rimesso in pausa.

Installare [udev](https://wiki.debian.org/it/udev) ( sudo apt install udev ) se non e' gia' installato.
Collegare la board e rilevare la porta a cui e' collegata per impostare la variabile *upload_port* nel file platfmoio.ini come segue :

upload_port = /dev/ttyUSB2

nel caso di specie la board AZ-DELIVERY D1 R32 e' collegata alla porta USB2. Per rilevare il nome della porta si puo' utilizzare il comando lsusb oppure vedere visualizzare la voce *porta* del menu *strumenti* dell'interfaccia IDE di Arduino.

Compile e upload del codice dopo aver indicato un solo punto di interruzione.
Avviare il debug di platformio.ini .
