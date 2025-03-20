#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>

int main(void) {
    using namespace ftxui;
    setlocale(0,"");
    // Define the document
    Element document =
        hbox({
          text("222") | border,
          text("middle") | border | flex,
          text("право") | border,
            });

    auto screen = Screen::Create(
        Dimension::Full(),       // Width
        Dimension::Fit(document) // Height
    );
    Render(screen, document);
    screen.Print();

    return EXIT_SUCCESS;
}