// schildtbooklearn (p.322)
// Создание класса справочной информации

#include <iostream>
using namespace std;

class Help{
    public:
    void helpon(char what);
    void showmenu();
    bool isvalid(char ch);
};

void Help::helpon(char what){
    switch(what){
        case '1': 
            cout << " *** Company *** " << endl;
            cout << "             (13c) (1834) " << endl;
            cout << "  1. A corporation — or, less commonly, an association, partnership, or union — that carries on a commercial or industrial enterprise. " << endl;
            cout << "  2. A corporation, partnership, association, joint-stock company, trust, fund, or organized group of persons, whether incorporated or not, and (in an official capacity) any receiver, trustee in bankruptcy, or similar official, or liquidating agent, for any of the foregoing. Investment Company Act § 2(a)(8) (15 USCA § 80a-2(a)(8)). — abbreviation co.; com." << endl;
            cout << "\n";
            cout << "\033[3m\251 2023 \033[0m\033[3mmade by Prototype\033[0m" << endl; // Использую специальные ANSI-коды для форматирования текста
        break;
        case '2':
            cout << " *** Patent *** " << endl;
            cout << "             (pat-ənt),  noun  (14c) (1883) " << endl;
            cout << "  1. The governmental grant of a right, privilege, or authority." << endl;
            cout << "  2. The official document so granting. — Also termed public grant. See LETTERS PATENT.\n"
                    "  3. The right to exclude others from making, using, marketing, selling, offering for sale, or importing an invention for a specified period (20 years from the date of filing), granted by the federal government to the inventor if the device or process is novel, useful, and nonobvious. 35 USCA §§ 101–103. The holding of a patent alone does not by itself grant any right to make, use, or sell anything if that activity would infringe another's blocking patent. — Also termed patent of invention; patent right; patent grant.\n"
                    "  “The franchise which the patent grants consists altogether in the right to exclude everyone from making, using or vending the patented article, without the permission of the patentee. This is all he obtains by the patent.” Bloomer v. McQuewan, 55 U.S. 539, 549 (1852).\n"
                    "  “What, exactly, is a patent and how does it operate to foster the progress of the useful arts’? In its simplest terms a patent is an agreement between an inventor and the public, represented by the federal government: in return for a full public disclosure of the invention the inventor is granted the right for a fixed period of time to exclude others from making, using, or selling the defined invention in the United States. It is a limited monopoly, designed not primarily to reward the inventor (this may or may not follow), but to encourage a public disclosure of inventions so that after the monopoly expires, the public is free to take unrestricted advantage of the invention.” Earl W. Kintner & Jack L. Lahr, An Intellectual Property Law Primer 7–11 (2d ed. 1982)." << endl;
            cout << "\n";
            cout << "\033[3m\u00A9 2023 \033[0m\033[3mmade by Prototype\033[0m" << endl; // Использую специальные ANSI-коды и Unicode для форматирования текста
        break;
        case '3':
            cout << " *** Trademark *** " << endl;
            cout << "              noun (1838)" << endl;
            cout << "  1. A word, phrase, logo, or other sensory symbol used by a manufacturer or seller to distinguish its products or services from those of others. The main purpose of a trademark is to designate the source of goods or services. In effect, the trademark is the commercial substitute for one's signature. To receive federal protection, a trademark must be (1) distinctive rather than merely descriptive or generic; (2) affixed to a product that is actually sold in the marketplace; and (3) registered with the U.S. Patent and Trademark Office. In its broadest sense, the term trademark includes a servicemark. Unregistered trademarks are protected under common-law only, and distinguished with the mark “TM.” — Often shortened to mark." << endl;
            cout << "  2. The body of law dealing with how businesses distinctively identify their products. abbreviation TM. See lanham act; merchant's mark. compare servicemark; registered trademark; brand; tradename." << endl;
            cout << "\033[3m\251 2023 \033[0m\033[3mmade by Prototype\033[0m" << endl;
        break;
        case '4':
        cout << " *** Limited liability *** " << endl;
        cout << "                (1833)" << endl;
        cout << "   (1833) Liability restricted by law or contract; especially the liability of a company's owners for nothing more than the capital they have invested in the business." << endl;
        cout << "\033[3m\251 2023 \033[0m\033[3mmade by Prototype\033[0m" << endl;
        break;
    }
    cout << "\n";
}

// Меню
void Help::showmenu(){
    cout << "** Mini LawBook **" << endl << endl;
    cout << "Main menu" << endl << endl;
    cout << "    1. Company" << endl;
    cout << "    2. Patent" << endl << endl;
    cout << "    3. Trademark" << endl << endl;
    cout << "    4. Limited liability" << endl << endl;
    cout << "Choose a definition: " << endl << endl;
    cout << "Choose q to quit " << endl << endl;

}

//Проверяем допустимость команды (функция вернет true если допустимо)

bool Help::isvalid(char ch){
    if (ch < '1' || ch > '8' && ch != 'q')
        return false;
    else 
        return true;

}

int main(){
    char choice;
    Help hlpob; // создаем экземпляр класса help

    // отображение информации
    while (true){
        hlpob.showmenu();
        cin >> choice;
    
     while (!hlpob.isvalid(choice)) {  // Проверяем ввод
            cout << "Invalid choice. Please try again." << endl;
            hlpob.showmenu();
            cin >> choice;
        }
     if (choice == 'q') break;  // выход из программы

        cout << "\n";
        hlpob.helpon(choice);     // показываем справочную информацию
        cout << "\n";
    }
    return 0;
}

