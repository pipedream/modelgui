#include "mainwindow.h"

void MainWindow::readdefaultinput()
{
  // temporary function to fill run form with default values

  // model test
  defaultinput.dt         = 60.;      // time step [s]
  defaultinput.runtime    = 36000.;   // total run time [s]
  defaultinput.sinperiod  = 43200.;   // period for sinusoidal heat fluxes [s]

  // mixed-layer input
  defaultinput.sw_ml      = true;     // mixed-layer model switch
  defaultinput.h          = 200.;     // initial ABL height [m]
  defaultinput.Ps         = 101300.;  // surface pressure [Pa]
  defaultinput.ws         = 0.;       // large scale vertical velocity [m s-1]
  defaultinput.fc         = 1.e-4;    // Coriolis parameter [m s-1]

  defaultinput.theta      = 288.;     // initial mixed-layer potential temperature [K]
  defaultinput.dtheta     = 5.;       // initial temperature jump at h [K]
  defaultinput.gammatheta = 0.006;    // free atmosphere potential temperature lapse rate [K m-1]
  defaultinput.advtheta   = 0.;       // advection of heat [K s-1]
  defaultinput.beta       = 0.2;      // entrainment ratio for virtual heat [-]
  defaultinput.wtheta     = 0.1;      // surface kinematic heat flux [K m s-1]
  defaultinput.sw_wtheta  = false;    // switch for sinusoidal wtheta

  defaultinput.q          = 0.007;    // initial mixed-layer specific humidity [kg kg-1]
  defaultinput.dq         = -0.001;   // initial specific humidity jump at h [kg kg-1]
  defaultinput.gammaq     = 0.;       // free atmosphere specific humidity lapse rate [kg kg-1 m-1]
  defaultinput.advq       = 0.;       // advection of moisture [kg kg-1 s-1]
  defaultinput.wq         = 0.0001;   // surface kinematic moisture flux [kg kg-1 m s-1]
  defaultinput.sw_wq      = false;    // switch for sinusoidal wq

  defaultinput.sw_wind    = true;     // prognostic wind switch
  defaultinput.u          = 6.;       // initial mixed-layer u-wind speed [m s-1]
  defaultinput.du         = 4.;       // initial u-wind jump at h [m s-1]
  defaultinput.gammau     = 0.;       // free atmosphere u-wind speed lapse rate [s-1]
  defaultinput.advu       = 0.;       // advection of u-wind [m s-2]

  defaultinput.v          = -4.0;     // initial mixed-layer u-wind speed [m s-1]
  defaultinput.dv         = 4.0;      // initial u-wind jump at h [m s-1]
  defaultinput.gammav     = 0.;       // free atmosphere v-wind speed lapse rate [s-1]
  defaultinput.advv       = 0.;       // advection of v-wind [m s-2]

  // surface layer input
  defaultinput.sw_sl      = false;    // surface layer switch
  defaultinput.ustar      = 0.3;      // surface friction velocity [m s-1]
  defaultinput.z0m        = 0.05;     // roughness length for momentum [m]
  defaultinput.z0h        = 0.01;     // roughness length for scalars [m]
  
  // radiation parameters
  defaultinput.sw_rad     = false;    // radiation switch
  defaultinput.lat        = 51.97;    // latitude [deg]
  defaultinput.lon        = -4.93;    // longitude [deg]
  defaultinput.doy        = 268.;     // day of the year [-]
  defaultinput.tstart     = 6.8;      // time of the day [h UTC]
  defaultinput.cc         = 0.0;      // cloud cover fraction [-]
  defaultinput.Q          = 400.;      // net radiation [W m-2]
  
  // land surface parameters
  defaultinput.sw_ls      = false;    // land surface switch
  defaultinput.sw_sea     = false;    // land / sea switch
  defaultinput.wg         = 0.21;     // volumetric water content top soil layer [m3 m-3]
  defaultinput.w2         = 0.21;     // volumetric water content deeper soil layer [m3 m-3]
  defaultinput.cveg       = 0.9;      // vegetation fraction [-]
  defaultinput.Tsoil      = 285.;     // temperature top soil layer [K]
  defaultinput.T2         = 286.;     // temperature deeper soil layer [K]
  defaultinput.a          = 0.219;    // Clapp and Hornberger retention curve parameter a
  defaultinput.b          = 4.90;     // Clapp and Hornberger retention curve parameter b
  defaultinput.p          = 4.;       // Clapp and Hornberger retention curve parameter c
  defaultinput.CGsat      = 3.56e-6;  // saturated soil conductivity for heat
  
  defaultinput.wsat       = 0.472;    // saturated volumetric water content ECMWF config [-]
  defaultinput.wfc        = 0.323;    // volumetric water content field capacity [-]
  defaultinput.wwilt      = 0.171;    // volumetric water content wilting point [-]
  
  defaultinput.C1sat      = 0.132;
  defaultinput.C2ref      = 1.8;
  
  defaultinput.LAI        = 2.;       // leaf area index [-]
  defaultinput.gD         = 0.0;      // correction factor transpiration for VPD [-]
  defaultinput.rsmin      = 40.;      // minimum resistance transpiration [s m-1]
  defaultinput.rssoilmin  = 50.;      // minimun resistance soil evaporation [s m-1]
  defaultinput.alpha      = 0.25;     // surface albedo [-]
  
  defaultinput.Ts         = 290.;     // initial surface temperature [K]
  
  defaultinput.Wmax       = 0.0002;   // thickness of water layer on wet vegetation [m]
  defaultinput.Wl         = 0.0000;   // equivalent water layer depth for wet vegetation [m]
  
  defaultinput.Lambda     = 5.9;      // thermal diffusivity skin layer [-]

  //chemistry
  defaultinput.sw_chem    = false;
  defaultinput.nsc        = 20;
  defaultinput.rsize      = 0;
  defaultinput.csize      = 0;

  defaultinput.sc[0]      = 0.;
  defaultinput.dsc[0]     = 0.;
  defaultinput.gammasc[0] = 0.;
  defaultinput.wsc[0]     = 1.0;
  defaultinput.sw_wsc[0]  = false;

  defaultinput.sc[1]      = 10.;
  defaultinput.dsc[1]     = 0.;
  defaultinput.gammasc[1] = 0.;
  defaultinput.wsc[1]     = 0.;
  defaultinput.sw_wsc[1]  = false;

  defaultinput.sc[2]      = 0.;
  defaultinput.dsc[2]     = 0.;
  defaultinput.gammasc[2] = 0.;
  defaultinput.wsc[2]     = 0.;
  defaultinput.sw_wsc[2]  = false;

  defaultinput.sc[3]      = 0.;
  defaultinput.dsc[3]     = 0.;
  defaultinput.gammasc[3] = 0.;
  defaultinput.wsc[3]     = 5.e-4;
  defaultinput.sw_wsc[3]  = false;

  defaultinput.sc[4]      = 1.;
  defaultinput.dsc[4]     = -1.;
  defaultinput.gammasc[4] = 0.;
  defaultinput.wsc[4]     = 0.;
  defaultinput.sw_wsc[4]  = false;

  defaultinput.sc[5]      = 1724.;
  defaultinput.dsc[5]     = 0.;
  defaultinput.gammasc[5] = 0.;
  defaultinput.wsc[5]     = 0.;
  defaultinput.sw_wsc[5]  = false;

  defaultinput.sc[6]      = 0.;
  defaultinput.dsc[6]     = 0.;
  defaultinput.gammasc[6] = 0.;
  defaultinput.wsc[6]     = 0.;
  defaultinput.sw_wsc[6]  = false;

  defaultinput.sc[7]      = 0.;
  defaultinput.dsc[7]     = 0.;
  defaultinput.gammasc[7] = 0.;
  defaultinput.wsc[7]     = 0.;
  defaultinput.sw_wsc[7]  = false;

  defaultinput.sc[8]      = 1.3;
  defaultinput.dsc[8]     = 0.;
  defaultinput.gammasc[8] = 0.;
  defaultinput.wsc[8]     = 0.;
  defaultinput.sw_wsc[8]  = false;

  defaultinput.sc[9]      = 2.;
  defaultinput.dsc[9]     = 0.;
  defaultinput.gammasc[9] = 0.;
  defaultinput.wsc[9]     = 0.1;
  defaultinput.sw_wsc[9]  = false;

  defaultinput.sc[10]      = 0.;
  defaultinput.dsc[10]     = 0.;
  defaultinput.gammasc[10] = 0.;
  defaultinput.wsc[10]     = 0.;
  defaultinput.sw_wsc[10]  = false;

  defaultinput.sc[11]      = 0.;
  defaultinput.dsc[11]     = 0.;
  defaultinput.gammasc[11] = 0.;
  defaultinput.wsc[11]     = 0.;
  defaultinput.sw_wsc[11]  = false;

  defaultinput.sc[12]      = 0.;
  defaultinput.dsc[12]     = 0.;
  defaultinput.gammasc[12] = 0.;
  defaultinput.wsc[12]     = 0.;
  defaultinput.sw_wsc[12]  = false;

  defaultinput.sc[13]      = 124.;
  defaultinput.dsc[13]     = 0.;
  defaultinput.gammasc[13] = 0.;
  defaultinput.wsc[13]     = 0.;
  defaultinput.sw_wsc[13]  = false;

  defaultinput.sc[14]      = 0.;
  defaultinput.dsc[14]     = 0.;
  defaultinput.gammasc[14] = 0.;
  defaultinput.wsc[14]     = 0.;
  defaultinput.sw_wsc[14]  = false;

  defaultinput.sc[15]      = 0.;
  defaultinput.dsc[15]     = 0.;
  defaultinput.gammasc[15] = 0.;
  defaultinput.wsc[15]     = 0.;
  defaultinput.sw_wsc[15]  = false;

  defaultinput.sc[16]      = 0.2e9;
  defaultinput.dsc[16]     = 0.;
  defaultinput.gammasc[16] = 0.;
  defaultinput.wsc[16]     = 0.;
  defaultinput.sw_wsc[16]  = false;

  defaultinput.sc[17]      = 0.8e9;
  defaultinput.dsc[17]     = 0.;
  defaultinput.gammasc[17] = 0.;
  defaultinput.wsc[17]     = 0.;
  defaultinput.sw_wsc[17]  = false;

  defaultinput.sc[18]      = 0.;
  defaultinput.dsc[18]     = 0.;
  defaultinput.gammasc[18] = 0.;
  defaultinput.wsc[18]     = 0.;
  defaultinput.sw_wsc[18]  = false;

  defaultinput.sc[19]      = 0.;
  defaultinput.dsc[19]     = 0.;
  defaultinput.gammasc[19] = 0.;
  defaultinput.wsc[19]     = 0.;
  defaultinput.sw_wsc[19]  = false;

  // TEMP FOR CHEMISTRY
}
