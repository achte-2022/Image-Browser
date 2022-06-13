#include "../include/homework_3.h"

void image_browser::AddFullRow(const image_browser::ImageRow &row, bool first_row)
{
    bool highlight;
    std::string file_name;
    float score;
    int col_index = 0;
    html_writer::OpenRow();
    for (const auto &image : row)
    {
        file_name = std::get<std::string>(image);
        score = std::get<float>(image);
        if ((col_index == 0) && (first_row == true))
        {
            highlight = true;
        }
        else
        {
            highlight = false;
        }
        html_writer::AddImage(file_name, score, highlight);
        col_index++;
    }
    html_writer::CloseRow();
    return;
}

void image_browser::CreateImageBrowser(const std::string &title, const std::string &stylesheet,
                                       const std::vector<ImageRow> &rows)
{
    html_writer::OpenDocument();
    html_writer::AddTitle(title);
    html_writer::AddCSSStyle(stylesheet);
    html_writer::OpenBody();
    int row_index = 0;
    bool first_row;
    for (const auto &row : rows)
    {
        if (row_index == 0)
        {
            first_row = true;
        }
        else
        {
            first_row = false;
        }
        image_browser::AddFullRow(row, first_row);
        row_index++;
    }
    html_writer::CloseBody();
    html_writer::CloseDocument();
    return;
}