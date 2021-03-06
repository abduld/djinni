// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#include "record_with_nested_derivings.hpp"  // my header


bool RecordWithNestedDerivings::operator==(const RecordWithNestedDerivings & other) const {
    return key == other.key &&
        rec == other.rec;
}

bool RecordWithNestedDerivings::operator!=(const RecordWithNestedDerivings & other) const {
    return !(*this == other);
}

bool RecordWithNestedDerivings::operator<(const RecordWithNestedDerivings & other) const {
    if (key < other.key) {
        return true;
    }
    if (other.key < key) {
        return false;
    }
    if (rec < other.rec) {
        return true;
    }
    if (other.rec < rec) {
        return false;
    }
    return false;
}

bool RecordWithNestedDerivings::operator>(const RecordWithNestedDerivings & other) const {
    return other < *this;
}

bool RecordWithNestedDerivings::operator<=(const RecordWithNestedDerivings & other) const {
    return (*this < other || *this == other);
}

bool RecordWithNestedDerivings::operator>=(const RecordWithNestedDerivings & other) const {
    return other <= *this;
}
