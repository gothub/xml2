// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "xml2_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// read_connection_
RawVector read_connection_(RObject con, int chunk_size);
RcppExport SEXP xml2_read_connection_(SEXP conSEXP, SEXP chunk_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type con(conSEXP);
    Rcpp::traits::input_parameter< int >::type chunk_size(chunk_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(read_connection_(con, chunk_size));
    return rcpp_result_gen;
END_RCPP
}
// doc_parse_file
XPtrDoc doc_parse_file(std::string path, std::string encoding, bool as_html, int options);
RcppExport SEXP xml2_doc_parse_file(SEXP pathSEXP, SEXP encodingSEXP, SEXP as_htmlSEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type encoding(encodingSEXP);
    Rcpp::traits::input_parameter< bool >::type as_html(as_htmlSEXP);
    Rcpp::traits::input_parameter< int >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(doc_parse_file(path, encoding, as_html, options));
    return rcpp_result_gen;
END_RCPP
}
// doc_parse_raw
XPtrDoc doc_parse_raw(RawVector x, std::string encoding, std::string base_url, bool as_html, int options);
RcppExport SEXP xml2_doc_parse_raw(SEXP xSEXP, SEXP encodingSEXP, SEXP base_urlSEXP, SEXP as_htmlSEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type encoding(encodingSEXP);
    Rcpp::traits::input_parameter< std::string >::type base_url(base_urlSEXP);
    Rcpp::traits::input_parameter< bool >::type as_html(as_htmlSEXP);
    Rcpp::traits::input_parameter< int >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(doc_parse_raw(x, encoding, base_url, as_html, options));
    return rcpp_result_gen;
END_RCPP
}
// doc_root
XPtrNode doc_root(XPtrDoc x);
RcppExport SEXP xml2_doc_root(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(doc_root(x));
    return rcpp_result_gen;
END_RCPP
}
// doc_has_root
bool doc_has_root(XPtrDoc x);
RcppExport SEXP xml2_doc_has_root(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(doc_has_root(x));
    return rcpp_result_gen;
END_RCPP
}
// doc_url
CharacterVector doc_url(XPtrDoc x);
RcppExport SEXP xml2_doc_url(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(doc_url(x));
    return rcpp_result_gen;
END_RCPP
}
// doc_new
XPtrDoc doc_new(std::string version);
RcppExport SEXP xml2_doc_new(SEXP versionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type version(versionSEXP);
    rcpp_result_gen = Rcpp::wrap(doc_new(version));
    return rcpp_result_gen;
END_RCPP
}
// doc_set_root
XPtrNode doc_set_root(XPtrDoc doc, XPtrNode root);
RcppExport SEXP xml2_doc_set_root(SEXP docSEXP, SEXP rootSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type root(rootSEXP);
    rcpp_result_gen = Rcpp::wrap(doc_set_root(doc, root));
    return rcpp_result_gen;
END_RCPP
}
// libxml2_version
std::string libxml2_version();
RcppExport SEXP xml2_libxml2_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(libxml2_version());
    return rcpp_result_gen;
END_RCPP
}
// unique_ns
CharacterVector unique_ns(CharacterVector ns);
RcppExport SEXP xml2_unique_ns(SEXP nsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type ns(nsSEXP);
    rcpp_result_gen = Rcpp::wrap(unique_ns(ns));
    return rcpp_result_gen;
END_RCPP
}
// doc_namespaces
CharacterVector doc_namespaces(XPtrDoc doc);
RcppExport SEXP xml2_doc_namespaces(SEXP docSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    rcpp_result_gen = Rcpp::wrap(doc_namespaces(doc));
    return rcpp_result_gen;
END_RCPP
}
// ns_lookup_uri
XPtrNs ns_lookup_uri(XPtrDoc doc, XPtrNode node, std::string uri);
RcppExport SEXP xml2_ns_lookup_uri(SEXP docSEXP, SEXP nodeSEXP, SEXP uriSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type uri(uriSEXP);
    rcpp_result_gen = Rcpp::wrap(ns_lookup_uri(doc, node, uri));
    return rcpp_result_gen;
END_RCPP
}
// ns_lookup
XPtrNs ns_lookup(XPtrDoc doc, XPtrNode node, std::string prefix);
RcppExport SEXP xml2_ns_lookup(SEXP docSEXP, SEXP nodeSEXP, SEXP prefixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type prefix(prefixSEXP);
    rcpp_result_gen = Rcpp::wrap(ns_lookup(doc, node, prefix));
    return rcpp_result_gen;
END_RCPP
}
// node_name
CharacterVector node_name(XPtrNode node, CharacterVector nsMap);
RcppExport SEXP xml2_node_name(SEXP nodeSEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    rcpp_result_gen = Rcpp::wrap(node_name(node, nsMap));
    return rcpp_result_gen;
END_RCPP
}
// node_set_name
void node_set_name(XPtrNode node, std::string value);
RcppExport SEXP xml2_node_set_name(SEXP nodeSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type value(valueSEXP);
    node_set_name(node, value);
    return R_NilValue;
END_RCPP
}
// node_text
CharacterVector node_text(XPtrNode node, bool trim);
RcppExport SEXP xml2_node_text(SEXP nodeSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type trim(trimSEXP);
    rcpp_result_gen = Rcpp::wrap(node_text(node, trim));
    return rcpp_result_gen;
END_RCPP
}
// node_attr
SEXP node_attr(XPtrNode node, std::string name, CharacterVector missing, CharacterVector nsMap);
RcppExport SEXP xml2_node_attr(SEXP nodeSEXP, SEXP nameSEXP, SEXP missingSEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type missing(missingSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    rcpp_result_gen = Rcpp::wrap(node_attr(node, name, missing, nsMap));
    return rcpp_result_gen;
END_RCPP
}
// node_attrs
CharacterVector node_attrs(XPtrNode node_, CharacterVector nsMap);
RcppExport SEXP xml2_node_attrs(SEXP node_SEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node_(node_SEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    rcpp_result_gen = Rcpp::wrap(node_attrs(node_, nsMap));
    return rcpp_result_gen;
END_RCPP
}
// node_set_attr
void node_set_attr(XPtrNode node_, std::string name, std::string value, CharacterVector nsMap);
RcppExport SEXP xml2_node_set_attr(SEXP node_SEXP, SEXP nameSEXP, SEXP valueSEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node_(node_SEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type value(valueSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    node_set_attr(node_, name, value, nsMap);
    return R_NilValue;
END_RCPP
}
// node_children
Rcpp::List node_children(XPtrNode node, bool onlyNode);
RcppExport SEXP xml2_node_children(SEXP nodeSEXP, SEXP onlyNodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyNode(onlyNodeSEXP);
    rcpp_result_gen = Rcpp::wrap(node_children(node, onlyNode));
    return rcpp_result_gen;
END_RCPP
}
// node_length
int node_length(XPtrNode node, bool onlyNode);
RcppExport SEXP xml2_node_length(SEXP nodeSEXP, SEXP onlyNodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyNode(onlyNodeSEXP);
    rcpp_result_gen = Rcpp::wrap(node_length(node, onlyNode));
    return rcpp_result_gen;
END_RCPP
}
// node_parents
Rcpp::List node_parents(XPtrNode node);
RcppExport SEXP xml2_node_parents(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    rcpp_result_gen = Rcpp::wrap(node_parents(node));
    return rcpp_result_gen;
END_RCPP
}
// node_siblings
Rcpp::List node_siblings(XPtrNode node, bool onlyNode);
RcppExport SEXP xml2_node_siblings(SEXP nodeSEXP, SEXP onlyNodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyNode(onlyNodeSEXP);
    rcpp_result_gen = Rcpp::wrap(node_siblings(node, onlyNode));
    return rcpp_result_gen;
END_RCPP
}
// node_parent
XPtrNode node_parent(XPtrNode n);
RcppExport SEXP xml2_node_parent(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(node_parent(n));
    return rcpp_result_gen;
END_RCPP
}
// node_path
std::string node_path(XPtrNode n);
RcppExport SEXP xml2_node_path(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(node_path(n));
    return rcpp_result_gen;
END_RCPP
}
// nodes_duplicated
LogicalVector nodes_duplicated(List nodes);
RcppExport SEXP xml2_nodes_duplicated(SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type nodes(nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(nodes_duplicated(nodes));
    return rcpp_result_gen;
END_RCPP
}
// node_type
int node_type(XPtrNode node);
RcppExport SEXP xml2_node_type(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    rcpp_result_gen = Rcpp::wrap(node_type(node));
    return rcpp_result_gen;
END_RCPP
}
// node_set_content
void node_set_content(XPtrNode node, std::string content);
RcppExport SEXP xml2_node_set_content(SEXP nodeSEXP, SEXP contentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type content(contentSEXP);
    node_set_content(node, content);
    return R_NilValue;
END_RCPP
}
// node_append_content
void node_append_content(XPtrNode node, std::string content);
RcppExport SEXP xml2_node_append_content(SEXP nodeSEXP, SEXP contentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type content(contentSEXP);
    node_append_content(node, content);
    return R_NilValue;
END_RCPP
}
// node_add_child
XPtrNode node_add_child(XPtrNode parent, XPtrNode cur, bool copy);
RcppExport SEXP xml2_node_add_child(SEXP parentSEXP, SEXP curSEXP, SEXP copySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type cur(curSEXP);
    Rcpp::traits::input_parameter< bool >::type copy(copySEXP);
    rcpp_result_gen = Rcpp::wrap(node_add_child(parent, cur, copy));
    return rcpp_result_gen;
END_RCPP
}
// node_prepend_sibling
XPtrNode node_prepend_sibling(XPtrNode cur, XPtrNode elem, bool copy);
RcppExport SEXP xml2_node_prepend_sibling(SEXP curSEXP, SEXP elemSEXP, SEXP copySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type cur(curSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type elem(elemSEXP);
    Rcpp::traits::input_parameter< bool >::type copy(copySEXP);
    rcpp_result_gen = Rcpp::wrap(node_prepend_sibling(cur, elem, copy));
    return rcpp_result_gen;
END_RCPP
}
// node_append_sibling
XPtrNode node_append_sibling(XPtrNode cur, XPtrNode elem, bool copy);
RcppExport SEXP xml2_node_append_sibling(SEXP curSEXP, SEXP elemSEXP, SEXP copySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type cur(curSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type elem(elemSEXP);
    Rcpp::traits::input_parameter< bool >::type copy(copySEXP);
    rcpp_result_gen = Rcpp::wrap(node_append_sibling(cur, elem, copy));
    return rcpp_result_gen;
END_RCPP
}
// node_replace
XPtrNode node_replace(XPtrNode old, XPtrNode cur, bool copy);
RcppExport SEXP xml2_node_replace(SEXP oldSEXP, SEXP curSEXP, SEXP copySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type old(oldSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type cur(curSEXP);
    Rcpp::traits::input_parameter< bool >::type copy(copySEXP);
    rcpp_result_gen = Rcpp::wrap(node_replace(old, cur, copy));
    return rcpp_result_gen;
END_RCPP
}
// node_remove
void node_remove(XPtrNode cur, bool free);
RcppExport SEXP xml2_node_remove(SEXP curSEXP, SEXP freeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type cur(curSEXP);
    Rcpp::traits::input_parameter< bool >::type free(freeSEXP);
    node_remove(cur, free);
    return R_NilValue;
END_RCPP
}
// node_new
XPtrNode node_new(std::string name);
RcppExport SEXP xml2_node_new(SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(node_new(name));
    return rcpp_result_gen;
END_RCPP
}
// node_new_ns
XPtrNode node_new_ns(std::string name, XPtrNs ns);
RcppExport SEXP xml2_node_new_ns(SEXP nameSEXP, SEXP nsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< XPtrNs >::type ns(nsSEXP);
    rcpp_result_gen = Rcpp::wrap(node_new_ns(name, ns));
    return rcpp_result_gen;
END_RCPP
}
// node_null
XPtrNode node_null();
RcppExport SEXP xml2_node_null() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(node_null());
    return rcpp_result_gen;
END_RCPP
}
// node_set_namespace_uri
void node_set_namespace_uri(XPtrDoc doc, XPtrNode node, std::string uri);
RcppExport SEXP xml2_node_set_namespace_uri(SEXP docSEXP, SEXP nodeSEXP, SEXP uriSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type uri(uriSEXP);
    node_set_namespace_uri(doc, node, uri);
    return R_NilValue;
END_RCPP
}
// node_set_namespace_prefix
void node_set_namespace_prefix(XPtrDoc doc, XPtrNode node, std::string prefix);
RcppExport SEXP xml2_node_set_namespace_prefix(SEXP docSEXP, SEXP nodeSEXP, SEXP prefixSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type prefix(prefixSEXP);
    node_set_namespace_prefix(doc, node, prefix);
    return R_NilValue;
END_RCPP
}
// doc_write_xml
void doc_write_xml(XPtrDoc x, std::string path, bool format);
RcppExport SEXP xml2_doc_write_xml(SEXP xSEXP, SEXP pathSEXP, SEXP formatSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type format(formatSEXP);
    doc_write_xml(x, path, format);
    return R_NilValue;
END_RCPP
}
// doc_write_html
void doc_write_html(XPtrDoc x, std::string path, bool format);
RcppExport SEXP xml2_doc_write_html(SEXP xSEXP, SEXP pathSEXP, SEXP formatSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type format(formatSEXP);
    doc_write_html(x, path, format);
    return R_NilValue;
END_RCPP
}
// node_write_xml
void node_write_xml(XPtrNode n, XPtrDoc d, std::string path);
RcppExport SEXP xml2_node_write_xml(SEXP nSEXP, SEXP dSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type n(nSEXP);
    Rcpp::traits::input_parameter< XPtrDoc >::type d(dSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    node_write_xml(n, d, path);
    return R_NilValue;
END_RCPP
}
// node_write_html
void node_write_html(XPtrNode n, XPtrDoc d, std::string path);
RcppExport SEXP xml2_node_write_html(SEXP nSEXP, SEXP dSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type n(nSEXP);
    Rcpp::traits::input_parameter< XPtrDoc >::type d(dSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    node_write_html(n, d, path);
    return R_NilValue;
END_RCPP
}
// doc_format_xml
CharacterVector doc_format_xml(XPtrDoc x);
RcppExport SEXP xml2_doc_format_xml(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(doc_format_xml(x));
    return rcpp_result_gen;
END_RCPP
}
// doc_format_html
CharacterVector doc_format_html(XPtrDoc x);
RcppExport SEXP xml2_doc_format_html(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(doc_format_html(x));
    return rcpp_result_gen;
END_RCPP
}
// node_format_xml
CharacterVector node_format_xml(XPtrDoc doc, XPtrNode node, bool format, int indent);
RcppExport SEXP xml2_node_format_xml(SEXP docSEXP, SEXP nodeSEXP, SEXP formatSEXP, SEXP indentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type format(formatSEXP);
    Rcpp::traits::input_parameter< int >::type indent(indentSEXP);
    rcpp_result_gen = Rcpp::wrap(node_format_xml(doc, node, format, indent));
    return rcpp_result_gen;
END_RCPP
}
// node_format_html
CharacterVector node_format_html(XPtrDoc doc, XPtrNode node, bool format);
RcppExport SEXP xml2_node_format_html(SEXP docSEXP, SEXP nodeSEXP, SEXP formatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type format(formatSEXP);
    rcpp_result_gen = Rcpp::wrap(node_format_html(doc, node, format));
    return rcpp_result_gen;
END_RCPP
}
// url_absolute
CharacterVector url_absolute(CharacterVector x, CharacterVector base);
RcppExport SEXP xml2_url_absolute(SEXP xSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type base(baseSEXP);
    rcpp_result_gen = Rcpp::wrap(url_absolute(x, base));
    return rcpp_result_gen;
END_RCPP
}
// url_relative
CharacterVector url_relative(CharacterVector x, CharacterVector base);
RcppExport SEXP xml2_url_relative(SEXP xSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type base(baseSEXP);
    rcpp_result_gen = Rcpp::wrap(url_relative(x, base));
    return rcpp_result_gen;
END_RCPP
}
// url_parse
List url_parse(CharacterVector x);
RcppExport SEXP xml2_url_parse(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(url_parse(x));
    return rcpp_result_gen;
END_RCPP
}
// url_escape
CharacterVector url_escape(CharacterVector x, CharacterVector reserved);
RcppExport SEXP xml2_url_escape(SEXP xSEXP, SEXP reservedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type reserved(reservedSEXP);
    rcpp_result_gen = Rcpp::wrap(url_escape(x, reserved));
    return rcpp_result_gen;
END_RCPP
}
// url_unescape
CharacterVector url_unescape(CharacterVector x);
RcppExport SEXP xml2_url_unescape(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(url_unescape(x));
    return rcpp_result_gen;
END_RCPP
}
// xpath_search
RObject xpath_search(XPtrNode node, XPtrDoc doc, std::string xpath, CharacterVector nsMap, double num_results);
RcppExport SEXP xml2_xpath_search(SEXP nodeSEXP, SEXP docSEXP, SEXP xpathSEXP, SEXP nsMapSEXP, SEXP num_resultsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type xpath(xpathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    Rcpp::traits::input_parameter< double >::type num_results(num_resultsSEXP);
    rcpp_result_gen = Rcpp::wrap(xpath_search(node, doc, xpath, nsMap, num_results));
    return rcpp_result_gen;
END_RCPP
}
