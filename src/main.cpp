#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
#include <iostream>

// Testing
int main() {
    tesseract::TessBaseAPI *api = new tesseract::TessBaseAPI();
    
    // Initialize Tesseract with English language
    if (api->Init(NULL, "eng")) {
        std::cerr << "Could not initialize tesseract.\n";
        return 1;
    }
    
    Pix *image = pixRead("pace.png");
    api->SetImage(image);
    
    char *outText = api->GetUTF8Text();
    std::cout << "OCR Output: " << outText;

    api->End();
    delete[] outText;
    pixDestroy(&image);
    
    return 0;
}
