#ifndef TENSOR_BUILDER_H
#define TENSOR_BUILDER_H

/* Generated by flatcc 0.6.1 FlatBuffers schema compiler for C by dvide.com */

#ifndef TENSOR_READER_H
#include "Tensor_reader.h"
#endif
#ifndef FLATBUFFERS_COMMON_BUILDER_H
#include "flatbuffers_common_builder.h"
#endif
#ifndef SCHEMA_BUILDER_H
#include "Schema_builder.h"
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension "bin"
#endif

static const flatbuffers_voffset_t __org_apache_arrow_flatbuf_TensorDim_required[] = { 0 };
typedef flatbuffers_ref_t org_apache_arrow_flatbuf_TensorDim_ref_t;
static org_apache_arrow_flatbuf_TensorDim_ref_t org_apache_arrow_flatbuf_TensorDim_clone(flatbuffers_builder_t *B, org_apache_arrow_flatbuf_TensorDim_table_t t);
__flatbuffers_build_table(flatbuffers_, org_apache_arrow_flatbuf_TensorDim, 2)

static const flatbuffers_voffset_t __org_apache_arrow_flatbuf_Tensor_required[] = { 1, 2, 4, 0 };
typedef flatbuffers_ref_t org_apache_arrow_flatbuf_Tensor_ref_t;
static org_apache_arrow_flatbuf_Tensor_ref_t org_apache_arrow_flatbuf_Tensor_clone(flatbuffers_builder_t *B, org_apache_arrow_flatbuf_Tensor_table_t t);
__flatbuffers_build_table(flatbuffers_, org_apache_arrow_flatbuf_Tensor, 5)

#define __org_apache_arrow_flatbuf_TensorDim_formal_args , int64_t v0, flatbuffers_string_ref_t v1
#define __org_apache_arrow_flatbuf_TensorDim_call_args , v0, v1
static inline org_apache_arrow_flatbuf_TensorDim_ref_t org_apache_arrow_flatbuf_TensorDim_create(flatbuffers_builder_t *B __org_apache_arrow_flatbuf_TensorDim_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, org_apache_arrow_flatbuf_TensorDim, org_apache_arrow_flatbuf_TensorDim_file_identifier, org_apache_arrow_flatbuf_TensorDim_type_identifier)

#define __org_apache_arrow_flatbuf_Tensor_formal_args , org_apache_arrow_flatbuf_Type_union_ref_t v1, org_apache_arrow_flatbuf_TensorDim_vec_ref_t v2, flatbuffers_int64_vec_ref_t v3, org_apache_arrow_flatbuf_Buffer_t *v4
#define __org_apache_arrow_flatbuf_Tensor_call_args , v1, v2, v3, v4
static inline org_apache_arrow_flatbuf_Tensor_ref_t org_apache_arrow_flatbuf_Tensor_create(flatbuffers_builder_t *B __org_apache_arrow_flatbuf_Tensor_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, org_apache_arrow_flatbuf_Tensor, org_apache_arrow_flatbuf_Tensor_file_identifier, org_apache_arrow_flatbuf_Tensor_type_identifier)

__flatbuffers_build_scalar_field(0, flatbuffers_, org_apache_arrow_flatbuf_TensorDim_size, flatbuffers_int64, int64_t, 8, 8, INT64_C(0), org_apache_arrow_flatbuf_TensorDim)
__flatbuffers_build_string_field(1, flatbuffers_, org_apache_arrow_flatbuf_TensorDim_name, org_apache_arrow_flatbuf_TensorDim)

static inline org_apache_arrow_flatbuf_TensorDim_ref_t org_apache_arrow_flatbuf_TensorDim_create(flatbuffers_builder_t *B __org_apache_arrow_flatbuf_TensorDim_formal_args)
{
    if (org_apache_arrow_flatbuf_TensorDim_start(B)
        || org_apache_arrow_flatbuf_TensorDim_size_add(B, v0)
        || org_apache_arrow_flatbuf_TensorDim_name_add(B, v1)) {
        return 0;
    }
    return org_apache_arrow_flatbuf_TensorDim_end(B);
}

static org_apache_arrow_flatbuf_TensorDim_ref_t org_apache_arrow_flatbuf_TensorDim_clone(flatbuffers_builder_t *B, org_apache_arrow_flatbuf_TensorDim_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (org_apache_arrow_flatbuf_TensorDim_start(B)
        || org_apache_arrow_flatbuf_TensorDim_size_pick(B, t)
        || org_apache_arrow_flatbuf_TensorDim_name_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, org_apache_arrow_flatbuf_TensorDim_end(B));
}

__flatbuffers_build_union_field(1, flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, org_apache_arrow_flatbuf_Tensor)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Null, org_apache_arrow_flatbuf_Null)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Int, org_apache_arrow_flatbuf_Int)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, FloatingPoint, org_apache_arrow_flatbuf_FloatingPoint)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Binary, org_apache_arrow_flatbuf_Binary)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Utf8, org_apache_arrow_flatbuf_Utf8)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Bool, org_apache_arrow_flatbuf_Bool)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Decimal, org_apache_arrow_flatbuf_Decimal)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Date, org_apache_arrow_flatbuf_Date)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Time, org_apache_arrow_flatbuf_Time)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Timestamp, org_apache_arrow_flatbuf_Timestamp)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Interval, org_apache_arrow_flatbuf_Interval)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, List, org_apache_arrow_flatbuf_List)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Struct_, org_apache_arrow_flatbuf_Struct_)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Union, org_apache_arrow_flatbuf_Union)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, FixedSizeBinary, org_apache_arrow_flatbuf_FixedSizeBinary)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, FixedSizeList, org_apache_arrow_flatbuf_FixedSizeList)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Map, org_apache_arrow_flatbuf_Map)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, Duration, org_apache_arrow_flatbuf_Duration)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, LargeBinary, org_apache_arrow_flatbuf_LargeBinary)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, LargeUtf8, org_apache_arrow_flatbuf_LargeUtf8)
__flatbuffers_build_union_table_value_field(flatbuffers_, org_apache_arrow_flatbuf_Tensor_type, org_apache_arrow_flatbuf_Type, LargeList, org_apache_arrow_flatbuf_LargeList)
__flatbuffers_build_table_vector_field(2, flatbuffers_, org_apache_arrow_flatbuf_Tensor_shape, org_apache_arrow_flatbuf_TensorDim, org_apache_arrow_flatbuf_Tensor)
__flatbuffers_build_vector_field(3, flatbuffers_, org_apache_arrow_flatbuf_Tensor_strides, flatbuffers_int64, int64_t, org_apache_arrow_flatbuf_Tensor)
__flatbuffers_build_struct_field(4, flatbuffers_, org_apache_arrow_flatbuf_Tensor_data, org_apache_arrow_flatbuf_Buffer, 16, 8, org_apache_arrow_flatbuf_Tensor)

static inline org_apache_arrow_flatbuf_Tensor_ref_t org_apache_arrow_flatbuf_Tensor_create(flatbuffers_builder_t *B __org_apache_arrow_flatbuf_Tensor_formal_args)
{
    if (org_apache_arrow_flatbuf_Tensor_start(B)
        || org_apache_arrow_flatbuf_Tensor_data_add(B, v4)
        || org_apache_arrow_flatbuf_Tensor_type_add_value(B, v1)
        || org_apache_arrow_flatbuf_Tensor_shape_add(B, v2)
        || org_apache_arrow_flatbuf_Tensor_strides_add(B, v3)
        || org_apache_arrow_flatbuf_Tensor_type_add_type(B, v1.type)) {
        return 0;
    }
    return org_apache_arrow_flatbuf_Tensor_end(B);
}

static org_apache_arrow_flatbuf_Tensor_ref_t org_apache_arrow_flatbuf_Tensor_clone(flatbuffers_builder_t *B, org_apache_arrow_flatbuf_Tensor_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (org_apache_arrow_flatbuf_Tensor_start(B)
        || org_apache_arrow_flatbuf_Tensor_data_pick(B, t)
        || org_apache_arrow_flatbuf_Tensor_type_pick(B, t)
        || org_apache_arrow_flatbuf_Tensor_shape_pick(B, t)
        || org_apache_arrow_flatbuf_Tensor_strides_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, org_apache_arrow_flatbuf_Tensor_end(B));
}

#include "flatcc/flatcc_epilogue.h"
#endif /* TENSOR_BUILDER_H */
