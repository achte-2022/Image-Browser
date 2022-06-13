#include "homework_3.h"

void html_writer::OpenDocument()
{
    std::cout << "<!DOCTYPE html>" << std::endl;
    std::cout << "<html>" << std::endl;
    return;
}

void html_writer::CloseDocument()
{
    std::cout << "</html>" << std::endl;
    return;
}

void html_writer::AddCSSStyle(const std::string &stylesheet)
{
    std::cout << "<head>" << std::endl;
    std::string rel = "\"stylesheet\" ";
    std::string type = "\"text/css\" ";
    std::string href = "\"" + stylesheet + "\" ";
    std::cout << "<link rel=" << rel << "type=" << type << "href=" << href << "/>" << std::endl;
    std::cout << "  </head>" << std::endl;
    return;
}

void html_writer::AddTitle(const std::string &title)
{
    std::cout << "<title>" << title << "</title>" << std::endl;
    return;
}

void html_writer::OpenBody()
{
    std::cout << "<body>" << std::endl;
    return;
}

void html_writer::CloseBody()
{
    std::cout << "</body>" << std::endl;
    return;
}

void html_writer::OpenRow()
{
    std::string row = "\"row\"";
    std::cout << "<div class=" << row << ">" << std::endl;
    return;
}

void html_writer::CloseRow()
{
    std::cout << "</div>" << std::endl;
    return;
}

void html_writer::AddImage(const std::string &img_path, float score, bool highlight)
{
    std::string class_ = "\"column\" ";
    if (highlight)
    {
        std::string style = "\"border: 5px solid green;\" ";
        std::cout << "<div class=" << class_ << "style=" << style << ">" << std::endl;
    }
    else
    {
        std::cout << "<div class=" << class_ << ">" << std::endl;
    }
    std::string src = "\"" + img_path + "\" ";

    // int file_name;
    // std::string extension;
    // std::string file_path;
    // std::stringstream file_stream{img_path};
    // file_stream >> file_path >> file_name >> extension;
    // std::cerr << file_path << std::endl;
    // std::cerr << file_name << std::endl;
    // std::cerr << extension << std::endl;
    // std::string img_title = std::to_string(file_name) + extension;

    std::string img_title = img_path.substr(img_path.find_last_of("/\\") + 1);

    std::cout << "<h2>" << img_title << "</h2>" << std::endl;
    std::cout << "<img src=" << src << "/>" << std::endl;
    std::cout << "<p>score = ";
    std::cout << std::setprecision(2) << std::fixed << score << "</p>" << std::endl;
    std::cout << "</div>" << std::endl;
    return;
}