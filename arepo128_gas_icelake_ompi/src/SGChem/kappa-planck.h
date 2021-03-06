#ifdef SGCHEM
c
c Planck mean opacities log Kp (including line contribution) for pop III
c gas, taken from Mayer & Duschl (2005). 
c
c Note that Mayer & Duschl do not tabulate values for log(rho) > -6 for
c log(T) > 4.0; in this region of the table, we assume that the opacities
c no longer increase with T [in the absence of any better information].
c In practice, we expect to encounter maximum opacities of log(rho) ~ -8,
c and so this should not be a problem 
c
      integer nkappa
      parameter (nkappa = 435)
      REAL kappa_p(nkappa)

      DATA kappa_p/-4.36, -4.36, -4.36, -4.36, -4.36, -4.36, -4.36, 
     &             -4.36, -4.36, -4.32, -4.07, -3.34, -2.38, -1.39, 
     &             -0.39, -4.54, -4.54, -4.54, -4.54, -4.54, -4.54, 
     &             -4.54, -4.53, -4.53, -4.45, -4.02, -3.16, -2.18, 
     &             -1.18, -0.18, -4.71, -4.71, -4.71, -4.71, -4.71, 
     &             -4.71, -4.71, -4.71, -4.69, -4.54, -3.95, -3.02, 
     &             -2.03, -1.03, -0.03, -4.89, -4.89, -4.89, -4.89, 
     &             -4.89, -4.89, -4.89, -4.88, -4.85, -4.60, -3.88, 
     &             -2.92, -1.92, -0.92, 0.08, -5.06, -5.06, -5.06, 
     &             -5.06, -5.06, -5.06, -5.05, -5.05, -4.99, -4.63, 
     &             -3.81, -2.83, -1.84, -0.84, 0.16, -5.39, -5.29, 
     &             -5.24, -5.22, -5.22, -5.22, -5.22, -5.21, -5.11, 
     &             -4.65, -3.77, -2.79, -1.79, -0.79, 0.21, -6.01, 
     &             -5.98, -5.90, -5.75, -5.57, -5.45, -5.40, -5.36, 
     &             -5.23, -4.68, -3.77, -2.78, -1.78, -0.78, 0.22, 
     &             -6.08, -6.08, -6.08, -6.07, -6.05, -5.98, -5.86, 
     &             -5.68, -5.39, -4.73, -3.79, -2.80, -1.80, -0.80, 
     &             0.20, -6.13, -6.13, -6.13, -6.13, -6.13, -6.12, 
     &             -6.10, -6.00, -5.60, -4.80, -3.83, -2.84, -1.84, 
     &             -0.84, 0.16, -6.16, -6.16, -6.16, -6.16, -6.16, 
     &             -6.16, -6.15, -6.08, -5.68, -4.84, -3.87, -2.87, 
     &             -1.87, -0.87, 0.13, -6.15, -6.15, -6.15, -6.15, 
     &             -6.15, -6.15, -6.14, -6.07, -5.69, -4.86, -3.88, 
     &             -2.88, -1.88, -0.88, 0.12, -6.05, -6.05, -6.05, 
     &             -6.05, -6.05, -6.05, -6.05, -5.99, -5.64, -4.82, 
     &             -3.85, -2.85, -1.85, -0.85, 0.15, -5.91, -5.91, 
     &             -5.91, -5.91, -5.91, -5.91, -5.91, -5.85, -5.52, 
     &             -4.72, -3.74, -2.75, -1.75, -0.75, 0.25, -5.73, 
     &             -5.57, -5.51, -5.48, -5.48, -5.48, -5.47, -5.44, 
     &             -5.23, -4.55, -3.60, -2.60, -1.60, -0.60, 0.40, 
     &             -8.02, -7.06, -6.31, -5.82, -5.27, -4.83, -4.65, 
     &             -4.58, -4.52, -4.23, -3.46, -2.50, -1.50, -0.50, 
     &             0.50, -11.02, -10.02, -9.02, -8.02, -7.07, -6.32, 
     &             -5.79, -5.08, -4.33, -3.84, -3.29, -2.41, -1.43, 
     &             -0.43, 0.57, -12.05, -11.51, -10.91, -10.20, -9.34, 
     &             -8.39, -7.42, -6.53, -5.62, -4.51, -3.44, -2.42, 
     &             -1.43, -0.43, 0.57, -9.69, -9.21, -8.72, -8.22, 
     &             -7.72, -7.22, -6.71, -6.18, -5.50, -4.59, -3.69, 
     &             -2.57, -1.50, -0.47, 0.54, -6.65, -6.57, -6.39, 
     &             -6.08, -5.66, -5.19, -4.70, -4.21, -3.71, -3.21, 
     &             -2.72, -2.23, -1.52, -0.53, 0.49, -3.71, -3.52, 
     &             -3.46, -3.42, -3.36, -3.23, -2.96, -2.58, -2.12, 
     &             -1.63, -1.14, -0.69, -0.33, 0.12, 0.71, -3.49, 
     &             -2.52, -1.66, -1.18, -1.00, -0.94, -0.89, -0.81, 
     &             -0.63, -0.31, 0.11, 0.57, 1.01, 1.37, 1.76, 
     &             -3.84, -2.93, -1.94, -0.95, -0.02, 0.62, 0.89, 
     &             0.99, 1.04, 1.12, 1.30, 1.61, 2.02, 2.40, 
     &             2.74, -3.87, -2.91, -2.08, -1.32, -0.38, 0.61, 
     &             1.52, 2.13, 2.38, 2.47, 2.54, 2.66, 2.89, 
     &             3.23, 3.54, -4.53, -3.53, -2.53, -1.54, -0.58, 
     &             0.28, 1.18, 2.14, 2.95, 3.39, 3.55, 3.55, 
     &             3.55, 3.55, 3.55, -5.08, -4.08, -3.08, -2.08, 
     &             -1.08, -0.08, 0.90, 1.81, 2.73, 3.60, 4.14, 
     &             4.14, 4.14, 4.14, 4.14, -5.39, -4.50, -3.55, 
     &             -2.55, -1.55, -0.56, 0.44, 1.44, 2.41, 3.33, 
     &             4.18, 4.18, 4.18, 4.18, 4.18, -5.75, -4.75, 
     &             -3.76, -2.81, -1.93, -0.97, 0.02, 1.02, 2.02, 
     &             3.01, 3.94, 3.94, 3.94, 3.94, 3.94, -6.13, 
     &             -5.13, -4.13, -3.13, -2.13, -1.15, -0.24, 0.69, 
     &             1.68, 2.68, 3.67, 3.67, 3.67, 3.67, 3.67, 
     &             -6.45, -5.45, -4.45, -3.45, -2.45, -1.45, -0.45, 
     &             0.53, 1.47, 2.43, 3.42, 3.42, 3.42, 3.42, 
     &             3.42/
#endif /* SGCHEM */
