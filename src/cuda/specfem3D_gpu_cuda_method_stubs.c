#include "config.h"
#include <stdio.h>

typedef float realw;

/* from check_fields_cuda.cu */
void FC_FUNC_(check_max_norm_displ_gpu,
              CHECK_MAX_NORM_DISPL_GPU)(int* size, realw* displ,long* Mesh_pointer_f,int* announceID){}

void FC_FUNC_(check_max_norm_vector,
              CHECK_MAX_NORM_VECTOR)(int* size, realw* vector1, int* announceID){}
void FC_FUNC_(check_max_norm_displ,
              CHECK_MAX_NORM_DISPL)(int* size, realw* displ, int* announceID){}

void FC_FUNC_(check_max_norm_b_displ_gpu,
              CHECK_MAX_NORM_B_DISPL_GPU)(int* size, realw* b_displ,long* Mesh_pointer_f,int* announceID){}

void FC_FUNC_(check_max_norm_b_accel_gpu,
              CHECK_MAX_NORM_B_ACCEL_GPU)(int* size, realw* b_accel,long* Mesh_pointer_f,int* announceID){}

void FC_FUNC_(check_max_norm_b_veloc_gpu,
              CHECK_MAX_NORM_B_VELOC_GPU)(int* size, realw* b_veloc,long* Mesh_pointer_f,int* announceID){}

void FC_FUNC_(check_max_norm_b_displ,
              CHECK_MAX_NORM_B_DISPL)(int* size, realw* b_displ,int* announceID){}

void FC_FUNC_(check_max_norm_b_accel,
              CHECK_MAX_NORM_B_ACCEL)(int* size, realw* b_accel,int* announceID){}

void FC_FUNC_(check_error_vectors,
              CHECK_ERROR_VECTORS)(int* sizef, realw* vector1,realw* vector2){}

void FC_FUNC_(get_max_accel,
              GET_MAX_ACCEL)(int* itf,int* sizef,long* Mesh_pointer){}

void FC_FUNC_(get_norm_acoustic_from_device,
              GET_NORM_ACOUSTIC_FROM_DEVICE)(realw* norm,
                                                  long* Mesh_pointer_f,
                                                  int* SIMULATION_TYPE){}

void FC_FUNC_(get_norm_elastic_from_device,
              GET_NORM_ELASTIC_FROM_DEVICE)(realw* norm,
                                                 long* Mesh_pointer_f,
                                                 int* SIMULATION_TYPE){}


/* from file compute_add_sources_elastic_cuda.cu */

void FC_FUNC_(compute_add_sources_el_cuda,
              COMPUTE_ADD_SOURCES_EL_CUDA)(long* Mesh_pointer_f,
                                           int* phase_is_innerf,
                                           int* NSOURCESf,
                                           double* h_stf_pre_compute,
                                           int* myrankf){}

void FC_FUNC_(compute_add_sources_el_s3_cuda,
              COMPUTE_ADD_SOURCES_EL_S3_CUDA)(long* Mesh_pointer,
                                              double* h_stf_pre_compute,
                                              int* NSOURCES,
                                              int* phase_is_inner,
                                              int* myrank){}

void FC_FUNC_(add_source_master_rec_noise_cu,
              ADD_SOURCE_MASTER_REC_NOISE_CU)(long* Mesh_pointer_f,
                                                int* myrank_f,
                                                int* it_f,
                                                int* irec_master_noise_f,
                                                int* islice_selected_rec){}

void FC_FUNC_(add_sources_el_sim_type_2_or_3,
              ADD_SOURCES_EL_SIM_TYPE_2_OR_3)(long* Mesh_pointer,
                                           realw* h_adj_sourcearrays,
                                           int* phase_is_inner,
                                           int* h_ispec_is_inner,
                                           int* h_ispec_is_elastic,
                                           int* h_ispec_selected_rec,
                                           int* myrank,
                                           int* nrec,
                                           int* time_index,
                                           int* h_islice_selected_rec,
                                           int* nadj_rec_local,
                                           int* NTSTEP_BETWEEN_READ_ADJSRC){}

/* from file compute_add_sources_acoustic_cuda.cu */

void FC_FUNC_(compute_add_sources_ac_cuda,
              COMPUTE_ADD_SOURCES_AC_CUDA)(long* Mesh_pointer_f,
                                                 int* phase_is_innerf,
                                                 int* NSOURCESf,
                                                 int* SIMULATION_TYPEf,
                                                 double* h_stf_pre_compute,
                                                 int* myrankf){}

void FC_FUNC_(compute_add_sources_ac_s3_cuda,
              COMPUTE_ADD_SOURCES_AC_S3_CUDA)(long* Mesh_pointer_f,
                                                      int* phase_is_innerf,
                                                      int* NSOURCESf,
                                                      int* SIMULATION_TYPEf,
                                                      double* h_stf_pre_compute,
                                                      int* myrankf){}

void FC_FUNC_(add_sources_ac_sim_2_or_3_cuda,
              ADD_SOURCES_AC_SIM_2_OR_3_CUDA)(long* Mesh_pointer,
                                               realw* h_adj_sourcearrays,
                                               int* phase_is_inner,
                                               int* h_ispec_is_inner,
                                               int* h_ispec_is_acoustic,
                                               int* h_ispec_selected_rec,
                                               int* myrank,
                                               int* nrec,
                                               int* time_index,
                                               int* h_islice_selected_rec,
                                               int* nadj_rec_local,
                                               int* NTSTEP_BETWEEN_ADJSRC){}

/* from compute_coupling_cuda.cu */

void FC_FUNC_(compute_coupling_ac_el_cuda,
              COMPUTE_COUPLING_AC_EL_CUDA)(
                                            long* Mesh_pointer_f,
                                            int* phase_is_innerf,
                                            int* num_coupling_ac_el_facesf,
                                            int* SIMULATION_TYPEf){}

void FC_FUNC_(compute_coupling_el_ac_cuda,
              COMPUTE_COUPLING_EL_AC_CUDA)(
                                                 long* Mesh_pointer_f,
                                                 int* phase_is_innerf,
                                                 int* num_coupling_ac_el_facesf,
                                                 int* SIMULATION_TYPEf){}

/* from compute_forces_acoustic_cuda.cu */

void FC_FUNC_(transfer_boun_pot_from_device,
              TRANSFER_BOUN_POT_FROM_DEVICE)(
                                              int* size,
                                              long* Mesh_pointer_f,
                                              realw* potential_dot_dot_acoustic,
                                              realw* send_potential_dot_dot_buffer,
                                              int* num_interfaces_ext_mesh,
                                              int* max_nibool_interfaces_ext_mesh,
                                              int* nibool_interfaces_ext_mesh,
                                              int* ibool_interfaces_ext_mesh,
                                              int* FORWARD_OR_ADJOINT){}

void FC_FUNC_(transfer_asmbl_pot_to_device,
              TRANSFER_ASMBL_POT_TO_DEVICE)(
                                                long* Mesh_pointer,
                                                realw* potential_dot_dot_acoustic,
                                                realw* buffer_recv_scalar_ext_mesh,
                                                int* num_interfaces_ext_mesh,
                                                int* max_nibool_interfaces_ext_mesh,
                                                int* nibool_interfaces_ext_mesh,
                                                int* ibool_interfaces_ext_mesh,
                                                int* FORWARD_OR_ADJOINT){}

void FC_FUNC_(compute_forces_acoustic_cuda,
              COMPUTE_FORCES_ACOUSTIC_CUDA)(long* Mesh_pointer_f,
                                            int* iphase,
                                            int* nspec_outer_acoustic,
                                            int* nspec_inner_acoustic,
                                            int* SIMULATION_TYPE){}

void FC_FUNC_(kernel_3_a_acoustic_cuda,KERNEL_3_ACOUSTIC_CUDA)(
                             long* Mesh_pointer,
                             int* size_F,
                             int* SIMULATION_TYPE){}

void FC_FUNC_(kernel_3_b_acoustic_cuda,KERNEL_3_ACOUSTIC_CUDA)(
                                                             long* Mesh_pointer,
                                                             int* size_F,
                                                             realw* deltatover2_F,
                                                             int* SIMULATION_TYPE,
                                                             realw* b_deltatover2_F){}

void FC_FUNC_(acoustic_enforce_free_surf_cuda,
              ACOUSTIC_ENFORCE_FREE_SURF_CUDA)(long* Mesh_pointer_f,
                                                  int* SIMULATION_TYPE,
                                                  int* ABSORB_FREE_SURFACE){}


/* from compute_forces_elastic_cuda.cu */
void FC_FUNC_(transfer_boun_accel_from_device,
              TRANSFER_BOUN_ACCEL_FROM_DEVICE)(int* size, long* Mesh_pointer_f, realw* accel,
               realw* send_accel_buffer,
               int* num_interfaces_ext_mesh,
               int* max_nibool_interfaces_ext_mesh,
               int* nibool_interfaces_ext_mesh,
               int* ibool_interfaces_ext_mesh,
               int* FORWARD_OR_ADJOINT){}


void FC_FUNC_(transfer_asmbl_accel_to_device,
              TRANSFER_ASMBL_ACCEL_TO_DEVICE)(long* Mesh_pointer,
                                              realw* accel,
                                              realw* buffer_recv_vector_ext_mesh,
                                              int* num_interfaces_ext_mesh,
                                              int* max_nibool_interfaces_ext_mesh,
                                              int* nibool_interfaces_ext_mesh,
                 int* ibool_interfaces_ext_mesh,int* FORWARD_OR_ADJOINT){}

void FC_FUNC_(compute_forces_elastic_cuda,
              COMPUTE_FORCES_ELASTIC_CUDA)(long* Mesh_pointer_f,
                                           int* iphase,
                                           int* nspec_outer_elastic,
                                           int* nspec_inner_elastic,
                                           int* SIMULATION_TYPE,
                                           int* COMPUTE_AND_STORE_STRAIN,
                                           int* ATTENUATION,
                                           int* ANISOTROPY){}

void FC_FUNC_(kernel_3_a_cuda,
              KERNEL_3_A_CUDA)(long* Mesh_pointer,
                               int* size_F,
                               realw* deltatover2_F,
                               int* SIMULATION_TYPE_f,
                               realw* b_deltatover2_F,
                               int* OCEANS){}

void FC_FUNC_(kernel_3_b_cuda,
              KERNEL_3_B_CUDA)(long* Mesh_pointer,
                             int* size_F,
                             realw* deltatover2_F,
                             int* SIMULATION_TYPE_f,
             realw* b_deltatover2_F){}

void FC_FUNC_(elastic_ocean_load_cuda,
              ELASTIC_OCEAN_LOAD_CUDA)(long* Mesh_pointer_f,
                                       int* SIMULATION_TYPE){}

/* from file compute_kernels_cuda.cu */

void FC_FUNC_(compute_kernels_elastic_cuda,
              COMPUTE_KERNELS_ELASTIC_CUDA)(long* Mesh_pointer,
                                            realw* deltat_f){}

void FC_FUNC_(compute_kernels_strgth_noise_cu,
              COMPUTE_KERNELS_STRGTH_NOISE_CU)(long* Mesh_pointer,
                                               realw* h_noise_surface_movie,
                                               realw* deltat){}

void FC_FUNC_(compute_kernels_acoustic_cuda,
              COMPUTE_KERNELS_ACOUSTIC_CUDA)(
                                             long* Mesh_pointer,
                                             realw* deltat_f){}

void FC_FUNC_(compute_kernels_hess_cuda,
              COMPUTE_KERNELS_HESS_CUDA)(long* Mesh_pointer,
                                         realw* deltat_f) {}

/* from file compute_stacey_acoustic_cuda.cu */
void FC_FUNC_(compute_stacey_acoustic_cuda,
              COMPUTE_STACEY_ACOUSTIC_CUDA)(
                                    long* Mesh_pointer_f,
                                    int* phase_is_innerf,
                                    int* SIMULATION_TYPEf,
                                    int* SAVE_FORWARDf,
                                    realw* h_b_absorb_potential){}


/* from file compute_stacey_elastic_cuda.cu */

void FC_FUNC_(compute_stacey_elastic_cuda,
              COMPUTE_STACEY_ELASTIC_CUDA)(long* Mesh_pointer_f,
                                           int* phase_is_innerf,
                                           int* SIMULATION_TYPEf,
                                           int* SAVE_FORWARDf,
                                           realw* h_b_absorb_field){}

/* from file it_update_displacement_cuda.cu */

void FC_FUNC_(it_update_displacement_cuda,
              it_update_displacement_cuda)(long* Mesh_pointer_f,
                                                 int* size_F,
                                                 realw* deltat_F,
                                                 realw* deltatsqover2_F,
                                                 realw* deltatover2_F,
                                                 int* SIMULATION_TYPE,
                                                 realw* b_deltat_F,
                                                 realw* b_deltatsqover2_F,
                                                 realw* b_deltatover2_F){}

void FC_FUNC_(it_update_displacement_ac_cuda,
              IT_UPDATE_DISPLACEMENT_AC_CUDA)(long* Mesh_pointer_f,
                                                           int* size_F,
                                                           realw* deltat_F,
                                                           realw* deltatsqover2_F,
                                                           realw* deltatover2_F,
                                                           int* SIMULATION_TYPE,
                                                           realw* b_deltat_F,
                                                           realw* b_deltatsqover2_F,
                                                           realw* b_deltatover2_F){}

/* from file noise_tomography_cuda.cu */

void FC_FUNC_(fortranflush,FORTRANFLUSH)(int* rank){}
void FC_FUNC_(fortranprint,FORTRANPRINT)(int* id){}

void FC_FUNC_(fortranprintf,FORTRANPRINTF)(realw* val){}

void FC_FUNC_(fortranprintd,FORTRANPRINTD)(double* val){}

void FC_FUNC_(make_displ_rand,MAKE_DISPL_RAND)(long* Mesh_pointer_f,realw* h_displ){}

void FC_FUNC_(transfer_surface_to_host,
              TRANSFER_SURFACE_TO_HOST)(long* Mesh_pointer_f,
                                        realw* h_noise_surface_movie){}

void FC_FUNC_(noise_read_add_surface_movie_cu,
              NOISE_READ_ADD_SURFACE_MOVIE_CU)(long* Mesh_pointer_f,
                                               realw* h_noise_surface_movie,
                                               int* NOISE_TOMOGRAPHYf){}


/* from file prepare_mesh_constants_cuda.cu            */

void FC_FUNC_(pause_for_debug,PAUSE_FOR_DEBUG)(){}
void FC_FUNC_(output_free_device_memory,
              OUTPUT_FREE_DEVICE_MEMORY)(int* id){}

void FC_FUNC_(show_free_device_memory,
              SHOW_FREE_DEVICE_MEMORY)(){}

void FC_FUNC_(get_free_device_memory,
              get_FREE_DEVICE_MEMORY)(realw* free, realw* used, realw* total ){}


void FC_FUNC_(prepare_cuda_device,
              PREPARE_CUDA_DEVICE)(int* myrank_f,int* ncuda_devices){}

void FC_FUNC_(prepare_constants_device,
              PREPARE_CONSTANTS_DEVICE)(long* Mesh_pointer,
                                        int* h_NGLLX,
                                        int* NSPEC_AB, int* NGLOB_AB,
                                        realw* h_xix, realw* h_xiy, realw* h_xiz,
                                        realw* h_etax, realw* h_etay, realw* h_etaz,
                                        realw* h_gammax, realw* h_gammay, realw* h_gammaz,
                                        realw* h_kappav, realw* h_muv,
                                        int* h_ibool,
                                        int* num_interfaces_ext_mesh, int* max_nibool_interfaces_ext_mesh,
                                        int* h_nibool_interfaces_ext_mesh, int* h_ibool_interfaces_ext_mesh,
                                        realw* h_hprime_xx,realw* h_hprime_yy,realw* h_hprime_zz,
                                        realw* h_hprimewgll_xx,realw* h_hprimewgll_yy,realw* h_hprimewgll_zz,
                                        realw* h_wgllwgll_xy,realw* h_wgllwgll_xz,realw* h_wgllwgll_yz,
                                        int* ABSORBING_CONDITIONS,
                                        int* h_abs_boundary_ispec, int* h_abs_boundary_ijk,
                                        realw* h_abs_boundary_normal,
                                        realw* h_abs_boundary_jacobian2Dw,
                                        int* h_num_abs_boundary_faces,
                                        int* h_ispec_is_inner,
                                        int* NSOURCES,
                                        int* nsources_local,
                                        realw* h_sourcearrays,
                                        int* h_islice_selected_source,
                                        int* h_ispec_selected_source,
                                        int* h_number_receiver_global,
                                        int* h_ispec_selected_rec,
                                        int* nrec_f,
                                        int* nrec_local_f,
                                        int* SIMULATION_TYPE,
                                        int* USE_MESH_COLORING_GPU,
                                        int* nspec_acoustic,int* nspec_elastic)
{
  fprintf(stderr,"ERROR: GPU_MODE enabled without GPU/CUDA Support. To enable GPU support, reconfigure with --with-cuda flag.\n");
  exit(1);
}

void FC_FUNC_(prepare_sim2_or_3_const_device,
              PREPARE_SIM2_OR_3_CONST_DEVICE)(
                                              long* Mesh_pointer_f,
                                              int* islice_selected_rec,
                                              int* islice_selected_rec_size,
                                              int* nadj_rec_local,
                                              int* nrec,
                                              int* myrank){}

void FC_FUNC_(prepare_fields_acoustic_device,
              PREPARE_FIELDS_ACOUSTIC_DEVICE)(long* Mesh_pointer_f,
                                              realw* rmass_acoustic,
                                              realw* rhostore,
                                              realw* kappastore,
                                              int* num_phase_ispec_acoustic,
                                              int* phase_ispec_inner_acoustic,
                                              int* ispec_is_acoustic,
                                              int* NOISE_TOMOGRAPHY,
                                              int* num_free_surface_faces,
                                              int* free_surface_ispec,
                                              int* free_surface_ijk,
                                              int* ABSORBING_CONDITIONS,
                                              int* b_reclen_potential,
                                              realw* b_absorb_potential,
                                              int* ELASTIC_SIMULATION,
                                              int* num_coupling_ac_el_faces,
                                              int* coupling_ac_el_ispec,
                                              int* coupling_ac_el_ijk,
                                              realw* coupling_ac_el_normal,
                                              realw* coupling_ac_el_jacobian2Dw,
                                              int* num_colors_outer_acoustic,
                                              int* num_colors_inner_acoustic,
                                              int* num_elem_colors_acoustic){}

void FC_FUNC_(prepare_fields_acoustic_adj_dev,
              PREPARE_FIELDS_ACOUSTIC_ADJ_DEV)(long* Mesh_pointer_f,
                                               int* SIMULATION_TYPE,
                                               int* APPROXIMATE_HESS_KL) {}
void FC_FUNC_(prepare_fields_elastic_device,
              PREPARE_FIELDS_ELASTIC_DEVICE)(long* Mesh_pointer_f,
                                             int* size,
                                             realw* rmass,
                                             realw* rho_vp,
                                             realw* rho_vs,
                                             int* num_phase_ispec_elastic,
                                             int* phase_ispec_inner_elastic,
                                             int* ispec_is_elastic,
                                             int* ABSORBING_CONDITIONS,
                                             realw* h_b_absorb_field,
                                             int* h_b_reclen_field,
                                             int* SIMULATION_TYPE,int* SAVE_FORWARD,
                                             int* COMPUTE_AND_STORE_STRAIN,
                                             realw* epsilondev_xx,realw* epsilondev_yy,realw* epsilondev_xy,
                                             realw* epsilondev_xz,realw* epsilondev_yz,
                                             int* ATTENUATION,
                                             int* R_size,
                                             realw* R_xx,realw* R_yy,realw* R_xy,realw* R_xz,realw* R_yz,
                                             realw* one_minus_sum_beta,realw* factor_common,
                                             realw* alphaval,realw* betaval,realw* gammaval,
                                             int* OCEANS,
                                             realw* rmass_ocean_load,
                                             int* NOISE_TOMOGRAPHY,
                                             realw* free_surface_normal,
                                             int* free_surface_ispec,
                                             int* free_surface_ijk,
                                             int* num_free_surface_faces,
                                             int* ACOUSTIC_SIMULATION,
                                             int* num_colors_outer_elastic,
                                             int* num_colors_inner_elastic,
                                             int* num_elem_colors_elastic,
                                             int* ANISOTROY,
                                             realw *c11store,
                                             realw *c12store,
                                             realw *c13store,
                                             realw *c14store,
                                             realw *c15store,
                                             realw *c16store,
                                             realw *c22store,
                                             realw *c23store,
                                             realw *c24store,
                                             realw *c25store,
                                             realw *c26store,
                                             realw *c33store,
                                             realw *c34store,
                                             realw *c35store,
                                             realw *c36store,
                                             realw *c44store,
                                             realw *c45store,
                                             realw *c46store,
                                             realw *c55store,
                                             realw *c56store,
                                             realw *c66store){}

void FC_FUNC_(prepare_fields_elastic_adj_dev,
              PREPARE_FIELDS_ELASTIC_ADJ_DEV)(long* Mesh_pointer_f,
                                              int* size,
                                              int* SIMULATION_TYPE,
                                              int* COMPUTE_AND_STORE_STRAIN,
                                              realw* epsilon_trace_over_3,
                                              realw* b_epsilondev_xx,realw* b_epsilondev_yy,realw* b_epsilondev_xy,
                                              realw* b_epsilondev_xz,realw* b_epsilondev_yz,
                                              realw* b_epsilon_trace_over_3,
                                              int* ATTENUATION,
                                              int* R_size,
                                              realw* b_R_xx,realw* b_R_yy,realw* b_R_xy,realw* b_R_xz,realw* b_R_yz,
                                              realw* b_alphaval,realw* b_betaval,realw* b_gammaval,
                                              int* APPROXIMATE_HESS_KL){}


void FC_FUNC_(prepare_fields_noise_device,
              PREPARE_FIELDS_NOISE_DEVICE)(long* Mesh_pointer_f,
                                           int* NSPEC_AB, int* NGLOB_AB,
                                           int* free_surface_ispec,
                                           int* free_surface_ijk,
                                           int* num_free_surface_faces,
                                           int* SIMULATION_TYPE,
                                           int* NOISE_TOMOGRAPHY,
                                           int* NSTEP,
                                           realw* noise_sourcearray,
                                           realw* normal_x_noise,
                                           realw* normal_y_noise,
                                           realw* normal_z_noise,
                                           realw* mask_noise,
                                           realw* free_surface_jacobian2Dw){}

void FC_FUNC_(prepare_cleanup_device,
              PREPARE_CLEANUP_DEVICE)(long* Mesh_pointer_f,
                                      int* SIMULATION_TYPE,
                                      int* SAVE_FORWARD,
                                      int* ACOUSTIC_SIMULATION,
                                      int* ELASTIC_SIMULATION,
                                      int* ABSORBING_CONDITIONS,
                                      int* NOISE_TOMOGRAPHY,
                                      int* COMPUTE_AND_STORE_STRAIN,
                                      int* ATTENUATION,
                                      int* ANISOTROPY,
                                      int* OCEANS,
                                      int* APPROXIMATE_HESS_KL){}

void FC_FUNC_(prepare_fields_gravity_device,
              PREPARE_FIELDS_gravity_DEVICE)(long* Mesh_pointer_f,
                                             int* GRAVITY,
                                             realw* minus_deriv_gravity,
                                             realw* minus_g,
                                             realw* h_wgll_cube,
                                             int* ACOUSTIC_SIMULATION,
                                             realw* rhostore){}
/* from file transfer_fields_cuda.cu              */

void FC_FUNC_(transfer_fields_el_to_device,
              TRANSFER_FIELDS_EL_TO_DEVICE)(int* size, realw* displ, realw* veloc, realw* accel,long* Mesh_pointer_f){}

void FC_FUNC_(transfer_fields_el_from_device,
              TRANSFER_FIELDS_EL_FROM_DEVICE)(int* size, realw* displ, realw* veloc, realw* accel,long* Mesh_pointer_f){}

void FC_FUNC_(transfer_b_fields_to_device,
              TRANSFER_B_FIELDS_TO_DEVICE)(int* size, realw* b_displ, realw* b_veloc, realw* b_accel,
                                           long* Mesh_pointer_f){}

void FC_FUNC_(transfer_b_fields_from_device,
              TRANSFER_B_FIELDS_FROM_DEVICE)(int* size, realw* b_displ, realw* b_veloc, realw* b_accel,long* Mesh_pointer_f){}

void FC_FUNC_(transfer_accel_to_device,
              TRNASFER_ACCEL_TO_DEVICE)(int* size, realw* accel,long* Mesh_pointer_f){}

void FC_FUNC_(transfer_accel_from_device,
              TRANSFER_ACCEL_FROM_DEVICE)(int* size, realw* accel,long* Mesh_pointer_f){}
void FC_FUNC_(transfer_b_accel_from_device,
              TRNASFER_B_ACCEL_FROM_DEVICE)(int* size, realw* b_accel,long* Mesh_pointer_f){}

void FC_FUNC_(transfer_sigma_from_device,
              TRANSFER_SIGMA_FROM_DEVICE)(int* size, realw* sigma_kl,long* Mesh_pointer_f){}

void FC_FUNC_(transfer_b_displ_from_device,
              TRANSFER_B_DISPL_FROM_DEVICE)(int* size, realw* displ,long* Mesh_pointer_f){}

void FC_FUNC_(transfer_displ_from_device,
              TRANSFER_DISPL_FROM_DEVICE)(int* size, realw* displ,long* Mesh_pointer_f){}

/*
void FC_FUNC_(transfer_compute_kernel_answers_from_device,
              TRANSFER_COMPUTE_KERNEL_ANSWERS_FROM_DEVICE)(long* Mesh_pointer,
                                                           realw* rho_kl,int* size_rho,
                                                           realw* mu_kl, int* size_mu,
                                                           realw* kappa_kl, int* size_kappa){}
*/

/*
void FC_FUNC_(transfer_compute_kernel_fields_from_device,
              TRANSFER_COMPUTE_KERNEL_FIELDS_FROM_DEVICE)(long* Mesh_pointer,
                                                          realw* accel, int* size_accel,
                                                          realw* b_displ, int* size_b_displ,
                                                          realw* epsilondev_xx,
                                                          realw* epsilondev_yy,
                                                          realw* epsilondev_xy,
                                                          realw* epsilondev_xz,
                                                          realw* epsilondev_yz,
                                                          int* size_epsilondev,
                                                          realw* b_epsilondev_xx,
                                                          realw* b_epsilondev_yy,
                                                          realw* b_epsilondev_xy,
                                                          realw* b_epsilondev_xz,
                                                          realw* b_epsilondev_yz,
                                                          int* size_b_epsilondev,
                                                          realw* rho_kl,int* size_rho,
                                                          realw* mu_kl, int* size_mu,
                                                          realw* kappa_kl, int* size_kappa,
                                                          realw* epsilon_trace_over_3,
                                                          realw* b_epsilon_trace_over_3,
                                                          int* size_epsilon_trace_over_3) {}
*/

void FC_FUNC_(transfer_b_fields_att_to_device,
              TRANSFER_B_FIELDS_ATT_TO_DEVICE)(long* Mesh_pointer,
                                             realw* b_R_xx,realw* b_R_yy,realw* b_R_xy,realw* b_R_xz,realw* b_R_yz,
                                             int* size_R,
                                             realw* b_epsilondev_xx,
                                             realw* b_epsilondev_yy,
                                             realw* b_epsilondev_xy,
                                             realw* b_epsilondev_xz,
                                             realw* b_epsilondev_yz,
                                             int* size_epsilondev){}

void FC_FUNC_(transfer_fields_att_from_device,
              TRANSFER_FIELDS_ATT_FROM_DEVICE)(long* Mesh_pointer,
                                               realw* R_xx,realw* R_yy,realw* R_xy,realw* R_xz,realw* R_yz,
                                               int* size_R,
                                               realw* epsilondev_xx,
                                               realw* epsilondev_yy,
                                               realw* epsilondev_xy,
                                               realw* epsilondev_xz,
                                               realw* epsilondev_yz,
                                               int* size_epsilondev){}

void FC_FUNC_(transfer_kernels_el_to_host,
              TRANSFER_KERNELS_EL_TO_HOST)(long* Mesh_pointer,
                                                    realw* h_rho_kl,
                                                    realw* h_mu_kl,
                                                    realw* h_kappa_kl,
                                                    int* NSPEC_AB){}

void FC_FUNC_(transfer_kernels_noise_to_host,
              TRANSFER_KERNELS_NOISE_TO_HOST)(long* Mesh_pointer,
                                              realw* h_Sigma_kl,
                                              int* NSPEC_AB){}


void FC_FUNC_(transfer_fields_ac_to_device,
              TRANSFER_FIELDS_AC_TO_DEVICE)(
                                                  int* size,
                                                  realw* potential_acoustic,
                                                  realw* potential_dot_acoustic,
                                                  realw* potential_dot_dot_acoustic,
                                                  long* Mesh_pointer_f){}

void FC_FUNC_(transfer_b_fields_ac_to_device,
              TRANSFER_B_FIELDS_AC_TO_DEVICE)(
                                                    int* size,
                                                    realw* b_potential_acoustic,
                                                    realw* b_potential_dot_acoustic,
                                                    realw* b_potential_dot_dot_acoustic,
                                                    long* Mesh_pointer_f){}

void FC_FUNC_(transfer_fields_ac_from_device,TRANSFER_FIELDS_AC_FROM_DEVICE)(
                                                                             int* size,
                                                                             realw* potential_acoustic,
                                                                             realw* potential_dot_acoustic,
                                                                             realw* potential_dot_dot_acoustic,
                                                                             long* Mesh_pointer_f){}

void FC_FUNC_(transfer_b_fields_ac_from_device,
              TRANSFER_B_FIELDS_AC_FROM_DEVICE)(
                                                      int* size,
                                                      realw* b_potential_acoustic,
                                                      realw* b_potential_dot_acoustic,
                                                      realw* b_potential_dot_dot_acoustic,
                                                      long* Mesh_pointer_f){}

void FC_FUNC_(transfer_dot_dot_from_device,
              TRNASFER_DOT_DOT_FROM_DEVICE)(int* size, realw* potential_dot_dot_acoustic,long* Mesh_pointer_f){}

void FC_FUNC_(transfer_b_dot_dot_from_device,
              TRNASFER_B_DOT_DOT_FROM_DEVICE)(int* size, realw* b_potential_dot_dot_acoustic,long* Mesh_pointer_f){}

void FC_FUNC_(transfer_kernels_ac_to_host,
              TRANSFER_KERNELS_AC_TO_HOST)(long* Mesh_pointer,
                                                             realw* h_rho_ac_kl,
                                                             realw* h_kappa_ac_kl,
                                                             int* NSPEC_AB){}

void FC_FUNC_(transfer_kernels_hess_el_tohost,
              TRANSFER_KERNELS_HESS_TO_HOST)(long* Mesh_pointer,
                                             realw* h_hess_kl,
                                             int* NSPEC_AB) {}
void FC_FUNC_(transfer_kernels_hess_ac_tohost,
              TRANSFER_KERNELS_HESS_TO_HOST)(long* Mesh_pointer,
                                             realw* h_hess_ac_kl,
                                             int* NSPEC_AB) {}

/* from file write_seismograms_cuda.cu */

void FC_FUNC_(transfer_station_el_from_device,
              TRANSFER_STATION_EL_FROM_DEVICE)(realw* displ,realw* veloc,realw* accel,
                                                   realw* b_displ, realw* b_veloc, realw* b_accel,
                                                   long* Mesh_pointer_f,int* number_receiver_global,
                                                   int* ispec_selected_rec,int* ispec_selected_source,
                                                   int* ibool,int* SIMULATION_TYPEf){}

void FC_FUNC_(transfer_station_ac_from_device,
              TRANSFER_STATION_AC_FROM_DEVICE)(
                                                realw* potential_acoustic,
                                                realw* potential_dot_acoustic,
                                                realw* potential_dot_dot_acoustic,
                                                realw* b_potential_acoustic,
                                                realw* b_potential_dot_acoustic,
                                                realw* b_potential_dot_dot_acoustic,
                                                long* Mesh_pointer_f,
                                                int* number_receiver_global,
                                                int* ispec_selected_rec,
                                                int* ispec_selected_source,
                                                int* ibool,
                                                int* SIMULATION_TYPEf){}



