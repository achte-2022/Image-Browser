// Header Files
#include <filesystem>
#include "homework_3.h"

int main()
{
    const int kNumRows = 3;
    const int kNumCols = 3;

    const std::string kTitle = "Image Browser";
    const std::string kExtensionPNG = ".png";
    const std::string kExtensionJPG = ".jpg";
    const std::string kCssStylesheet = "../web_app/style.css";
    const std::string kFilePath = "../web_app/data/";

    const std::filesystem::path data_directory{kFilePath};
    std::vector<std::string> image_file_list;
    for (const auto &entry : std::filesystem::directory_iterator(data_directory))
    {
        std::string file_name = entry.path().filename().string();
        std::string extension = file_name.substr(file_name.find_last_of("."));
        if ((extension != kExtensionPNG) || (extension != kExtensionJPG))
        {
            std::cerr << "Data Files are of incorrect type." << std::endl;
            return 1;
        }
        image_file_list.push_back(kFilePath + file_name);
    }

    std::vector<float> score;
    for (int i = 0; i < image_file_list.size(); i++)
    {
        score.push_back(i * 0.6);
    }

    int image_index = 0;
    std::vector<image_browser::ImageRow> rows;
    for (int i = 0; i < kNumRows; i++)
    {
        image_browser::ImageRow row;
        for (int j = 0; j < row.size(); j++)
        {
            image_browser::ScoredImage image = {image_file_list[image_index], score[image_index]};
            row[j] = image;
            image_index++;
        }
        rows.push_back(row);
    }
    // Actual Browser Creation
    image_browser::CreateImageBrowser(kTitle, kCssStylesheet, rows);
    return 0;
}