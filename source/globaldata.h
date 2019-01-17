//
//  globaldata.h
//  softsim
//
//  Created by András Libál on 7/19/18.
//  Copyright © 2018 András Libál. All rights reserved.
//

#ifndef globaldata_h
#define globaldata_h

#include <stdio.h>
#include "jsmn.h"

struct global_struct
    {
    double SX, SY;
    double halfSX,halfSY;
    
    int N_pinningsites;
    double *pinningsite_x;
    double *pinningsite_y;
    double *pinningsite_fx;
    double *pinningsite_fy;
    int *pinningsite_color;
    double *pinningsite_direction_x;
    double *pinningsite_direction_y;
    double *pinningsite_dx_so_far;
    double *pinningsite_dy_so_far;
    double pinningsite_R;
    double pinningsite_force;
    
    double pinning_lattice_constant;
    double pinning_driving_force;
    int pinning_direction_change;
    
    int N_particles;
    double *particle_x;
    double *particle_y;
    double *particle_fx;
    double *particle_fy;
    int *particle_color;
    double *particle_direction_x;
    double *particle_direction_y;
    double *particle_dx_so_far;
    double *particle_dy_so_far;
    double *particle_all_dx;
    double *particle_all_dy;

    double particle_driving_force;
    double partile_particle_screening_length;
    double partile_particle_screening_wavevector;
    
    int N_Verlet;
    int N_Verlet_max; //initial allocation + later, longest allocation
    int *Verletlisti;
    int *Verletlistj;
    int flag_to_rebuild_Verlet;
    
    double pinningsite_setradius;
    double pinningsite_grid_dx;
    double pinningsite_grid_dy;
    int Nx_pinningsite_grid;
    int Ny_pinningsite_grid;
    int **pinningsite_grid;
    
    
    double Verlet_cutoff_distance;
    double Verlet_cutoff_distance_squared;
    double Verlet_intershell_squared;
    
    double dt;
    
    int total_time;
    int echo_time;
    int movie_time;
    int statistics_time;
    int time;
    
    double ex[3],ey[3],ez[3];  //unit vectors for the 3 directions
    double sumforce[3];        //force summed in these 3 directions
    int N_sum[3];              //how many additions were performed

    FILE *moviefile;
    char *moviefile_name;
    FILE *statisticsfile;
    char *statisticsfile_name;

    jsmntok_t* t;
    char* JSON;
    };

struct flag_struct
    {
    short int system_size_SX_set;
    short int system_size_SY_set;

    
    };



extern struct global_struct global;
extern struct flag_struct flag;
#endif /* globaldata_h */
