#include <cstdlib>
#include "plugin.h"

const char *const VgmStreamPlugin::exts[] =
{
  "2dx9",
  "2pfs",

  "aax",
  "acm",
  "adm",
  "adp",
  "adpcm",
  "ads",
  "adx",
  "afc",
  "agsc",
  "ahx",
  "aifc",
  "aix",
  "amts",
  "as4",
  "asd",
  "asf",
  "asr",
  "ass",
  "ast",
  "aud",
  "aus",

  "baka",
  "baf",
  "bar",
  "bcstm",
  "bcwav",
  "bfwav",
  "bfwavnsmbu",
  "bg00",
  "bgw",
  "bh2pcm",
  "bmdx",
  "bms",
  "bns",
  "bnsf",
  "bo2",
  "brstm",
  "brstmspm",
  "btsnd",
  "bvg",

  "caf",
  "capdsp",
  "cbd2",
  "ccc",
  "cfn",
  "ckd",
  "cnk",
  "cps",

  "dcs",
  "de2",
  "ddsp",
  "dmsg",
  "dsp",
  "dspw",
  "dtk",
  "dvi",
  "dxh",

  "eam",
  "emff",
  "enth",

  "fag",
  "filp",
  "fsb",
  "fwav",

  "gbts",
  "gca",
  "gcm",
  "gcub",
  "gcw",
  "genh",
  "gms",
  "gsb",

  "hgc1",
  "his",
  "hlwav",
  "hps",
  "hsf",
  "hwas",

  "iab",
  "idsp",
  "idvi",
  "ikm",
  "ild",
  "int",
  "isd",
  "ivaud",
  "ivag",
  "ivb",

  "joe",
  "jstm",

  "kces",
  "kcey",
  "khv",
  "klbs",
  "kovs",
  "kraw",

  "leg",
  "logg",
  "lpcm",
  "lps",
  "lsf",
  "lwav",

  "matx",
  "mca",
  "mcg",
  "mi4",
  "mib",
  "mic",
  "mihb",
  "mpdsp",
  "mpds",
  "msa",
  "msf",
  "mss",
  "msvp",
  "mtaf",
  "mus",
  "musc",
  "musx",
  "mwv",
  "mxst",
  "myspd",

  "ndp",
  "ngca",
  "npsf",
  "nus3bank",
  "nwa",

  "omu",
  "otm",

  "p2bt",
  "p3d",
  "past",
  "pcm",
  "pdt",
  "pnb",
  "pos",
  "ps2stm",
  "psh",
  "psnd",
  "psw",

  "ras",
  "raw",
  "rkv",
  "rnd",
  "rrds",
  "rsd",
  "rsf",
  "rstm",
  "rvws",
  "rwar",
  "rwav",
  "rws",
  "rwsd",
  "rwx",
  "rxw",

  "s14",
  "sab",
  "sad",
  "sap",
  "sc",
  "scd",
  "sck",
  "sd9",
  "sdt",
  "seg",
  "sf0",
  "sfl",
  "sfs",
  "sfx",
  "sgb",
  "sgd",
  "sl3",
  "sli",
  "smp",
  "smpl",
  "snd",
  "snds",
  "sng",
  "sns",
  "spd",
  "spm",
  "sps",
  "spsd",
  "spw",
  "ss2",
  "ss3",
  "ss7",
  "ssm",
  "sss",
  "ster",
  "stma",
  "str",
  "strm",
  "sts",
  "stx",
  "svag",
  "svs",
  "swav",
  "swd",

  "tec",
  "thp",
  "tk1",
  "tk5",
  "tra",
  "tun",
  "tydsp",

  "um3",

  "vag",
  "vas",
  "vawx",
  "vb",
  "vbk",
  "vgs",
  "vgv",
  "vig",
  "vms",
  "voi",
  "vpk",
  "vs",
  "vsf",

  "waa",
  "wac",
  "wad",
  "wam",
  "wavm",
  "wb",
  "wii",
  "wmus",
  "wp2",
  "wpd",
  "wsd",
  "wsi",
  "wvs",

  "xa",
  "xa2",
  "xa30",
  "xau",
  "xmu",
  "xnb",
  "xsf",
  "xss",
  "xvag",
  "xvas",
  "xwav",
  "xwb",

  "ydsp",
  "ymf",

  "zsd",
  "zwdsp",
  /* terminator */
  NULL
};
