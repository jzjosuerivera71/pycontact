double calculate_sasa_cuda(const float *pos,int natoms, float pairdist, int allow_double_counting, int maxpairs,
                           const float *radius,const int npts, double srad, int pointstyle, int restricted,
                           const int* restrictedList);