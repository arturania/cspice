/*

-Header_File SpiceZpr.h ( CSPICE prototypes )

-Abstract

   Define prototypes for CSPICE user-interface-level functions.

-Disclaimer

   THIS SOFTWARE AND ANY RELATED MATERIALS WERE CREATED BY THE
   CALIFORNIA INSTITUTE OF TECHNOLOGY (CALTECH) UNDER A U.S.
   GOVERNMENT CONTRACT WITH THE NATIONAL AERONAUTICS AND SPACE
   ADMINISTRATION (NASA). THE SOFTWARE IS TECHNOLOGY AND SOFTWARE
   PUBLICLY AVAILABLE UNDER U.S. EXPORT LAWS AND IS PROVIDED "AS-IS"
   TO THE RECIPIENT WITHOUT WARRANTY OF ANY KIND, INCLUDING ANY
   WARRANTIES OF PERFORMANCE OR MERCHANTABILITY OR FITNESS FOR A
   PARTICULAR USE OR PURPOSE (AS SET FORTH IN UNITED STATES UCC
   SECTIONS 2312-2313) OR FOR ANY PURPOSE WHATSOEVER, FOR THE
   SOFTWARE AND RELATED MATERIALS, HOWEVER USED.

   IN NO EVENT SHALL CALTECH, ITS JET PROPULSION LABORATORY, OR NASA
   BE LIABLE FOR ANY DAMAGES AND/OR COSTS, INCLUDING, BUT NOT
   LIMITED TO, INCIDENTAL OR CONSEQUENTIAL DAMAGES OF ANY KIND,
   INCLUDING ECONOMIC DAMAGE OR INJURY TO PROPERTY AND LOST PROFITS,
   REGARDLESS OF WHETHER CALTECH, JPL, OR NASA BE ADVISED, HAVE
   REASON TO KNOW, OR, IN FACT, SHALL KNOW OF THE POSSIBILITY.

   RECIPIENT BEARS ALL RISK RELATING TO QUALITY AND PERFORMANCE OF
   THE SOFTWARE AND ANY RELATED MATERIALS, AND AGREES TO INDEMNIFY
   CALTECH AND NASA FOR ALL THIRD-PARTY CLAIMS RESULTING FROM THE
   ACTIONS OF RECIPIENT IN THE USE OF THE SOFTWARE.

-Required_Reading

   None.

-Literature_References

   None.

-Particulars

   This C header file contains prototypes for CSPICE user-level
   C routines.  Prototypes for the underlying f2c'd SPICELIB routines
   are contained in the separate header file SpiceZfc.  However, those
   routines are not part of the official CSPICE API.

-Author_and_Institution

   N.J. Bachman       (JPL)
   K.R. Gehringer     (JPL)
   W.L. Taber         (JPL)
   F.S. Turner        (JPL)
   E.D. Wright        (JPL)

-Version

   -CSPICE Version 12.14.0, 05-JAN-2017 (EDW) (NJB)

      Added prototypes for

         chbder_c
         cleard_c
         dasdc_c
         dashfn_c
         dasopw_c 
         dasrfr_c
         dlabbs_c 
         dlabfs_c
         dlafns_c
         dlafps_c
         dskb02_c
         dskcls_c
         dskd02_c
         dskgd_c
         dskgtl_c
         dski02_c
         dskmi2_c 
         dskn02_c
         dskobj_c
         dskopn_c
         dskp02_c
         dskrb2_c
         dsksrf_c
         dskstl_c
         dskv02_c
         dskw02_c
         dskx02_c
         dskxsi_c
         dskxv_c
         dskz02_c
         hrmint_c
         illum_pl02
         illum_plid_pl02
         latsrf_c
         lgrind_c
         limb_pl02
         limbpt_c
         llgrid_pl02
         oscltx_c
         pckcls_c
         pckopn_c
         pckw02_c
         pltar_c
         pltexp_c
         pltnp_c
         pltnrm_c
         pltvol_c
         polyds_c
         srfc2s_c
         srfcss_c
         srfnrm_c
         srfs2c_c
         srfscc_c
         subpt_pl02
         subsol_pl02
         term_pl02
         termpt_c

   -CSPICE Version 12.13.0, 03-DEC-2013 (NJB) (SCK) (EDW)

      Correction to argument order for gfsep_c.c prototype.

      Added prototypes for

         bltfrm_c
         ccifrm_c
         edterm_c
         eqncpv_c
         fovray_c
         fovtrg_c
         gfilum_c
         gfpa_c
         gfstol_c
         gfudb_c
         illumg_c
         kplfrm_c
         occult_c
         phaseq_c
         pxfrm2_c
         qcktrc_c
         trcdep_c
         trcnam_c
         spkcpo_c
         spkcpt_c
         spkcvo_c
         spkcvt_c
         spkpvn_c
         spksfs_c
         spkw20_c
         xfmsta_c
         udf_c

   -CSPICE Version 12.12.0, 19-FEB-2010 (EDW) (NJB)

      Added prototypes for

         bodc2s_c
         dafgsr_c
         dafrfr_c
         dp2hx_c
         ducrss_c
         dvcrss_c
         dvnorm_c
         gfrr_c
         gfuds_c
         hx2dp_c
         uddc_c
         uddf_c

   -CSPICE Version 12.11.0, 29-MAR-2009 (EDW) (NJB)

      Added prototypes for

         dvsep_c
         gfbail_c
         gfclrh_c
         gfdist_c
         gfevnt_c
         gffove_c
         gfinth_c
         gfocce_c
         gfoclt_c
         gfposc_c
         gfrefn_c
         gfrepf_c
         gfrepi_c
         gfrepu_c
         gfrfov_c
         gfsep_c
         gfseth_c
         gfsntc_c
         gfsstp_c
         gfstep_c
         gfsubc_c
         gftfov_c
         surfpv_c
         zzgfgeth_c
         zzgfsavh_c

   -CSPICE Version 12.10.0, 30-JAN-2008 (EDW) (NJB)

      Added prototypes for:

         ilumin_c
         pckcov_c
         pckfrm_c
         sincpt_c
         spkacs_c
         spkaps_c
         spkltc_c
         subpnt_c
         subslr_c
         wncard_c

   -CSPICE Version 12.9.0, 16-NOV-2006 (NJB)

      Bug fix:  corrected prototype for vhatg_c.

      Renamed wnfild_c and wnfltd_c arguments `small' to 'smal' for
      compatibility with MS Visual C++.

      Added prototypes for

         dafac_c
         dafdc_c
         dafec_c
         dafgda_c
         dascls_c
         dasopr_c
         kclear_c

   -CSPICE Version 12.8.0, 07-NOV-2005 (NJB)

      Added prototypes for

         bodvcd_c
         qdq2av_c
         qxq_c
         srfrec_c

   -CSPICE Version 12.7.0, 06-JAN-2004 (NJB)

      Added prototypes for

         bods2c_c
         ckcov_c
         ckobj_c
         dafopw_c
         dafrs_c
         dpgrdr_c
         drdpgr_c
         lspcn_c
         pgrrec_c
         recpgr_c
         spkcov_c
         spkobj_c

   -CSPICE Version 12.6.0, 24-FEB-2003 (NJB)

      Added prototype for

         bodvrd_c
         deltet_c
         srfxpt_c

   -CSPICE Version 12.5.0, 14-MAY-2003 (NJB)

      Removed prototype for getcml_.


   -CSPICE Version 12.4.0, 25-FEB-2003 (NJB)

      Added prototypes for

         dasac_c
         dasec_c
         et2lst_c

   -CSPICE Version 12.3.0, 03-SEP-2002 (NJB)

      Added prototypes for

         appndc_c
         appndd_c
         appndi_c
         bschoc_c
         bschoi_c
         bsrchc_c
         bsrchd_c
         bsrchi_c
         card_c
         ckw05_c
         copy_c
         cpos_c
         cposr_c
         diff_c
         elemc_c
         elemd_c
         elemi_c
         esrchc_c
         insrtc_c
         insrtd_c
         insrti_c
         inter_c
         isordv_c
         isrchc_c
         isrchd_c
         isrchi_c
         lparss_c
         lstlec_c
         lstled_c
         lstlei_c
         lstltc_c
         lstltd_c
         lstlti_c
         lx4dec_c
         lx4num_c
         lx4sgn_c
         lx4uns_c
         lxqstr_c
         ncpos_c
         ncposr_c
         ordc_c
         ordd_c
         orderc_c
         orderd_c
         orderi_c
         ordi_c
         pos_c
         posr_c
         prefix_c
         removc_c
         removd_c
         remove_c
         removi_c
         reordc_c
         reordd_c
         reordi_c
         reordl_c
         repmc_c
         repmct_c
         repmd_c
         repmf_c
         repmi_c
         repmot_c
         scard_c
         sdiff_c
         set_c
         shellc_c
         shelld_c
         shelli_c
         size_c
         spkw18_c
         ssize_c
         union_c
         valid_c
         wncomd_c
         wncond_c
         wndifd_c
         wnelmd_c
         wnexpd_c
         wnextd_c
         wnfetd_c
         wnfild_c
         wnfltd_c
         wnincd_c
         wninsd_c
         wnintd_c
         wnreld_c
         wnsumd_c
         wnunid_c
         wnvald_c
         zzsynccl_c

   -CSPICE Version 12.2.0, 23-OCT-2001 (NJB)

      Added prototypes for

         badkpv_c
         dcyldr_c
         dgeodr_c
         dlatdr_c
         drdcyl_c
         drdgeo_c
         drdlat_c
         drdsph_c
         dsphdr_c
         ekacec_c
         ekaced_c
         ekacei_c
         ekappr_c
         ekbseg_c
         ekccnt_c
         ekcii_c
         ekdelr_c
         ekinsr_c
         ekntab_c
         ekrcec_c
         ekrced_c
         ekrcei_c
         ektnam_c
         ekucec_c
         ekuced_c
         ekucei_c
         inelpl_c
         invort_c
         kxtrct_c

      Added const qualifier to input array arguments of

         conics_c
         illum_c
         pdpool_c
         prop2b_c
         q2m_c
         spkuds_c
         xposeg_c

      Added const qualifier to the return value of

         tkvrsn_c

   -CSPICE Version 12.1.0, 12-APR-2000 (FST)

      Added prototype for

         getfov_c

   -CSPICE Version 12.0.0, 22-MAR-2000 (NJB)

      Added prototypes for

         lparse_c
         lparsm_c
         spkw12_c
         spkw13_c


   -CSPICE Version 11.1.0, 17-DEC-1999 (WLT)

      Added prototype for

         dafrda_c

   -CSPICE Version 11.0.0, 07-OCT-1999 (NJB) (EDW)

      Changed ekaclc_c, ekacld_c, ekacli_c prototypes to make input
      pointers const-qualified where appropriate.

      Changed prompt_c prototype to accommodate memory leak bug fix.

      Changed ekpsel_c prototype to be consistent with other interfaces
      having string array outputs.

      Added prototypes for

         axisar_c
         brcktd_c
         brckti_c
         cgv2el_c
         cidfrm_c
         clpool_c
         cmprss_c
         cnmfrm_c
         convrt_c
         cvpool_c
         dafbbs_c
         dafbfs_c
         dafcls_c
         dafcs_c
         daffna_c
         daffpa_c
         dafgh_c
         dafgn_c
         dafgs_c
         dafopr_c
         dafps_c
         dafus_c
         diags2_c
         dtpool_c
         dvdot_c
         dvhat_c
         dvpool_c
         edlimb_c
         ekops_c
         ekopw_c
         eul2xf_c
         ftncls_c
         furnsh_c
         getelm_c
         getmsg_c
         gnpool_c
         ident_c
         illum_c
         inedpl_c
         kdata_c
         kinfo_c
         ktotal_c
         lmpool_c
         matchi_c
         matchw_c
         maxd_c
         maxi_c
         mequ_c
         mind_c
         mini_c
         moved_
         npedln_c
         npelpt_c
         nplnpt_c
         pcpool_c
         pdpool_c
         pipool_c
         pjelpl_c
         pxform_c
         rav2xf_c
         raxisa_c
         rquad_c
         saelgv_c
         spk14a_c
         spk14b_c
         spk14e_c
         spkapo_c
         spkapp_c
         spkcls_c
         spkezp_c
         spkgps_c
         spkopn_c
         spkpds_c
         spkpos_c
         spkssb_c
         spksub_c
         spkuds_c
         spkw02_c
         spkw03_c
         spkw05_c
         spkw08_c
         spkw09_c
         spkw10_c
         spkw15_c
         spkw17_c
         stpool_c
         subpt_c
         subsol_c
         swpool_c
         szpool_c
         tparse_c
         trace_c
         unload_c
         vaddg_c
         vhatg_c
         vlcomg_c
         vminug_c
         vrel_c
         vrelg_c
         vsepg_c
         vtmv_c
         vtmvg_c
         vzerog_c
         xf2eul_c
         xf2rav_c
         xposeg_c

   -CSPICE Version 10.0.0, 09-MAR-1999 (NJB)

      Added prototypes for

         frame_c
         inrypl_c
         nvc2pl_c
         nvp2pl_c
         pl2nvc_c
         pl2nvp_c
         pl2psv_c
         psv2pl_c
         sce2c_c
         vprjp_c
         vprjpi_c

      Now conditionally includes SpiceEll.h and SpicePln.h.


   -CSPICE Version 9.0.0, 25-FEB-1999 (NJB)

      Added prototypes for

         eknseg_c
         eknelt_c
         ekpsel_c
         ekssum_c

      Now conditionally includes SpiceEK.h.


   -CSPICE Version 8.0.0, 20-OCT-1998 (NJB)

      Added const qualifier to all input matrix and vector arguments.

      Added prototypes for

         det_c
         dpmax_c
         dpmax_
         dpmin_c
         dpmin_
         frinfo_c
         frmnam_c
         getfat_c
         intmax_c
         intmax_
         intmin_c
         intmin_
         invert_c
         namfrm_c
         vrotv_c
         vsclg_c


   -CSPICE Version 7.0.0, 02-APR-1998 (EDW)

      Added prototypes for

         mequg_c
         unormg_g
         vdistg_c
         vdotg_c
         vequg_c
         vnormg_c

   -CSPICE Version 6.0.0, 31-MAR-1998 (NJB)

      Added prototypes for

         ekaclc_c
         ekacld_c
         ekacli_c
         ekcls_c
         ekffld_c
         ekfind_c
         ekgc_c
         ekgd_c
         ekgi_c
         ekifld_c
         eklef_c
         ekopr_c
         ekopn_c
         ekuef_c

   -CSPICE Version 5.0.1, 05-MAR-1998 (EDW)

      Remove some non printing characters.

   -CSPICE Version 5.0.0, 03-MAR-1998 (NJB)

      Added prototypes for

         etcal_c
         ltime_c
         stelab_c
         tpictr_c
         twovec_c
         vsubg_c

   -CSPICE Version 4.0.0, 11-FEB-1998 (EDW)

      Added prototypes for

         timdef_c
         tsetyr_c


   -CSPICE Version 3.0.0, 02-FEB-1998 (NJB)

      Added prototypes for

         pckuof_c
         tipbod_c

      Type SpiceVoid was replaced with void.

   -CSPICE Version 2.0.0, 06-JAN-1998 (NJB)

      Changed all input-only character pointers to type ConstSpiceChar.

   -CSPICE Version 1.0.0, 25-OCT-1997 (NJB) (KRG) (EDW)

-Index_Entries

   prototypes of CSPICE functions

*/


/*
Include Files:
*/


#ifndef  HAVE_SPICEDEFS_H
#include "SpiceZdf.h"
#endif

#ifndef  HAVE_SPICE_CELLS_H
#include "SpiceCel.h"
#endif

#ifndef  HAVE_SPICE_DLA_H
#include "SpiceDLA.h"
#endif

#ifndef  HAVE_SPICE_DSK_H
#include "SpiceDSK.h"
#endif

#ifndef  HAVE_SPICE_EK_H
#include "SpiceEK.h"
#endif

#ifndef  HAVE_SPICE_PLANES_H
#include "SpicePln.h"
#endif

#ifndef  HAVE_SPICE_ELLIPSES_H
#include "SpiceEll.h"
#endif 

#ifndef  HAVE_SPICE_OSC_H
#include "SpiceOsc.h"
#endif

#ifndef  HAVE_SPICE_SPK_H
#include "SpiceSPK.h"
#endif

#ifndef HAVE_SPICE_CK_H
#include "SpiceCK.h"
#endif

#ifndef HAVE_SPICEWRAPPERS_H
#define HAVE_SPICEWRAPPERS_H




/*
   Function prototypes for CSPICE functions are listed below.
   Each prototype is accompanied by a function abstract and brief I/O
   description.

   See the headers of the C wrappers for detailed descriptions of the
   routines' interfaces.

   The list below should be maintained in alphabetical order.
*/

extern void          appndc_c ( ConstSpiceChar     * item,
                                SpiceCell          * cell  );


extern void          appndd_c ( SpiceDouble          item,
                                SpiceCell          * cell  );


extern void          appndi_c ( SpiceInt             item,
                                SpiceCell          * cell  );


extern void          axisar_c ( ConstSpiceDouble     axis   [3],
                                SpiceDouble          angle,
                                SpiceDouble          r      [3][3]  );


extern SpiceBoolean  badkpv_c ( ConstSpiceChar      *caller,
                                ConstSpiceChar      *name,
                                ConstSpiceChar      *comp,
                                SpiceInt             size,
                                SpiceInt             divby,
                                SpiceChar            type   );


extern void          bltfrm_c ( SpiceInt             frmcls,
                                SpiceCell          * idset  );


extern void          bodc2n_c ( SpiceInt             code,
                                SpiceInt             namelen,
                                SpiceChar          * name,
                                SpiceBoolean       * found   );


extern void          bodc2s_c ( SpiceInt             code,
                                SpiceInt             lenout,
                                SpiceChar          * name );

extern void          boddef_c ( ConstSpiceChar     * name,
                                SpiceInt             code );


extern SpiceBoolean  bodfnd_c ( SpiceInt             body,
                                ConstSpiceChar     * item );


extern void          bodn2c_c ( ConstSpiceChar     * name,
                                SpiceInt           * code,
                                SpiceBoolean       * found );


extern void          bods2c_c ( ConstSpiceChar     * name,
                                SpiceInt           * code,
                                SpiceBoolean       * found );


extern void          bodvar_c ( SpiceInt             body,
                                ConstSpiceChar     * item,
                                SpiceInt           * dim ,
                                SpiceDouble        * values );


extern void          bodvcd_c ( SpiceInt             body,
                                ConstSpiceChar     * item,
                                SpiceInt             maxn,
                                SpiceInt           * dim ,
                                SpiceDouble        * values );


extern void          bodvrd_c ( ConstSpiceChar     * body,
                                ConstSpiceChar     * item,
                                SpiceInt             maxn,
                                SpiceInt           * dim ,
                                SpiceDouble        * values );


extern SpiceDouble   brcktd_c ( SpiceDouble          number,
                                SpiceDouble          end1,
                                SpiceDouble          end2    );


extern SpiceInt      brckti_c ( SpiceInt             number,
                                SpiceInt             end1,
                                SpiceInt             end2    );


extern SpiceInt      bschoc_c ( ConstSpiceChar     * value,
                                SpiceInt             ndim,
                                SpiceInt             lenvals,
                                const void         * array,
                                ConstSpiceInt      * order  );


extern SpiceInt      bschoi_c ( SpiceInt             value,
                                SpiceInt             ndim,
                                ConstSpiceInt      * array,
                                ConstSpiceInt      * order  );


extern SpiceInt      bsrchc_c ( ConstSpiceChar     * value,
                                SpiceInt             ndim,
                                SpiceInt             lenvals,
                                const void         * array   );


extern SpiceInt      bsrchd_c ( SpiceDouble          value,
                                SpiceInt             ndim,
                                ConstSpiceDouble   * array );


extern SpiceInt      bsrchi_c ( SpiceInt             value,
                                SpiceInt             ndim,
                                ConstSpiceInt      * array );


extern SpiceDouble   b1900_c  ( void );


extern SpiceDouble   b1950_c  ( void );


extern SpiceInt      card_c   ( SpiceCell         * cell );


extern void          ccifrm_c ( SpiceInt            frclss,
                                SpiceInt            clssid,
                                SpiceInt            lenout,
                                SpiceInt          * frcode,
                                SpiceChar         * frname,
                                SpiceInt          * center,
                                SpiceBoolean      * found   );


extern void          cgv2el_c ( ConstSpiceDouble    center[3],
                                ConstSpiceDouble    vec1  [3],
                                ConstSpiceDouble    vec2  [3],
                                SpiceEllipse      * ellipse   );


extern void          chbder_c ( ConstSpiceDouble * cp,
                                SpiceInt           degp,
                                SpiceDouble        x2s[2],
                                SpiceDouble        x,
                                SpiceInt           nderiv,
                                SpiceDouble      * partdp,
                                SpiceDouble      * dpdxs );


extern void          chkin_c  ( ConstSpiceChar    * module );


extern void          chkout_c ( ConstSpiceChar    * module );


extern void          cidfrm_c ( SpiceInt            cent,
                                SpiceInt            lenout,
                                SpiceInt          * frcode,
                                SpiceChar         * frname,
                                SpiceBoolean      * found  );


extern void          ckcls_c  ( SpiceInt            handle );


extern void          ckcov_c  ( ConstSpiceChar    * ck,
                                SpiceInt            idcode,
                                SpiceBoolean        needav,
                                ConstSpiceChar    * level,
                                SpiceDouble         tol,
                                ConstSpiceChar    * timsys,
                                SpiceCell         * cover   );


extern void          ckobj_c  ( ConstSpiceChar    * ck,
                                SpiceCell         * ids );


extern void          ckgp_c   ( SpiceInt            inst,
                                SpiceDouble         sclkdp,
                                SpiceDouble         tol,
                                ConstSpiceChar    * ref,
                                SpiceDouble         cmat[3][3],
                                SpiceDouble       * clkout,
                                SpiceBoolean      * found      );


extern void          ckgpav_c ( SpiceInt            inst,
                                SpiceDouble         sclkdp,
                                SpiceDouble         tol,
                                ConstSpiceChar    * ref,
                                SpiceDouble         cmat[3][3],
                                SpiceDouble         av[3],
                                SpiceDouble       * clkout,
                                SpiceBoolean      * found      );


extern void          cklpf_c  ( ConstSpiceChar    * fname,
                                SpiceInt          * handle    );


extern void          ckopn_c  ( ConstSpiceChar    * name,
                                ConstSpiceChar    * ifname,
                                SpiceInt            ncomch,
                                SpiceInt          * handle  );


extern void          ckupf_c  ( SpiceInt            handle );


extern void          ckw01_c  ( SpiceInt            handle,
                                SpiceDouble         begtime,
                                SpiceDouble         endtime,
                                SpiceInt            inst,
                                ConstSpiceChar    * ref,
                                SpiceBoolean        avflag,
                                ConstSpiceChar    * segid,
                                SpiceInt            nrec,
                                ConstSpiceDouble    sclkdp [],
                                ConstSpiceDouble    quats  [][4],
                                ConstSpiceDouble    avvs   [][3]  );


extern void          ckw02_c  ( SpiceInt            handle,
                                SpiceDouble         begtim,
                                SpiceDouble         endtim,
                                SpiceInt            inst,
                                ConstSpiceChar    * ref,
                                ConstSpiceChar    * segid,
                                SpiceInt            nrec,
                                ConstSpiceDouble    start  [],
                                ConstSpiceDouble    stop   [],
                                ConstSpiceDouble    quats  [][4],
                                ConstSpiceDouble    avvs   [][3],
                                ConstSpiceDouble    rates  []    );


extern void          ckw03_c  ( SpiceInt            handle,
                                SpiceDouble         begtim,
                                SpiceDouble         endtim,
                                SpiceInt            inst,
                                ConstSpiceChar    * ref,
                                SpiceBoolean        avflag,
                                ConstSpiceChar    * segid,
                                SpiceInt            nrec,
                                ConstSpiceDouble    sclkdp [],
                                ConstSpiceDouble    quats  [][4],
                                ConstSpiceDouble    avvs   [][3],
                                SpiceInt            nints,
                                ConstSpiceDouble    starts []     );


extern void          ckw05_c  ( SpiceInt             handle,
                                SpiceCK05Subtype     subtyp,
                                SpiceInt             degree,
                                SpiceDouble          begtim,
                                SpiceDouble          endtim,
                                SpiceInt             inst,
                                ConstSpiceChar     * ref,
                                SpiceBoolean         avflag,
                                ConstSpiceChar     * segid,
                                SpiceInt             n,
                                ConstSpiceDouble     sclkdp[],
                                const void         * packets,
                                SpiceDouble          rate,
                                SpiceInt             nints,
                                ConstSpiceDouble     starts[]     );


extern void          cleard_c ( SpiceInt             ndim,
                                SpiceDouble        * array );


extern SpiceDouble   clight_c ( void );


extern void          clpool_c ( void );


extern void          cmprss_c ( SpiceChar           delim,
                                SpiceInt            n,
                                ConstSpiceChar    * input,
                                SpiceInt            lenout,
                                SpiceChar         * output  );


extern void          cnmfrm_c ( ConstSpiceChar    * cname,
                                SpiceInt            lenout,
                                SpiceInt          * frcode,
                                SpiceChar         * frname,
                                SpiceBoolean      * found   );


extern void          conics_c ( ConstSpiceDouble    elts[8],
                                SpiceDouble         et,
                                SpiceDouble         state[6] );


extern void          convrt_c ( SpiceDouble         x,
                                ConstSpiceChar    * in,
                                ConstSpiceChar    * out,
                                SpiceDouble       * y    );


extern void          copy_c   ( SpiceCell         * a,
                                SpiceCell         * b     );



extern SpiceInt      cpos_c   ( ConstSpiceChar    * str,
                                ConstSpiceChar    * chars,
                                SpiceInt            start  );


extern SpiceInt      cposr_c  ( ConstSpiceChar    * str,
                                ConstSpiceChar    * chars,
                                SpiceInt            start  );


extern void          cvpool_c ( ConstSpiceChar    * agent,
                                SpiceBoolean      * update );


extern void          cyllat_c ( SpiceDouble         r,
                                SpiceDouble         lonc,
                                SpiceDouble         z,
                                SpiceDouble       * radius,
                                SpiceDouble       * lon,
                                SpiceDouble       * lat );


extern void          cylrec_c ( SpiceDouble         r,
                                SpiceDouble         lon,
                                SpiceDouble         z,
                                SpiceDouble         rectan[3] );


extern void          cylsph_c ( SpiceDouble         r,
                                SpiceDouble         lonc,
                                SpiceDouble         z,
                                SpiceDouble       * radius,
                                SpiceDouble       * colat,
                                SpiceDouble       * lon );


extern void          dafac_c  ( SpiceInt            handle,
                                SpiceInt            n,
                                SpiceInt            lenvals,
                                const void        * buffer  );


extern void          dafbbs_c ( SpiceInt            handle );


extern void          dafbfs_c ( SpiceInt            handle );


extern void          dafcls_c ( SpiceInt            handle );


extern void          dafcs_c  ( SpiceInt            handle );


extern void          dafdc_c  ( SpiceInt            handle );


extern void          dafec_c  ( SpiceInt            handle,
                                SpiceInt            bufsiz,
                                SpiceInt            lenout,
                                SpiceInt          * n,
                                void              * buffer,
                                SpiceBoolean      * done    );


extern void          daffna_c ( SpiceBoolean      * found );


extern void          daffpa_c ( SpiceBoolean      * found );


extern void          dafgda_c ( SpiceInt            handle,
                                SpiceInt            begin,
                                SpiceInt            end,
                                SpiceDouble       * data );


extern void          dafgh_c  ( SpiceInt          * handle );


extern void          dafgn_c  ( SpiceInt            lenout,
                                SpiceChar         * name   );


extern void          dafgs_c  ( SpiceDouble         sum[] );


extern void          dafgsr_c ( SpiceInt            handle,
                                SpiceInt            recno,
                                SpiceInt            begin,
                                SpiceInt            end,
                                SpiceDouble       * data,
                                SpiceBoolean      * found  );


extern void          dafopr_c ( ConstSpiceChar    * fname,
                                SpiceInt          * handle  );


extern void          dafopw_c ( ConstSpiceChar    * fname,
                                SpiceInt          * handle );


extern void          dafps_c  ( SpiceInt            nd,
                                SpiceInt            ni,
                                ConstSpiceDouble    dc  [],
                                ConstSpiceInt       ic  [],
                                SpiceDouble         sum []  );


extern void          dafrda_c ( SpiceInt            handle,
                                SpiceInt            begin,
                                SpiceInt            end,
                                SpiceDouble       * data );



extern void          dafrfr_c ( SpiceInt            handle,
                                SpiceInt            lenout,
                                SpiceInt          * nd,
                                SpiceInt          * ni,
                                SpiceChar         * ifname,
                                SpiceInt          * fward,
                                SpiceInt          * bward,
                                SpiceInt          * free    );



extern void          dafrs_c  ( ConstSpiceDouble  * sum );


extern void          dafus_c  ( ConstSpiceDouble    sum [],
                                SpiceInt            nd,
                                SpiceInt            ni,
                                SpiceDouble         dc  [],
                                SpiceInt            ic  []  );


extern void          dasac_c  ( SpiceInt            handle,
                                SpiceInt            n,
                                SpiceInt            buflen,
                                const void        * buffer  );


extern void          dascls_c ( SpiceInt            handle );


extern void          dasdc_c  ( SpiceInt            handle );


extern void          dasec_c  ( SpiceInt            handle,
                                SpiceInt            bufsiz,
                                SpiceInt            buflen,
                                SpiceInt          * n,
                                void              * buffer,
                                SpiceBoolean      * done   );


extern void          dashfn_c ( SpiceInt            handle,
                                SpiceInt            namlen,
                                SpiceChar         * fname  );


extern void          dasopr_c ( ConstSpiceChar    * fname,
                                SpiceInt          * handle  );


extern void          dasopw_c ( ConstSpiceChar    * fname,
                                SpiceInt          * handle  );



extern void          dasrfr_c ( SpiceInt            handle,
                                SpiceInt            idwlen,
                                SpiceInt            ifnlen,
                                SpiceChar         * idword,
                                SpiceChar         * ifname,
                                SpiceInt          * nresvr,
                                SpiceInt          * nresvc,
                                SpiceInt          * ncomr,
                                SpiceInt          * ncomc   );


extern void          dcyldr_c ( SpiceDouble         x,
                                SpiceDouble         y,
                                SpiceDouble         z,
                                SpiceDouble         jacobi[3][3] );


extern void          deltet_c ( SpiceDouble         epoch,
                                ConstSpiceChar    * eptype,
                                SpiceDouble       * delta   );


extern SpiceDouble   det_c    ( ConstSpiceDouble    m1[3][3] );


extern void          diags2_c ( ConstSpiceDouble    symmat [2][2],
                                SpiceDouble         diag   [2][2],
                                SpiceDouble         rotate [2][2]  );


extern void          diff_c   ( SpiceCell         * a,
                                SpiceCell         * b,
                                SpiceCell         * c  );


extern void          dgeodr_c ( SpiceDouble         x,
                                SpiceDouble         y,
                                SpiceDouble         z,
                                SpiceDouble         re,
                                SpiceDouble         f,
                                SpiceDouble         jacobi[3][3] );


extern void          dlabbs_c ( SpiceInt            handle,
                                SpiceDLADescr     * descr,
                                SpiceBoolean      * found  );


extern void          dlabfs_c ( SpiceInt          handle,
                                SpiceDLADescr   * descr,
                                SpiceBoolean    * found  );


extern void          dlafns_c ( SpiceInt               handle,
                                ConstSpiceDLADescr   * descr,
                                SpiceDLADescr        * nxtdsc,
                                SpiceBoolean         * found    );


extern void          dlafps_c ( SpiceInt               handle,
                                ConstSpiceDLADescr   * descr,
                                SpiceDLADescr        * prvdsc,
                                SpiceBoolean         * found   );


extern void          dlatdr_c ( SpiceDouble         x,
                                SpiceDouble         y,
                                SpiceDouble         z,
                                SpiceDouble         jacobi[3][3] );


extern void          dp2hx_c  ( SpiceDouble   number,
                                SpiceInt      lenout,
                                SpiceChar   * string,
                                SpiceInt    * length  );


extern void          dpgrdr_c ( ConstSpiceChar    * body,
                                SpiceDouble         x,
                                SpiceDouble         y,
                                SpiceDouble         z,
                                SpiceDouble         re,
                                SpiceDouble         f,
                                SpiceDouble         jacobi[3][3] );


extern SpiceDouble   dpmax_c  ( void );


extern SpiceDouble   dpmax_   ( void );


extern SpiceDouble   dpmin_c  ( void );


extern SpiceDouble   dpmin_   ( void );


extern SpiceDouble   dpr_c    ( void );


extern void          drdcyl_c ( SpiceDouble         r,
                                SpiceDouble         lon,
                                SpiceDouble         z,
                                SpiceDouble         jacobi[3][3] );


extern void          drdgeo_c ( SpiceDouble         lon,
                                SpiceDouble         lat,
                                SpiceDouble         alt,
                                SpiceDouble         re,
                                SpiceDouble         f,
                                SpiceDouble         jacobi[3][3] );


extern void          drdlat_c ( SpiceDouble         r,
                                SpiceDouble         lon,
                                SpiceDouble         lat,
                                SpiceDouble         jacobi[3][3] );


extern void          drdpgr_c ( ConstSpiceChar    * body,
                                SpiceDouble         lon,
                                SpiceDouble         lat,
                                SpiceDouble         alt,
                                SpiceDouble         re,
                                SpiceDouble         f,
                                SpiceDouble         jacobi[3][3] );


extern void          drdsph_c ( SpiceDouble         r,
                                SpiceDouble         colat,
                                SpiceDouble         lon,
                                SpiceDouble         jacobi[3][3] );


extern void          dskb02_c ( SpiceInt               handle,
                                ConstSpiceDLADescr   * dladsc,
                                SpiceInt             * nv,
                                SpiceInt             * np,
                                SpiceInt             * nvxtot,
                                SpiceDouble            vtxbds  [3][2],
                                SpiceDouble          * voxsiz,
                                SpiceDouble            voxori  [3],
                                SpiceInt               vgrext  [3],
                                SpiceInt             * cgscal,
                                SpiceInt             * vtxnpl,
                                SpiceInt             * voxnpt,
                                SpiceInt             * voxnpl          );


extern void          dskcls_c ( SpiceInt               handle,
                                SpiceBoolean           optmiz );


extern void          dskd02_c ( SpiceInt               handle,
                                ConstSpiceDLADescr   * dladsc,
                                SpiceInt               item,
                                SpiceInt               start,
                                SpiceInt               room,
                                SpiceInt             * n,
                                SpiceDouble          * values );


extern void          dskgd_c  ( SpiceInt               handle,
                                ConstSpiceDLADescr   * dladsc,
                                SpiceDSKDescr        * dskdsc );


extern void          dskgtl_c ( SpiceInt               keywrd,
                                SpiceDouble          * dpval  );


extern void          dski02_c ( SpiceInt              handle,
                                ConstSpiceDLADescr  * dladsc,
                                SpiceInt              item,
                                SpiceInt              start,
                                SpiceInt              room,
                                SpiceInt            * n,
                                SpiceInt            * values   );

extern void          dskobj_c ( ConstSpiceChar      * dsk,
                                SpiceCell           * bodids );

extern void          dskopn_c ( ConstSpiceChar      * fname,
                                ConstSpiceChar      * ifname,
                                SpiceInt              ncomch,
                                SpiceInt           *  handle );


extern void          dskn02_c ( SpiceInt              handle,
                                ConstSpiceDLADescr  * dladsc,
                                SpiceInt              plid,
                                SpiceDouble           normal[3] );


extern void          dskmi2_c ( SpiceInt              nv,
                                ConstSpiceDouble      vrtces[][3],
                                SpiceInt              np,
                                ConstSpiceInt         plates[][3],
                                SpiceDouble           finscl,
                                SpiceInt              corscl,
                                SpiceInt              worksz,
                                SpiceInt              voxpsz,
                                SpiceInt              voxlsz,
                                SpiceBoolean          makvtl,
                                SpiceInt              spxisz,
                                SpiceInt              work   [][2],
                                SpiceDouble           spaixd [],
                                SpiceInt              spaixi []    );

                    
extern void          dskp02_c ( SpiceInt              handle,
                                ConstSpiceDLADescr  * dladsc,
                                SpiceInt              start,
                                SpiceInt              room,
                                SpiceInt            * n,
                                SpiceInt              plates[][3] );


extern void          dskrb2_c ( SpiceInt              nv,
                                ConstSpiceDouble      vrtces[][3],
                                SpiceInt              np,
                                ConstSpiceInt         plates[][3],
                                SpiceInt              corsys,
                                ConstSpiceDouble      corpar[],
                                SpiceDouble         * mncor3,
                                SpiceDouble         * mxcor3       );


extern void          dsksrf_c ( ConstSpiceChar      * dsk,
                                SpiceInt              bodyid,
                                SpiceCell           * srfids ); 


extern void          dskstl_c ( SpiceInt               keywrd,
                                SpiceDouble            dpval  );


extern void          dskv02_c ( SpiceInt               handle,
                                ConstSpiceDLADescr   * dladsc,
                                SpiceInt               start,
                                SpiceInt               room,
                                SpiceInt             * n,
                                SpiceDouble            vrtces[][3] );


extern void          dskw02_c ( SpiceInt               handle,
                                SpiceInt               center,
                                SpiceInt               surfce,
                                SpiceInt               dclass,
                                ConstSpiceChar       * frame,
                                SpiceInt               corsys,
                                ConstSpiceDouble       corpar[],
                                SpiceDouble            mncor1,
                                SpiceDouble            mxcor1,
                                SpiceDouble            mncor2,
                                SpiceDouble            mxcor2,
                                SpiceDouble            mncor3,
                                SpiceDouble            mxcor3,
                                SpiceDouble            first,
                                SpiceDouble            last,
                                SpiceInt               nv,
                                ConstSpiceDouble       vrtces[][3],
                                SpiceInt               np,
                                ConstSpiceInt          plates[][3],
                                ConstSpiceDouble       spaixd[],
                                ConstSpiceInt          spaixi[]    );


extern void          dskx02_c ( SpiceInt               handle,
                                ConstSpiceDLADescr   * dladsc,
                                ConstSpiceDouble       vertex  [3],
                                ConstSpiceDouble       raydir  [3],
                                SpiceInt             * plid,
                                SpiceDouble            xpt     [3],
                                SpiceBoolean         * found        );


extern void          dskxsi_c ( SpiceBoolean           pri,
                                ConstSpiceChar       * target,
                                SpiceInt               nsurf,
                                ConstSpiceInt          srflst [],
                                SpiceDouble            et,
                                ConstSpiceChar       * fixref,
                                ConstSpiceDouble       vertex [3],
                                ConstSpiceDouble       raydir [3],
                                SpiceInt               maxd,
                                SpiceInt               maxi,
                                SpiceDouble            xpt    [3],
                                SpiceInt             * handle,
                                SpiceDLADescr        * dladsc,
                                SpiceDSKDescr        * dskdsc,
                                SpiceDouble            dc     [],
                                SpiceInt               ic     [],
                                SpiceBoolean         * found      );


extern void           dskxv_c ( SpiceBoolean           pri,
                                ConstSpiceChar       * target,
                                SpiceInt               nsurf,
                                ConstSpiceInt          srflst[],
                                SpiceDouble            et,
                                ConstSpiceChar       * fixref,
                                SpiceInt               nrays,
                                ConstSpiceDouble       vtxarr[][3],
                                ConstSpiceDouble       dirarr[][3],
                                SpiceDouble            xptarr[][3],
                                SpiceBoolean           fndarr[]     );


extern void          dskz02_c ( SpiceInt               handle,
                                ConstSpiceDLADescr   * dladsc,
                                SpiceInt             * nv,
                                SpiceInt             * np     );


extern void          dsphdr_c ( SpiceDouble         x,
                                SpiceDouble         y,
                                SpiceDouble         z,
                                SpiceDouble         jacobi[3][3] );


extern void          dtpool_c ( ConstSpiceChar      * name,
                                SpiceBoolean        * found,
                                SpiceInt            * n,
                                SpiceChar             type [1] );


extern void          ducrss_c ( ConstSpiceDouble      s1  [6],
                                ConstSpiceDouble      s2  [6],
                                SpiceDouble           sout[6] );


extern void          dvcrss_c ( ConstSpiceDouble      s1  [6],
                                ConstSpiceDouble      s2  [6],
                                SpiceDouble           sout[6] );


extern SpiceDouble   dvdot_c  ( ConstSpiceDouble      s1 [6],
                                ConstSpiceDouble      s2 [6] );


extern void          dvhat_c  ( ConstSpiceDouble      s1  [6],
                                SpiceDouble           sout[6] );

extern SpiceDouble   dvnorm_c ( ConstSpiceDouble      state[6] );

extern void          dvpool_c ( ConstSpiceChar      * name );


extern SpiceDouble   dvsep_c  ( ConstSpiceDouble    * s1,
                                ConstSpiceDouble    * s2 );


extern void          edlimb_c ( SpiceDouble           a,
                                SpiceDouble           b,
                                SpiceDouble           c,
                                ConstSpiceDouble      viewpt[3],
                                SpiceEllipse        * limb      );


extern void          edterm_c ( ConstSpiceChar      * trmtyp,
                                ConstSpiceChar      * source,
                                ConstSpiceChar      * target,
                                SpiceDouble           et,
                                ConstSpiceChar      * fixfrm,
                                ConstSpiceChar      * abcorr,
                                ConstSpiceChar      * obsrvr,
                                SpiceInt              npts,
                                SpiceDouble         * trgepc,
                                SpiceDouble           obspos  [3],
                                SpiceDouble           termpts [ ][3] );


extern void          ekacec_c ( SpiceInt              handle,
                                SpiceInt              segno,
                                SpiceInt              recno,
                                ConstSpiceChar      * column,
                                SpiceInt              nvals,
                                SpiceInt              vallen,
                                const void          * cvals,
                                SpiceBoolean          isnull );


extern void          ekaced_c ( SpiceInt              handle,
                                SpiceInt              segno,
                                SpiceInt              recno,
                                ConstSpiceChar      * column,
                                SpiceInt              nvals,
                                ConstSpiceDouble    * dvals,
                                SpiceBoolean          isnull );


extern void          ekacei_c ( SpiceInt              handle,
                                SpiceInt              segno,
                                SpiceInt              recno,
                                ConstSpiceChar      * column,
                                SpiceInt              nvals,
                                ConstSpiceInt       * ivals,
                                SpiceBoolean          isnull );


extern void          ekaclc_c ( SpiceInt              handle,
                                SpiceInt              segno,
                                ConstSpiceChar      * column,
                                SpiceInt              vallen,
                                const void          * cvals,
                                ConstSpiceInt       * entszs,
                                ConstSpiceBoolean   * nlflgs,
                                ConstSpiceInt       * rcptrs,
                                SpiceInt            * wkindx  );


extern void          ekacld_c ( SpiceInt              handle,
                                SpiceInt              segno,
                                ConstSpiceChar      * column,
                                ConstSpiceDouble    * dvals,
                                ConstSpiceInt       * entszs,
                                ConstSpiceBoolean   * nlflgs,
                                ConstSpiceInt       * rcptrs,
                                SpiceInt            * wkindx  );


extern void          ekacli_c ( SpiceInt              handle,
                                SpiceInt              segno,
                                ConstSpiceChar      * column,
                                ConstSpiceInt       * ivals,
                                ConstSpiceInt       * entszs,
                                ConstSpiceBoolean   * nlflgs,
                                ConstSpiceInt       * rcptrs,
                                SpiceInt            * wkindx  );


extern void          ekappr_c ( SpiceInt              handle,
                                SpiceInt              segno,
                                SpiceInt            * recno  );


extern void          ekbseg_c ( SpiceInt              handle,
                                ConstSpiceChar      * tabnam,
                                SpiceInt              ncols,
                                SpiceInt              cnmlen,
                                const void          * cnames,
                                SpiceInt              declen,
                                const void          * decls,
                                SpiceInt            * segno  );


extern void          ekccnt_c ( ConstSpiceChar      * table,
                                SpiceInt            * ccount );


extern void          ekcii_c  ( ConstSpiceChar      * table,
                                SpiceInt              cindex,
                                SpiceInt              lenout,
                                SpiceChar           * column,
                                SpiceEKAttDsc       * attdsc  );


extern void          ekcls_c  ( SpiceInt              handle );


extern void          ekdelr_c ( SpiceInt              handle,
                                SpiceInt              segno,
                                SpiceInt              recno );


extern void          ekffld_c ( SpiceInt            handle,
                                SpiceInt            segno,
                                SpiceInt          * rcptrs );


extern void          ekfind_c ( ConstSpiceChar    * query,
                                SpiceInt            lenout,
                                SpiceInt          * nmrows,
                                SpiceBoolean      * error,
                                SpiceChar         * errmsg );


extern void          ekgc_c   ( SpiceInt            selidx,
                                SpiceInt            row,
                                SpiceInt            elment,
                                SpiceInt            lenout,
                                SpiceChar         * cdata,
                                SpiceBoolean      * null,
                                SpiceBoolean      * found  );


extern void          ekgd_c   ( SpiceInt            selidx,
                                SpiceInt            row,
                                SpiceInt            elment,
                                SpiceDouble       * ddata,
                                SpiceBoolean      * null,
                                SpiceBoolean      * found  );


extern void          ekgi_c   ( SpiceInt            selidx,
                                SpiceInt            row,
                                SpiceInt            elment,
                                SpiceInt          * idata,
                                SpiceBoolean      * null,
                                SpiceBoolean      * found  );


extern void          ekifld_c ( SpiceInt            handle,
                                ConstSpiceChar    * tabnam,
                                SpiceInt            ncols,
                                SpiceInt            nrows,
                                SpiceInt            cnmlen,
                                const void        * cnames,
                                SpiceInt            declen,
                                const void        * decls,
                                SpiceInt          * segno,
                                SpiceInt          * rcptrs );


extern void          ekinsr_c ( SpiceInt            handle,
                                SpiceInt            segno,
                                SpiceInt            recno );


extern void          eklef_c  ( ConstSpiceChar    * fname,
                                SpiceInt          * handle );


extern SpiceInt      eknelt_c ( SpiceInt            selidx,
                                SpiceInt            row     );


extern SpiceInt      eknseg_c ( SpiceInt            handle );


extern void          ekntab_c ( SpiceInt            * n );


extern void          ekopn_c  ( ConstSpiceChar    * fname,
                                ConstSpiceChar    * ifname,
                                SpiceInt            ncomch,
                                SpiceInt          * handle );


extern void          ekopr_c  ( ConstSpiceChar    * fname,
                                SpiceInt          * handle );


extern void          ekops_c  ( SpiceInt          * handle );


extern void          ekopw_c  ( ConstSpiceChar    * fname,
                                SpiceInt          * handle );


extern void          ekpsel_c ( ConstSpiceChar    * query,
                                SpiceInt            msglen,
                                SpiceInt            tablen,
                                SpiceInt            collen,
                                SpiceInt          * n,
                                SpiceInt          * xbegs,
                                SpiceInt          * xends,
                                SpiceEKDataType   * xtypes,
                                SpiceEKExprClass  * xclass,
                                void              * tabs,
                                void              * cols,
                                SpiceBoolean      * error,
                                SpiceChar         * errmsg );


extern void          ekrcec_c ( SpiceInt           handle,
                                SpiceInt           segno,
                                SpiceInt           recno,
                                ConstSpiceChar   * column,
                                SpiceInt           lenout,
                                SpiceInt         * nvals,
                                void             * cvals,
                                SpiceBoolean     * isnull );


extern void          ekrced_c ( SpiceInt           handle,
                                SpiceInt           segno,
                                SpiceInt           recno,
                                ConstSpiceChar   * column,
                                SpiceInt         * nvals,
                                SpiceDouble      * dvals,
                                SpiceBoolean     * isnull );


extern void          ekrcei_c ( SpiceInt           handle,
                                SpiceInt           segno,
                                SpiceInt           recno,
                                ConstSpiceChar   * column,
                                SpiceInt         * nvals,
                                SpiceInt         * ivals,
                                SpiceBoolean     * isnull );


extern void          ekssum_c ( SpiceInt            handle,
                                SpiceInt            segno,
                                SpiceEKSegSum     * segsum );


extern void          ektnam_c ( SpiceInt            n,
                                SpiceInt            lenout,
                                SpiceChar         * table  );


extern void          ekucec_c ( SpiceInt              handle,
                                SpiceInt              segno,
                                SpiceInt              recno,
                                ConstSpiceChar      * column,
                                SpiceInt              nvals,
                                SpiceInt              vallen,
                                const void          * cvals,
                                SpiceBoolean          isnull );


extern void          ekuced_c ( SpiceInt              handle,
                                SpiceInt              segno,
                                SpiceInt              recno,
                                ConstSpiceChar      * column,
                                SpiceInt              nvals,
                                ConstSpiceDouble    * dvals,
                                SpiceBoolean          isnull );


extern void          ekucei_c ( SpiceInt              handle,
                                SpiceInt              segno,
                                SpiceInt              recno,
                                ConstSpiceChar      * column,
                                SpiceInt              nvals,
                                ConstSpiceInt       * ivals,
                                SpiceBoolean          isnull );


extern void          ekuef_c  ( SpiceInt            handle );


extern SpiceBoolean  elemc_c  ( ConstSpiceChar     * item,
                                SpiceCell          * set   );


extern SpiceBoolean  elemd_c  ( SpiceDouble          item,
                                SpiceCell          * set   );


extern SpiceBoolean  elemi_c  ( SpiceInt             item,
                                SpiceCell          * set   );


extern void          eqncpv_c ( SpiceDouble          et,
                                SpiceDouble          epoch,
                                ConstSpiceDouble     eqel[9],
                                SpiceDouble          rapol,
                                SpiceDouble          decpol,
                                SpiceDouble          state[6] );


extern SpiceBoolean  eqstr_c  ( ConstSpiceChar     * a,
                                ConstSpiceChar     * b  );


extern void          el2cgv_c ( ConstSpiceEllipse * ellipse,
                                SpiceDouble         center[3],
                                SpiceDouble         smajor[3],
                                SpiceDouble         sminor[3]  );


extern void          erract_c ( ConstSpiceChar    * operation,
                                SpiceInt            lenout,
                                SpiceChar         * action    );


extern void          errch_c  ( ConstSpiceChar    * marker,
                                ConstSpiceChar    * string );


extern void          errdev_c ( ConstSpiceChar    * operation,
                                SpiceInt            lenout,
                                SpiceChar         * device    );


extern void          errdp_c  ( ConstSpiceChar    * marker,
                                SpiceDouble         number  );


extern void          errint_c ( ConstSpiceChar    * marker,
                                SpiceInt            number );


extern void          errprt_c ( ConstSpiceChar    * operation,
                                SpiceInt            lenout,
                                SpiceChar         * list     );


extern SpiceInt      esrchc_c ( ConstSpiceChar  * value,
                                SpiceInt          ndim,
                                SpiceInt          lenvals,
                                const void      * array   );


extern void          etcal_c  ( SpiceDouble         et,
                                SpiceInt            lenout,
                                SpiceChar         * string  );


extern void          et2lst_c ( SpiceDouble         et,
                                SpiceInt            body,
                                SpiceDouble         lon,
                                ConstSpiceChar    * type,
                                SpiceInt            timlen,
                                SpiceInt            ampmlen,
                                SpiceInt          * hr,
                                SpiceInt          * mn,
                                SpiceInt          * sc,
                                SpiceChar         * time,
                                SpiceChar         * ampm    );


extern void          et2utc_c ( SpiceDouble         et ,
                                ConstSpiceChar    * format,
                                SpiceInt            prec,
                                SpiceInt            lenout,
                                SpiceChar         * utcstr );


extern void          eul2m_c  ( SpiceDouble         angle3,
                                SpiceDouble         angle2,
                                SpiceDouble         angle1,
                                SpiceInt            axis3,
                                SpiceInt            axis2,
                                SpiceInt            axis1,
                                SpiceDouble         r [3][3] );


extern void          eul2xf_c ( ConstSpiceDouble    eulang[6],
                                SpiceInt            axisa,
                                SpiceInt            axisb,
                                SpiceInt            axisc,
                                SpiceDouble         xform [6][6] );


extern SpiceBoolean  exists_c ( ConstSpiceChar    * name );


extern void          expool_c ( ConstSpiceChar    * name,
                                SpiceBoolean      * found );


extern SpiceBoolean  failed_c ( void );

extern void          fovray_c ( ConstSpiceChar   * inst,
                                ConstSpiceDouble   raydir [3],
                                ConstSpiceChar   * rframe,
                                ConstSpiceChar   * abcorr,
                                ConstSpiceChar   * obsrvr,
                                SpiceDouble      * et,
                                SpiceBoolean     * visible  );

extern void          fovtrg_c ( ConstSpiceChar   * inst,
                                ConstSpiceChar   * target,
                                ConstSpiceChar   * tshape,
                                ConstSpiceChar   * tframe,
                                ConstSpiceChar   * abcorr,
                                ConstSpiceChar   * obsrvr,
                                SpiceDouble      * et,
                                SpiceBoolean     * visible  );


extern void          frame_c  ( SpiceDouble         x[3],
                                SpiceDouble         y[3],
                                SpiceDouble         z[3] );


extern void          frinfo_c ( SpiceInt            frcode,
                                SpiceInt          * cent,
                                SpiceInt          * clss,
                                SpiceInt          * clssid,
                                SpiceBoolean      * found );


extern void          frmnam_c ( SpiceInt            frcode,
                                SpiceInt            lenout,
                                SpiceChar         * frname  );


extern void          ftncls_c ( SpiceInt            unit );


extern void          furnsh_c ( ConstSpiceChar    * file );


extern void          gcpool_c ( ConstSpiceChar    * name,
                                SpiceInt            start,
                                SpiceInt            room,
                                SpiceInt            lenout,
                                SpiceInt          * n,
                                void              * cvals,
                                SpiceBoolean      * found );


extern void          gdpool_c ( ConstSpiceChar    * name,
                                SpiceInt            start,
                                SpiceInt            room,
                                SpiceInt          * n,
                                SpiceDouble       * values,
                                SpiceBoolean      * found );


extern void          georec_c ( SpiceDouble         lon,
                                SpiceDouble         lat,
                                SpiceDouble         alt,
                                SpiceDouble         re,
                                SpiceDouble         f,
                                SpiceDouble         rectan[3] );


extern void          getcml_c ( SpiceInt          * argc,
                                SpiceChar       *** argv );


extern void          getelm_c ( SpiceInt            frstyr,
                                SpiceInt            lineln,
                                const void        * lines,
                                SpiceDouble       * epoch,
                                SpiceDouble       * elems   );


extern void          getfat_c ( ConstSpiceChar    * file,
                                SpiceInt            arclen,
                                SpiceInt            typlen,
                                SpiceChar         * arch,
                                SpiceChar         * type   );


extern void          getfov_c ( SpiceInt            instid,
                                SpiceInt            room,
                                SpiceInt            shapelen,
                                SpiceInt            framelen,
                                SpiceChar         * shape,
                                SpiceChar         * frame,
                                SpiceDouble         bsight [3],
                                SpiceInt          * n,
                                SpiceDouble         bounds [][3] );


extern void          getmsg_c ( ConstSpiceChar    * option,
                                SpiceInt            lenout,
                                SpiceChar         * msg     );


extern SpiceBoolean  gfbail_c ( void );


extern void          gfclrh_c ( void );


extern void          gfdist_c ( ConstSpiceChar    * target,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                ConstSpiceChar    * relate,
                                SpiceDouble         refval,
                                SpiceDouble         adjust,
                                SpiceDouble         step,
                                SpiceInt            nintvls,
                                SpiceCell         * cnfine,
                                SpiceCell         * result     );



extern void  gfevnt_c ( void             ( * udstep ) ( SpiceDouble       et,
                                                        SpiceDouble     * step ),

                        void             ( * udrefn ) ( SpiceDouble       t1,
                                                        SpiceDouble       t2,
                                                        SpiceBoolean      s1,
                                                        SpiceBoolean      s2,
                                                        SpiceDouble     * t    ),
                      ConstSpiceChar     * gquant,
                      SpiceInt             qnpars,
                      SpiceInt             lenvals,
                      const void         * qpnams,
                      const void         * qcpars,
                      ConstSpiceDouble   * qdpars,
                      ConstSpiceInt      * qipars,
                      ConstSpiceBoolean  * qlpars,
                      ConstSpiceChar     * op,
                      SpiceDouble          refval,
                      SpiceDouble          tol,
                      SpiceDouble          adjust,
                      SpiceBoolean         rpt,

                      void             ( * udrepi ) ( SpiceCell       * cnfine,
                                                      ConstSpiceChar  * srcpre,
                                                      ConstSpiceChar  * srcsuf ),

                      void             ( * udrepu ) ( SpiceDouble       ivbeg,
                                                      SpiceDouble       ivend,
                                                      SpiceDouble       et      ),

                      void             ( * udrepf ) ( void ),
                      SpiceInt             nintvls,
                      SpiceBoolean         bail,
                      SpiceBoolean     ( * udbail ) ( void ),
                      SpiceCell          * cnfine,
                      SpiceCell          * result );



extern void  gffove_c ( ConstSpiceChar    * inst,
                        ConstSpiceChar    * tshape,
                        ConstSpiceDouble    raydir [3],
                        ConstSpiceChar    * target,
                        ConstSpiceChar    * tframe,
                        ConstSpiceChar    * abcorr,
                        ConstSpiceChar    * obsrvr,
                        SpiceDouble         tol,
                        void            ( * udstep ) ( SpiceDouble       et,
                                                        SpiceDouble     * step ),
                        void            ( * udrefn ) ( SpiceDouble       t1,
                                                        SpiceDouble       t2,
                                                        SpiceBoolean      s1,
                                                        SpiceBoolean      s2,
                                                        SpiceDouble     * t    ),
                        SpiceBoolean        rpt,
                        void            ( * udrepi ) ( SpiceCell       * cnfine,
                                                        ConstSpiceChar  * srcpre,
                                                        ConstSpiceChar  * srcsuf ),
                        void            ( * udrepu ) ( SpiceDouble       ivbeg,
                                                        SpiceDouble       ivend,
                                                        SpiceDouble       et      ),
                        void            ( * udrepf ) ( void ),
                        SpiceBoolean        bail,
                        SpiceBoolean    ( * udbail ) ( void ),
                        SpiceCell         * cnfine,
                        SpiceCell         * result                               );


extern void          gfilum_c ( ConstSpiceChar     * method,
                                ConstSpiceChar     * angtyp,
                                ConstSpiceChar     * target,
                                ConstSpiceChar     * illum,
                                ConstSpiceChar     * fixref,
                                ConstSpiceChar     * abcorr,
                                ConstSpiceChar     * obsrvr,
                                ConstSpiceDouble     spoint [3],
                                ConstSpiceChar     * relate,
                                SpiceDouble          refval,
                                SpiceDouble          adjust,
                                SpiceDouble          step,
                                SpiceInt             nintvls,
                                SpiceCell          * cnfine,
                                SpiceCell          * result     );


extern void          gfinth_c ( int sigcode );


extern void  gfocce_c ( ConstSpiceChar    * occtyp,
                        ConstSpiceChar    * front,
                        ConstSpiceChar    * fshape,
                        ConstSpiceChar    * fframe,
                        ConstSpiceChar    * back,
                        ConstSpiceChar    * bshape,
                        ConstSpiceChar    * bframe,
                        ConstSpiceChar    * obsrvr,
                        ConstSpiceChar    * abcorr,
                        SpiceDouble         tol,
                        void            ( * udstep ) ( SpiceDouble      et,
                                                        SpiceDouble    * step ),
                        void            ( * udrefn ) ( SpiceDouble      t1,
                                                        SpiceDouble      t2,
                                                        SpiceBoolean     s1,
                                                        SpiceBoolean     s2,
                                                        SpiceDouble    * t    ),
                        SpiceBoolean        rpt,
                        void            ( * udrepi ) ( SpiceCell      * cnfine,
                                                        ConstSpiceChar * srcpre,
                                                        ConstSpiceChar * srcsuf ),
                        void            ( * udrepu ) ( SpiceDouble      ivbeg,
                                                        SpiceDouble      ivend,
                                                        SpiceDouble      et     ),
                        void            ( * udrepf ) ( void ),
                        SpiceBoolean        bail,
                        SpiceBoolean    ( * udbail ) ( void ),
                        SpiceCell         * cnfine,
                        SpiceCell         * result                               );



extern void          gfoclt_c ( ConstSpiceChar    * occtyp,
                                ConstSpiceChar    * front,
                                ConstSpiceChar    * fshape,
                                ConstSpiceChar    * fframe,
                                ConstSpiceChar    * back,
                                ConstSpiceChar    * bshape,
                                ConstSpiceChar    * bframe,
                                ConstSpiceChar    * obsrvr,
                                ConstSpiceChar    * abcorr,
                                SpiceDouble         step,
                                SpiceCell         * cnfine,
                                SpiceCell         * result );



extern void          gfpa_c ( ConstSpiceChar     * target,
                              ConstSpiceChar     * illum,
                              ConstSpiceChar     * abcorr,
                              ConstSpiceChar     * obsrvr,
                              ConstSpiceChar     * relate,
                              SpiceDouble          refval,
                              SpiceDouble          adjust,
                              SpiceDouble          step,
                              SpiceInt             nintvls,
                              SpiceCell          * cnfine,
                              SpiceCell          * result  );



extern void          gfposc_c ( ConstSpiceChar    * target,
                                ConstSpiceChar    * frame,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                ConstSpiceChar    * crdsys,
                                ConstSpiceChar    * coord,
                                ConstSpiceChar    * relate,
                                SpiceDouble         refval,
                                SpiceDouble         adjust,
                                SpiceDouble         step,
                                SpiceInt            nintvls,
                                SpiceCell         * cnfine,
                                SpiceCell         * result  );


extern void          gfrefn_c ( SpiceDouble         t1,
                                SpiceDouble         t2,
                                SpiceBoolean        s1,
                                SpiceBoolean        s2,
                                SpiceDouble       * t      );


extern void          gfrepf_c ( void );


extern void          gfrepi_c ( SpiceCell         * window,
                                ConstSpiceChar    * begmss,
                                ConstSpiceChar    * endmss );


extern void          gfrepu_c ( SpiceDouble         ivbeg,
                                SpiceDouble         ivend,
                                SpiceDouble         time    );


extern void          gfrfov_c ( ConstSpiceChar    * inst,
                                ConstSpiceDouble    raydir [3],
                                ConstSpiceChar    * rframe,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                SpiceDouble         step,
                                SpiceCell         * cnfine,
                                SpiceCell         * result     );


extern void           gfrr_c ( ConstSpiceChar      * target,
                               ConstSpiceChar     * abcorr,
                               ConstSpiceChar     * obsrvr,
                               ConstSpiceChar     * relate,
                               SpiceDouble          refval,
                               SpiceDouble          adjust,
                               SpiceDouble          step,
                               SpiceInt             nintvls,
                               SpiceCell          * cnfine,
                               SpiceCell          * result  );


extern void          gfsep_c  (  ConstSpiceChar   * targ1,
                                 ConstSpiceChar   * shape1,
                                 ConstSpiceChar   * frame1,
                                 ConstSpiceChar   * targ2,
                                 ConstSpiceChar   * shape2,
                                 ConstSpiceChar   * frame2,
                                 ConstSpiceChar   * abcorr,
                                 ConstSpiceChar   * obsrvr,
                                 ConstSpiceChar   * relate,
                                 SpiceDouble        refval,
                                 SpiceDouble        adjust,
                                 SpiceDouble        step,
                                 SpiceInt           nintvls,
                                 SpiceCell        * cnfine,
                                 SpiceCell        * result  );


extern void          gfsntc_c ( ConstSpiceChar    * target,
                                ConstSpiceChar    * fixref,
                                ConstSpiceChar    * method,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                ConstSpiceChar    * dref,
                                ConstSpiceDouble    dvec   [3],
                                ConstSpiceChar    * crdsys,
                                ConstSpiceChar    * coord,
                                ConstSpiceChar    * relate,
                                SpiceDouble         refval,
                                SpiceDouble         adjust,
                                SpiceDouble         step,
                                SpiceInt            nintvls,
                                SpiceCell         * cnfine,
                                SpiceCell         * result  );


extern void          gfsstp_c ( SpiceDouble         step   );


extern void          gfstep_c ( SpiceDouble         time,
                                SpiceDouble       * step   );


extern void          gfstol_c ( SpiceDouble         value );


extern void          gfsubc_c ( ConstSpiceChar    * target,
                                ConstSpiceChar    * fixref,
                                ConstSpiceChar    * method,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                ConstSpiceChar    * crdsys,
                                ConstSpiceChar    * coord,
                                ConstSpiceChar    * relate,
                                SpiceDouble         refval,
                                SpiceDouble         adjust,
                                SpiceDouble         step,
                                SpiceInt            nintvls,
                                SpiceCell         * cnfine,
                                SpiceCell         * result  );


extern void          gftfov_c ( ConstSpiceChar   * inst,
                                ConstSpiceChar   * target,
                                ConstSpiceChar   * tshape,
                                ConstSpiceChar   * tframe,
                                ConstSpiceChar   * abcorr,
                                ConstSpiceChar   * obsrvr,
                                SpiceDouble        step,
                                SpiceCell        * cnfine,
                                SpiceCell        * result  );



extern void          gfudb_c (  void ( * udfuns ) ( SpiceDouble       et,
                                                    SpiceDouble     * value ),

                                void  ( * udfunb ) ( void ( * udfuns )
                                                        ( SpiceDouble   et,
                                                          SpiceDouble * value ),

                                                   SpiceDouble       et,
                                                   SpiceBoolean    * xbool ),

                                SpiceDouble          step,
                                SpiceCell          * cnfine,
                                SpiceCell          * result );


extern void          gfuds_c (  void ( * udfuns ) ( SpiceDouble      et,
                                                    SpiceDouble    * value ),

                                void ( * udfunb ) ( void ( * udfuns )
                                                    ( SpiceDouble    et,
                                                      SpiceDouble  * value ),

                                                   SpiceDouble       x,
                                                   SpiceBoolean    * xbool ),

                                ConstSpiceChar     * relate,
                                SpiceDouble          refval,
                                SpiceDouble          adjust,
                                SpiceDouble          step,
                                SpiceInt             nintvls,
                                SpiceCell          * cnfine,
                                SpiceCell          * result );


extern void          gipool_c ( ConstSpiceChar    * name,
                                SpiceInt            start,
                                SpiceInt            room,
                                SpiceInt          * n,
                                SpiceInt          * ivals,
                                SpiceBoolean      * found );


extern void          gnpool_c ( ConstSpiceChar    * name,
                                SpiceInt            start,
                                SpiceInt            room,
                                SpiceInt            lenout,
                                SpiceInt          * n,
                                void              * kvars,
                                SpiceBoolean      * found  );


extern void          hrmint_c ( SpiceInt            n,
                                ConstSpiceDouble  * xvals,
                                ConstSpiceDouble  * yvals,
                                SpiceDouble         x,
                                SpiceDouble       * work,
                                SpiceDouble       * f,
                                SpiceDouble       * df );


extern SpiceDouble   halfpi_c ( void );


extern void          hx2dp_c  ( ConstSpiceChar  * string,
                                SpiceInt          lenout,
                                SpiceDouble     * number,
                                SpiceBoolean    * error,
                                SpiceChar       * errmsg
                              );


extern void          ident_c  ( SpiceDouble         matrix[3][3] );


extern void          ilumin_c ( ConstSpiceChar    * method,
                                ConstSpiceChar    * target,
                                SpiceDouble         et,
                                ConstSpiceChar    * fixref,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                ConstSpiceDouble    spoint [3],
                                SpiceDouble       * trgepc,
                                SpiceDouble         srfvec [3],
                                SpiceDouble       * phase,
                                SpiceDouble       * solar,
                                SpiceDouble       * emissn     );


extern void          illum_c  ( ConstSpiceChar    * target,
                                SpiceDouble         et,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                ConstSpiceDouble    spoint [3],
                                SpiceDouble       * phase,
                                SpiceDouble       * solar,
                                SpiceDouble       * emissn     );


extern void          illum_pl02 ( SpiceInt               handle,
                                  ConstSpiceDLADescr   * dladsc,
                                  ConstSpiceChar       * target,
                                  SpiceDouble            et,
                                  ConstSpiceChar       * abcorr,
                                  ConstSpiceChar       * obsrvr,
                                  SpiceDouble            spoint [3],
                                  SpiceDouble          * phase,
                                  SpiceDouble          * solar,
                                  SpiceDouble          * emissn      );


extern void          illum_plid_pl02 ( SpiceInt               handle,
                                       ConstSpiceDLADescr   * dladsc,
                                       ConstSpiceChar       * target,
                                       SpiceDouble            et,
                                       ConstSpiceChar       * abcorr,
                                       ConstSpiceChar       * obsrvr,
                                       SpiceDouble            spoint [3],
                                       SpiceInt               plid,
                                       SpiceDouble          * trgepc,
                                       SpiceDouble            srfvec [3],
                                       SpiceDouble          * phase,
                                       SpiceDouble          * solar,
                                       SpiceDouble          * emissn,
                                       SpiceBoolean         * visible,
                                       SpiceBoolean         * lit       );


extern void          illumf_c ( ConstSpiceChar    * method,
                                ConstSpiceChar    * target,
                                ConstSpiceChar    * ilusrc,
                                SpiceDouble         et,
                                ConstSpiceChar    * fixref,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                ConstSpiceDouble    spoint [3],
                                SpiceDouble       * trgepc,
                                SpiceDouble         srfvec [3],
                                SpiceDouble       * phase,
                                SpiceDouble       * incdnc,
                                SpiceDouble       * emissn,
                                SpiceBoolean      * visibl,
                                SpiceBoolean      * lit       );


extern void          illumg_c ( ConstSpiceChar    * method,
                                ConstSpiceChar    * target,
                                ConstSpiceChar    * illum,
                                SpiceDouble         et,
                                ConstSpiceChar    * fixref,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                ConstSpiceDouble    spoint [3],
                                SpiceDouble       * trgepc,
                                SpiceDouble         srfvec [3],
                                SpiceDouble       * phase,
                                SpiceDouble       * solar,
                                SpiceDouble       * emissn     );


extern void          inedpl_c ( SpiceDouble         a,
                                SpiceDouble         b,
                                SpiceDouble         c,
                                ConstSpicePlane   * plane,
                                SpiceEllipse      * ellipse,
                                SpiceBoolean      * found    );


extern void          inelpl_c ( ConstSpiceEllipse * ellips,
                                ConstSpicePlane   * plane,
                                SpiceInt          * nxpts,
                                SpiceDouble         xpt1[3],
                                SpiceDouble         xpt2[3] );


extern void          insrtc_c ( ConstSpiceChar     * item,
                                SpiceCell          * set   );


extern void          insrtd_c ( SpiceDouble          item,
                                SpiceCell          * set  );


extern void          insrti_c ( SpiceInt             item,
                                SpiceCell          * set  );


extern void          inter_c  (  SpiceCell        * a,
                                 SpiceCell        * b,
                                 SpiceCell        * c  );


extern void          inrypl_c ( ConstSpiceDouble    vertex [3],
                                ConstSpiceDouble    dir    [3],
                                ConstSpicePlane   * plane,
                                SpiceInt          * nxpts,
                                SpiceDouble         xpt    [3] );


extern SpiceInt      intmax_c ( void );


extern SpiceInt      intmax_  ( void );


extern SpiceInt      intmin_c ( void );


extern SpiceInt      intmin_  ( void );


extern void          invert_c ( ConstSpiceDouble    m1[3][3],
                                SpiceDouble         m2[3][3]  );


extern void          invort_c ( ConstSpiceDouble    m  [3][3],
                                SpiceDouble         mit[3][3] );


extern SpiceBoolean  isordv_c ( ConstSpiceInt     * array,
                                SpiceInt            n      );


extern SpiceBoolean  isrot_c  ( ConstSpiceDouble    m   [3][3],
                                SpiceDouble         ntol,
                                SpiceDouble         dtol       );



extern SpiceInt      isrchc_c ( ConstSpiceChar  * value,
                                SpiceInt          ndim,
                                SpiceInt          lenvals,
                                const void      * array   );


extern SpiceInt      isrchd_c ( SpiceDouble          value,
                                SpiceInt             ndim,
                                ConstSpiceDouble   * array );


extern SpiceInt      isrchi_c ( SpiceInt             value,
                                SpiceInt             ndim,
                                ConstSpiceInt      * array );


extern SpiceBoolean  iswhsp_c ( ConstSpiceChar    * string );


extern SpiceDouble   j1900_c  ( void );


extern SpiceDouble   j1950_c  ( void );


extern SpiceDouble   j2000_c  ( void );


extern SpiceDouble   j2100_c  ( void );


extern SpiceDouble   jyear_c  ( void );


extern void          kclear_c ( void );


extern void          kdata_c  ( SpiceInt          which,
                                ConstSpiceChar  * kind,
                                SpiceInt          fillen,
                                SpiceInt          typlen,
                                SpiceInt          srclen,
                                SpiceChar       * file,
                                SpiceChar       * filtyp,
                                SpiceChar       * source,
                                SpiceInt        * handle,
                                SpiceBoolean    * found   );


extern void          kinfo_c  ( ConstSpiceChar  * file,
                                SpiceInt          typlen,
                                SpiceInt          srclen,
                                SpiceChar       * filtyp,
                                SpiceChar       * source,
                                SpiceInt        * handle,
                                SpiceBoolean    * found  );


extern void          kplfrm_c ( SpiceInt             frmcls,
                                SpiceCell          * idset  );


extern void          ktotal_c ( ConstSpiceChar   * kind,
                                SpiceInt         * count );


extern void          kxtrct_c ( ConstSpiceChar       * keywd,
                                SpiceInt               termlen,
                                const void           * terms,
                                SpiceInt               nterms,
                                SpiceInt               stringlen,
                                SpiceInt               substrlen,
                                SpiceChar            * string,
                                SpiceBoolean         * found,
                                SpiceChar            * substr  );


extern SpiceInt      lastnb_c ( ConstSpiceChar    * string );


extern void          latcyl_c ( SpiceDouble         radius,
                                SpiceDouble         lon,
                                SpiceDouble         lat,
                                SpiceDouble       * r,
                                SpiceDouble       * lonc,
                                SpiceDouble       * z      );


extern void          latrec_c ( SpiceDouble         radius,
                                SpiceDouble         longitude,
                                SpiceDouble         latitude,
                                SpiceDouble         rectan [3] );


extern void          latsph_c ( SpiceDouble         radius,
                                SpiceDouble         lon,
                                SpiceDouble         lat,
                                SpiceDouble       * rho,
                                SpiceDouble       * colat,
                                SpiceDouble       * lons   );


extern void          latsrf_c ( ConstSpiceChar    * method,
                                ConstSpiceChar    * target,
                                SpiceDouble         et,
                                ConstSpiceChar    * fixref,
                                SpiceInt            npts,
                                ConstSpiceDouble    lonlat[][2],
                                SpiceDouble         srfpts[][3]  );


extern void          lcase_c  ( SpiceChar         * in,
                                SpiceInt            lenout,
                                SpiceChar         * out     );


extern void          ldpool_c ( ConstSpiceChar    * filename );


extern void          lgrind_c ( SpiceInt            n,
                                ConstSpiceDouble  * xvals,
                                ConstSpiceDouble  * yvals,
                                SpiceDouble       * work,
                                SpiceDouble         x,
                                SpiceDouble       * p,
                                SpiceDouble       * dp );


extern void          limb_pl02 ( SpiceInt              handle,
                                 ConstSpiceDLADescr  * dladsc,
                                 ConstSpiceChar      * target,
                                 SpiceDouble           et,
                                 ConstSpiceChar      * fixref,
                                 ConstSpiceChar      * abcorr,
                                 ConstSpiceChar      * obsrvr,
                                 SpiceInt              npoints,
                                 SpiceDouble         * trgepc,
                                 SpiceDouble           obspos   [3],
                                 SpiceDouble           limbpts  [][3],
                                 SpiceInt              plateIDs []     );


extern void          limbpt_c ( ConstSpiceChar    * method,
                                ConstSpiceChar    * target,
                                SpiceDouble         et,
                                ConstSpiceChar    * fixref,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * corloc,
                                ConstSpiceChar    * obsrvr,
                                ConstSpiceDouble    refvec[3],
                                SpiceDouble         rolstp,
                                SpiceInt            ncuts,
                                SpiceDouble         schstp,
                                SpiceDouble         soltol,
                                SpiceInt            maxn,
                                SpiceInt            npts  [],
                                SpiceDouble         points[][3],
                                SpiceDouble         epochs[],
                                SpiceDouble         tangts[][3]  );


extern void          llgrid_pl02 ( SpiceInt               handle,
                                   ConstSpiceDLADescr   * dladsc,
                                   SpiceInt               npoints,
                                   ConstSpiceDouble       grid     [][2],
                                   SpiceDouble            spoints  [][3],
                                   SpiceInt               plateIDs []     );


extern void          lmpool_c ( const void        * cvals,
                                SpiceInt            lenvals,
                                SpiceInt             n       );


extern void          lparse_c ( ConstSpiceChar    * list,
                                ConstSpiceChar    * delim,
                                SpiceInt            nmax,
                                SpiceInt            lenout,
                                SpiceInt          * n,
                                void              * items   );


extern void          lparsm_c ( ConstSpiceChar    * list,
                                ConstSpiceChar    * delims,
                                SpiceInt            nmax,
                                SpiceInt            lenout,
                                SpiceInt          * n,
                                void              * items   );


extern void          lparss_c ( ConstSpiceChar    * list,
                                ConstSpiceChar    * delims,
                                SpiceCell         * set     );


extern SpiceDouble   lspcn_c  ( ConstSpiceChar    * body,
                                SpiceDouble         et,
                                ConstSpiceChar    * abcorr );


extern SpiceInt      lstlec_c ( ConstSpiceChar    * string,
                                SpiceInt            n,
                                SpiceInt            lenvals,
                                const void        * array   );


extern SpiceInt      lstled_c ( SpiceDouble         x,
                                SpiceInt            n,
                                ConstSpiceDouble  * array );


extern SpiceInt      lstlei_c ( SpiceInt            x,
                                SpiceInt            n,
                                ConstSpiceInt     * array );


extern SpiceInt      lstltc_c ( ConstSpiceChar    * string,
                                SpiceInt            n,
                                SpiceInt            lenvals,
                                const void        * array   );


extern SpiceInt      lstltd_c ( SpiceDouble         x,
                                SpiceInt            n,
                                ConstSpiceDouble  * array );


extern SpiceInt      lstlti_c ( SpiceInt            x,
                                SpiceInt            n,
                                ConstSpiceInt     * array );


extern void          ltime_c  ( SpiceDouble         etobs,
                                SpiceInt            obs,
                                ConstSpiceChar    * dir,
                                SpiceInt            targ,
                                SpiceDouble       * ettarg,
                                SpiceDouble       * elapsd  );


extern void          lx4dec_c ( ConstSpiceChar    * string,
                                SpiceInt            first,
                                SpiceInt          * last,
                                SpiceInt          * nchar  );


extern void          lx4num_c ( ConstSpiceChar    * string,
                                SpiceInt            first,
                                SpiceInt          * last,
                                SpiceInt          * nchar  );


extern void          lx4sgn_c ( ConstSpiceChar    * string,
                                SpiceInt            first,
                                SpiceInt          * last,
                                SpiceInt          * nchar  );


extern void          lx4uns_c ( ConstSpiceChar    * string,
                                SpiceInt            first,
                                SpiceInt          * last,
                                SpiceInt          * nchar  );


extern void          lxqstr_c ( ConstSpiceChar    * string,
                                SpiceChar           qchar,
                                SpiceInt            first,
                                SpiceInt          * last,
                                SpiceInt          * nchar  );


extern void          m2eul_c  ( ConstSpiceDouble    r[3][3],
                                SpiceInt            axis3,
                                SpiceInt            axis2,
                                SpiceInt            axis1,
                                SpiceDouble       * angle3,
                                SpiceDouble       * angle2,
                                SpiceDouble       * angle1  );


extern void          m2q_c    ( ConstSpiceDouble    r[3][3],
                                SpiceDouble         q[4]     );



extern SpiceBoolean  matchi_c ( ConstSpiceChar    * string,
                                ConstSpiceChar    * templ,
                                SpiceChar           wstr,
                                SpiceChar           wchr   );


extern SpiceBoolean  matchw_c ( ConstSpiceChar    * string,
                                ConstSpiceChar    * templ,
                                SpiceChar           wstr,
                                SpiceChar           wchr   );


extern SpiceDouble   maxd_c  ( SpiceInt             n,
                                                    ... );


extern SpiceInt      maxi_c  ( SpiceInt             n,
                                                    ... );


extern void          mequ_c   ( ConstSpiceDouble    m1  [3][3],
                                SpiceDouble         mout[3][3] );


extern void          mequg_c  ( const void        * m1,
                                SpiceInt            nr,
                                SpiceInt            nc,
                                void              * mout );


extern SpiceDouble   mind_c   ( SpiceInt            n,
                                                    ... );


extern SpiceInt      mini_c   ( SpiceInt            n,
                                                    ... );


extern int           moved_   ( SpiceDouble       * arrfrm,
                                SpiceInt          * ndim,
                                SpiceDouble       * arrto  );


extern void          mtxm_c   ( ConstSpiceDouble    m1  [3][3],
                                ConstSpiceDouble    m2  [3][3],
                                SpiceDouble         mout[3][3] );


extern void          mtxmg_c  ( const void        * m1,
                                const void        * m2,
                                SpiceInt            row1,
                                SpiceInt            col1,
                                SpiceInt            col2,
                                void              * mout  );


extern void          mtxv_c   ( ConstSpiceDouble    m1  [3][3],
                                ConstSpiceDouble    vin [3],
                                SpiceDouble         vout[3]    );


extern void          mtxvg_c  ( const void        * m1,
                                const void        * v2,
                                SpiceInt            ncol1,
                                SpiceInt            nr1r2,
                                void              * vout   );


extern void          mxm_c    ( ConstSpiceDouble    m1  [3][3],
                                ConstSpiceDouble    m2  [3][3],
                                SpiceDouble         mout[3][3] );


extern void          mxmg_c   ( const void        * m1,
                                const void        * m2,
                                SpiceInt            row1,
                                SpiceInt            col1,
                                SpiceInt            col2,
                                void              * mout  );


extern void          mxmt_c   ( ConstSpiceDouble    m1  [3][3],
                                ConstSpiceDouble    m2  [3][3],
                                SpiceDouble         mout[3][3] );


extern void          mxmtg_c  ( const void        * m1,
                                const void        * m2,
                                SpiceInt            nrow1,
                                SpiceInt            nc1c2,
                                SpiceInt            nrow2,
                                void              * mout  );


extern void          mxv_c    ( ConstSpiceDouble    m1[3][3],
                                ConstSpiceDouble    vin[3],
                                SpiceDouble         vout[3] );


extern void          mxvg_c   ( const void        * m1,
                                const void        * v2,
                                SpiceInt            nrow1,
                                SpiceInt            nc1r2,
                                void              * vout   );


extern void          namfrm_c ( ConstSpiceChar    * frname,
                                SpiceInt          * frcode );


extern SpiceInt      ncpos_c  ( ConstSpiceChar    * str,
                                ConstSpiceChar    * chars,
                                SpiceInt            start  );


extern SpiceInt      ncposr_c ( ConstSpiceChar    * str,
                                ConstSpiceChar    * chars,
                                SpiceInt            start  );


extern void          nearpt_c ( ConstSpiceDouble    positn[3],
                                SpiceDouble         a,
                                SpiceDouble         b,
                                SpiceDouble         c,
                                SpiceDouble         npoint[3],
                                SpiceDouble       * alt        );


extern void          npedln_c ( SpiceDouble         a,
                                SpiceDouble         b,
                                SpiceDouble         c,
                                ConstSpiceDouble    linept[3],
                                ConstSpiceDouble    linedr[3],
                                SpiceDouble         pnear[3],
                                SpiceDouble       * dist      );


extern void          npelpt_c ( ConstSpiceDouble    point[3],
                                ConstSpiceEllipse * ellips,
                                SpiceDouble         pnear[3],
                                SpiceDouble       * dist      );


extern void          nplnpt_c ( ConstSpiceDouble    linpt  [3],
                                ConstSpiceDouble    lindir [3],
                                ConstSpiceDouble    point  [3],
                                SpiceDouble         pnear  [3],
                                SpiceDouble       * dist       );


extern void          nvc2pl_c ( ConstSpiceDouble    normal[3],
                                SpiceDouble         constant,
                                SpicePlane        * plane     );


extern void          nvp2pl_c ( ConstSpiceDouble    normal[3],
                                ConstSpiceDouble    point[3],
                                SpicePlane        * plane     );

extern void          occult_c ( ConstSpiceChar    * target1,
                                ConstSpiceChar    * shape1,
                                ConstSpiceChar    * frame1,
                                ConstSpiceChar    * target2,
                                ConstSpiceChar    * shape2,
                                ConstSpiceChar    * frame2,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * observer,
                                SpiceDouble         time,
                                SpiceInt          * occult_code );

extern SpiceInt      ordc_c   ( ConstSpiceChar     * item,
                                SpiceCell          * set   );


extern SpiceInt      ordd_c   ( SpiceDouble          item,
                                SpiceCell          * set   );


extern SpiceInt      ordi_c   ( SpiceInt             item,
                                SpiceCell          * set   );


extern void          orderc_c ( SpiceInt            lenvals,
                                const void        * array,
                                SpiceInt            ndim,
                                SpiceInt          * iorder  );


extern void          orderd_c ( ConstSpiceDouble  * array,
                                SpiceInt            ndim,
                                SpiceInt          * iorder );


extern void          orderi_c ( ConstSpiceInt     * array,
                                SpiceInt            ndim,
                                SpiceInt          * iorder );


extern void          oscelt_c ( ConstSpiceDouble    state[6],
                                SpiceDouble         et      ,
                                SpiceDouble         mu      ,
                                SpiceDouble         elts[8]  );


extern void          oscltx_c ( ConstSpiceDouble    state[6],
                                SpiceDouble         et      ,
                                SpiceDouble         mu      ,
                                SpiceDouble         elts[SPICE_OSCLTX_NELTS] );


extern void          pckcls_c ( SpiceInt            handle );


extern void          pckcov_c ( ConstSpiceChar    * pck,
                                SpiceInt            idcode,
                                SpiceCell         * cover   );


extern void          pckfrm_c ( ConstSpiceChar    * pck,
                                SpiceCell         * ids  );


extern void          pcklof_c ( ConstSpiceChar    * fname,
                                SpiceInt          * handle );


extern void          pckopn_c ( ConstSpiceChar    * name,
                                ConstSpiceChar    * ifname,
                                SpiceInt            ncomch,
                                SpiceInt          * handle  );


extern void          pckuof_c ( SpiceInt            handle );


extern void          pckw02_c ( SpiceInt            handle,
                                SpiceInt            clssid,
                                ConstSpiceChar    * frame,
                                SpiceDouble         first,
                                SpiceDouble         last,
                                ConstSpiceChar    * segid,
                                SpiceDouble         intlen,
                                SpiceInt            n,
                                SpiceInt            polydg,
                                SpiceDouble         cdata  [],
                                SpiceDouble         btime      );


extern void          pcpool_c ( ConstSpiceChar   * name,
                                SpiceInt           n,
                                SpiceInt           lenvals,
                                const void        * cvals    );


extern void          pdpool_c ( ConstSpiceChar    * name,
                                SpiceInt            n,
                                ConstSpiceDouble  * dvals );


extern void          pgrrec_c ( ConstSpiceChar    * body,
                                SpiceDouble         lon,
                                SpiceDouble         lat,
                                SpiceDouble         alt,
                                SpiceDouble         re,
                                SpiceDouble         f,
                                SpiceDouble         rectan[3] );


extern SpiceDouble   phaseq_c ( SpiceDouble       et,
                                ConstSpiceChar  * target,
                                ConstSpiceChar  * illumn,
                                ConstSpiceChar  * obsrvr,
                                ConstSpiceChar  * abcorr );


extern SpiceDouble   pi_c     ( void );


extern void          pipool_c ( ConstSpiceChar    * name,
                                SpiceInt            n,
                                ConstSpiceInt     * ivals );


extern void          pjelpl_c ( ConstSpiceEllipse * elin,
                                ConstSpicePlane   * plane,
                                SpiceEllipse      * elout  );


extern void          pl2nvc_c ( ConstSpicePlane   * plane,
                                SpiceDouble         normal[3],
                                SpiceDouble       * constant  );


extern void          pl2nvp_c ( ConstSpicePlane   * plane,
                                SpiceDouble         normal[3],
                                SpiceDouble         point[3]  );


extern void          pl2psv_c ( ConstSpicePlane   * plane,
                                SpiceDouble         point[3],
                                SpiceDouble         span1[3],
                                SpiceDouble         span2[3]  );


extern SpiceDouble   pltar_c  ( SpiceInt            nv,
                                ConstSpiceDouble    vrtces[][3],
                                SpiceInt            np,
                                ConstSpiceInt       plates[][3] );  


extern void          pltexp_c ( ConstSpiceDouble    iverts[3][3],
                                SpiceDouble         delta,
                                SpiceDouble         overts[3][3] );


extern void          pltnp_c  ( ConstSpiceDouble    point[3],
                                ConstSpiceDouble    v1   [3],
                                ConstSpiceDouble    v2   [3],
                                ConstSpiceDouble    v3   [3],
                                SpiceDouble         pnear[3],
                                SpiceDouble       * dist      );


extern void          pltnrm_c ( ConstSpiceDouble   v1[3],
                                ConstSpiceDouble   v2[3],
                                ConstSpiceDouble   v3[3],
                                SpiceDouble        normal[3] );


extern SpiceDouble   pltvol_c ( SpiceInt           nv,
                                ConstSpiceDouble   vrtces[][3],
                                SpiceInt           np,
                                ConstSpiceInt      plates[][3] );  


extern void          polyds_c ( ConstSpiceDouble    * coeffs,
                                SpiceInt              deg,
                                SpiceInt              nderiv,
                                SpiceDouble           t,
                                SpiceDouble         * p );


extern SpiceInt      pos_c    ( ConstSpiceChar    * str,
                                ConstSpiceChar    * substr,
                                SpiceInt            start   );


extern SpiceInt      posr_c   ( ConstSpiceChar    * str,
                                ConstSpiceChar    * substr,
                                SpiceInt            start   );


// extern void          prefix_c ( ConstSpiceChar    * pref,
//                                 SpiceInt            spaces,
//                                 SpiceInt            lenout,
//                                 SpiceChar         * string  );


extern SpiceChar   * prompt_c ( ConstSpiceChar    * prmptStr,
                                SpiceInt            lenout,
                                SpiceChar         * buffer   );


extern void          prop2b_c ( SpiceDouble         gm,
                                ConstSpiceDouble    pvinit[6],
                                SpiceDouble         dt,
                                SpiceDouble         pvprop[6] );


extern void          prsdp_c  ( ConstSpiceChar    * string,
                                SpiceDouble       * dpval  );


extern void          prsint_c ( ConstSpiceChar    * string,
                                SpiceInt          * intval );


extern void          psv2pl_c ( ConstSpiceDouble    point[3],
                                ConstSpiceDouble    span1[3],
                                ConstSpiceDouble    span2[3],
                                SpicePlane        * plane     );


extern void          putcml_c ( SpiceInt            argc ,
                                SpiceChar        ** argv  );


extern void          pxform_c ( ConstSpiceChar    * from,
                                ConstSpiceChar    * to,
                                SpiceDouble         et,
                                SpiceDouble         rotate[3][3] );


extern void          pxfrm2_c ( ConstSpiceChar    * from,
                                ConstSpiceChar    * to,
                                SpiceDouble         etfrom,
                                SpiceDouble         etto,
                                SpiceDouble         rotate[3][3] );


extern void          q2m_c    ( ConstSpiceDouble    q[4],
                                SpiceDouble         r[3][3] );


extern void          qcktrc_c ( SpiceInt            tracelen,
                                SpiceChar         * trace    );


extern void          qdq2av_c ( ConstSpiceDouble    q[4],
                                ConstSpiceDouble    dq[4],
                                SpiceDouble         av[3] );


extern void          qxq_c    ( ConstSpiceDouble    q1[4],
                                ConstSpiceDouble    q2[4],
                                SpiceDouble         qout[4] );



extern void          radrec_c ( SpiceDouble         range,
                                SpiceDouble         ra,
                                SpiceDouble         dec,
                                SpiceDouble         rectan[3] );


extern void          rav2xf_c ( ConstSpiceDouble     rot   [3][3],
                                ConstSpiceDouble     av    [3],
                                SpiceDouble          xform [6][6]  );


extern void          raxisa_c ( ConstSpiceDouble     matrix[3][3],
                                SpiceDouble          axis  [3],
                                SpiceDouble        * angle       );


extern void          rdtext_c ( ConstSpiceChar     * file,
                                SpiceInt             lenout,
                                SpiceChar          * line,
                                SpiceBoolean       * eof    );


extern void          reccyl_c ( ConstSpiceDouble    rectan[3],
                                SpiceDouble       * r,
                                SpiceDouble       * lon,
                                SpiceDouble       * z         );


extern void          recgeo_c ( ConstSpiceDouble    rectan[3],
                                SpiceDouble         re,
                                SpiceDouble         f,
                                SpiceDouble       * lon,
                                SpiceDouble       * lat,
                                SpiceDouble       * alt );


extern void          reclat_c ( ConstSpiceDouble    rectan[3],
                                SpiceDouble       * radius,
                                SpiceDouble       * longitude,
                                SpiceDouble       * latitude  );


extern void          recpgr_c ( ConstSpiceChar    * body,
                                SpiceDouble         rectan[3],
                                SpiceDouble         re,
                                SpiceDouble         f,
                                SpiceDouble       * lon,
                                SpiceDouble       * lat,
                                SpiceDouble       * alt       );


extern void          recrad_c ( ConstSpiceDouble    rectan[3],
                                SpiceDouble       * radius,
                                SpiceDouble       * ra,
                                SpiceDouble       * dec  );



extern void          reordc_c ( ConstSpiceInt     * iorder,
                                SpiceInt            ndim,
                                SpiceInt            lenvals,
                                void              * array    );


extern void          reordd_c ( ConstSpiceInt     * iorder,
                                SpiceInt            ndim,
                                SpiceDouble       * array   );


extern void          reordi_c ( ConstSpiceInt     * iorder,
                                SpiceInt            ndim,
                                SpiceInt          * array   );


extern void          reordl_c ( ConstSpiceInt     * iorder,
                                SpiceInt            ndim,
                                SpiceBoolean      * array   );


extern void          removc_c ( ConstSpiceChar     * item,
                                SpiceCell          * set   );


extern void          removd_c ( SpiceDouble          item,
                                SpiceCell          * set   );


extern void          removi_c ( SpiceInt             item,
                                SpiceCell          * set   );


extern void          repmc_c  ( ConstSpiceChar     * in,
                                ConstSpiceChar     * marker,
                                ConstSpiceChar     * value,
                                SpiceInt             lenout,
                                SpiceChar          * out     );


extern void          repmct_c ( ConstSpiceChar     * in,
                                ConstSpiceChar     * marker,
                                SpiceInt             value,
                                SpiceChar            strCase,
                                SpiceInt             lenout,
                                SpiceChar          * out     );


extern void          repmd_c  ( ConstSpiceChar     * in,
                                ConstSpiceChar     * marker,
                                SpiceDouble          value,
                                SpiceInt             sigdig,
                                SpiceInt             lenout,
                                SpiceChar          * out     );


extern void          repmf_c  ( ConstSpiceChar     * in,
                                ConstSpiceChar     * marker,
                                SpiceDouble          value,
                                SpiceInt             sigdig,
                                SpiceChar            format,
                                SpiceInt             lenout,
                                SpiceChar          * out     );


extern void          repmi_c  ( ConstSpiceChar     * in,
                                ConstSpiceChar     * marker,
                                SpiceInt             value,
                                SpiceInt             lenout,
                                SpiceChar          * out     );


extern void          repmot_c ( ConstSpiceChar     * in,
                                ConstSpiceChar     * marker,
                                SpiceInt             value,
                                SpiceChar            strCase,
                                SpiceInt             lenout,
                                SpiceChar          * out     );


extern void          reset_c  ( void );


extern SpiceBoolean  return_c ( void );


extern void          recsph_c ( ConstSpiceDouble    rectan[3],
                                SpiceDouble       * r,
                                SpiceDouble       * colat,
                                SpiceDouble       * lon );


extern void          rotate_c ( SpiceDouble         angle,
                                SpiceInt            iaxis,
                                SpiceDouble         mout[3][3] );


extern void          rotmat_c ( ConstSpiceDouble    m1[3][3],
                                SpiceDouble         angle,
                                SpiceInt            iaxis,
                                SpiceDouble         mout[3][3] );


extern void          rotvec_c ( ConstSpiceDouble    v1[3],
                                SpiceDouble         angle,
                                SpiceInt            iaxis,
                                SpiceDouble         vout[3] );


extern SpiceDouble   rpd_c    ( void );


extern void          rquad_c  ( SpiceDouble         a,
                                SpiceDouble         b,
                                SpiceDouble         c,
                                SpiceDouble         root1[2],
                                SpiceDouble         root2[2] );


extern void          saelgv_c ( ConstSpiceDouble    vec1  [3],
                                ConstSpiceDouble    vec2  [3],
                                SpiceDouble         smajor[3],
                                SpiceDouble         sminor[3]  );


extern void          scard_c (  SpiceInt            card,
                                SpiceCell         * cell  );


extern void          scdecd_c ( SpiceInt            sc,
                                SpiceDouble         sclkdp,
                                SpiceInt            sclklen,
                                SpiceChar         * sclkch   );


extern void          sce2s_c  ( SpiceInt            sc,
                                SpiceDouble         et,
                                SpiceInt            sclklen,
                                SpiceChar         * sclkch   );


extern void          sce2c_c  ( SpiceInt            sc,
                                SpiceDouble         et,
                                SpiceDouble       * sclkdp   );


extern void          sce2t_c  ( SpiceInt            sc,
                                SpiceDouble         et,
                                SpiceDouble       * sclkdp   );


extern void          scencd_c ( SpiceInt            sc,
                                ConstSpiceChar    * sclkch,
                                SpiceDouble       * sclkdp   );


extern void          scfmt_c  ( SpiceInt            sc,
                                SpiceDouble         ticks,
                                SpiceInt            clkstrlen,
                                SpiceChar         * clkstr    );


extern void          scpart_c ( SpiceInt            sc,
                                SpiceInt          * nparts,
                                SpiceDouble       * pstart,
                                SpiceDouble       * pstop   );


extern void          scs2e_c  ( SpiceInt            sc,
                                ConstSpiceChar    * sclkch,
                                SpiceDouble       * et      );


extern void          sct2e_c  ( SpiceInt            sc,
                                SpiceDouble         sclkdp,
                                SpiceDouble       * et      );


extern void          sctiks_c ( SpiceInt            sc,
                                ConstSpiceChar    * clkstr,
                                SpiceDouble       * ticks   );


extern void          sdiff_c  ( SpiceCell         * a,
                                SpiceCell         * b,
                                SpiceCell         * c  );


extern SpiceBoolean  set_c    ( SpiceCell          * a,
                                ConstSpiceChar     * op,
                                SpiceCell          * b  );


extern void          setmsg_c ( ConstSpiceChar    * msg );


extern void          shellc_c ( SpiceInt            ndim,
                                SpiceInt            lenvals,
                                void              * array   );


extern void          shelld_c ( SpiceInt            ndim,
                                SpiceDouble       * array   );


extern void          shelli_c ( SpiceInt            ndim,
                                SpiceInt          * array   );


extern void          sigerr_c ( ConstSpiceChar    * message );


extern void          sincpt_c ( ConstSpiceChar    * method,
                                ConstSpiceChar    * target,
                                SpiceDouble         et,
                                ConstSpiceChar    * fixref,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                ConstSpiceChar    * dref,
                                ConstSpiceDouble    dvec   [3],
                                SpiceDouble         spoint [3],
                                SpiceDouble       * trgepc,
                                SpiceDouble         srfvec [3],
                                SpiceBoolean      * found         );


extern SpiceInt      size_c   ( SpiceCell         * size );


extern SpiceDouble   spd_c    ( void );


extern void          sphcyl_c ( SpiceDouble         radius,
                                SpiceDouble         colat,
                                SpiceDouble         slon,
                                SpiceDouble       * r,
                                SpiceDouble       * lon,
                                SpiceDouble       * z );


extern void          sphlat_c ( SpiceDouble         r,
                                SpiceDouble         colat,
                                SpiceDouble         lons,
                                SpiceDouble       * radius,
                                SpiceDouble       * lon,
                                SpiceDouble       * lat   );


extern void          sphrec_c ( SpiceDouble         r,
                                SpiceDouble         colat,
                                SpiceDouble         lon,
                                SpiceDouble         rectan[3] );


extern void          spk14a_c ( SpiceInt            handle,
                                SpiceInt            ncsets,
                                ConstSpiceDouble    coeffs [],
                                ConstSpiceDouble    epochs []  );


extern void          spk14b_c ( SpiceInt            handle,
                                ConstSpiceChar    * segid,
                                SpiceInt            body,
                                SpiceInt            center,
                                ConstSpiceChar    * frame,
                                SpiceDouble         first,
                                SpiceDouble         last,
                                SpiceInt            chbdeg  );


extern void          spk14e_c ( SpiceInt            handle );


extern void          spkapo_c ( SpiceInt            targ,
                                SpiceDouble         et,
                                ConstSpiceChar    * ref,
                                ConstSpiceDouble    sobs[6],
                                ConstSpiceChar    * abcorr,
                                SpiceDouble         ptarg[3],
                                SpiceDouble       * lt        );


extern void          spkapp_c ( SpiceInt            targ,
                                SpiceDouble         et,
                                ConstSpiceChar    * ref,
                                ConstSpiceDouble    sobs   [6],
                                ConstSpiceChar    * abcorr,
                                SpiceDouble         starg  [6],
                                SpiceDouble       * lt         );


extern void          spkacs_c ( SpiceInt            targ,
                                SpiceDouble         et,
                                ConstSpiceChar    * ref,
                                ConstSpiceChar    * abcorr,
                                SpiceInt            obs,
                                SpiceDouble         starg[6],
                                SpiceDouble       * lt,
                                SpiceDouble       * dlt       );


extern void          spkaps_c ( SpiceInt            targ,
                                SpiceDouble         et,
                                ConstSpiceChar    * ref,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceDouble    stobs[6],
                                ConstSpiceDouble    accobs[6],
                                SpiceDouble         starg[6],
                                SpiceDouble       * lt,
                                SpiceDouble       * dlt      );


extern void          spkcls_c ( SpiceInt            handle );


extern void          spkcov_c ( ConstSpiceChar    * spk,
                                SpiceInt            idcode,
                                SpiceCell         * cover   );


extern void          spkcpo_c ( ConstSpiceChar    * target,
                                SpiceDouble         et,
                                ConstSpiceChar    * outref,
                                ConstSpiceChar    * refloc,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceDouble    obssta [3],
                                ConstSpiceChar    * obsctr,
                                ConstSpiceChar    * obsref,
                                SpiceDouble         state  [6],
                                SpiceDouble       * lt          );


extern void          spkcpt_c ( ConstSpiceDouble    trgpos [3],
                                ConstSpiceChar    * trgctr,
                                ConstSpiceChar    * trgref,
                                SpiceDouble         et,
                                ConstSpiceChar    * outref,
                                ConstSpiceChar    * refloc,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                SpiceDouble         state  [6],
                                SpiceDouble       * lt          );


extern void          spkcvo_c ( ConstSpiceChar    * target,
                                SpiceDouble         et,
                                ConstSpiceChar    * outref,
                                ConstSpiceChar    * refloc,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceDouble    obssta [6],
                                SpiceDouble         obsepc,
                                ConstSpiceChar    * obsctr,
                                ConstSpiceChar    * obsref,
                                SpiceDouble         state  [6],
                                SpiceDouble       * lt         );


extern void          spkcvt_c ( ConstSpiceDouble    trgsta [6],
                                SpiceDouble         trgepc,
                                ConstSpiceChar    * trgctr,
                                ConstSpiceChar    * trgref,
                                SpiceDouble         et,
                                ConstSpiceChar    * outref,
                                ConstSpiceChar    * refloc,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                SpiceDouble         state   [6],
                                SpiceDouble       * lt          );


extern void          spkez_c  ( SpiceInt            target,
                                SpiceDouble         epoch,
                                ConstSpiceChar    * frame,
                                ConstSpiceChar    * abcorr,
                                SpiceInt            observer,
                                SpiceDouble         state[6],
                                SpiceDouble       * lt       );


extern void          spkezp_c ( SpiceInt            targ,
                                SpiceDouble         et,
                                ConstSpiceChar    * ref,
                                ConstSpiceChar    * abcorr,
                                SpiceInt            obs,
                                SpiceDouble         ptarg[3],
                                SpiceDouble       * lt        );


extern void          spkezr_c ( ConstSpiceChar    * target,
                                SpiceDouble         epoch,
                                ConstSpiceChar    * frame,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * observer,
                                SpiceDouble         state[6],
                                SpiceDouble       * lt       );


extern void          spkgeo_c ( SpiceInt            targ,
                                SpiceDouble         et,
                                ConstSpiceChar    * ref,
                                SpiceInt            obs,
                                SpiceDouble         state[6],
                                SpiceDouble       * lt       );


extern void          spkgps_c ( SpiceInt            targ,
                                SpiceDouble         et,
                                ConstSpiceChar    * ref,
                                SpiceInt            obs,
                                SpiceDouble         pos[3],
                                SpiceDouble       * lt     );


extern void          spklef_c ( ConstSpiceChar    * filename,
                                SpiceInt          * handle   );


extern void          spkltc_c ( SpiceInt            targ,
                                SpiceDouble         et,
                                ConstSpiceChar    * ref,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceDouble    stobs[6],
                                SpiceDouble         starg[6],
                                SpiceDouble       * lt,
                                SpiceDouble       * dlt      );


extern void          spkobj_c ( ConstSpiceChar    * spk,
                                SpiceCell         * ids );


extern void          spkopa_c ( ConstSpiceChar    * file,
                                SpiceInt          * handle );


extern void          spkopn_c ( ConstSpiceChar    * name,
                                ConstSpiceChar    * ifname,
                                SpiceInt            ncomch,
                                SpiceInt          * handle  );


extern void          spkpds_c ( SpiceInt            body,
                                SpiceInt            center,
                                ConstSpiceChar    * frame,
                                SpiceInt            type,
                                SpiceDouble         first,
                                SpiceDouble         last,
                                SpiceDouble         descr[5] );


extern void          spkpos_c ( ConstSpiceChar    * targ,
                                SpiceDouble         et,
                                ConstSpiceChar    * ref,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obs,
                                SpiceDouble         ptarg[3],
                                SpiceDouble       * lt        );


extern void          spkpvn_c ( SpiceInt            handle,
                                ConstSpiceDouble    descr [5],
                                SpiceDouble         et,
                                SpiceInt          * ref,
                                SpiceDouble         state [6],
                                SpiceInt          * center    );


extern void          spksfs_c ( SpiceInt            body,
                                SpiceDouble         et,
                                SpiceInt            idlen,
                                SpiceInt          * handle,
                                SpiceDouble         descr [5],
                                SpiceChar         * ident,
                                SpiceBoolean      * found  );


extern void          spkssb_c ( SpiceInt            targ,
                                SpiceDouble         et,
                                ConstSpiceChar    * ref,
                                SpiceDouble         starg[6] );


extern void          spksub_c ( SpiceInt            handle,
                                SpiceDouble         descr[5],
                                ConstSpiceChar    * ident,
                                SpiceDouble         begin,
                                SpiceDouble         end,
                                SpiceInt            newh    );


extern void          spkuds_c ( ConstSpiceDouble    descr [5],
                                SpiceInt          * body,
                                SpiceInt          * center,
                                SpiceInt          * frame,
                                SpiceInt          * type,
                                SpiceDouble       * first,
                                SpiceDouble       * last,
                                SpiceInt          * begin,
                                SpiceInt          * end     );


extern void          spkuef_c ( SpiceInt             handle );


extern void          spkw02_c ( SpiceInt             handle,
                                SpiceInt             body,
                                SpiceInt             center,
                                ConstSpiceChar     * frame,
                                SpiceDouble          first,
                                SpiceDouble          last,
                                ConstSpiceChar     * segid,
                                SpiceDouble          intlen,
                                SpiceInt             n,
                                SpiceInt             polydg,
                                ConstSpiceDouble     cdata [],
                                SpiceDouble          btime     );


extern void          spkw03_c ( SpiceInt             handle,
                                SpiceInt             body,
                                SpiceInt             center,
                                ConstSpiceChar     * frame,
                                SpiceDouble          first,
                                SpiceDouble          last,
                                ConstSpiceChar     * segid,
                                SpiceDouble          intlen,
                                SpiceInt             n,
                                SpiceInt             polydg,
                                ConstSpiceDouble     cdata [],
                                SpiceDouble          btime     );


extern void          spkw05_c ( SpiceInt             handle,
                                SpiceInt             body,
                                SpiceInt             center,
                                ConstSpiceChar     * frame,
                                SpiceDouble          first,
                                SpiceDouble          last,
                                ConstSpiceChar     * segid,
                                SpiceDouble          gm,
                                SpiceInt             n,
                                ConstSpiceDouble     states [][6],
                                ConstSpiceDouble     epochs []     );


extern void          spkw08_c ( SpiceInt             handle,
                                SpiceInt             body,
                                SpiceInt             center,
                                ConstSpiceChar     * frame,
                                SpiceDouble          first,
                                SpiceDouble          last,
                                ConstSpiceChar     * segid,
                                SpiceInt             degree,
                                SpiceInt             n,
                                ConstSpiceDouble     states[][6],
                                SpiceDouble          epoch1,
                                SpiceDouble          step         );


extern void          spkw09_c ( SpiceInt             handle,
                                SpiceInt             body,
                                SpiceInt             center,
                                ConstSpiceChar     * frame,
                                SpiceDouble          first,
                                SpiceDouble          last,
                                ConstSpiceChar     * segid,
                                SpiceInt             degree,
                                SpiceInt             n,
                                ConstSpiceDouble     states[][6],
                                ConstSpiceDouble     epochs[]     );


extern void          spkw10_c ( SpiceInt             handle,
                                SpiceInt             body,
                                SpiceInt             center,
                                ConstSpiceChar     * frame,
                                SpiceDouble          first,
                                SpiceDouble          last,
                                ConstSpiceChar     * segid,
                                ConstSpiceDouble     consts [8],
                                SpiceInt             n,
                                ConstSpiceDouble     elems  [],
                                ConstSpiceDouble     epochs []  );


extern void          spkw12_c ( SpiceInt             handle,
                                SpiceInt             body,
                                SpiceInt             center,
                                ConstSpiceChar     * frame,
                                SpiceDouble          first,
                                SpiceDouble          last,
                                ConstSpiceChar     * segid,
                                SpiceInt             degree,
                                SpiceInt             n,
                                ConstSpiceDouble     states[][6],
                                SpiceDouble          epoch0,
                                SpiceDouble          step        );


extern void          spkw13_c ( SpiceInt             handle,
                                SpiceInt             body,
                                SpiceInt             center,
                                ConstSpiceChar     * frame,
                                SpiceDouble          first,
                                SpiceDouble          last,
                                ConstSpiceChar     * segid,
                                SpiceInt             degree,
                                SpiceInt             n,
                                ConstSpiceDouble     states[][6],
                                ConstSpiceDouble     epochs[]     );


extern void          spkw15_c ( SpiceInt             handle,
                                SpiceInt             body,
                                SpiceInt             center,
                                ConstSpiceChar     * frame,
                                SpiceDouble          first,
                                SpiceDouble          last,
                                ConstSpiceChar     * segid,
                                SpiceDouble          epoch,
                                ConstSpiceDouble     tp     [3],
                                ConstSpiceDouble     pa     [3],
                                SpiceDouble          p,
                                SpiceDouble          ecc,
                                SpiceDouble          j2flg,
                                ConstSpiceDouble     pv     [3],
                                SpiceDouble          gm,
                                SpiceDouble          j2,
                                SpiceDouble          radius     );


extern void          spkw17_c ( SpiceInt             handle,
                                SpiceInt             body,
                                SpiceInt             center,
                                ConstSpiceChar     * frame,
                                SpiceDouble          first,
                                SpiceDouble          last,
                                ConstSpiceChar     * segid,
                                SpiceDouble          epoch,
                                ConstSpiceDouble     eqel   [9],
                                SpiceDouble          rapol,
                                SpiceDouble          decpol      );


extern void          spkw18_c ( SpiceInt             handle,
                                SpiceSPK18Subtype    subtyp,
                                SpiceInt             body,
                                SpiceInt             center,
                                ConstSpiceChar     * frame,
                                SpiceDouble          first,
                                SpiceDouble          last,
                                ConstSpiceChar     * segid,
                                SpiceInt             degree,
                                SpiceInt             n,
                                const void         * packts,
                                ConstSpiceDouble     epochs[]     );


extern void         spkw20_c  ( SpiceInt             handle,
                                SpiceInt             body,
                                SpiceInt             center,
                                ConstSpiceChar     * frame,
                                SpiceDouble          first,
                                SpiceDouble          last,
                                ConstSpiceChar     * segid,
                                SpiceDouble          intlen,
                                SpiceInt             n,
                                SpiceInt             polydg,
                                ConstSpiceDouble     cdata[],
                                SpiceDouble          dscale,
                                SpiceDouble          tscale,
                                SpiceDouble          initjd,
                                SpiceDouble          initfr  );



extern void          srfrec_c ( SpiceInt            body,
                                SpiceDouble         lon,
                                SpiceDouble         lat,
                                SpiceDouble         rectan[3] );


extern void          srfc2s_c ( SpiceInt             code,
                                SpiceInt             bodyid,
                                SpiceInt             srflen,
                                SpiceChar          * srfstr,
                                SpiceBoolean       * isname  );


extern void          srfcss_c ( SpiceInt             code,
                                ConstSpiceChar     * bodstr,
                                SpiceInt             srflen,
                                SpiceChar          * srfstr,
                                SpiceBoolean       * isname  );


extern void          srfnrm_c ( ConstSpiceChar     * method,
                                ConstSpiceChar     * target,
                                SpiceDouble          et,
                                ConstSpiceChar     * fixref,
                                SpiceInt             npts,
                                ConstSpiceDouble     srfpts[][3],
                                SpiceDouble          normls[][3]  );


extern void          srfs2c_c ( ConstSpiceChar     * srfstr,
                                ConstSpiceChar     * bodstr,
                                SpiceInt           * code,
                                SpiceBoolean       * found  );


extern void          srfscc_c ( ConstSpiceChar     * surfce,
                                SpiceInt             bodyid,
                                SpiceInt           * surfid,
                                SpiceBoolean       * found  );


extern void          srfxpt_c ( ConstSpiceChar    * method,
                                ConstSpiceChar    * target,
                                SpiceDouble         et,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                ConstSpiceChar    * dref,
                                ConstSpiceDouble    dvec   [3],
                                SpiceDouble         spoint [3],
                                SpiceDouble       * dist,
                                SpiceDouble       * trgepc,
                                SpiceDouble         obspos [3],
                                SpiceBoolean      * found         );


extern void          ssize_c  ( SpiceInt             size,
                                SpiceCell          * cell  );


extern void          stelab_c ( ConstSpiceDouble    pobj[3],
                                ConstSpiceDouble    vobs[3],
                                SpiceDouble         appobj[3] );


extern void          stpool_c ( ConstSpiceChar    * item,
                                SpiceInt            nth,
                                ConstSpiceChar    * contin,
                                SpiceInt            lenout,
                                SpiceChar         * string,
                                SpiceInt          * size,
                                SpiceBoolean      * found  );


extern void          str2et_c ( ConstSpiceChar    * date,
                                SpiceDouble       * et   );


extern void          subpnt_c ( ConstSpiceChar    * method,
                                ConstSpiceChar    * target,
                                SpiceDouble         et,
                                ConstSpiceChar    * fixref,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                SpiceDouble         spoint [3],
                                SpiceDouble       * trgepc,
                                SpiceDouble         srfvec [3] );


extern void          subpt_c  ( ConstSpiceChar    * method,
                                ConstSpiceChar    * target,
                                SpiceDouble         et,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                SpiceDouble         spoint [3],
                                SpiceDouble       * alt         );

extern void          subpt_pl02( SpiceInt               handle,
                                 ConstSpiceDLADescr   * dladsc,
                                 ConstSpiceChar       * method,
                                 ConstSpiceChar       * target,
                                 SpiceDouble            et,
                                 ConstSpiceChar       * abcorr,
                                 ConstSpiceChar       * obsrvr,
                                 SpiceDouble            spoint [3],
                                 SpiceDouble          * alt,
                                 SpiceInt             * plateID     );


extern void          subslr_c ( ConstSpiceChar    * method,
                                ConstSpiceChar    * target,
                                SpiceDouble         et,
                                ConstSpiceChar    * fixref,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                SpiceDouble         spoint [3],
                                SpiceDouble       * trgepc,
                                SpiceDouble         srfvec [3] );


extern void          subsol_c ( ConstSpiceChar    * method,
                                ConstSpiceChar    * target,
                                SpiceDouble         et,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * obsrvr,
                                SpiceDouble         spoint[3] );


extern void          subsol_pl02 ( SpiceInt               handle,
                                   ConstSpiceDLADescr   * dladsc,
                                   ConstSpiceChar       * method,
                                   ConstSpiceChar       * target,
                                   SpiceDouble            et,
                                   ConstSpiceChar       * abcorr,
                                   ConstSpiceChar       * obsrvr,
                                   SpiceDouble            spoint [3],
                                   SpiceDouble          * dist,
                                   SpiceInt             * plateID   );


extern SpiceDouble   sumad_c  ( ConstSpiceDouble    array[],
                                SpiceInt            n        );


extern SpiceInt      sumai_c  ( ConstSpiceInt       array[],
                                SpiceInt            n        );


extern void          surfnm_c ( SpiceDouble         a,
                                SpiceDouble         b,
                                SpiceDouble         c,
                                ConstSpiceDouble    point[3],
                                SpiceDouble         normal[3] );


extern void          surfpt_c ( ConstSpiceDouble    positn[3],
                                ConstSpiceDouble    u[3],
                                SpiceDouble         a,
                                SpiceDouble         b,
                                SpiceDouble         c,
                                SpiceDouble         point[3],
                                SpiceBoolean      * found     );


extern void          surfpv_c ( ConstSpiceDouble    stvrtx[6],
                                ConstSpiceDouble    stdir [6],
                                SpiceDouble         a,
                                SpiceDouble         b,
                                SpiceDouble         c,
                                SpiceDouble         stx   [6],
                                SpiceBoolean      * found      );


extern void          swpool_c ( ConstSpiceChar    * agent,
                                SpiceInt            nnames,
                                SpiceInt            lenvals,
                                const void        * names   );


extern void          sxform_c ( ConstSpiceChar    * from,
                                ConstSpiceChar    * to,
                                SpiceDouble         et,
                                SpiceDouble         xform[6][6] );


extern void          szpool_c ( ConstSpiceChar    * name,
                                SpiceInt          * n,
                                SpiceBoolean      * found );


extern void          term_pl02 ( SpiceInt              handle,
                                 ConstSpiceDLADescr  * dladsc,
                                 ConstSpiceChar      * trmtyp,
                                 ConstSpiceChar      * source,
                                 ConstSpiceChar      * target,
                                 SpiceDouble           et,
                                 ConstSpiceChar      * fixref,
                                 ConstSpiceChar      * abcorr,
                                 ConstSpiceChar      * obsrvr,
                                 SpiceInt              npoints,
                                 SpiceDouble         * trgepc,
                                 SpiceDouble           obspos   [3],
                                 SpiceDouble           trmpts   [][3],
                                 SpiceInt              plateIDs []     );


extern void          termpt_c ( ConstSpiceChar    * method,
                                ConstSpiceChar    * ilusrc,
                                ConstSpiceChar    * target,
                                SpiceDouble         et,
                                ConstSpiceChar    * fixref,
                                ConstSpiceChar    * abcorr,
                                ConstSpiceChar    * corloc,
                                ConstSpiceChar    * obsrvr,
                                ConstSpiceDouble    refvec[3],
                                SpiceDouble         rolstp,
                                SpiceInt            ncuts,
                                SpiceDouble         schstp,
                                SpiceDouble         soltol,
                                SpiceInt            maxn,
                                SpiceInt            npts  [],
                                SpiceDouble         points[][3],
                                SpiceDouble         epochs[],
                                SpiceDouble         tangts[][3]  );


extern void          timdef_c ( ConstSpiceChar    * action,
                                ConstSpiceChar    * item,
                                SpiceInt            lenout,
                                SpiceChar         * value );


extern void          timout_c ( SpiceDouble         et,
                                ConstSpiceChar    * pictur,
                                SpiceInt            lenout,
                                SpiceChar         * output );


extern void          tipbod_c ( ConstSpiceChar    * ref,
                                SpiceInt            body,
                                SpiceDouble         et,
                                SpiceDouble         tipm[3][3] );


extern void          tisbod_c ( ConstSpiceChar    * ref,
                                SpiceInt            body,
                                SpiceDouble         et,
                                SpiceDouble         tsipm[6][6] );


extern ConstSpiceChar  * tkvrsn_c ( ConstSpiceChar    * item );


extern void          tparse_c ( ConstSpiceChar    * string,
                                SpiceInt            lenout,
                                SpiceDouble       * sp2000,
                                SpiceChar         * errmsg  );


extern void          tpictr_c ( ConstSpiceChar    * sample,
                                SpiceInt            lenpictur,
                                SpiceInt            lenerror,
                                SpiceChar         * pictur,
                                SpiceBoolean      * ok,
                                SpiceChar         * error     );


extern SpiceDouble   trace_c  ( ConstSpiceDouble    matrix[3][3] );


extern void          trcdep_c ( SpiceInt          * depth );


extern void          trcnam_c ( SpiceInt            index,
                                SpiceInt            namelen,
                                SpiceChar         * name     );


extern void          trcoff_c ( void );


extern void          tsetyr_c ( SpiceInt            year );


extern SpiceDouble   twopi_c  ( void );


extern void          twovec_c ( ConstSpiceDouble    axdef  [3],
                                SpiceInt            indexa,
                                ConstSpiceDouble    plndef [3],
                                SpiceInt            indexp,
                                SpiceDouble         mout   [3][3] );


extern SpiceDouble   tyear_c  ( void );


extern void          ucase_c  ( SpiceChar         * in,
                                SpiceInt            lenout,
                                SpiceChar         * out    );


extern void          ucrss_c  ( ConstSpiceDouble    v1[3],
                                ConstSpiceDouble    v2[3],
                                SpiceDouble         vout[3] );


extern void          uddc_c ( void       ( * udfunc ) ( SpiceDouble    x,
                                                        SpiceDouble  * value ),

                              SpiceDouble    x,
                              SpiceDouble    dx,
                              SpiceBoolean * isdecr );


extern void          uddf_c ( void       ( * udfunc ) ( SpiceDouble    x,
                                                        SpiceDouble  * value ),
                              SpiceDouble    x,
                              SpiceDouble    dx,
                              SpiceDouble  * deriv );


extern void          udf_c   ( SpiceDouble   x,
                               SpiceDouble * value );


extern void          union_c  ( SpiceCell          * a,
                                SpiceCell          * b,
                                SpiceCell          * c  );


extern SpiceDouble   unitim_c ( SpiceDouble         epoch,
                                ConstSpiceChar    * insys,
                                ConstSpiceChar    * outsys );


extern void          unload_c ( ConstSpiceChar   * file );


extern void          unorm_c  ( ConstSpiceDouble    v1[3],
                                SpiceDouble         vout[3],
                                SpiceDouble       * vmag    );


extern void          unormg_c ( ConstSpiceDouble  * v1,
                                SpiceInt            ndim,
                                SpiceDouble       * vout,
                                SpiceDouble       * vmag );


extern void          utc2et_c ( ConstSpiceChar    * utcstr,
                                SpiceDouble       * et   );


extern void          vadd_c   ( ConstSpiceDouble    v1[3],
                                ConstSpiceDouble    v2[3],
                                SpiceDouble         vout[3] ) ;


extern void          vaddg_c  ( ConstSpiceDouble  * v1,
                                ConstSpiceDouble  * v2,
                                SpiceInt            ndim,
                                SpiceDouble       * vout );


extern void          valid_c  ( SpiceInt             size,
                                SpiceInt             n,
                                SpiceCell          * a    );


extern void          vcrss_c  ( ConstSpiceDouble    v1[3],
                                ConstSpiceDouble    v2[3],
                                SpiceDouble         vout[3] );


extern SpiceDouble   vdist_c  ( ConstSpiceDouble    v1[3],
                                ConstSpiceDouble    v2[3] );


extern SpiceDouble   vdistg_c ( ConstSpiceDouble  * v1,
                                ConstSpiceDouble  * v2,
                                SpiceInt            ndim );


extern SpiceDouble   vdot_c   ( ConstSpiceDouble    v1[3],
                                ConstSpiceDouble    v2[3] );

extern SpiceDouble   vdotg_c  ( ConstSpiceDouble  * v1,
                                ConstSpiceDouble  * v2,
                                SpiceInt            ndim );

extern void          vequ_c   ( ConstSpiceDouble    vin[3],
                                SpiceDouble         vout[3] );


extern void          vequg_c  ( ConstSpiceDouble  * vin,
                                SpiceInt            ndim,
                                SpiceDouble       * vout );


extern void          vhat_c   ( ConstSpiceDouble    v1  [3],
                                SpiceDouble         vout[3] );


extern void          vhatg_c  ( ConstSpiceDouble  * v1,
                                SpiceInt            ndim,
                                SpiceDouble       * vout  );


extern void          vlcom_c  ( SpiceDouble         a,
                                ConstSpiceDouble    v1[3],
                                SpiceDouble         b,
                                ConstSpiceDouble    v2[3],
                                SpiceDouble         sum[3] );


extern void          vlcom3_c ( SpiceDouble         a,
                                ConstSpiceDouble    v1[3],
                                SpiceDouble         b,
                                ConstSpiceDouble    v2[3],
                                SpiceDouble         c,
                                ConstSpiceDouble    v3[3],
                                SpiceDouble         sum[3] );


extern void          vlcomg_c ( SpiceInt            n,
                                SpiceDouble         a,
                                ConstSpiceDouble  * v1,
                                SpiceDouble         b,
                                ConstSpiceDouble  * v2,
                                SpiceDouble       * sum );


extern void          vminug_c ( ConstSpiceDouble  * vin,
                                SpiceInt            ndim,
                                SpiceDouble       * vout );


extern void          vminus_c ( ConstSpiceDouble    v1[3],
                                SpiceDouble         vout[3] );


extern SpiceDouble   vnorm_c  ( ConstSpiceDouble    v1[3] );


extern SpiceDouble   vnormg_c ( ConstSpiceDouble  * v1,
                                SpiceInt            ndim );


extern void          vpack_c  ( SpiceDouble         x,
                                SpiceDouble         y,
                                SpiceDouble         z,
                                SpiceDouble         v[3] );


extern void          vperp_c  ( ConstSpiceDouble    a[3],
                                ConstSpiceDouble    b[3],
                                SpiceDouble         p[3] );


extern void          vprjp_c  ( ConstSpiceDouble    vin   [3],
                                ConstSpicePlane   * plane,
                                SpiceDouble         vout  [3] );


extern void          vprjpi_c ( ConstSpiceDouble    vin    [3],
                                ConstSpicePlane   * projpl,
                                ConstSpicePlane   * invpl,
                                SpiceDouble         vout   [3],
                                SpiceBoolean      * found       );


extern void          vproj_c  ( ConstSpiceDouble    a[3],
                                ConstSpiceDouble    b[3],
                                SpiceDouble         p[3] );


extern SpiceDouble   vrel_c   ( ConstSpiceDouble    v1[3],
                                ConstSpiceDouble    v2[3]  );


extern SpiceDouble   vrelg_c  ( ConstSpiceDouble  * v1,
                                ConstSpiceDouble  * v2,
                                SpiceInt            ndim  );


extern void          vrotv_c  ( ConstSpiceDouble    v[3],
                                ConstSpiceDouble    axis[3],
                                SpiceDouble         theta,
                                SpiceDouble         r[3] );


extern void          vscl_c   ( SpiceDouble         s,
                                ConstSpiceDouble    v1[3],
                                SpiceDouble         vout[3] );


extern void          vsclg_c  ( SpiceDouble         s,
                                ConstSpiceDouble  * v1,
                                SpiceInt            ndim,
                                SpiceDouble       * vout  );


extern SpiceDouble   vsep_c   ( ConstSpiceDouble    v1[3],
                                ConstSpiceDouble    v2[3] );


extern void          vsub_c   ( ConstSpiceDouble    v1[3],
                                ConstSpiceDouble    v2[3],
                                SpiceDouble         vout[3] );


extern void          vsubg_c  ( ConstSpiceDouble  * v1,
                                ConstSpiceDouble  * v2,
                                SpiceInt            ndim,
                                SpiceDouble       * vout  );


extern SpiceDouble   vsepg_c  ( ConstSpiceDouble  * v1,
                                ConstSpiceDouble  * v2,
                                SpiceInt            ndim );


extern SpiceDouble   vtmv_c   ( ConstSpiceDouble    v1     [3],
                                ConstSpiceDouble    matrix [3][3],
                                ConstSpiceDouble    v2     [3]    );


extern SpiceDouble   vtmvg_c  ( const void        * v1,
                                const void        * matrix,
                                const void        * v2,
                                SpiceInt            nrow,
                                SpiceInt            ncol          );


extern void          vupack_c ( ConstSpiceDouble    v[3],
                                SpiceDouble       * x,
                                SpiceDouble       * y,
                                SpiceDouble       * z     );

extern SpiceBoolean  vzero_c  ( ConstSpiceDouble     v[3] );


extern SpiceBoolean  vzerog_c ( ConstSpiceDouble  * v,
                                SpiceInt            ndim );

extern SpiceInt      wncard_c ( SpiceCell          * window );

extern void          wncomd_c ( SpiceDouble          left,
                                SpiceDouble          right,
                                SpiceCell          * window,
                                SpiceCell          * result );


extern void          wncond_c ( SpiceDouble          left,
                                SpiceDouble          right,
                                SpiceCell          * window );


extern void          wndifd_c ( SpiceCell          * a,
                                SpiceCell          * b,
                                 SpiceCell         * c  );


extern SpiceBoolean  wnelmd_c ( SpiceDouble          point,
                                SpiceCell          * window );


extern void          wnexpd_c ( SpiceDouble          left,
                                SpiceDouble          right,
                                SpiceCell          * window );


extern void          wnextd_c ( SpiceChar            side,
                                SpiceCell          * window );


extern void          wnfetd_c ( SpiceCell          * window,
                                SpiceInt             n,
                                SpiceDouble        * left,
                                SpiceDouble        * right   );


extern void          wnfild_c ( SpiceDouble          sml,
                                SpiceCell          * window );


extern void          wnfltd_c ( SpiceDouble          sml,
                                SpiceCell          * window );


extern SpiceBoolean  wnincd_c ( SpiceDouble          left,
                                SpiceDouble          right,
                                SpiceCell          * window  );


extern void          wninsd_c ( SpiceDouble          left,
                                SpiceDouble          right,
                                SpiceCell          * window );


extern void          wnintd_c ( SpiceCell          * a,
                                SpiceCell          * b,
                                SpiceCell          * c  );


extern SpiceBoolean  wnreld_c ( SpiceCell          * a,
                                ConstSpiceChar     * op,
                                SpiceCell          * b   );


extern void          wnsumd_c ( SpiceCell          * window,
                                SpiceDouble        * meas,
                                SpiceDouble        * avg,
                                SpiceDouble        * stddev,
                                SpiceInt           * shortest,
                                SpiceInt           * longest   );


extern void          wnunid_c ( SpiceCell          * a,
                                SpiceCell          * b,
                                SpiceCell          * c  );


extern void          wnvald_c ( SpiceInt             size,
                                SpiceInt             n,
                                SpiceCell          * window );



extern void          xf2eul_c ( ConstSpiceDouble     xform  [6][6],
                                SpiceInt             axisa,
                                SpiceInt             axisb,
                                SpiceInt             axisc,
                                SpiceDouble          eulang [6],
                                SpiceBoolean       * unique         );


extern void          xf2rav_c ( ConstSpiceDouble     xform [6][6],
                                SpiceDouble          rot   [3][3],
                                SpiceDouble          av    [3]     );

extern void          xfmsta_c ( ConstSpiceDouble     input_state  [6],
                                ConstSpiceChar    *  input_coord_sys,
                                ConstSpiceChar    *  output_coord_sys,
                                ConstSpiceChar    *  body,
                                SpiceDouble          output_state [6] );

extern void          xpose_c  ( ConstSpiceDouble    m1  [3][3],
                                SpiceDouble         mout[3][3] );


extern void          xpose6_c ( ConstSpiceDouble    m1  [6][6],
                                SpiceDouble         mout[6][6] );


extern void          xposeg_c ( const void        * matrix,
                                SpiceInt            nrow,
                                SpiceInt            ncol,
                                void              * xposem );


extern void          zzgetcml_c( SpiceInt          * argc,
                                 SpiceChar       *** argv,
                                 SpiceBoolean        init );


extern SpiceBoolean  zzgfgeth_c ( void );


extern void          zzgfsavh_c( SpiceBoolean        status );


extern void          zzsynccl_c( SpiceTransDir       xdir,
                                 SpiceCell         * cell );


#endif
