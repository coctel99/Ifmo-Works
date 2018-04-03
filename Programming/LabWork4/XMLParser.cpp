//
// Created by Alexey Novopashin on 03/04/2018.
//

#include "XMLParser.h"


XMLParser::XMLParser(bool use_get_entity) : SaxParser(use_get_entity) {

}

XMLParser::~XMLParser() {

}

void XMLParser::on_start_document() {
    SaxParser::on_start_document();
}

void XMLParser::on_end_document() {
    SaxParser::on_end_document();
}

void XMLParser::on_start_element(const Glib::ustring &name, const SaxParser::AttributeList &attributes) {
    SaxParser::on_start_element(name, attributes);
}

void XMLParser::on_end_element(const Glib::ustring &name) {
    SaxParser::on_end_element(name);
}

void XMLParser::on_characters(const Glib::ustring &characters) {
    SaxParser::on_characters(characters);
}

void XMLParser::on_comment(const Glib::ustring &text) {
    SaxParser::on_comment(text);
}

void XMLParser::on_warning(const Glib::ustring &text) {
    SaxParser::on_warning(text);
}

void XMLParser::on_error(const Glib::ustring &text) {
    SaxParser::on_error(text);
}

void XMLParser::on_fatal_error(const Glib::ustring &text) {
    SaxParser::on_fatal_error(text);
}
