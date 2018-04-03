//
// Created by Alexey Novopashin on 03/04/2018.
//

#ifndef LABWORK4_XMLPARSER_H
#define LABWORK4_XMLPARSER_H

#include <glibmm/ustring.h>
#include <libxml++/libxml++.h>

using namespace xmlpp;

class XMLParser : public SaxParser  {
public:
    XMLParser(bool use_get_entity);

    ~XMLParser() override;

protected:
    void on_start_document() override;

    void on_end_document() override;

    void on_start_element(const Glib::ustring &name, const AttributeList &attributes) override;

    void on_end_element(const Glib::ustring &name) override;

    void on_characters(const Glib::ustring &characters) override;

    void on_comment(const Glib::ustring &text) override;

    void on_warning(const Glib::ustring &text) override;

    void on_error(const Glib::ustring &text) override;

    void on_fatal_error(const Glib::ustring &text) override;
};


#endif //LABWORK4_XMLPARSER_H
