C $Header: /u/gcmpack/MITgcm/pkg/thsice/thsice_ad_check_lev4_dir.h,v 1.5 2010/10/16 12:29:39 heimbach Exp $
C $Name: checkpoint64a $

CADJ STORE iceMask    = tapelev4, key = ilev_4
CADJ STORE iceHeight  = tapelev4, key = ilev_4
CADJ STORE snowHeight = tapelev4, key = ilev_4
CADJ STORE snowAge = tapelev4, key = ilev_4
CADJ STORE Tsrf    = tapelev4, key = ilev_4
CADJ STORE Qice1   = tapelev4, key = ilev_4
CADJ STORE Qice2   = tapelev4, key = ilev_4
CADJ STORE hOceMxL = tapelev4, key = ilev_4
CADJ STORE ocefwfx = tapelev4, key = ilev_4
CADJ STORE oceqnet = tapelev4, key = ilev_4
CADJ STORE ocesflx = tapelev4, key = ilev_4

CADJ STORE saltflux = tapelev4, key = ilev_4

#ifdef ATMOSPHERIC_LOADING
CADJ STORE siceload = tapelev4, key = ilev_4
#endif

CADJ STORE sheating = tapelev4, key = ilev_4
CADJ STORE tice1,tice2 = tapelev4, key = ilev_4
