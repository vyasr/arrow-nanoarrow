#ifndef SPARSETENSOR_VERIFIER_H
#define SPARSETENSOR_VERIFIER_H

/* Generated by flatcc 0.6.1 FlatBuffers schema compiler for C by dvide.com */

#ifndef SPARSETENSOR_READER_H
#include "SparseTensor_reader.h"
#endif
#include "flatcc/flatcc_verifier.h"
#ifndef TENSOR_VERIFIER_H
#include "Tensor_verifier.h"
#endif
#include "flatcc/flatcc_prologue.h"

static int org_apache_arrow_flatbuf_SparseTensorIndexCOO_verify_table(flatcc_table_verifier_descriptor_t *td);
static int org_apache_arrow_flatbuf_SparseMatrixIndexCSX_verify_table(flatcc_table_verifier_descriptor_t *td);
static int org_apache_arrow_flatbuf_SparseTensorIndexCSF_verify_table(flatcc_table_verifier_descriptor_t *td);
static int org_apache_arrow_flatbuf_SparseTensor_verify_table(flatcc_table_verifier_descriptor_t *td);

static int org_apache_arrow_flatbuf_SparseTensorIndex_union_verifier(flatcc_union_verifier_descriptor_t *ud)
{
    switch (ud->type) {
    case 1: return flatcc_verify_union_table(ud, org_apache_arrow_flatbuf_SparseTensorIndexCOO_verify_table); /* SparseTensorIndexCOO */
    case 2: return flatcc_verify_union_table(ud, org_apache_arrow_flatbuf_SparseMatrixIndexCSX_verify_table); /* SparseMatrixIndexCSX */
    case 3: return flatcc_verify_union_table(ud, org_apache_arrow_flatbuf_SparseTensorIndexCSF_verify_table); /* SparseTensorIndexCSF */
    default: return flatcc_verify_ok;
    }
}

static int org_apache_arrow_flatbuf_SparseTensorIndexCOO_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_field(td, 0, 1, &org_apache_arrow_flatbuf_Int_verify_table) /* indicesType */)) return ret;
    if ((ret = flatcc_verify_vector_field(td, 1, 0, 8, 8, INT64_C(536870911)) /* indicesStrides */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 16, 8) /* indicesBuffer */)) return ret;
    if ((ret = flatcc_verify_field(td, 3, 1, 1) /* isCanonical */)) return ret;
    return flatcc_verify_ok;
}

static inline int org_apache_arrow_flatbuf_SparseTensorIndexCOO_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, org_apache_arrow_flatbuf_SparseTensorIndexCOO_identifier, &org_apache_arrow_flatbuf_SparseTensorIndexCOO_verify_table);
}

static inline int org_apache_arrow_flatbuf_SparseTensorIndexCOO_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, org_apache_arrow_flatbuf_SparseTensorIndexCOO_type_identifier, &org_apache_arrow_flatbuf_SparseTensorIndexCOO_verify_table);
}

static inline int org_apache_arrow_flatbuf_SparseTensorIndexCOO_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &org_apache_arrow_flatbuf_SparseTensorIndexCOO_verify_table);
}

static inline int org_apache_arrow_flatbuf_SparseTensorIndexCOO_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &org_apache_arrow_flatbuf_SparseTensorIndexCOO_verify_table);
}

static int org_apache_arrow_flatbuf_SparseMatrixIndexCSX_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 2, 2) /* compressedAxis */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 1, 1, &org_apache_arrow_flatbuf_Int_verify_table) /* indptrType */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 16, 8) /* indptrBuffer */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 3, 1, &org_apache_arrow_flatbuf_Int_verify_table) /* indicesType */)) return ret;
    if ((ret = flatcc_verify_field(td, 4, 16, 8) /* indicesBuffer */)) return ret;
    return flatcc_verify_ok;
}

static inline int org_apache_arrow_flatbuf_SparseMatrixIndexCSX_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, org_apache_arrow_flatbuf_SparseMatrixIndexCSX_identifier, &org_apache_arrow_flatbuf_SparseMatrixIndexCSX_verify_table);
}

static inline int org_apache_arrow_flatbuf_SparseMatrixIndexCSX_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, org_apache_arrow_flatbuf_SparseMatrixIndexCSX_type_identifier, &org_apache_arrow_flatbuf_SparseMatrixIndexCSX_verify_table);
}

static inline int org_apache_arrow_flatbuf_SparseMatrixIndexCSX_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &org_apache_arrow_flatbuf_SparseMatrixIndexCSX_verify_table);
}

static inline int org_apache_arrow_flatbuf_SparseMatrixIndexCSX_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &org_apache_arrow_flatbuf_SparseMatrixIndexCSX_verify_table);
}

static int org_apache_arrow_flatbuf_SparseTensorIndexCSF_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_field(td, 0, 1, &org_apache_arrow_flatbuf_Int_verify_table) /* indptrType */)) return ret;
    if ((ret = flatcc_verify_vector_field(td, 1, 1, 16, 8, INT64_C(268435455)) /* indptrBuffers */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 2, 1, &org_apache_arrow_flatbuf_Int_verify_table) /* indicesType */)) return ret;
    if ((ret = flatcc_verify_vector_field(td, 3, 1, 16, 8, INT64_C(268435455)) /* indicesBuffers */)) return ret;
    if ((ret = flatcc_verify_vector_field(td, 4, 1, 4, 4, INT64_C(1073741823)) /* axisOrder */)) return ret;
    return flatcc_verify_ok;
}

static inline int org_apache_arrow_flatbuf_SparseTensorIndexCSF_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, org_apache_arrow_flatbuf_SparseTensorIndexCSF_identifier, &org_apache_arrow_flatbuf_SparseTensorIndexCSF_verify_table);
}

static inline int org_apache_arrow_flatbuf_SparseTensorIndexCSF_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, org_apache_arrow_flatbuf_SparseTensorIndexCSF_type_identifier, &org_apache_arrow_flatbuf_SparseTensorIndexCSF_verify_table);
}

static inline int org_apache_arrow_flatbuf_SparseTensorIndexCSF_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &org_apache_arrow_flatbuf_SparseTensorIndexCSF_verify_table);
}

static inline int org_apache_arrow_flatbuf_SparseTensorIndexCSF_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &org_apache_arrow_flatbuf_SparseTensorIndexCSF_verify_table);
}

static int org_apache_arrow_flatbuf_SparseTensor_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_union_field(td, 1, 1, &org_apache_arrow_flatbuf_Type_union_verifier) /* type */)) return ret;
    if ((ret = flatcc_verify_table_vector_field(td, 2, 1, &org_apache_arrow_flatbuf_TensorDim_verify_table) /* shape */)) return ret;
    if ((ret = flatcc_verify_field(td, 3, 8, 8) /* non_zero_length */)) return ret;
    if ((ret = flatcc_verify_union_field(td, 5, 1, &org_apache_arrow_flatbuf_SparseTensorIndex_union_verifier) /* sparseIndex */)) return ret;
    if ((ret = flatcc_verify_field(td, 6, 16, 8) /* data */)) return ret;
    return flatcc_verify_ok;
}

static inline int org_apache_arrow_flatbuf_SparseTensor_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, org_apache_arrow_flatbuf_SparseTensor_identifier, &org_apache_arrow_flatbuf_SparseTensor_verify_table);
}

static inline int org_apache_arrow_flatbuf_SparseTensor_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, org_apache_arrow_flatbuf_SparseTensor_type_identifier, &org_apache_arrow_flatbuf_SparseTensor_verify_table);
}

static inline int org_apache_arrow_flatbuf_SparseTensor_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &org_apache_arrow_flatbuf_SparseTensor_verify_table);
}

static inline int org_apache_arrow_flatbuf_SparseTensor_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &org_apache_arrow_flatbuf_SparseTensor_verify_table);
}

#include "flatcc/flatcc_epilogue.h"
#endif /* SPARSETENSOR_VERIFIER_H */