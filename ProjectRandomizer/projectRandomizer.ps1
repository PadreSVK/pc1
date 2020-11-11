$projects = [System.Collections.ArrayList]"
Hra lodě;
Hra piškvorky;
Maticová kalkulačka;
Program pro interaktivní testy;
Rezervační systém multikina;
Textová hra - adventura;
Hra tanky;
Sudoku;
Hra 2048;
Databáze restauračních zařízení s možností;
hodnocení zákazníky;
Elektronický úkolovník;
Textový správce souborů;
Hra had;
Implementace binárního stromu;
Elektronický index (pro více studentů);
Statistická kalkulačka (průměr, rozptyl, histogramy);
Hra Bingo;
Databáze knihkupectví;
Hra odebírání zápalek (NIM);
Lékárnická databáze;
Databáze hradů a zámků;
Vědecká kalkulačka pro elektrotechnika (komplexní čísla);
Designér pasivních RLC filtrů;
Generátor sportovní týmové ligy s databází výsledků;
Elektronický diář;
Databázový systém pro sázkovou kancelář na sportovní výsledky;
Databáze hudebních skupin;
Elektronická zdravotní knížka (databáze pacientů);
Karetní hra
".Split(";").Trim()

1..10 | ForEach-Object {
    $randomProject = Get-Random $projects.ToArray()
    Write-Host "GroupId: $($_ ) your project is: $randomProject" 
    Set-Clipboard $randomProject
    $projects.Remove($randomProject)
    Read-Host "next?"
}