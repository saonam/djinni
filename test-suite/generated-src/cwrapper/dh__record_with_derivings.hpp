// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#pragma once

#include <atomic>
#include <experimental/optional>
#include "record_with_derivings.hpp"
#ifdef __cplusplus
extern "C" {
#endif

#include "dh__record_with_derivings.h"

#ifdef __cplusplus
}
#endif
struct DjinniRecordWithDerivings {
    static djinni::Handle<DjinniRecordHandle> fromCpp(const ::testsuite::RecordWithDerivings& dr);
    static ::testsuite::RecordWithDerivings toCpp(djinni::Handle<DjinniRecordHandle> dh);
    static djinni::Handle<DjinniOptionalRecordHandle> fromCpp(std::experimental::optional<::testsuite::RecordWithDerivings> dc);
    static std::experimental::optional<::testsuite::RecordWithDerivings> toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh);
};