#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Extracting File Extensions
    string file = "document.pdf";
    string ext = file.substr(file.find_last_of('.'));
    cout << "1. Extension: " << ext << "\n";

    // 2. Stripping Prefixes
    string url = "http://website.com";
    string domain = url.substr(7);
    cout << "2. Domain: " << domain << "\n";

    // 3. Parsing Fixed-Format Data
    string date = "2026-06-12";
    string year = date.substr(0, 4);
    cout << "3. Year: " << year << "\n";

    // 4. Grabbing the Last 'N' Characters
    string s = "Hello World";
    string lastWord = s.substr(s.size() - 5);
    cout << "4. Last 5 chars: " << lastWord << "\n";

    return 0;
}
