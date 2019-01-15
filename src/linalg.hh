#ifndef LINALG_H
#define LINALG_H
// [[Rcpp::depends(RcppArmadillo)]]
#include <RcppArmadillo.h>

using namespace arma;

arma::vec eigenvalues(arma::mat);
arma::mat eigenvectors(arma::mat);
arma::mat inv_sympd(arma::mat);

#endif
