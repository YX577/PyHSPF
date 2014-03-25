C     from CILIQ.INC   
C     IMPLND module common
C            IQUAL section
C
C     + + + PARAMETERS + + +
      INTEGER    MXQUAL,MXQAL2
      PARAMETER (MXQUAL = 10) 
      PARAMETER (MXQAL2 = 20) 
C
      COMMON/SCRTCH/AIRTFG,SNOWFG,IWATFG,SLDFG,IWGFG,IQALFG,DUMZ,
     $              PFLAG,BFLAG,DUMY,PIVL,BIVL,PYREND,BYREND,IMPPFG,
     $              IMPBFG,UUNITS,IUNITS,OUNITS,PUNIT,BUNIT,MESSU,
     $              MSGFL,LSNO,LSID,DELT,DELT60,DUMX,NDAY,NDAYS,DUMW,
     $              HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,EBYRFG,YR,
     $              MON,DAY,HR,MIN,IVL,IVL1,PIVLNO,BIVLNO,NXTMON,
     $              SPAFP,SPAKND,SPIVL,SPOPNO,SPOUT,SPNUND,DUMGEN,
     $              DUM1,PRECFP,DUM2,SNIF,DUM3,IWIF,DUM4,SLIFP,DUM5,
     $              IWCF1,DUM6,SOFP,DUM7,SLDIF,SLSDFP,DUM8,SDCF1,
     $              SOSDFP,DUM9,LIFAC,DUM10,IQIF,SLIQSP,SLIQOX,SLIQSX,
     $              IQAFFP,IQACFP,NQUAL,NQSD,NQOF,IQADFG,QSDFG,QSDFP,
     $              VPFWFG,QSOFG,QSOFP,VQOFG,QUALID,QTYID,IQAFXM,
     $              IQACNM,POTFWM,ACQOPM,REMQOM,WSFAC,SQO,POTFW,ACQOP,
     $              REMQOP,SOQSP,SQOFP,SOQSPX,IQCF1,IQCF2,SOQOC,
     $              SOQUAL,SOQC,IQCF3,IQCF4,IQADEP,SOQSFP,SOQOFP,
     $              SOQOCX,SOQFP,SOQCFP,IQADDX,IQADWX,IQADPX,DUMIMP
      INTEGER       AIRTFG,SNOWFG,IWATFG,SLDFG,IWGFG,IQALFG,DUMZ(7),
     $              PFLAG(6),BFLAG(6),DUMY(12),PIVL,BIVL,PYREND,
     $              BYREND,IMPPFG,IMPBFG,UUNITS,IUNITS,OUNITS,
     $              PUNIT(2),BUNIT(2),MESSU,MSGFL,LSNO,LSID(5),
     $              DUMX(1),NDAY(12),NDAYS,DUMW(2),HRFG,DAYFG,STFG,
     $              EDAYFG,EMONFG,EPYRFG,EBYRFG,YR,MON,DAY,HR,MIN,IVL,
     $              IVL1,PIVLNO,BIVLNO,NXTMON,SPAFP,SPAKND,SPIVL,
     $              SPOPNO,SPOUT,SPNUND,DUMGEN(13),PRECFP,SLIFP,SOFP,
     $              SLSDFP,SOSDFP,SLIQOX(MXQUAL),SLIQSX(MXQUAL),
     $              IQAFFP(MXQUAL),IQACFP(MXQUAL),NQUAL,NQSD,NQOF,
     $              IQADFG(MXQAL2),QSDFG(MXQUAL),QSDFP(MXQUAL),
     $              VPFWFG(MXQUAL),QSOFG(MXQUAL),QSOFP(MXQUAL),
     $              VQOFG(MXQUAL),QUALID(3,MXQUAL),QTYID(1,MXQUAL),
     $              SQOFP(MXQUAL),SOQSPX(MXQUAL),SOQSFP(MXQUAL),
     $              SOQOFP(MXQUAL),SOQOCX(MXQUAL),SOQFP(MXQUAL),
     $              SOQCFP(MXQUAL),IQADDX(MXQUAL),IQADWX(MXQUAL),
     $              IQADPX(MXQUAL)
      REAL          DELT,DELT60,SNIF(5),IWIF(5),IWCF1(4,5),SLDIF(5),
     $              SDCF1(5),LIFAC(2),IQIF(MXQUAL,5),SLIQSP(MXQUAL),
     $              IQAFXM(12,MXQUAL),IQACNM(12,MXQUAL),
     $              POTFWM(12,MXQUAL),ACQOPM(12,MXQUAL),
     $              REMQOM(12,MXQUAL),WSFAC(MXQUAL),SQO(MXQUAL),
     $              POTFW(MXQUAL),ACQOP(MXQUAL),REMQOP(MXQUAL),
     $              SOQSP(MXQUAL),IQCF1(MXQUAL,5),IQCF2(MXQUAL,5),
     $              SOQOC(MXQUAL),SOQUAL(MXQUAL),SOQC(MXQUAL),
     $              IQCF3(MXQUAL,5),IQCF4(MXQUAL,5),IQADEP(MXQUAL)
      INTEGER       DUM1(3),DUM2(28),DUM3(170),DUM4,DUM5(53),DUM6(13),
     $              DUM7(3),DUM8(34),DUM9(32),DUM10(27),DUMIMP(16254)
C
      EQUIVALENCE   (ASVEC,AIRTFG),(UNIT,UUNITS),(TIMFG,HRFG),
     $              (DATIM,YR),(PREC,SNIF),(SURLI,IWIF(1)),
     $              (SURO,IWCF1(2,1)),(SLSLD,SLDIF(1)),
     $              (SOSLD,SDCF1(1)),(SLIQO,IQIF(1,1)),
     $              (SOQS,IQCF1(1,1)),(SOQO,IQCF2(1,1)),
     $              (IQADDR,IQCF3(1,1)),(IQADWT,IQCF4(1,1))
      INTEGER       ASVEC(6),UNIT(7),TIMFG(6),DATIM(5)
      REAL          PREC,SURLI,SURO,SLSLD,SOSLD,SLIQO(MXQUAL),
     $              SOQS(MXQUAL),SOQO(MXQUAL),IQADDR(MXQUAL),
     $              IQADWT(MXQUAL)
C     end byte:  72000 word:18000