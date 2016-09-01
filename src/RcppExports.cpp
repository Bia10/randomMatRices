// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// symmetricMatrix
NumericMatrix symmetricMatrix(int n, NumericVector v);
RcppExport SEXP randomMatRices_symmetricMatrix(SEXP nSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    __result = Rcpp::wrap(symmetricMatrix(n, v));
    return __result;
END_RCPP
}