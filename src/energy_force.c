#include "params.h"

void compute_long_range_correction(lj_params * len_jo, misc_params * m_pars,
                                   float * energy_long, float * force_long )
{

   float ulongpre = m_pars->float_N * 8.0 * len_jo->eps * 
                    m_pars->pi * m_pars->density;
   *energy_long = ulongpre * ( len_jo->sig12 / ( 9.0 * len_jo->rcut9 ) - 
                               len_jo->sig6 / ( 6.0 * len_jo->rcut3 ) );

   float vlongpre = 96.0 * len_jo->eps * m_pars->pi * m_pars->density;
   *force_long = -1.0 * vlongpre * ( len_jo->sig12 / ( 9.0 * len_jo->rcut9 ) - 
                                     len_jo->sig6 / ( 6.0 * len_jo->rcut3 ) ); 

}

void compute_energy_and_force()
{

}