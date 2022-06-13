#include "homework_3.h"

int main()
{
    const std::string kTitle = "Image Browser";
    const std::string kFilePath = "./data/";
    const std::string kExtension = ".png";
    const std::string kCssStylesheet = "./style.css";
    const int kNumRows = 3;
    const int kNumCols = 3;
    const int kNumImages = kNumRows * kNumCols;
    std::string image_file[kNumImages];
    for (int i = 0; i < kNumImages; i++)
    {
        image_file[i] = kFilePath + "000" + std::to_string(i) + "00" + kExtension;
    }

    // Actual Browser Creation
    html_writer::OpenDocument();
    html_writer::AddTitle(kTitle);
    html_writer::AddCSSStyle(kCssStylesheet);
    html_writer::OpenBody();
    int img_count = 0;
    bool highlight;
    float score = 0;
    for (int i = 0; i < kNumRows; i++)
    {
        html_writer::OpenRow();
        for (int j = 0; j < kNumCols; j++)
        {
            highlight = false;
            if (img_count == 0)
            {
                highlight = true;
            }
            score = img_count * 0.5346;
            html_writer::AddImage(image_file[img_count], score, highlight);
            img_count++;
        }
        html_writer::CloseRow();
    }
    html_writer::CloseBody();
    html_writer::CloseDocument();
    return 0;
}