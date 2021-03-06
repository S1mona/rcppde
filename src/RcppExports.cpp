// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// DEoptim_impl
Rcpp::List DEoptim_impl(const arma::colvec& minbound, const arma::colvec& maxbound, SEXP fnS, const Rcpp::List& control, SEXP rhoS);
RcppExport SEXP RcppDE_DEoptim_impl(SEXP minboundSEXP, SEXP maxboundSEXP, SEXP fnSSEXP, SEXP controlSEXP, SEXP rhoSSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::colvec& >::type minbound(minboundSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type maxbound(maxboundSEXP);
    Rcpp::traits::input_parameter< SEXP >::type fnS(fnSSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type control(controlSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rhoS(rhoSSEXP);
    __result = Rcpp::wrap(DEoptim_impl(minbound, maxbound, fnS, control, rhoS));
    return __result;
END_RCPP
}
