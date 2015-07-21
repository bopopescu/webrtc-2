/* ANSI-C code produced by genperf */
/* Command-line: genperf ../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf ../../../../out_mac/Debug/obj/chromium/src/third_party/yasm/yasm.gen/third_party/yasm/x86insn_gas.c */
#line 10 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
struct insnprefix_parse_data;
static const struct insnprefix_parse_data *
insnprefix_gas_find(const char *key, size_t len)
{
  static const struct insnprefix_parse_data pd[2021] = {
#line 490 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fnstsww",	fnstsw_insn,	2,	SUF_W,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1890 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovsxdq",	sse4m64_insn,	4,	SUF_Z,	0x25,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 348 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"data32",	NULL,	X86_OPERSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 1974 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vsqrtss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x51,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 953 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovmskb",	pmovmskb_insn,	6,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 149 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovge",	cmovcc_insn,	3,	SUF_Z,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 1848 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphsubw",	ssse3_insn,	5,	SUF_Z,	0x05,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1328 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vandnpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x55,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1532 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmadd231ps",	vfma_ps_insn,	2,	SUF_Z,	0xB8,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1351 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeq_usss",	ssecmp_32_insn,	4,	SUF_Z,	0x18,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1015 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psllq",	pshift_insn,	4,	SUF_Z,	0xF3,	0x73,	0x06,	0,	CPU_MMX,	0,	0},
#line 180 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnc",	cmovcc_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 493 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fprem1",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF5,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 1528 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmadd213ps",	vfma_ps_insn,	2,	SUF_Z,	0xA8,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1482 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtph2ps",	avx_cvtph2ps_insn,	4,	SUF_Z,	0x66,	0x13,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1090 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rex64y",	NULL,	X86_REX>>8,	0x4A,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 313 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtpi2ps",	cvt_xmm_mm_ps_insn,	1,	SUF_Z,	0x2A,	0,	0,	0,	CPU_SSE,	0,	0},
#line 769 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movntdqa",	movntdqa_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1727 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcmpgtw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x65,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 516 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fstps",	fstp_insn,	4,	SUF_S,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1022 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psrlw",	pshift_insn,	4,	SUF_Z,	0xD1,	0x71,	0x02,	0,	CPU_MMX,	0,	0},
#line 60 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bextrq",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Q,	0x00,	0x38,	0xF7,	ONLY_64|ONLY_AVX,	CPU_BMI1,	0,	0},
#line 16 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"adc",	arith_insn,	22,	SUF_Z,	0x10,	0x02,	0,	0,	0,	0,	0},
#line 553 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ibts",	ibts_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_Obs,	CPU_Undoc},
#line 529 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ftst",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE4,	0,	0,	CPU_FPU,	0,	0},
#line 197 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnle",	cmovcc_insn,	3,	SUF_Z,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 1432 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnlepd",	ssecmp_128_insn,	3,	SUF_Z,	0x06,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 829 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"notb",	f6_insn,	4,	SUF_B,	0x02,	0,	0,	0,	0,	0,	0},
#line 115 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"clc",	onebyte_insn,	1,	SUF_Z,	0xF8,	0,	0,	0,	0,	0,	0},
#line 703 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopq",	loopq_insn,	4,	SUF_Z,	0x02,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1422 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpngt_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x1A,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1083 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"retw",	retnf_insn,	6,	SUF_Z,	0xC2,	0x10,	0,	0,	0,	0,	0},
#line 545 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"getsec",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x37,	0,	0,	CPU_SMX,	0,	0},
#line 796 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movsxw",	movszx_insn,	5,	SUF_W,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 1246 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sldtw",	sldtmsw_insn,	6,	SUF_W,	0x00,	0x00,	0,	0,	CPU_286,	0,	0},
#line 823 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"negb",	f6_insn,	4,	SUF_B,	0x03,	0,	0,	0,	0,	0,	0},
#line 600 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jcxz",	jcxz_insn,	2,	SUF_Z,	0x10,	0,	0,	0,	0,	0,	0},
#line 1403 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneq_osss",	ssecmp_32_insn,	4,	SUF_Z,	0x1C,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1378 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpgtsd",	ssecmp_64_insn,	4,	SUF_Z,	0x0E,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 366 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"dword",	NULL,	X86_OPERSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 26 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"addq",	arith_insn,	22,	SUF_Q,	0x00,	0x00,	0,	ONLY_64,	0,	0,	0},
#line 103 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btw",	bittest_insn,	6,	SUF_W,	0xA3,	0x04,	0,	0,	CPU_386,	0,	0},
#line 306 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"crc32w",	crc32_insn,	5,	SUF_W,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 1469 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpunordps",	ssecmp_128_insn,	3,	SUF_Z,	0x03,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1507 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvttss2si",	cvt_rx_xmm32_insn,	4,	SUF_Z,	0xF3,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1433 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnleps",	ssecmp_128_insn,	3,	SUF_Z,	0x06,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1255 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"smswl",	sldtmsw_insn,	6,	SUF_L,	0x04,	0x01,	0,	0,	CPU_386,	0,	0},
#line 503 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsetpm",	twobyte_insn,	1,	SUF_Z,	0xDB,	0xE4,	0,	0,	CPU_286,	CPU_FPU,	CPU_Obs},
#line 77 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bsf",	bsfr_insn,	3,	SUF_Z,	0xBC,	0,	0,	0,	CPU_386,	0,	0},
#line 1973 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vsqrtsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x51,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 915 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfrcp",	now3d_insn,	1,	SUF_Z,	0x96,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 135 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovbeq",	cmovcc_insn,	3,	SUF_Q,	0x06,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 63 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"blendvpd",	sse4xmm0_insn,	2,	SUF_Z,	0x15,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1311 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"umov",	umov_insn,	6,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 1917 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpshlb",	amd_vpshift_insn,	2,	SUF_Z,	0x94,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1567 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsubpd",	fma_128_256_insn,	4,	SUF_Z,	0x6D,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1294 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sysexit",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x35,	0,	NOT_64,	CPU_686,	CPU_Priv,	0},
#line 532 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fucomip",	fcom2_insn,	2,	SUF_Z,	0xDF,	0xE8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 536 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fxam",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE5,	0,	0,	CPU_FPU,	0,	0},
#line 905 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfacc",	now3d_insn,	1,	SUF_Z,	0xAE,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1499 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtss2siq",	cvt_rx_xmm32_insn,	4,	SUF_Q,	0xF3,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 513 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fstl",	fst_insn,	3,	SUF_L,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 815 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mulsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x59,	0,	0,	CPU_SSE2,	0,	0},
#line 1117 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rsdc",	rsdc_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 214 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnsq",	cmovcc_insn,	3,	SUF_Q,	0x09,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1810 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vperm2f128",	vperm2f128_insn,	1,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 241 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovzl",	cmovcc_insn,	3,	SUF_L,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 865 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pandn",	mmxsse2_insn,	2,	SUF_Z,	0xDF,	0,	0,	0,	CPU_MMX,	0,	0},
#line 479 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fninit",	twobyte_insn,	1,	SUF_Z,	0xDB,	0xE3,	0,	0,	CPU_FPU,	0,	0},
#line 346 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"das",	onebyte_insn,	1,	SUF_Z,	0x2F,	0,	0,	NOT_64,	0,	0,	0},
#line 1254 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"smsw",	sldtmsw_insn,	6,	SUF_Z,	0x04,	0x01,	0,	0,	CPU_286,	0,	0},
#line 305 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"crc32q",	crc32_insn,	5,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_SSE42,	0,	0},
#line 132 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovb",	cmovcc_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 385 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcmovbe",	fcmovcc_insn,	1,	SUF_Z,	0xDA,	0xD0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 291 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpxchg8b",	cmpxchg8b_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_586,	0,	0},
#line 704 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopw",	loopw_insn,	4,	SUF_Z,	0x02,	0x10,	0,	NOT_64,	0,	0,	0},
#line 2023 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xorw",	arith_insn,	22,	SUF_W,	0x30,	0x06,	0,	0,	0,	0,	0},
#line 1603 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfrczpd",	vfrc_pdps_insn,	2,	SUF_Z,	0x01,	0,	0,	0,	CPU_XOP,	0,	0},
#line 208 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnp",	cmovcc_insn,	3,	SUF_Z,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 673 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lidtw",	twobytemem_insn,	1,	SUF_W,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1509 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvttss2siq",	cvt_rx_xmm32_insn,	4,	SUF_Q,	0xF3,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1013 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pslld",	pshift_insn,	4,	SUF_Z,	0xF2,	0x72,	0x06,	0,	CPU_MMX,	0,	0},
#line 160 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovlew",	cmovcc_insn,	3,	SUF_W,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 1570 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsubss",	fma_128_m32_insn,	3,	SUF_Z,	0x6E,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1911 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vprotw",	vprot_insn,	3,	SUF_Z,	0x01,	0,	0,	0,	CPU_XOP,	0,	0},
#line 67 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"blsiw",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_W,	0x00,	0xF3,	0x03,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1313 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"unpckhps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x15,	0,	0,	CPU_SSE,	0,	0},
#line 1047 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pushfl",	onebyte_insn,	1,	SUF_Z,	0x9C,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 280 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpsl",	onebyte_insn,	1,	SUF_Z,	0xA7,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1340 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeq_ospd",	ssecmp_128_insn,	3,	SUF_Z,	0x10,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 983 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popa",	onebyte_insn,	1,	SUF_Z,	0x61,	0x00,	0,	NOT_64,	CPU_186,	0,	0},
#line 720 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lssw",	lfgss_insn,	3,	SUF_W,	0xB2,	0,	0,	0,	CPU_386,	0,	0},
#line 1264 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sscaq",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 412 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ffree",	ffree_insn,	1,	SUF_Z,	0xDD,	0,	0,	0,	CPU_FPU,	0,	0},
#line 43 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"andb",	arith_insn,	22,	SUF_B,	0x20,	0x04,	0,	0,	0,	0,	0},
#line 418 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ficoml",	fiarith_insn,	2,	SUF_L,	0x02,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 832 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"notw",	f6_insn,	4,	SUF_W,	0x02,	0,	0,	0,	0,	0,	0},
#line 869 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pavgusb",	now3d_insn,	1,	SUF_Z,	0xBF,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1501 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvttpd2dqx",	avx_cvt_xmm128_x_insn,	1,	SUF_Z,	0x66,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 216 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnz",	cmovcc_insn,	3,	SUF_Z,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 850 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"packssdw",	mmxsse2_insn,	2,	SUF_Z,	0x6B,	0,	0,	0,	CPU_MMX,	0,	0},
#line 508 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fstcw",	fstcw_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 469 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fldln2",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xED,	0,	0,	CPU_FPU,	0,	0},
#line 1151 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setb",	setcc_insn,	1,	SUF_Z,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 264 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpnleps",	ssecmp_128_insn,	3,	SUF_Z,	0x06,	0,	0,	0,	CPU_SSE,	0,	0},
#line 759 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movlhps",	movhllhps_insn,	2,	SUF_Z,	0x16,	0,	0,	0,	CPU_SSE,	0,	0},
#line 455 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fisubrl",	fiarith_insn,	2,	SUF_L,	0x05,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1935 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsravd",	vpshiftv_vexw0_avx2_insn,	2,	SUF_Z,	0x46,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 302 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"crc32",	crc32_insn,	5,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 580 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"invd",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x08,	0,	0,	CPU_486,	CPU_Priv,	0},
#line 1105 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ror",	shift_insn,	16,	SUF_Z,	0x01,	0,	0,	0,	0,	0,	0},
#line 28 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"addr32",	NULL,	X86_ADDRSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 1081 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"retl",	retnf_insn,	6,	SUF_Z,	0xC2,	0,	0,	NOT_64,	0,	0,	0},
#line 1265 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sscaw",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x10,	0,	0,	0,	0,	0},
#line 533 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fucomp",	fcom2_insn,	2,	SUF_Z,	0xDD,	0xE8,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 165 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnae",	cmovcc_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 425 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fidivr",	fiarith_insn,	2,	SUF_Z,	0x07,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1326 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vaesimc",	aesimc_insn,	1,	SUF_Z,	0x38,	0xDB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 13 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"aad",	aadm_insn,	2,	SUF_Z,	0x01,	0,	0,	NOT_64,	0,	0,	0},
#line 1847 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphsubsw",	ssse3_insn,	5,	SUF_Z,	0x07,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 880 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pcmpeqq",	sse4_insn,	2,	SUF_Z,	0x29,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 390 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcmovnu",	fcmovcc_insn,	1,	SUF_Z,	0xDB,	0xD8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1228 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shrdq",	shlrd_insn,	9,	SUF_Q,	0xAC,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 598 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jbe",	jcc_insn,	9,	SUF_Z,	0x06,	0,	0,	0,	0,	0,	0},
#line 679 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lldtw",	prot286_insn,	1,	SUF_W,	0x02,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 886 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pcmpgtq",	sse4_insn,	2,	SUF_Z,	0x37,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 586 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"invpcid",	invpcid_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_INVPCID,	CPU_Priv},
#line 1922 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpshufd",	xmm_xmm128_imm_256avx2_insn,	2,	SUF_Z,	0x66,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1664 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovups",	movau_insn,	6,	SUF_Z,	0x00,	0x10,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1658 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovq",	vmovq_insn,	5,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 818 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mulx",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Z,	0xF2,	0x38,	0xF6,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1730 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomb",	vpcom_imm_insn,	1,	SUF_Z,	0xCC,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1978 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vsubsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 567 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"incb",	incdec_insn,	6,	SUF_B,	0x40,	0x00,	0,	0,	0,	0,	0},
#line 1370 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpgesd",	ssecmp_64_insn,	4,	SUF_Z,	0x0D,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1799 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomtrueq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 1091 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rex64yz",	NULL,	X86_REX>>8,	0x4B,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1751 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgeub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 1550 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsub132ss",	vfma_ss_insn,	2,	SUF_Z,	0x9B,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 870 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pavgw",	mmxsse2_insn,	2,	SUF_Z,	0xE3,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1332 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vblendpd",	sse4imm_256_insn,	4,	SUF_Z,	0x0D,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1792 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomneud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1553 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsub213sd",	vfma_sd_insn,	2,	SUF_Z,	0xAB,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1161 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setge",	setcc_insn,	1,	SUF_Z,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 659 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lfsl",	lfgss_insn,	3,	SUF_L,	0xB4,	0,	0,	0,	CPU_386,	0,	0},
#line 1333 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vblendps",	sse4imm_256_insn,	4,	SUF_Z,	0x0C,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1835 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphaddubq",	vphaddsub_insn,	1,	SUF_Z,	0xD3,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1647 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovlps",	movhlp_insn,	3,	SUF_Z,	0x00,	0x12,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1355 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeqss",	ssecmp_32_insn,	4,	SUF_Z,	0x00,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2027 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xsaveopt64",	xsaveopt64_insn,	1,	SUF_Z,	0x06,	0x0F,	0xAE,	ONLY_64,	CPU_XSAVEOPT,	0,	0},
#line 473 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fldz",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xEE,	0,	0,	CPU_FPU,	0,	0},
#line 276 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpps",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x00,	0xC2,	0,	0,	CPU_SSE,	0,	0},
#line 1027 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psubsiw",	cyrixmmx_insn,	1,	SUF_Z,	0x55,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 221 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovol",	cmovcc_insn,	3,	SUF_L,	0x00,	0,	0,	0,	CPU_686,	0,	0},
#line 1324 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vaesenc",	aes_insn,	2,	SUF_Z,	0x38,	0xDC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 517 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fstpt",	fldstpt_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1535 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmaddpd",	fma_128_256_insn,	4,	SUF_Z,	0x69,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1820 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpextrq",	pextrq_insn,	1,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 94 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btq",	bittest_insn,	6,	SUF_Q,	0xA3,	0x04,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1312 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"unpckhpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x15,	0,	0,	CPU_SSE2,	0,	0},
#line 1513 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vdivss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 86 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bswapl",	bswap_insn,	2,	SUF_L,	0,	0,	0,	0,	CPU_486,	0,	0},
#line 1299 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"testb",	test_insn,	20,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 321 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtsi2sd",	cvt_xmm_rmx_insn,	6,	SUF_Z,	0xF2,	0x2A,	0,	0,	CPU_SSE2,	0,	0},
#line 652 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"leavew",	onebyte_insn,	1,	SUF_Z,	0xC9,	0x10,	0x00,	0,	CPU_186,	0,	0},
#line 1092 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rex64z",	NULL,	X86_REX>>8,	0x49,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 157 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovle",	cmovcc_insn,	3,	SUF_Z,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 30 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"addsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x58,	0,	0,	CPU_SSE2,	0,	0},
#line 1111 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rorxl",	vex_gpr_reg_rm_0F_imm8_insn,	2,	SUF_L,	0xF2,	0x3A,	0xF0,	ONLY_64|ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1237 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shufps",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x00,	0xC6,	0,	0,	CPU_SSE,	0,	0},
#line 1014 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pslldq",	pslrldq_insn,	4,	SUF_Z,	0x07,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1533 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmadd231sd",	vfma_sd_insn,	2,	SUF_Z,	0xB9,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1125 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"salb",	shift_insn,	16,	SUF_B,	0x04,	0,	0,	0,	0,	0,	0},
#line 1024 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psubd",	mmxsse2_insn,	2,	SUF_Z,	0xFA,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1257 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"smsww",	sldtmsw_insn,	6,	SUF_W,	0x04,	0x01,	0,	0,	CPU_286,	0,	0},
#line 623 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jns",	jcc_insn,	9,	SUF_Z,	0x09,	0,	0,	0,	0,	0,	0},
#line 651 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"leaveq",	onebyte_insn,	1,	SUF_Z,	0xC9,	0x00,	0x40,	ONLY_64,	0,	0,	0},
#line 192 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovngew",	cmovcc_insn,	3,	SUF_W,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 1054 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"qword",	NULL,	X86_OPERSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 275 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmppd",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x66,	0xC2,	0,	0,	CPU_SSE2,	0,	0},
#line 916 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfrcpit1",	now3d_insn,	1,	SUF_Z,	0xA6,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 831 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"notq",	f6_insn,	4,	SUF_Q,	0x02,	0,	0,	ONLY_64,	0,	0,	0},
#line 1906 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpor",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 466 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fldl2e",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xEA,	0,	0,	CPU_FPU,	0,	0},
#line 354 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"decw",	incdec_insn,	6,	SUF_W,	0x48,	0x01,	0,	0,	0,	0,	0},
#line 1926 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsignd",	ssse3_insn,	5,	SUF_Z,	0x0A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1745 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomfalseuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 933 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pinsrq",	pinsrq_insn,	2,	SUF_Z,	0,	0,	0,	ONLY_64,	CPU_SSE41,	0,	0},
#line 1729 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcmpistrm",	sse4pcmpstr_insn,	1,	SUF_Z,	0x62,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1454 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpsd",	cmpsd_insn,	5,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2029 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xsha1",	padlock_insn,	1,	SUF_Z,	0xC8,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 1271 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"stosb",	onebyte_insn,	1,	SUF_Z,	0xAA,	0x00,	0,	0,	0,	0,	0},
#line 64 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"blendvps",	sse4xmm0_insn,	2,	SUF_Z,	0x14,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1768 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomleud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 1353 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeqps",	ssecmp_128_insn,	3,	SUF_Z,	0x00,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1741 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomfalsed",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 1278 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"strw",	str_insn,	4,	SUF_W,	0,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1737 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomequq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1643 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovhpd",	movhlp_insn,	3,	SUF_Z,	0x66,	0x16,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1414 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnge_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x19,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 396 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcomp",	fcom_insn,	6,	SUF_Z,	0xD8,	0x03,	0,	0,	CPU_FPU,	0,	0},
#line 1569 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsubsd",	fma_128_m64_insn,	3,	SUF_Z,	0x6F,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1719 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcmpeqd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x76,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 153 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovgl",	cmovcc_insn,	3,	SUF_L,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 945 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmaxud",	sse4_insn,	2,	SUF_Z,	0x3F,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 798 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movups",	movau_insn,	6,	SUF_Z,	0x00,	0x10,	0x01,	0,	CPU_SSE,	0,	0},
#line 254 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpless",	ssecmp_32_insn,	4,	SUF_Z,	0x02,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 319 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtsd2siq",	cvt_rx_xmm64_insn,	4,	SUF_Q,	0xF2,	0x2D,	0,	ONLY_64,	CPU_SSE2,	0,	0},
#line 336 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvttsd2sil",	cvt_rx_xmm64_insn,	4,	SUF_L,	0xF2,	0x2C,	0,	0,	CPU_SSE2,	0,	0},
#line 1826 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpgatherqd",	gather_32x_32y_128_insn,	2,	SUF_Z,	0x91,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 794 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movsx",	movszx_insn,	5,	SUF_Z,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 1663 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovupd",	movau_insn,	6,	SUF_Z,	0x66,	0x10,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 167 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnaeq",	cmovcc_insn,	3,	SUF_Q,	0x02,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1037 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"punpckhwd",	mmxsse2_insn,	2,	SUF_Z,	0x69,	0,	0,	0,	CPU_MMX,	0,	0},
#line 938 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmaddubsw",	ssse3_insn,	5,	SUF_Z,	0x04,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1716 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpclmulqdq",	pclmulqdq_insn,	2,	SUF_Z,	0x3A,	0x44,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 653 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"leaw",	lea_insn,	3,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 2028 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xsetbv",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xD1,	0,	CPU_386,	CPU_Priv,	CPU_XSAVE},
#line 1667 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmptrst",	vmxtwobytemem_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_P4,	0,	0},
#line 1644 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovhps",	movhlp_insn,	3,	SUF_Z,	0x00,	0x16,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 525 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsubrl",	farith_insn,	7,	SUF_L,	0xE0,	0xE8,	0x05,	0,	CPU_FPU,	0,	0},
#line 1154 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setbeb",	setcc_insn,	1,	SUF_B,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 922 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"phaddd",	ssse3_insn,	5,	SUF_Z,	0x02,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1862 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmacsswd",	vpma_insn,	1,	SUF_Z,	0x86,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1651 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovmskps",	movmsk_insn,	4,	SUF_Z,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 240 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovz",	cmovcc_insn,	3,	SUF_Z,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 1008 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pshuflw",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0xF2,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 708 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopzw",	loopw_insn,	4,	SUF_Z,	0x01,	0x10,	0,	NOT_64,	0,	0,	0},
#line 290 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpxchg16b",	cmpxchg16b_insn,	1,	SUF_Z,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 804 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movzwq",	movszx_insn,	5,	SUF_W,	0xB6,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1346 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeq_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x08,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1542 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmaddsub213ps",	vfma_ps_insn,	2,	SUF_Z,	0xA6,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 696 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopnel",	loopl_insn,	4,	SUF_Z,	0x00,	0x20,	0,	0,	0,	0,	0},
#line 1060 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rcpps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x53,	0,	0,	CPU_SSE,	0,	0},
#line 397 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcompl",	fcom_insn,	6,	SUF_L,	0xD8,	0x03,	0,	0,	CPU_FPU,	0,	0},
#line 1988 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vxorpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x57,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 252 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpleps",	ssecmp_128_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_SSE,	0,	0},
#line 952 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pminuw",	sse4_insn,	2,	SUF_Z,	0x3A,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1360 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpfalsepd",	ssecmp_128_insn,	3,	SUF_Z,	0x0B,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 170 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnaq",	cmovcc_insn,	3,	SUF_Q,	0x06,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 668 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lgsq",	lfgss_insn,	3,	SUF_Q,	0xB5,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 453 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fisubl",	fiarith_insn,	2,	SUF_L,	0x04,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 289 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpxchg",	cmpxchgxadd_insn,	4,	SUF_Z,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 320 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtsd2ss",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 927 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"phsubsw",	ssse3_insn,	5,	SUF_Z,	0x07,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1404 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneq_uspd",	ssecmp_128_insn,	3,	SUF_Z,	0x14,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 329 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtss2sil",	cvt_rx_xmm32_insn,	4,	SUF_L,	0xF3,	0x2D,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 1755 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 369 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"enterl",	enter_insn,	3,	SUF_L,	0,	0,	0,	NOT_64,	CPU_186,	0,	0},
#line 806 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movzxb",	movszx_insn,	5,	SUF_B,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 1410 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x04,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 90 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btcl",	bittest_insn,	6,	SUF_L,	0xBB,	0x07,	0,	0,	CPU_386,	0,	0},
#line 709 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lret",	retnf_insn,	6,	SUF_Z,	0xCA,	0,	0,	0,	0,	0,	0},
#line 602 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jecxz",	jcxz_insn,	2,	SUF_Z,	0x20,	0,	0,	0,	CPU_386,	0,	0},
#line 735 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"minps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5D,	0,	0,	CPU_SSE,	0,	0},
#line 837 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"orps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x56,	0,	0,	CPU_SSE,	0,	0},
#line 1613 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vhsubpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x7D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1972 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vsqrtps",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x51,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 627 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jpe",	jcc_insn,	9,	SUF_Z,	0x0A,	0,	0,	0,	0,	0,	0},
#line 446 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fists",	fiarith_insn,	2,	SUF_S,	0x02,	0xDB,	0,	0,	CPU_FPU,	0,	0},
#line 1534 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmadd231ss",	vfma_ss_insn,	2,	SUF_Z,	0xB9,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 398 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcompp",	twobyte_insn,	1,	SUF_Z,	0xDE,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 1409 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneqps",	ssecmp_128_insn,	3,	SUF_Z,	0x04,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1200 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setpeb",	setcc_insn,	1,	SUF_B,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 1038 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"punpcklbw",	mmxsse2_insn,	2,	SUF_Z,	0x60,	0,	0,	0,	CPU_MMX,	0,	0},
#line 35 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"adword",	NULL,	X86_ADDRSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 1206 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setzb",	setcc_insn,	1,	SUF_B,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 669 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lgsw",	lfgss_insn,	3,	SUF_W,	0xB5,	0,	0,	0,	CPU_386,	0,	0},
#line 1530 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmadd213ss",	vfma_ss_insn,	2,	SUF_Z,	0xA9,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 716 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lslw",	larlsl_insn,	6,	SUF_W,	0x03,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 142 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovcq",	cmovcc_insn,	3,	SUF_Q,	0x02,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1392 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpltpd",	ssecmp_128_insn,	3,	SUF_Z,	0x01,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1124 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sal",	shift_insn,	16,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 1878 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpminsb",	ssse3_insn,	5,	SUF_Z,	0x38,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1365 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpge_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x1D,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1204 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setsb",	setcc_insn,	1,	SUF_B,	0x08,	0,	0,	0,	CPU_386,	0,	0},
#line 1065 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rcrq",	shift_insn,	16,	SUF_Q,	0x03,	0,	0,	ONLY_64,	0,	0,	0},
#line 2020 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xorpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x57,	0,	0,	CPU_SSE2,	0,	0},
#line 683 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loadall286",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x05,	0,	0,	CPU_286,	CPU_Undoc,	0},
#line 315 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtps2pd",	xmm_xmm64_insn,	4,	SUF_Z,	0x00,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 202 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnlq",	cmovcc_insn,	3,	SUF_Q,	0x0D,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 571 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"inl",	in_insn,	12,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 2018 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xorb",	arith_insn,	22,	SUF_B,	0x30,	0x06,	0,	0,	0,	0,	0},
#line 1116 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"roundss",	sse4m32imm_insn,	4,	SUF_Z,	0x0A,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 749 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movbe",	movbe_insn,	6,	SUF_Z,	0,	0,	0,	0,	CPU_MOVBE,	0,	0},
#line 1182 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setngeb",	setcc_insn,	1,	SUF_B,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 1436 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnlt_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x15,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2021 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xorps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x57,	0,	0,	CPU_SSE,	0,	0},
#line 996 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popw",	pop_insn,	23,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 323 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtsi2sdq",	cvt_xmm_rmx_insn,	6,	SUF_Q,	0xF2,	0x2A,	0,	ONLY_64,	CPU_SSE2,	0,	0},
#line 1208 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sgdt",	twobytemem_insn,	1,	SUF_Z,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 91 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btcq",	bittest_insn,	6,	SUF_Q,	0xBB,	0x07,	0,	ONLY_64,	CPU_386,	0,	0},
#line 630 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"js",	jcc_insn,	9,	SUF_Z,	0x08,	0,	0,	0,	0,	0,	0},
#line 1399 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneq_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x0C,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1732 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomeqb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1804 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomtruew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 1731 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomd",	vpcom_imm_insn,	1,	SUF_Z,	0xCE,	0,	0,	0,	CPU_XOP,	0,	0},
#line 33 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"addsubps",	xmm_xmm128_insn,	2,	SUF_Z,	0xF2,	0xD0,	0,	0,	CPU_SSE3,	0,	0},
#line 1505 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvttsd2sil",	cvt_rx_xmm64_insn,	4,	SUF_L,	0xF2,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 978 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmvgezb",	cyrixmmx_insn,	1,	SUF_Z,	0x5C,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1681 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmxoff",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC4,	0,	CPU_P4,	0,	0},
#line 1900 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmulhrsw",	ssse3_insn,	5,	SUF_Z,	0x0B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1939 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsrlq",	vpshift_insn,	8,	SUF_Z,	0xD3,	0x73,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 589 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"invvpidq",	eptvpid_insn,	2,	SUF_Q,	0x01,	0,	0,	ONLY_64,	CPU_EPTVPID,	0,	0},
#line 960 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovsxwd",	sse4m64_insn,	4,	SUF_Z,	0x23,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 767 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movmskpsq",	movmsk_insn,	4,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_SSE,	0,	0},
#line 1901 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmulhuw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1384 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmplepd",	ssecmp_128_insn,	3,	SUF_Z,	0x02,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1897 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovzxwd",	sse4m64_insn,	4,	SUF_Z,	0x33,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 721 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ltr",	prot286_insn,	1,	SUF_Z,	0x03,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 66 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"blsil",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_L,	0x00,	0xF3,	0x03,	ONLY_64|ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1279 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sub",	arith_insn,	22,	SUF_Z,	0x28,	0x05,	0,	0,	0,	0,	0},
#line 633 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lar",	larlsl_insn,	6,	SUF_Z,	0x02,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1985 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vunpckhps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x15,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 624 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jnz",	jcc_insn,	9,	SUF_Z,	0x05,	0,	0,	0,	0,	0,	0},
#line 1765 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomled",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 500 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsavel",	twobytemem_insn,	1,	SUF_L,	0x06,	0x9B,	0xDD,	0,	CPU_FPU,	0,	0},
#line 14 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"aam",	aadm_insn,	2,	SUF_Z,	0x00,	0,	0,	NOT_64,	0,	0,	0},
#line 229 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovpl",	cmovcc_insn,	3,	SUF_L,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 1335 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vblendvps",	avx_sse4xmm0_insn,	2,	SUF_Z,	0x4A,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1839 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphadduwq",	vphaddsub_insn,	1,	SUF_Z,	0xD7,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1518 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"verw",	prot286_insn,	1,	SUF_Z,	0x05,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 779 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movq2dq",	movq2dq_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1585 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmaddsd",	fma_128_m64_insn,	3,	SUF_Z,	0x7B,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1587 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsub132pd",	vfma_pd_insn,	2,	SUF_Z,	0x9E,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 968 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmuldq",	sse4_insn,	2,	SUF_Z,	0x28,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1722 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcmpestri",	sse4pcmpstr_insn,	1,	SUF_Z,	0x61,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1896 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovzxdq",	sse4m64_insn,	4,	SUF_Z,	0x35,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1951 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vptest",	sse4_insn,	2,	SUF_Z,	0x17,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1784 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomneqd",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 923 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"phaddsw",	ssse3_insn,	5,	SUF_Z,	0x03,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 113 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cdq",	onebyte_insn,	1,	SUF_Z,	0x99,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1096 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rexxz",	NULL,	X86_REX>>8,	0x45,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1405 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneq_usps",	ssecmp_128_insn,	3,	SUF_Z,	0x14,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1863 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmacssww",	vpma_insn,	1,	SUF_Z,	0x85,	0,	0,	0,	CPU_XOP,	0,	0},
#line 907 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfcmpeq",	now3d_insn,	1,	SUF_Z,	0xB0,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1670 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmreadq",	vmxmemrd_insn,	2,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_P4,	0,	0},
#line 877 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pclmulqdq",	pclmulqdq_insn,	2,	SUF_Z,	0x3A,	0x44,	0,	0,	CPU_AVX,	0,	0},
#line 1451 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpordss",	ssecmp_32_insn,	4,	SUF_Z,	0x07,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 130 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovaq",	cmovcc_insn,	3,	SUF_Q,	0x07,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 842 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"outl",	out_insn,	12,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 892 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pdepq",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Q,	0xF2,	0x38,	0xF5,	ONLY_64|ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1088 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rex64xyz",	NULL,	X86_REX>>8,	0x4F,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1908 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vprotb",	vprot_insn,	3,	SUF_Z,	0x00,	0,	0,	0,	CPU_XOP,	0,	0},
#line 274 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpordss",	ssecmp_32_insn,	4,	SUF_Z,	0x07,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1940 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsrlvd",	vpshiftv_vexw0_avx2_insn,	2,	SUF_Z,	0x45,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1952 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpunpckhbw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x68,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 995 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popq",	pop_insn,	23,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 568 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"incl",	incdec_insn,	6,	SUF_L,	0x40,	0x00,	0,	0,	CPU_386,	0,	0},
#line 1789 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomnequw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 411 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"femms",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x0E,	0,	0,	CPU_3DNow,	0,	0},
#line 1942 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsrlw",	vpshift_insn,	8,	SUF_Z,	0xD1,	0x71,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1157 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sete",	setcc_insn,	1,	SUF_Z,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 1684 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vorps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x56,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 730 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"maxps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5F,	0,	0,	CPU_SSE,	0,	0},
#line 1829 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphaddbq",	vphaddsub_insn,	1,	SUF_Z,	0xC3,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1883 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpminuw",	ssse3_insn,	5,	SUF_Z,	0x3A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1950 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsubw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 404 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fdivl",	farith_insn,	7,	SUF_L,	0xF8,	0xF0,	0x06,	0,	CPU_FPU,	0,	0},
#line 161 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovll",	cmovcc_insn,	3,	SUF_L,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 1140 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sbbl",	arith_insn,	22,	SUF_L,	0x18,	0x03,	0,	0,	CPU_386,	0,	0},
#line 560 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"imulb",	imul_insn,	19,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 1781 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomned",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1402 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneq_ossd",	ssecmp_64_insn,	4,	SUF_Z,	0x1C,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 205 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnol",	cmovcc_insn,	3,	SUF_L,	0x01,	0,	0,	0,	CPU_686,	0,	0},
#line 452 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fisub",	fiarith_insn,	2,	SUF_Z,	0x04,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 85 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bswap",	bswap_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_486,	0,	0},
#line 1267 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"std",	onebyte_insn,	1,	SUF_Z,	0xFD,	0,	0,	0,	0,	0,	0},
#line 1146 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"scasw",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x10,	0,	0,	0,	0,	0},
#line 1141 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sbbq",	arith_insn,	22,	SUF_Q,	0x18,	0x03,	0,	ONLY_64,	0,	0,	0},
#line 1361 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpfalseps",	ssecmp_128_insn,	3,	SUF_Z,	0x0B,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 590 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"inw",	in_insn,	12,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 237 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovsl",	cmovcc_insn,	3,	SUF_L,	0x08,	0,	0,	0,	CPU_686,	0,	0},
#line 41 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"aeskeygenassist",	aes_imm_insn,	1,	SUF_Z,	0x3A,	0xDF,	0,	0,	CPU_AES,	0,	0},
#line 1139 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sbbb",	arith_insn,	22,	SUF_B,	0x18,	0x03,	0,	0,	0,	0,	0},
#line 986 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popcnt",	cnt_insn,	3,	SUF_Z,	0xB8,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 762 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movmskpd",	movmsk_insn,	4,	SUF_Z,	0x66,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1388 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmplt_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x11,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1668 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmread",	vmxmemrd_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 954 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovmskbl",	pmovmskb_insn,	6,	SUF_L,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1699 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpaddw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFD,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 178 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnbq",	cmovcc_insn,	3,	SUF_Q,	0x03,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 362 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"divss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5E,	0,	0,	CPU_SSE,	0,	0},
#line 592 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"iretl",	onebyte_insn,	1,	SUF_Z,	0xCF,	0x20,	0,	0,	CPU_386,	0,	0},
#line 436 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fimuls",	fiarith_insn,	2,	SUF_S,	0x01,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1930 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsllq",	vpshift_insn,	8,	SUF_Z,	0xF3,	0x73,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 501 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsaves",	twobytemem_insn,	1,	SUF_S,	0x06,	0x9B,	0xDD,	0,	CPU_FPU,	0,	0},
#line 1097 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rexy",	NULL,	X86_REX>>8,	0x42,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1445 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpord_sps",	ssecmp_128_insn,	3,	SUF_Z,	0x17,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1106 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rorb",	shift_insn,	16,	SUF_B,	0x01,	0,	0,	0,	0,	0,	0},
#line 1740 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomfalseb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 127 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovaeq",	cmovcc_insn,	3,	SUF_Q,	0x03,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 819 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mulxl",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_L,	0xF2,	0x38,	0xF6,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 750 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movd",	movd_insn,	8,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_MMX,	0},
#line 1390 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmplt_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x11,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1654 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovntdq",	movnt_insn,	2,	SUF_Z,	0x66,	0xE7,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 38 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"aesenc",	aes_insn,	2,	SUF_Z,	0x38,	0xDC,	0,	0,	CPU_AVX,	0,	0},
#line 2013 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xcryptecb",	padlock_insn,	1,	SUF_Z,	0xC8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 456 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fisubrs",	fiarith_insn,	2,	SUF_S,	0x05,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1724 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcmpgtb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x64,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1736 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomequd",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 775 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movntq",	movntq_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1898 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovzxwq",	sse4m32_insn,	4,	SUF_Z,	0x34,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 124 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmova",	cmovcc_insn,	3,	SUF_Z,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 1212 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shl",	shift_insn,	16,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 1606 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfrczss",	vfrczss_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1573 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmadd132sd",	vfma_sd_insn,	2,	SUF_Z,	0x9D,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 345 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"daa",	onebyte_insn,	1,	SUF_Z,	0x27,	0,	0,	NOT_64,	0,	0,	0},
#line 451 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fisttps",	fildstp_insn,	4,	SUF_S,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 74 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bound",	bound_insn,	2,	SUF_Z,	0,	0,	0,	NOT_64,	CPU_186,	0,	0},
#line 1239 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sidtl",	twobytemem_insn,	1,	SUF_L,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1514 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vdppd",	sse4imm_insn,	2,	SUF_Z,	0x41,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1980 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vtestpd",	sse4_insn,	2,	SUF_Z,	0x0F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 847 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pabsb",	ssse3_insn,	5,	SUF_Z,	0x1C,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1104 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rolw",	shift_insn,	16,	SUF_W,	0x00,	0,	0,	0,	0,	0,	0},
#line 429 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fild",	fildstp_insn,	4,	SUF_Z,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 1831 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphaddd",	ssse3_insn,	5,	SUF_Z,	0x02,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1642 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovhlps",	movhllhps_insn,	2,	SUF_Z,	0x12,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 413 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ffreep",	ffree_insn,	1,	SUF_Z,	0xDF,	0,	0,	0,	CPU_686,	CPU_FPU,	CPU_Undoc},
#line 636 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"larw",	larlsl_insn,	6,	SUF_W,	0x02,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1686 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpabsd",	avx2_ssse3_2op_insn,	2,	SUF_Z,	0x1E,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 325 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtsi2ssl",	cvt_xmm_rmx_insn,	6,	SUF_L,	0xF3,	0x2A,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 542 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fxtract",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF4,	0,	0,	CPU_FPU,	0,	0},
#line 1676 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmulsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 39 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"aesenclast",	aes_insn,	2,	SUF_Z,	0x38,	0xDD,	0,	0,	CPU_AVX,	0,	0},
#line 595 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ja",	jcc_insn,	9,	SUF_Z,	0x07,	0,	0,	0,	0,	0,	0},
#line 729 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"maxpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5F,	0,	0,	CPU_SSE2,	0,	0},
#line 1266 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"stc",	onebyte_insn,	1,	SUF_Z,	0xF9,	0,	0,	0,	0,	0,	0},
#line 355 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"div",	div_insn,	8,	SUF_Z,	0x06,	0,	0,	0,	0,	0,	0},
#line 448 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fisttpl",	fildstp_insn,	4,	SUF_L,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 1683 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vorpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x56,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 122 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"clts",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x06,	0,	0,	CPU_286,	CPU_Priv,	0},
#line 168 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnaew",	cmovcc_insn,	3,	SUF_W,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 209 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnpl",	cmovcc_insn,	3,	SUF_L,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 338 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvttss2si",	cvt_rx_xmm32_insn,	4,	SUF_Z,	0xF3,	0x2C,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 1632 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vminss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1345 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeq_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x08,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1188 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnob",	setcc_insn,	1,	SUF_B,	0x01,	0,	0,	0,	CPU_386,	0,	0},
#line 199 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnleq",	cmovcc_insn,	3,	SUF_Q,	0x0F,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 836 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"orpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x56,	0,	0,	CPU_SSE2,	0,	0},
#line 1757 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgtd",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 1662 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovss",	movss_insn,	4,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1148 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setab",	setcc_insn,	1,	SUF_B,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 134 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovbel",	cmovcc_insn,	3,	SUF_L,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 107 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"call",	call_insn,	30,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1371 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpgess",	ssecmp_32_insn,	4,	SUF_Z,	0x0D,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 702 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopnzw",	loopw_insn,	4,	SUF_Z,	0x00,	0x10,	0,	NOT_64,	0,	0,	0},
#line 1196 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setob",	setcc_insn,	1,	SUF_B,	0x00,	0,	0,	0,	CPU_386,	0,	0},
#line 1438 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnlt_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x15,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1153 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setbe",	setcc_insn,	1,	SUF_Z,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 1823 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpextrwq",	pextrw_insn,	7,	SUF_Q,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1995 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"wrfsbase",	fs_gs_base_insn,	2,	SUF_Z,	0x02,	0,	0,	ONLY_64,	CPU_FSGSBASE,	0,	0},
#line 1231 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shrq",	shift_insn,	16,	SUF_Q,	0x05,	0,	0,	ONLY_64,	0,	0,	0},
#line 1502 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvttpd2dqy",	avx_cvt_xmm128_y_insn,	1,	SUF_Z,	0x66,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 764 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movmskpdq",	movmsk_insn,	4,	SUF_Q,	0x66,	0,	0,	ONLY_64,	CPU_SSE2,	0,	0},
#line 374 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"f2xm1",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF0,	0,	0,	CPU_FPU,	0,	0},
#line 1356 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpfalse_ospd",	ssecmp_128_insn,	3,	SUF_Z,	0x1B,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 591 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"iret",	onebyte_insn,	1,	SUF_Z,	0xCF,	0,	0,	0,	0,	0,	0},
#line 129 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmoval",	cmovcc_insn,	3,	SUF_L,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 1025 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psubq",	mmxsse2_insn,	2,	SUF_Z,	0xFB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1802 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomtrueuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 1771 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomlew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 181 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovncl",	cmovcc_insn,	3,	SUF_L,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 73 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"blsrw",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_W,	0x00,	0xF3,	0x01,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1373 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpgt_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x1E,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1602 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsubss",	fma_128_m32_insn,	3,	SUF_Z,	0x7E,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1836 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphaddubw",	vphaddsub_insn,	1,	SUF_Z,	0xD1,	0,	0,	0,	CPU_XOP,	0,	0},
#line 615 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jnc",	jcc_insn,	9,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 1565 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsubaddpd",	fma_128_256_insn,	4,	SUF_Z,	0x5F,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1884 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovmskb",	pmovmskb_insn,	6,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1487 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtsd2sil",	cvt_rx_xmm64_insn,	4,	SUF_L,	0xF2,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 350 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"dec",	incdec_insn,	6,	SUF_Z,	0x48,	0x01,	0,	0,	0,	0,	0},
#line 1661 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovsldup",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x12,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 475 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fmull",	farith_insn,	7,	SUF_L,	0xC8,	0xC8,	0x01,	0,	CPU_FPU,	0,	0},
#line 1887 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovsxbd",	sse4m32_insn,	4,	SUF_Z,	0x21,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 918 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfrsqit1",	now3d_insn,	1,	SUF_Z,	0xA7,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 69 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"blsmskl",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_L,	0x00,	0xF3,	0x02,	ONLY_64|ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1329 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vandnps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x55,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1629 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vminpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1314 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"unpcklpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x14,	0,	0,	CPU_SSE2,	0,	0},
#line 1295 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sysret",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x07,	0,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 825 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"negq",	f6_insn,	4,	SUF_Q,	0x03,	0,	0,	ONLY_64,	0,	0,	0},
#line 688 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lodsw",	onebyte_insn,	1,	SUF_Z,	0xAD,	0x10,	0,	0,	0,	0,	0},
#line 1302 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"testw",	test_insn,	20,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 1747 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomfalsew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 906 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfadd",	now3d_insn,	1,	SUF_Z,	0x9E,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1155 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setc",	setcc_insn,	1,	SUF_Z,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 225 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovpe",	cmovcc_insn,	3,	SUF_Z,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 1358 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpfalse_ossd",	ssecmp_64_insn,	4,	SUF_Z,	0x1B,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 384 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcmovb",	fcmovcc_insn,	1,	SUF_Z,	0xDA,	0xC0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1796 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomq",	vpcom_imm_insn,	1,	SUF_Z,	0xCF,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1838 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphadduwd",	vphaddsub_insn,	1,	SUF_Z,	0xD6,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1523 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmadd132pd",	vfma_pd_insn,	2,	SUF_Z,	0x98,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 307 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtdq2pd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF3,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 1310 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ud2",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x0B,	0,	0,	CPU_286,	0,	0},
#line 2017 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xor",	arith_insn,	22,	SUF_Z,	0x30,	0x06,	0,	0,	0,	0,	0},
#line 118 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"clgi",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xDD,	0,	CPU_SVM,	0,	0},
#line 1969 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vshufpd",	xmm_xmm128_imm_256_insn,	3,	SUF_Z,	0x66,	0xC6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 375 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fabs",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE1,	0,	0,	CPU_FPU,	0,	0},
#line 1450 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpordsd",	ssecmp_64_insn,	4,	SUF_Z,	0x07,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1256 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"smswq",	sldtmsw_insn,	6,	SUF_Q,	0x04,	0x01,	0,	ONLY_64,	CPU_286,	0,	0},
#line 1904 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmullw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xD5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1330 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vandpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x54,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1359 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpfalse_osss",	ssecmp_32_insn,	4,	SUF_Z,	0x1B,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1749 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomged",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 919 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfrsqrt",	now3d_insn,	1,	SUF_Z,	0x97,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1688 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpackssdw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x6B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 719 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lssq",	lfgss_insn,	3,	SUF_Q,	0xB2,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1695 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpaddsb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1853 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpinsrw",	pinsrw_insn,	9,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 857 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"paddsb",	mmxsse2_insn,	2,	SUF_Z,	0xEC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 220 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovo",	cmovcc_insn,	3,	SUF_Z,	0x00,	0,	0,	0,	CPU_686,	0,	0},
#line 309 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtpd2dq",	xmm_xmm128_insn,	2,	SUF_Z,	0xF2,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 1517 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"verrw",	prot286_insn,	1,	SUF_W,	0x04,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 387 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcmovnb",	fcmovcc_insn,	1,	SUF_Z,	0xDB,	0xC0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1309 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ud1",	twobyte_insn,	1,	SUF_Z,	0x0F,	0xB9,	0,	0,	CPU_286,	CPU_Undoc,	0},
#line 1725 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcmpgtd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 42 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"and",	arith_insn,	22,	SUF_Z,	0x20,	0x04,	0,	0,	0,	0,	0},
#line 1448 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpordpd",	ssecmp_128_insn,	3,	SUF_Z,	0x07,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1700 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpalignr",	sse4imm_256avx2_insn,	4,	SUF_Z,	0x0F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1536 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmaddps",	fma_128_256_insn,	4,	SUF_Z,	0x68,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1149 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setae",	setcc_insn,	1,	SUF_Z,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1702 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpandn",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 316 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtps2pi",	cvt_mm_xmm64_insn,	2,	SUF_Z,	0x2D,	0,	0,	0,	CPU_SSE,	0,	0},
#line 867 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"paveb",	cyrixmmx_insn,	1,	SUF_Z,	0x50,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1207 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sfence",	threebyte_insn,	1,	SUF_Z,	0x0F,	0xAE,	0xF8,	0,	CPU_P3,	0,	0},
#line 1023 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psubb",	mmxsse2_insn,	2,	SUF_Z,	0xF8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 314 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtps2dq",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 1941 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsrlvq",	vpshiftv_vexw1_avx2_insn,	2,	SUF_Z,	0x45,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1164 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setlb",	setcc_insn,	1,	SUF_B,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 1244 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sldtl",	sldtmsw_insn,	6,	SUF_L,	0x00,	0x00,	0,	0,	CPU_386,	0,	0},
#line 1956 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpunpcklbw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x60,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1473 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcomiss",	avx_xmm_xmm32_insn,	2,	SUF_Z,	0x00,	0x2F,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 45 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"andn",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Z,	0x00,	0x38,	0xF2,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 594 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"iretw",	onebyte_insn,	1,	SUF_Z,	0xCF,	0x10,	0,	0,	0,	0,	0},
#line 1263 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sscal",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1042 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"push",	push_insn,	35,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1143 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"scasb",	onebyte_insn,	1,	SUF_Z,	0xAE,	0x00,	0,	0,	0,	0,	0},
#line 1772 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomltb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1750 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgeq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 21 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"add",	arith_insn,	22,	SUF_Z,	0x00,	0x00,	0,	0,	0,	0,	0},
#line 1948 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsubusb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xD8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1134 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sarw",	shift_insn,	16,	SUF_W,	0x07,	0,	0,	0,	0,	0,	0},
#line 844 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"outsl",	onebyte_insn,	1,	SUF_Z,	0x6F,	0x20,	0,	0,	CPU_386,	0,	0},
#line 771 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movntil",	movnti_insn,	2,	SUF_L,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 1958 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpunpcklqdq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x6C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 687 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lodsq",	onebyte_insn,	1,	SUF_Z,	0xAD,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1009 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pshufw",	pshufw_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 957 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovsxbq",	sse4m16_insn,	4,	SUF_Z,	0x22,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 312 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtpi2pd",	cvt_xmm_mm_ss_insn,	1,	SUF_Z,	0x66,	0x2A,	0,	0,	CPU_SSE2,	0,	0},
#line 1769 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomleuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 55 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"arpl",	arpl_insn,	1,	SUF_Z,	0,	0,	0,	NOT_64,	CPU_286,	CPU_Prot,	0},
#line 239 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovsw",	cmovcc_insn,	3,	SUF_W,	0x08,	0,	0,	0,	CPU_686,	0,	0},
#line 1650 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovmskpdq",	movmsk_insn,	4,	SUF_Q,	0x66,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1531 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmadd231pd",	vfma_pd_insn,	2,	SUF_Z,	0xB8,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1415 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnge_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x19,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 955 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovmskbq",	pmovmskb_insn,	6,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_MMX,	CPU_P3,	0},
#line 1961 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vrcpps",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x53,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 352 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"decl",	incdec_insn,	6,	SUF_L,	0x48,	0x01,	0,	0,	CPU_386,	0,	0},
#line 1303 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"tzcnt",	cnt_insn,	3,	SUF_Z,	0xBC,	0,	0,	0,	CPU_BMI1,	0,	0},
#line 834 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"orb",	arith_insn,	22,	SUF_B,	0x08,	0x01,	0,	0,	0,	0,	0},
#line 1694 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpaddq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xD4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 226 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovpel",	cmovcc_insn,	3,	SUF_L,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 581 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"invept",	eptvpid_insn,	2,	SUF_Z,	0x00,	0,	0,	0,	CPU_386,	CPU_EPTVPID,	0},
#line 643 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lds",	ldes_insn,	2,	SUF_Z,	0xC5,	0,	0,	NOT_64,	0,	0,	0},
#line 689 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loop",	loop_insn,	8,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 908 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfcmpge",	now3d_insn,	1,	SUF_Z,	0x90,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1721 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcmpeqw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x75,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 271 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpordpd",	ssecmp_128_insn,	3,	SUF_Z,	0x07,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1837 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphaddudq",	vphaddsub_insn,	1,	SUF_Z,	0xD8,	0,	0,	0,	CPU_XOP,	0,	0},
#line 573 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"insertps",	insertps_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 342 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cwde",	onebyte_insn,	1,	SUF_Z,	0x98,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1374 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpgt_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x1E,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 980 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmvnzb",	cyrixmmx_insn,	1,	SUF_Z,	0x5A,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 267 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpnltpd",	ssecmp_128_insn,	3,	SUF_Z,	0x05,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1240 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sidtq",	twobytemem_insn,	1,	SUF_Q,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 22 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"addb",	arith_insn,	22,	SUF_B,	0x00,	0x00,	0,	0,	0,	0,	0},
#line 344 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cwtl",	onebyte_insn,	1,	SUF_Z,	0x98,	0x20,	0,	0,	CPU_386,	0,	0},
#line 2031 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xstore",	padlock_insn,	1,	SUF_Z,	0xC0,	0x00,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1145 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"scasq",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1720 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcmpeqq",	ssse3_insn,	5,	SUF_Z,	0x29,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 635 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"larq",	larlsl_insn,	6,	SUF_Q,	0x02,	0,	0,	ONLY_64,	CPU_286,	CPU_Prot,	0},
#line 186 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovneq",	cmovcc_insn,	3,	SUF_Q,	0x05,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 665 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lgdtw",	twobytemem_insn,	1,	SUF_W,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 731 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"maxsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5F,	0,	0,	CPU_SSE2,	0,	0},
#line 116 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cld",	onebyte_insn,	1,	SUF_Z,	0xFC,	0,	0,	0,	0,	0,	0},
#line 893 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pdistib",	cyrixmmx_insn,	1,	SUF_Z,	0x54,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1543 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmaddsub231pd",	vfma_pd_insn,	2,	SUF_Z,	0xB6,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 625 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jo",	jcc_insn,	9,	SUF_Z,	0x00,	0,	0,	0,	0,	0,	0},
#line 426 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fidivrl",	fiarith_insn,	2,	SUF_L,	0x07,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 992 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popfq",	onebyte_insn,	1,	SUF_Z,	0x9D,	0x40,	0x40,	ONLY_64,	0,	0,	0},
#line 1709 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpbroadcastd",	vpbroadcastd_avx2_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1811 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vperm2i128",	vperm2i128_avx2_insn,	1,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1954 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpunpckhqdq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x6D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1813 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpermilpd",	vpermil_insn,	4,	SUF_Z,	0x05,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 994 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popl",	pop_insn,	23,	SUF_L,	0,	0,	0,	NOT_64,	CPU_386,	0,	0},
#line 1366 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpge_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x1D,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1108 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rorq",	shift_insn,	16,	SUF_Q,	0x01,	0,	0,	ONLY_64,	0,	0,	0},
#line 422 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ficoms",	fiarith_insn,	2,	SUF_S,	0x02,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1442 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnltsd",	ssecmp_64_insn,	4,	SUF_Z,	0x05,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1907 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpperm",	vpperm_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_XOP,	0,	0},
#line 262 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpneqss",	ssecmp_32_insn,	4,	SUF_Z,	0x04,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1758 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgtq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 1770 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomleuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 248 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpeqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x00,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 544 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fyl2xp1",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF9,	0,	0,	CPU_FPU,	0,	0},
#line 1819 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpextrd",	pextrd_insn,	1,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1806 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomud",	vpcom_imm_insn,	1,	SUF_Z,	0xEE,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1638 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovd",	vmovd_insn,	2,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_386,	CPU_AVX,	0},
#line 1685 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpabsb",	avx2_ssse3_2op_insn,	2,	SUF_Z,	0x1C,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1526 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmadd132ss",	vfma_ss_insn,	2,	SUF_Z,	0x99,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 976 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmullw",	mmxsse2_insn,	2,	SUF_Z,	0xD5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 281 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpsq",	onebyte_insn,	1,	SUF_Z,	0xA7,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1977 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vsubps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1704 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpavgw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1779 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomltw",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1604 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfrczps",	vfrc_pdps_insn,	2,	SUF_Z,	0x00,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1235 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shrxq",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Q,	0xF2,	0x38,	0xF7,	ONLY_64|ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1242 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"skinit",	skinit_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SVM,	0,	0},
#line 1521 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vextracti128",	vextractif128_insn,	1,	SUF_Z,	0x39,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 511 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fstenvl",	twobytemem_insn,	1,	SUF_L,	0x06,	0x9B,	0xD9,	0,	CPU_FPU,	0,	0},
#line 1084 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rex",	NULL,	X86_REX>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1527 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmadd213pd",	vfma_pd_insn,	2,	SUF_Z,	0xA8,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1425 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpngtps",	ssecmp_128_insn,	3,	SUF_Z,	0x0A,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1869 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmaddwd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1882 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpminud",	ssse3_insn,	5,	SUF_Z,	0x3B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1419 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpngess",	ssecmp_32_insn,	4,	SUF_Z,	0x09,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1019 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psrld",	pshift_insn,	4,	SUF_Z,	0xD2,	0x72,	0x02,	0,	CPU_MMX,	0,	0},
#line 1756 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgtb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 351 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"decb",	incdec_insn,	6,	SUF_B,	0x48,	0x01,	0,	0,	0,	0,	0},
#line 1649 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovmskpdl",	movmsk_insn,	4,	SUF_L,	0x66,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1035 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"punpckhdq",	mmxsse2_insn,	2,	SUF_Z,	0x6A,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1241 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sidtw",	twobytemem_insn,	1,	SUF_W,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 805 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movzx",	movszx_insn,	5,	SUF_Z,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 563 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"imulw",	imul_insn,	19,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 622 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jnp",	jcc_insn,	9,	SUF_Z,	0x0B,	0,	0,	0,	0,	0,	0},
#line 1554 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsub213ss",	vfma_ss_insn,	2,	SUF_Z,	0xAB,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1933 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsllw",	vpshift_insn,	8,	SUF_Z,	0xF1,	0x71,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 207 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnow",	cmovcc_insn,	3,	SUF_W,	0x01,	0,	0,	0,	CPU_686,	0,	0},
#line 2032 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xstorerng",	padlock_insn,	1,	SUF_Z,	0xC0,	0x00,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 172 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnb",	cmovcc_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 328 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtss2si",	cvt_rx_xmm32_insn,	4,	SUF_Z,	0xF3,	0x2D,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 486 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fnstenv",	onebytemem_insn,	1,	SUF_Z,	0x06,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 485 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fnstcww",	fldnstcw_insn,	1,	SUF_W,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 389 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcmovne",	fcmovcc_insn,	1,	SUF_Z,	0xDB,	0xC8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 364 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"dppd",	sse4imm_insn,	2,	SUF_Z,	0x41,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1929 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpslldq",	pslrldq_insn,	4,	SUF_Z,	0x07,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 414 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fiadd",	fiarith_insn,	2,	SUF_Z,	0x00,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 2004 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xbts",	xbts_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_Obs,	CPU_Undoc},
#line 1126 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"salc",	onebyte_insn,	1,	SUF_Z,	0xD6,	0,	0,	NOT_64,	CPU_Undoc,	0,	0},
#line 1777 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomltuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1446 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpord_ssd",	ssecmp_64_insn,	4,	SUF_Z,	0x17,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1026 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psubsb",	mmxsse2_insn,	2,	SUF_Z,	0xE8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 359 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"divps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5E,	0,	0,	CPU_SSE,	0,	0},
#line 1578 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmadd213ss",	vfma_ss_insn,	2,	SUF_Z,	0xAD,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 138 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovbq",	cmovcc_insn,	3,	SUF_Q,	0x02,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1297 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sysretq",	twobyte_insn,	1,	SUF_Q,	0x0F,	0x07,	0,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 421 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ficomps",	fiarith_insn,	2,	SUF_S,	0x03,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1739 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomeqw",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1190 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnpb",	setcc_insn,	1,	SUF_B,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 1600 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsubps",	fma_128_256_insn,	4,	SUF_Z,	0x7C,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 728 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"maskmovq",	maskmovq_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1677 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmulss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 460 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fldcw",	fldnstcw_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1225 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shrb",	shift_insn,	16,	SUF_B,	0x05,	0,	0,	0,	0,	0,	0},
#line 1367 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpge_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x1D,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1075 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rep",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 332 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvttpd2pi",	cvt_mm_xmm_insn,	1,	SUF_Z,	0x66,	0x2C,	0,	0,	CPU_SSE2,	0,	0},
#line 1413 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnge_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x19,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 634 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"larl",	larlsl_insn,	6,	SUF_L,	0x02,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1275 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"str",	str_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1138 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sbb",	arith_insn,	22,	SUF_Z,	0x18,	0x03,	0,	0,	0,	0,	0},
#line 268 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpnltps",	ssecmp_128_insn,	3,	SUF_Z,	0x05,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1462 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmptruesd",	ssecmp_64_insn,	4,	SUF_Z,	0x0F,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 459 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fld1",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE8,	0,	0,	CPU_FPU,	0,	0},
#line 1713 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpclmulhqlqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x01,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 988 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popcntq",	cnt_insn,	3,	SUF_Q,	0xB8,	0,	0,	ONLY_64,	CPU_SSE42,	0,	0},
#line 1063 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rcrb",	shift_insn,	16,	SUF_B,	0x03,	0,	0,	0,	0,	0,	0},
#line 973 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmulhuw",	mmxsse2_insn,	2,	SUF_Z,	0xE4,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1971 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vsqrtpd",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x51,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 266 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpnless",	ssecmp_32_insn,	4,	SUF_Z,	0x06,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1376 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpgtpd",	ssecmp_128_insn,	3,	SUF_Z,	0x0E,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 282 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpss",	xmm_xmm32_imm_insn,	4,	SUF_Z,	0xF3,	0xC2,	0,	0,	CPU_SSE,	0,	0},
#line 440 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fistl",	fiarith_insn,	2,	SUF_L,	0x02,	0xDB,	0,	0,	CPU_FPU,	0,	0},
#line 1891 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovsxwd",	sse4m64_insn,	4,	SUF_Z,	0x23,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1385 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpleps",	ssecmp_128_insn,	3,	SUF_Z,	0x02,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 437 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fincstp",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF7,	0,	0,	CPU_FPU,	0,	0},
#line 100 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btsl",	bittest_insn,	6,	SUF_L,	0xAB,	0x05,	0,	0,	CPU_386,	0,	0},
#line 1210 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sgdtq",	twobytemem_insn,	1,	SUF_Q,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 363 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"divw",	div_insn,	8,	SUF_W,	0x06,	0,	0,	0,	0,	0,	0},
#line 1194 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnzb",	setcc_insn,	1,	SUF_B,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 463 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fldenvl",	onebytemem_insn,	1,	SUF_L,	0x04,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 137 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovbl",	cmovcc_insn,	3,	SUF_L,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 1071 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rdrand",	rdrand_insn,	3,	SUF_Z,	0,	0,	0,	0,	CPU_RDRAND,	0,	0},
#line 1321 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vaddsubps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0xF2,	0xD0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1782 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomneq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1045 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pushaw",	onebyte_insn,	1,	SUF_Z,	0x60,	0x10,	0,	NOT_64,	CPU_186,	0,	0},
#line 57 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"aword",	NULL,	X86_ADDRSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 1655 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovntdqa",	movntdqa_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1776 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomltud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 507 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fst",	fst_insn,	3,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 917 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfrcpit2",	now3d_insn,	1,	SUF_Z,	0xB6,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 496 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"frstor",	onebytemem_insn,	1,	SUF_Z,	0x04,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 1352 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x00,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 547 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"haddps",	xmm_xmm128_insn,	2,	SUF_Z,	0xF2,	0x7C,	0,	0,	CPU_SSE3,	0,	0},
#line 1368 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpgepd",	ssecmp_128_insn,	3,	SUF_Z,	0x0D,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1064 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rcrl",	shift_insn,	16,	SUF_L,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 722 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ltrw",	prot286_insn,	1,	SUF_W,	0x03,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 654 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"les",	ldes_insn,	2,	SUF_Z,	0xC4,	0,	0,	NOT_64,	0,	0,	0},
#line 1923 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpshufhw",	xmm_xmm128_imm_256avx2_insn,	2,	SUF_Z,	0xF3,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2005 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xchg",	xchg_insn,	16,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1652 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovmskpsl",	movmsk_insn,	4,	SUF_L,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 193 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovngl",	cmovcc_insn,	3,	SUF_L,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 1793 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomneuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1596 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsub231ps",	vfma_ps_insn,	2,	SUF_Z,	0xBE,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 671 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lidtl",	twobytemem_insn,	1,	SUF_L,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1288 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"svdc",	svdc_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 803 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movzwl",	movszx_insn,	5,	SUF_W,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 826 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"negw",	f6_insn,	4,	SUF_W,	0x03,	0,	0,	0,	0,	0,	0},
#line 820 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mulxq",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Q,	0xF2,	0x38,	0xF6,	ONLY_64|ONLY_AVX,	CPU_BMI2,	0,	0},
#line 2008 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xchgq",	xchg_insn,	16,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1711 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpbroadcastw",	vpbroadcastw_avx2_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1844 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphsubbw",	vphaddsub_insn,	1,	SUF_Z,	0xE1,	0,	0,	0,	CPU_XOP,	0,	0},
#line 985 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popaw",	onebyte_insn,	1,	SUF_Z,	0x61,	0x10,	0,	NOT_64,	CPU_186,	0,	0},
#line 585 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"invlpga",	invlpga_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SVM,	0,	0},
#line 238 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovsq",	cmovcc_insn,	3,	SUF_Q,	0x08,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 751 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movddup",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x12,	0,	0,	CPU_SSE3,	0,	0},
#line 19 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"adcq",	arith_insn,	22,	SUF_Q,	0x10,	0x02,	0,	ONLY_64,	0,	0,	0},
#line 939 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmaddwd",	mmxsse2_insn,	2,	SUF_Z,	0xF5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1078 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"repnz",	NULL,	X86_LOCKREP>>8,	0xF2,	0,	0,	0,	0,	0,	0,	0},
#line 1872 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmaxsb",	ssse3_insn,	5,	SUF_Z,	0x3C,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1195 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"seto",	setcc_insn,	1,	SUF_Z,	0x00,	0,	0,	0,	CPU_386,	0,	0},
#line 353 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"decq",	incdec_insn,	6,	SUF_Q,	0x48,	0x01,	0,	ONLY_64,	0,	0,	0},
#line 680 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lmsw",	prot286_insn,	1,	SUF_Z,	0x06,	0x01,	0,	0,	CPU_286,	CPU_Priv,	0},
#line 1452 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmppd",	xmm_xmm128_imm_256_insn,	3,	SUF_Z,	0x66,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1465 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpunord_sps",	ssecmp_128_insn,	3,	SUF_Z,	0x13,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 793 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movswq",	movszx_insn,	5,	SUF_W,	0xBE,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1177 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setne",	setcc_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 1966 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vroundss",	sse4m32imm_insn,	4,	SUF_Z,	0x0A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 612 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jnae",	jcc_insn,	9,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 597 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jb",	jcc_insn,	9,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 1375 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpgt_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x1E,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1259 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sqrtps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x51,	0,	0,	CPU_SSE,	0,	0},
#line 1387 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpless",	ssecmp_32_insn,	4,	SUF_Z,	0x02,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1290 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"svts",	cyrixsmm_insn,	1,	SUF_Z,	0x7C,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 109 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"callq",	call_insn,	30,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1344 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeq_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x08,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 322 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtsi2sdl",	cvt_xmm_rmx_insn,	6,	SUF_L,	0xF2,	0x2A,	0,	0,	CPU_SSE2,	0,	0},
#line 543 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fyl2x",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF1,	0,	0,	CPU_FPU,	0,	0},
#line 896 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pextq",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Q,	0xF3,	0x38,	0xF5,	ONLY_64|ONLY_AVX,	CPU_BMI2,	0,	0},
#line 534 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fucompp",	twobyte_insn,	1,	SUF_Z,	0xDA,	0xE9,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 690 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loope",	loop_insn,	8,	SUF_Z,	0x01,	0,	0,	0,	0,	0,	0},
#line 394 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcomip",	fcom2_insn,	2,	SUF_Z,	0xDF,	0xF0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1306 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"tzcntw",	cnt_insn,	3,	SUF_W,	0xBC,	0,	0,	0,	CPU_BMI1,	0,	0},
#line 1086 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rex64x",	NULL,	X86_REX>>8,	0x4C,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1055 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rcl",	shift_insn,	16,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 1476 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtpd2dq",	avx_cvt_xmm128_insn,	2,	SUF_Z,	0xF2,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 607 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jmp",	jmp_insn,	31,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1690 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpackusdw",	ssse3_insn,	5,	SUF_Z,	0x2B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1421 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpngt_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x1A,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1382 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmple_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x12,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1058 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rclq",	shift_insn,	16,	SUF_Q,	0x02,	0,	0,	ONLY_64,	0,	0,	0},
#line 1586 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmaddss",	fma_128_m32_insn,	3,	SUF_Z,	0x7A,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1380 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmple_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x12,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 664 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lgdtq",	twobytemem_insn,	1,	SUF_Q,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1217 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shldw",	shlrd_insn,	9,	SUF_W,	0xA4,	0,	0,	0,	CPU_386,	0,	0},
#line 12 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"aaa",	onebyte_insn,	1,	SUF_Z,	0x37,	0,	0,	NOT_64,	0,	0,	0},
#line 1798 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomtrued",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 232 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovpoq",	cmovcc_insn,	3,	SUF_Q,	0x0B,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1150 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setaeb",	setcc_insn,	1,	SUF_B,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 920 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfsub",	now3d_insn,	1,	SUF_Z,	0x9A,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 101 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btsq",	bittest_insn,	6,	SUF_Q,	0xAB,	0x05,	0,	ONLY_64,	CPU_386,	0,	0},
#line 946 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmaxuw",	sse4_insn,	2,	SUF_Z,	0x3E,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1512 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vdivsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1607 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vgatherdpd",	gather_64x_64x_insn,	2,	SUF_Z,	0x92,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 741 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movabs",	movabs_insn,	9,	SUF_Z,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1205 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setz",	setcc_insn,	1,	SUF_Z,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 450 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fisttpq",	fildstp_insn,	4,	SUF_Q,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 288 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpw",	arith_insn,	22,	SUF_W,	0x38,	0x07,	0,	0,	0,	0,	0},
#line 110 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"callw",	call_insn,	30,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 910 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfmax",	now3d_insn,	1,	SUF_Z,	0xA4,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 298 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"comiss",	xmm_xmm32_insn,	4,	SUF_Z,	0x00,	0x2F,	0,	0,	CPU_SSE,	0,	0},
#line 675 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ljmpl",	ljmpcall_insn,	7,	SUF_L,	0x05,	0xEA,	0,	0,	CPU_386,	0,	0},
#line 648 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"leaq",	lea_insn,	3,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 974 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmulhw",	mmxsse2_insn,	2,	SUF_Z,	0xE5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 204 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovno",	cmovcc_insn,	3,	SUF_Z,	0x01,	0,	0,	0,	CPU_686,	0,	0},
#line 993 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popfw",	onebyte_insn,	1,	SUF_Z,	0x9D,	0x10,	0x40,	0,	0,	0,	0},
#line 1852 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpinsrq",	pinsrq_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1099 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rexz",	NULL,	X86_REX>>8,	0x41,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1657 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovntps",	movnt_insn,	2,	SUF_Z,	0x00,	0x2B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 693 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopew",	loopw_insn,	4,	SUF_Z,	0x01,	0x10,	0,	NOT_64,	0,	0,	0},
#line 871 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pblendvb",	sse4xmm0_insn,	2,	SUF_Z,	0x10,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 95 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btr",	bittest_insn,	6,	SUF_Z,	0xB3,	0x06,	0,	0,	CPU_386,	0,	0},
#line 1620 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmaskmovdqu",	maskmovdqu_insn,	1,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 864 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pand",	mmxsse2_insn,	2,	SUF_Z,	0xDB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1830 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphaddbw",	vphaddsub_insn,	1,	SUF_Z,	0xC1,	0,	0,	0,	CPU_XOP,	0,	0},
#line 672 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lidtq",	twobytemem_insn,	1,	SUF_Q,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1599 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsubpd",	fma_128_256_insn,	4,	SUF_Z,	0x7D,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1791 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomneub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 782 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movsbq",	movszx_insn,	5,	SUF_B,	0xBE,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 472 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fldt",	fldstpt_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 169 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnal",	cmovcc_insn,	3,	SUF_L,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 1615 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vinsertf128",	vinsertif128_insn,	1,	SUF_Z,	0x18,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 51 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"andps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x54,	0,	0,	CPU_SSE,	0,	0},
#line 682 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loadall",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x07,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 1703 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpavgb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 752 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movdq2q",	movdq2q_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 155 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovgw",	cmovcc_insn,	3,	SUF_W,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 609 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jmpq",	jmp_insn,	31,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 941 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmaxsb",	sse4_insn,	2,	SUF_Z,	0x3C,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1827 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpgatherqq",	gather_64x_64y_insn,	2,	SUF_Z,	0x91,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1323 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vaesdeclast",	aes_insn,	2,	SUF_Z,	0x38,	0xDF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 644 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ldsl",	ldes_insn,	2,	SUF_L,	0xC5,	0,	0,	NOT_64,	CPU_386,	0,	0},
#line 967 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovzxwq",	sse4m32_insn,	4,	SUF_Z,	0x34,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1595 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsub231pd",	vfma_pd_insn,	2,	SUF_Z,	0xBE,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 827 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"nop",	onebyte_insn,	1,	SUF_Z,	0x90,	0,	0,	0,	0,	0,	0},
#line 1334 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vblendvpd",	avx_sse4xmm0_insn,	2,	SUF_Z,	0x4B,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 774 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movntps",	movnt_insn,	2,	SUF_Z,	0x00,	0x2B,	0,	0,	CPU_SSE,	0,	0},
#line 1733 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomeqd",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1431 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnle_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x16,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 518 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsts",	fst_insn,	3,	SUF_S,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1665 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmpsadbw",	sse4imm_256avx2_insn,	4,	SUF_Z,	0x42,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1128 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"salq",	shift_insn,	16,	SUF_Q,	0x04,	0,	0,	ONLY_64,	0,	0,	0},
#line 1472 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcomisd",	avx_xmm_xmm64_insn,	2,	SUF_Z,	0x66,	0x2F,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 431 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fildll",	fbldstp_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1581 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmadd231sd",	vfma_sd_insn,	2,	SUF_Z,	0xBD,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1430 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnle_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x16,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1506 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvttsd2siq",	cvt_rx_xmm64_insn,	4,	SUF_Q,	0xF2,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 141 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovcl",	cmovcc_insn,	3,	SUF_L,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 587 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"invvpid",	eptvpid_insn,	2,	SUF_Z,	0x01,	0,	0,	0,	CPU_386,	CPU_EPTVPID,	0},
#line 1163 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setl",	setcc_insn,	1,	SUF_Z,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 1136 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sarxl",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_L,	0xF3,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1612 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vhaddps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0xF2,	0x7C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1672 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmrun",	svm_rax_insn,	2,	SUF_Z,	0xD8,	0,	0,	0,	CPU_SVM,	0,	0},
#line 407 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fdivrl",	farith_insn,	7,	SUF_L,	0xF0,	0xF8,	0x07,	0,	CPU_FPU,	0,	0},
#line 814 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mulq",	f6_insn,	4,	SUF_Q,	0x04,	0,	0,	ONLY_64,	0,	0,	0},
#line 601 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"je",	jcc_insn,	9,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 392 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcom",	fcom_insn,	6,	SUF_Z,	0xD0,	0x02,	0,	0,	CPU_FPU,	0,	0},
#line 539 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fxrstorq",	twobytemem_insn,	1,	SUF_Q,	0x01,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 461 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fldcww",	fldnstcw_insn,	1,	SUF_W,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 785 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movshdup",	xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x16,	0,	0,	CPU_SSE3,	0,	0},
#line 106 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bzhiq",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Q,	0x00,	0x38,	0xF5,	ONLY_64|ONLY_AVX,	CPU_BMI2,	0,	0},
#line 526 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsubrp",	farithp_insn,	3,	SUF_Z,	0xE8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1656 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovntpd",	movnt_insn,	2,	SUF_Z,	0x66,	0x2B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 82 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bsrl",	bsfr_insn,	3,	SUF_L,	0xBD,	0,	0,	0,	CPU_386,	0,	0},
#line 809 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mul",	f6_insn,	4,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 557 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"idivq",	div_insn,	8,	SUF_Q,	0x07,	0,	0,	ONLY_64,	0,	0,	0},
#line 1851 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpinsrd",	pinsrd_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1250 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"smovb",	onebyte_insn,	1,	SUF_Z,	0xA4,	0x00,	0,	0,	0,	0,	0},
#line 593 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"iretq",	onebyte_insn,	1,	SUF_Z,	0xCF,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1315 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"unpcklps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x14,	0,	0,	CPU_SSE,	0,	0},
#line 1292 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"syscall",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x05,	0,	0,	CPU_686,	CPU_AMD,	0},
#line 368 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"enter",	enter_insn,	3,	SUF_Z,	0,	0,	0,	0,	CPU_186,	0,	0},
#line 487 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fnstenvl",	onebytemem_insn,	1,	SUF_L,	0x06,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 1429 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnle_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x16,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 236 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovs",	cmovcc_insn,	3,	SUF_Z,	0x08,	0,	0,	0,	CPU_686,	0,	0},
#line 331 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvttpd2dq",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 1628 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmclear",	vmxthreebytemem_insn,	1,	SUF_Z,	0x66,	0,	0,	0,	CPU_P4,	0,	0},
#line 201 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnll",	cmovcc_insn,	3,	SUF_L,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 1426 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpngtsd",	ssecmp_64_insn,	4,	SUF_Z,	0x0A,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1557 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsub231sd",	vfma_sd_insn,	2,	SUF_Z,	0xBB,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 931 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pinsrb",	pinsrb_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 715 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lslq",	larlsl_insn,	6,	SUF_Q,	0x03,	0,	0,	ONLY_64,	CPU_286,	CPU_Prot,	0},
#line 862 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"paddw",	mmxsse2_insn,	2,	SUF_Z,	0xFD,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1113 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"roundpd",	sse4imm_insn,	2,	SUF_Z,	0x09,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1249 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"smintold",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x7E,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_Obs},
#line 1447 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpord_sss",	ssecmp_32_insn,	4,	SUF_Z,	0x17,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 854 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"paddb",	mmxsse2_insn,	2,	SUF_Z,	0xFC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1156 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setcb",	setcc_insn,	1,	SUF_B,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1920 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpshlw",	amd_vpshift_insn,	2,	SUF_Z,	0x95,	0,	0,	0,	CPU_XOP,	0,	0},
#line 891 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pdepl",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_L,	0xF2,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 474 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fmul",	farith_insn,	7,	SUF_Z,	0xC8,	0xC8,	0x01,	0,	CPU_FPU,	0,	0},
#line 410 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fdivs",	farith_insn,	7,	SUF_S,	0xF8,	0xF0,	0x06,	0,	CPU_FPU,	0,	0},
#line 156 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovl",	cmovcc_insn,	3,	SUF_Z,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 1274 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"stosw",	onebyte_insn,	1,	SUF_Z,	0xAB,	0x10,	0,	0,	0,	0,	0},
#line 616 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jne",	jcc_insn,	9,	SUF_Z,	0x05,	0,	0,	0,	0,	0,	0},
#line 1858 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmacsdql",	vpma_insn,	1,	SUF_Z,	0x97,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1786 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomnequb",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 959 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovsxdq",	sse4m64_insn,	4,	SUF_Z,	0x25,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1748 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgeb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 717 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lss",	lfgss_insn,	3,	SUF_Z,	0xB2,	0,	0,	0,	CPU_386,	0,	0},
#line 765 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movmskps",	movmsk_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 210 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnpq",	cmovcc_insn,	3,	SUF_Q,	0x0B,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1110 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rorx",	vex_gpr_reg_rm_0F_imm8_insn,	2,	SUF_Z,	0xF2,	0x3A,	0xF0,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 802 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movzbw",	movszx_insn,	5,	SUF_B,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 1411 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneqss",	ssecmp_32_insn,	4,	SUF_Z,	0x04,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 324 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtsi2ss",	cvt_xmm_rmx_insn,	6,	SUF_Z,	0xF3,	0x2A,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 1123 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sahf",	onebyte_insn,	1,	SUF_Z,	0x9E,	0,	0,	0,	0,	0,	0},
#line 1007 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pshufhw",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0xF3,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 733 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mfence",	threebyte_insn,	1,	SUF_Z,	0x0F,	0xAE,	0xF0,	0,	CPU_P3,	0,	0},
#line 1637 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovaps",	movau_insn,	6,	SUF_Z,	0x00,	0x28,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1636 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovapd",	movau_insn,	6,	SUF_Z,	0x66,	0x28,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 958 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovsxbw",	sse4m64_insn,	4,	SUF_Z,	0x20,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1998 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"wrshr",	rdwrshr_insn,	1,	SUF_Z,	0x01,	0,	0,	0,	CPU_686,	CPU_Cyrix,	CPU_SMM},
#line 1209 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sgdtl",	twobytemem_insn,	1,	SUF_L,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 887 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pcmpgtw",	mmxsse2_insn,	2,	SUF_Z,	0x65,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1687 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpabsw",	avx2_ssse3_2op_insn,	2,	SUF_Z,	0x1D,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1233 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shrx",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Z,	0xF2,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 144 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmove",	cmovcc_insn,	3,	SUF_Z,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 27 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"addr16",	NULL,	X86_ADDRSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 1592 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsub213ps",	vfma_ps_insn,	2,	SUF_Z,	0xAE,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 34 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"addw",	arith_insn,	22,	SUF_W,	0x00,	0x00,	0,	0,	0,	0,	0},
#line 235 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovpw",	cmovcc_insn,	3,	SUF_W,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 1001 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"prefetcht1",	twobytemem_insn,	1,	SUF_Z,	0x02,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 1877 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmaxuw",	ssse3_insn,	5,	SUF_Z,	0x3E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1594 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsub213ss",	vfma_ss_insn,	2,	SUF_Z,	0xAF,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1287 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"subw",	arith_insn,	22,	SUF_W,	0x28,	0x05,	0,	0,	0,	0,	0},
#line 1276 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"strl",	str_insn,	4,	SUF_L,	0,	0,	0,	0,	CPU_386,	CPU_Prot,	0},
#line 1293 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sysenter",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x34,	0,	NOT_64,	CPU_686,	0,	0},
#line 732 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"maxss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5F,	0,	0,	CPU_SSE,	0,	0},
#line 1660 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovshdup",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x16,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 272 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpordps",	ssecmp_128_insn,	3,	SUF_Z,	0x07,	0,	0,	0,	CPU_SSE,	0,	0},
#line 339 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvttss2sil",	cvt_rx_xmm32_insn,	4,	SUF_L,	0xF3,	0x2C,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 117 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"clflush",	clflush_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_P3,	0,	0},
#line 745 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movabsw",	movabs_insn,	9,	SUF_W,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 853 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"packuswb",	mmxsse2_insn,	2,	SUF_Z,	0x67,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1460 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmptruepd",	ssecmp_128_insn,	3,	SUF_Z,	0x0F,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 447 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fisttp",	fildstp_insn,	4,	SUF_Z,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 1222 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shlxl",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_L,	0x66,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1277 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"strq",	str_insn,	4,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_286,	CPU_Prot,	0},
#line 932 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pinsrd",	pinsrd_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 991 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popfl",	onebyte_insn,	1,	SUF_Z,	0x9D,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 1307 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ucomisd",	xmm_xmm64_insn,	4,	SUF_Z,	0x66,	0x2E,	0,	0,	CPU_SSE2,	0,	0},
#line 1003 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"prefetchw",	twobytemem_insn,	1,	SUF_Z,	0x01,	0x0F,	0x0D,	0,	CPU_3DNow,	0,	0},
#line 164 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovna",	cmovcc_insn,	3,	SUF_Z,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 799 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movw",	mov_insn,	69,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 154 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovgq",	cmovcc_insn,	3,	SUF_Q,	0x0F,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1555 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsub231pd",	vfma_pd_insn,	2,	SUF_Z,	0xBA,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1018 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psraw",	pshift_insn,	4,	SUF_Z,	0xE1,	0x71,	0x04,	0,	CPU_MMX,	0,	0},
#line 1648 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovmskpd",	movmsk_insn,	4,	SUF_Z,	0x66,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 200 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnlew",	cmovcc_insn,	3,	SUF_W,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 108 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"calll",	call_insn,	30,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 999 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"prefetchnta",	twobytemem_insn,	1,	SUF_Z,	0x00,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 1187 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setno",	setcc_insn,	1,	SUF_Z,	0x01,	0,	0,	0,	CPU_386,	0,	0},
#line 562 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"imulq",	imul_insn,	19,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1052 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pushw",	push_insn,	35,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 400 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcoms",	fcom_insn,	6,	SUF_S,	0xD0,	0x02,	0,	0,	CPU_FPU,	0,	0},
#line 583 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"inveptq",	eptvpid_insn,	2,	SUF_Q,	0x00,	0,	0,	ONLY_64,	CPU_EPTVPID,	0,	0},
#line 795 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movsxb",	movszx_insn,	5,	SUF_B,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 213 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnsl",	cmovcc_insn,	3,	SUF_L,	0x09,	0,	0,	0,	CPU_686,	0,	0},
#line 120 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cltd",	onebyte_insn,	1,	SUF_Z,	0x99,	0x20,	0,	0,	CPU_386,	0,	0},
#line 504 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsin",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFE,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 467 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fldl2t",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE9,	0,	0,	CPU_FPU,	0,	0},
#line 349 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"data64",	NULL,	X86_OPERSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1318 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vaddsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 50 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"andpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x54,	0,	0,	CPU_SSE2,	0,	0},
#line 979 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmvlzb",	cyrixmmx_insn,	1,	SUF_Z,	0x5B,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 828 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"not",	f6_insn,	4,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 47 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"andnpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x55,	0,	0,	CPU_SSE2,	0,	0},
#line 1986 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vunpcklpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x14,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 950 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pminub",	mmxsse2_insn,	2,	SUF_Z,	0xDA,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1548 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsub132ps",	vfma_ps_insn,	2,	SUF_Z,	0x9A,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 848 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pabsd",	ssse3_insn,	5,	SUF_Z,	0x1E,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1497 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtss2si",	cvt_rx_xmm32_insn,	4,	SUF_Z,	0xF3,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1184 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnlb",	setcc_insn,	1,	SUF_B,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 2025 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xsave",	twobytemem_insn,	1,	SUF_Z,	0x04,	0x0F,	0xAE,	0,	CPU_386,	CPU_XSAVE,	0},
#line 1705 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpblendd",	vex_66_0F3A_imm8_avx2_insn,	2,	SUF_Z,	0x02,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1485 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtps2ph",	avx_cvtps2ph_insn,	4,	SUF_Z,	0x66,	0x1D,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 286 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpunordsd",	ssecmp_64_insn,	4,	SUF_Z,	0x03,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1691 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpackuswb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x67,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1590 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsub132ss",	vfma_ss_insn,	2,	SUF_Z,	0x9F,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1457 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmptrue_usps",	ssecmp_128_insn,	3,	SUF_Z,	0x1F,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 975 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmulld",	sse4_insn,	2,	SUF_Z,	0x40,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 849 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pabsw",	ssse3_insn,	5,	SUF_Z,	0x1D,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 494 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fptan",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF2,	0,	0,	CPU_FPU,	0,	0},
#line 405 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fdivp",	farithp_insn,	3,	SUF_Z,	0xF0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1763 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgtw",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 1611 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vhaddpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x7C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1280 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"subb",	arith_insn,	22,	SUF_B,	0x28,	0x05,	0,	0,	0,	0,	0},
#line 1545 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmaddsubpd",	fma_128_256_insn,	4,	SUF_Z,	0x5D,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1773 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomltd",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1464 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpunord_spd",	ssecmp_128_insn,	3,	SUF_Z,	0x13,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1272 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"stosl",	onebyte_insn,	1,	SUF_Z,	0xAB,	0x20,	0,	0,	CPU_386,	0,	0},
#line 2010 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xcryptcbc",	padlock_insn,	1,	SUF_Z,	0xD0,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 830 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"notl",	f6_insn,	4,	SUF_L,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 936 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pinsrwq",	pinsrw_insn,	9,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_MMX,	CPU_P3,	0},
#line 1762 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgtuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 383 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fclex",	threebyte_insn,	1,	SUF_Z,	0x9B,	0xDB,	0xE2,	0,	CPU_FPU,	0,	0},
#line 838 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"orq",	arith_insn,	22,	SUF_Q,	0x08,	0x01,	0,	ONLY_64,	0,	0,	0},
#line 23 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"addl",	arith_insn,	22,	SUF_L,	0x00,	0x00,	0,	0,	CPU_386,	0,	0},
#line 92 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btcw",	bittest_insn,	6,	SUF_W,	0xBB,	0x07,	0,	0,	CPU_386,	0,	0},
#line 695 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopne",	loop_insn,	8,	SUF_Z,	0x00,	0,	0,	0,	0,	0,	0},
#line 972 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmulhrwc",	cyrixmmx_insn,	1,	SUF_Z,	0x59,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 327 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtss2sd",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 1859 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmacssdd",	vpma_insn,	1,	SUF_Z,	0x8E,	0,	0,	0,	CPU_XOP,	0,	0},
#line 53 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"andw",	arith_insn,	22,	SUF_W,	0x20,	0x04,	0,	0,	0,	0,	0},
#line 2026 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xsaveopt",	twobytemem_insn,	1,	SUF_Z,	0x06,	0x0F,	0xAE,	0,	CPU_XSAVEOPT,	0,	0},
#line 125 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovae",	cmovcc_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1605 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfrczsd",	vfrczsd_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1466 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpunord_ssd",	ssecmp_64_insn,	4,	SUF_Z,	0x13,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1976 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vsubpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1841 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphaddwd",	vphaddsub_insn,	1,	SUF_Z,	0xC6,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1062 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rcr",	shift_insn,	16,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 247 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpeqps",	ssecmp_128_insn,	3,	SUF_Z,	0x00,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1759 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgtub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 1477 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtpd2dqx",	avx_cvt_xmm128_x_insn,	1,	SUF_Z,	0xF2,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 737 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"minss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5D,	0,	0,	CPU_SSE,	0,	0},
#line 1174 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnbeb",	setcc_insn,	1,	SUF_B,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 190 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovngel",	cmovcc_insn,	3,	SUF_L,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 1698 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpaddusw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDD,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1159 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setg",	setcc_insn,	1,	SUF_Z,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 242 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovzq",	cmovcc_insn,	3,	SUF_Q,	0x04,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1284 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"subq",	arith_insn,	22,	SUF_Q,	0x28,	0x05,	0,	ONLY_64,	0,	0,	0},
#line 1301 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"testq",	test_insn,	20,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1107 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rorl",	shift_insn,	16,	SUF_L,	0x01,	0,	0,	0,	CPU_386,	0,	0},
#line 373 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"extrq",	extrq_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 1320 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vaddsubpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0xD0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1218 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shll",	shift_insn,	16,	SUF_L,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 173 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnbe",	cmovcc_insn,	3,	SUF_Z,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 1504 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvttsd2si",	cvt_rx_xmm64_insn,	4,	SUF_Z,	0xF2,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1945 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsubq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 233 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovpow",	cmovcc_insn,	3,	SUF_W,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 860 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"paddusb",	mmxsse2_insn,	2,	SUF_Z,	0xDC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1807 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomuq",	vpcom_imm_insn,	1,	SUF_Z,	0xEF,	0,	0,	0,	CPU_XOP,	0,	0},
#line 333 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvttps2dq",	xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 1680 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmwriteq",	vmxmemwr_insn,	2,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_P4,	0,	0},
#line 243 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovzw",	cmovcc_insn,	3,	SUF_W,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 195 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovngw",	cmovcc_insn,	3,	SUF_W,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 203 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnlw",	cmovcc_insn,	3,	SUF_W,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 370 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"enterq",	enter_insn,	3,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_186,	0,	0},
#line 1354 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x00,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 484 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fnstcw",	fldnstcw_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1870 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmaskmovd",	vmaskmov_insn,	4,	SUF_Z,	0x8C,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 17 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"adcb",	arith_insn,	22,	SUF_B,	0x10,	0x02,	0,	0,	0,	0,	0},
#line 977 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmuludq",	mmxsse2_insn,	2,	SUF_Z,	0xF4,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1478 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtpd2dqy",	avx_cvt_xmm128_y_insn,	1,	SUF_Z,	0xF2,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1879 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpminsd",	ssse3_insn,	5,	SUF_Z,	0x39,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1919 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpshlq",	amd_vpshift_insn,	2,	SUF_Z,	0x97,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1558 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsub231ss",	vfma_ss_insn,	2,	SUF_Z,	0xBB,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1987 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vunpcklps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x14,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2001 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xaddl",	cmpxchgxadd_insn,	4,	SUF_L,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 1500 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvttpd2dq",	avx_cvt_xmm128_insn,	2,	SUF_Z,	0x66,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1623 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmaxpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 388 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcmovnbe",	fcmovcc_insn,	1,	SUF_Z,	0xDB,	0xD0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 509 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fstcww",	fstcw_insn,	1,	SUF_W,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1992 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"wait",	onebyte_insn,	1,	SUF_Z,	0x9B,	0,	0,	0,	0,	0,	0},
#line 2000 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xaddb",	cmpxchgxadd_insn,	4,	SUF_B,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 454 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fisubr",	fiarith_insn,	2,	SUF_Z,	0x05,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 605 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jl",	jcc_insn,	9,	SUF_Z,	0x0C,	0,	0,	0,	0,	0,	0},
#line 1706 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpblendvb",	avx2_sse4xmm0_insn,	2,	SUF_Z,	0x4C,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 341 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cwd",	onebyte_insn,	1,	SUF_Z,	0x99,	0x10,	0,	0,	0,	0,	0},
#line 1576 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmadd213ps",	vfma_ps_insn,	2,	SUF_Z,	0xAC,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 430 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fildl",	fildstp_insn,	4,	SUF_L,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 1304 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"tzcntl",	cnt_insn,	3,	SUF_L,	0xBC,	0,	0,	0,	CPU_BMI1,	0,	0},
#line 259 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpneqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x04,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1994 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"word",	NULL,	X86_OPERSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 882 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pcmpestri",	sse4pcmpstr_insn,	1,	SUF_Z,	0x61,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 1120 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rsqrtps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x52,	0,	0,	CPU_SSE,	0,	0},
#line 1880 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpminsw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1692 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpaddb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1489 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtsd2ss",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2022 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xorq",	arith_insn,	22,	SUF_Q,	0x30,	0x06,	0,	ONLY_64,	0,	0,	0},
#line 523 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsubp",	farithp_insn,	3,	SUF_Z,	0xE0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 701 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopnzq",	loopq_insn,	4,	SUF_Z,	0x00,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1369 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpgeps",	ssecmp_128_insn,	3,	SUF_Z,	0x0D,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 856 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"paddq",	mmxsse2_insn,	2,	SUF_Z,	0xD4,	0,	0,	0,	CPU_MMX,	0,	0},
#line 395 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcoml",	fcom_insn,	6,	SUF_L,	0xD0,	0x02,	0,	0,	CPU_FPU,	0,	0},
#line 403 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fdiv",	farith_insn,	7,	SUF_Z,	0xF8,	0xF0,	0x06,	0,	CPU_FPU,	0,	0},
#line 1245 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sldtq",	sldtmsw_insn,	6,	SUF_Q,	0x00,	0x00,	0,	ONLY_64,	CPU_286,	0,	0},
#line 1818 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpextrb",	pextrb_insn,	3,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1679 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmwritel",	vmxmemwr_insn,	2,	SUF_L,	0,	0,	0,	NOT_64,	CPU_P4,	0,	0},
#line 1005 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pshufb",	ssse3_insn,	5,	SUF_Z,	0x00,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 710 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lretl",	retnf_insn,	6,	SUF_L,	0xCA,	0,	0,	0,	0,	0,	0},
#line 1031 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psubw",	mmxsse2_insn,	2,	SUF_Z,	0xF9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1341 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeq_osps",	ssecmp_128_insn,	3,	SUF_Z,	0x10,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1854 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpinsrwl",	pinsrw_insn,	9,	SUF_L,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1203 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sets",	setcc_insn,	1,	SUF_Z,	0x08,	0,	0,	0,	CPU_386,	0,	0},
#line 1707 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpblendw",	sse4imm_256avx2_insn,	4,	SUF_Z,	0x0E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 420 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ficompl",	fiarith_insn,	2,	SUF_L,	0x03,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1229 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shrdw",	shlrd_insn,	9,	SUF_W,	0xAC,	0,	0,	0,	CPU_386,	0,	0},
#line 1453 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpps",	xmm_xmm128_imm_256_insn,	3,	SUF_Z,	0x00,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 801 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movzbq",	movszx_insn,	5,	SUF_B,	0xB6,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1131 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sarb",	shift_insn,	16,	SUF_B,	0x07,	0,	0,	0,	0,	0,	0},
#line 1300 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"testl",	test_insn,	20,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 1247 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"smi",	onebyte_insn,	1,	SUF_Z,	0xF1,	0,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 1119 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rsm",	twobyte_insn,	1,	SUF_Z,	0x0F,	0xAA,	0,	0,	CPU_586,	CPU_SMM,	0},
#line 1176 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setncb",	setcc_insn,	1,	SUF_B,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 778 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movq",	mov_insn,	69,	SUF_Q,	0,	0,	0,	0,	0,	0,	0},
#line 1562 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsubadd213ps",	vfma_ps_insn,	2,	SUF_Z,	0xA7,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1401 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneq_osps",	ssecmp_128_insn,	3,	SUF_Z,	0x1C,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 439 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fist",	fiarith_insn,	2,	SUF_Z,	0x02,	0xDB,	0,	0,	CPU_FPU,	0,	0},
#line 817 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mulw",	f6_insn,	4,	SUF_W,	0x04,	0,	0,	0,	0,	0,	0},
#line 742 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movabsb",	movabs_insn,	9,	SUF_B,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 833 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"or",	arith_insn,	22,	SUF_Z,	0x08,	0x01,	0,	0,	0,	0,	0},
#line 1350 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeq_ussd",	ssecmp_64_insn,	4,	SUF_Z,	0x18,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 98 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btrw",	bittest_insn,	6,	SUF_W,	0xB3,	0x06,	0,	0,	CPU_386,	0,	0},
#line 1708 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpbroadcastb",	vpbroadcastb_avx2_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 902 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pextrwq",	pextrw_insn,	7,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_MMX,	CPU_P3,	0},
#line 273 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpordsd",	ssecmp_64_insn,	4,	SUF_Z,	0x07,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 610 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jmpw",	jmp_insn,	31,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 68 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"blsmsk",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_Z,	0x00,	0xF3,	0x02,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 269 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpnltsd",	ssecmp_64_insn,	4,	SUF_Z,	0x05,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 566 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"inc",	incdec_insn,	6,	SUF_Z,	0x40,	0x00,	0,	0,	0,	0,	0},
#line 1179 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setng",	setcc_insn,	1,	SUF_Z,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 739 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"montmul",	padlock_insn,	1,	SUF_Z,	0xC0,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 147 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovew",	cmovcc_insn,	3,	SUF_W,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 1946 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsubsb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1101 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rolb",	shift_insn,	16,	SUF_B,	0x00,	0,	0,	0,	0,	0,	0},
#line 188 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovng",	cmovcc_insn,	3,	SUF_Z,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 56 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"arplw",	arpl_insn,	1,	SUF_W,	0,	0,	0,	NOT_64,	CPU_286,	CPU_Prot,	0},
#line 293 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpxchgb",	cmpxchgxadd_insn,	4,	SUF_B,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 631 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jz",	jcc_insn,	9,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 1226 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shrd",	shlrd_insn,	9,	SUF_Z,	0xAC,	0,	0,	0,	CPU_386,	0,	0},
#line 310 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtpd2pi",	cvt_mm_xmm_insn,	1,	SUF_Z,	0x66,	0x2D,	0,	0,	CPU_SSE2,	0,	0},
#line 1391 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmplt_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x11,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1524 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmadd132ps",	vfma_ps_insn,	2,	SUF_Z,	0x98,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 776 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movntsd",	movntsd_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 287 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpunordss",	ssecmp_32_insn,	4,	SUF_Z,	0x03,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 725 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lzcntq",	cnt_insn,	3,	SUF_Q,	0xBD,	0,	0,	ONLY_64,	CPU_LZCNT,	0,	0},
#line 1325 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vaesenclast",	aes_insn,	2,	SUF_Z,	0x38,	0xDD,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1856 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmacsdd",	vpma_insn,	1,	SUF_Z,	0x9E,	0,	0,	0,	CPU_XOP,	0,	0},
#line 301 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cqto",	onebyte_insn,	1,	SUF_Z,	0x99,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 140 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovc",	cmovcc_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 72 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"blsrl",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_L,	0x00,	0xF3,	0x01,	ONLY_64|ONLY_AVX,	CPU_BMI1,	0,	0},
#line 499 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsave",	twobytemem_insn,	1,	SUF_Z,	0x06,	0x9B,	0xDD,	0,	CPU_FPU,	0,	0},
#line 797 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movupd",	movau_insn,	6,	SUF_Z,	0x66,	0x10,	0x01,	0,	CPU_SSE2,	0,	0},
#line 159 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovleq",	cmovcc_insn,	3,	SUF_Q,	0x0E,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1262 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sscab",	onebyte_insn,	1,	SUF_Z,	0xAE,	0x00,	0,	0,	0,	0,	0},
#line 951 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pminud",	sse4_insn,	2,	SUF_Z,	0x3B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 901 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pextrwl",	pextrw_insn,	7,	SUF_L,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 606 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jle",	jcc_insn,	9,	SUF_Z,	0x0E,	0,	0,	0,	0,	0,	0},
#line 1752 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgeud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 1291 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"swapgs",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xF8,	ONLY_64,	0,	0,	0},
#line 1033 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ptest",	sse4_insn,	2,	SUF_Z,	0x17,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1112 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rorxw",	vex_gpr_reg_rm_0F_imm8_insn,	2,	SUF_W,	0xF2,	0x3A,	0xF0,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1130 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sar",	shift_insn,	16,	SUF_Z,	0x07,	0,	0,	0,	0,	0,	0},
#line 1996 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"wrgsbase",	fs_gs_base_insn,	2,	SUF_Z,	0x03,	0,	0,	ONLY_64,	CPU_FSGSBASE,	0,	0},
#line 781 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movsbl",	movszx_insn,	5,	SUF_B,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 1167 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setna",	setcc_insn,	1,	SUF_Z,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 1470 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpunordsd",	ssecmp_64_insn,	4,	SUF_Z,	0x03,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1742 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomfalseq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 1808 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomuw",	vpcom_imm_insn,	1,	SUF_Z,	0xED,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1785 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomneqq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1735 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomequb",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 465 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fldl",	fld_insn,	4,	SUF_L,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 52 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"andq",	arith_insn,	22,	SUF_Q,	0x20,	0x04,	0,	ONLY_64,	0,	0,	0},
#line 638 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lcalll",	ljmpcall_insn,	7,	SUF_L,	0x03,	0x9A,	0,	0,	CPU_386,	0,	0},
#line 1386 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmplesd",	ssecmp_64_insn,	4,	SUF_Z,	0x02,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 255 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpltpd",	ssecmp_128_insn,	3,	SUF_Z,	0x01,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1158 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"seteb",	setcc_insn,	1,	SUF_B,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 550 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"hsubpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x7D,	0,	0,	CPU_SSE3,	0,	0},
#line 1028 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psubsw",	mmxsse2_insn,	2,	SUF_Z,	0xE9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 2014 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xcryptofb",	padlock_insn,	1,	SUF_Z,	0xE8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1067 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rdfsbase",	fs_gs_base_insn,	2,	SUF_Z,	0x00,	0,	0,	ONLY_64,	CPU_FSGSBASE,	0,	0},
#line 1563 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsubadd231pd",	vfma_pd_insn,	2,	SUF_Z,	0xB7,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 128 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovaew",	cmovcc_insn,	3,	SUF_W,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1634 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmload",	svm_rax_insn,	2,	SUF_Z,	0xDA,	0,	0,	0,	CPU_SVM,	0,	0},
#line 1881 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpminub",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 249 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpeqss",	ssecmp_32_insn,	4,	SUF_Z,	0x00,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 711 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lretq",	retnf_insn,	6,	SUF_Q,	0xCA,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1435 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnless",	ssecmp_32_insn,	4,	SUF_Z,	0x06,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 925 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"phminposuw",	sse4_insn,	2,	SUF_Z,	0x41,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 982 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pop",	pop_insn,	23,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 483 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fnsaves",	onebytemem_insn,	1,	SUF_S,	0x06,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 49 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"andnq",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Q,	0x00,	0x38,	0xF2,	ONLY_64|ONLY_AVX,	CPU_BMI1,	0,	0},
#line 700 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopnzl",	loopl_insn,	4,	SUF_Z,	0x00,	0x20,	0,	0,	0,	0,	0},
#line 694 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopl",	loopl_insn,	4,	SUF_Z,	0x02,	0x20,	0,	0,	0,	0,	0},
#line 909 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfcmpgt",	now3d_insn,	1,	SUF_Z,	0xA0,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 894 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pext",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Z,	0xF3,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1639 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovddup",	vmovddup_insn,	3,	SUF_Z,	0xF2,	0x12,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 187 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnew",	cmovcc_insn,	3,	SUF_W,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 1308 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ucomiss",	xmm_xmm32_insn,	4,	SUF_Z,	0x00,	0x2E,	0,	0,	CPU_SSE,	0,	0},
#line 1069 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rdmsr",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x32,	0,	0,	CPU_586,	CPU_Priv,	0},
#line 966 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovzxwd",	sse4m64_insn,	4,	SUF_Z,	0x33,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 481 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fnsave",	onebytemem_insn,	1,	SUF_Z,	0x06,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 234 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovpq",	cmovcc_insn,	3,	SUF_Q,	0x0A,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1223 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shlxq",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Q,	0x66,	0x38,	0xF7,	ONLY_64|ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1552 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsub213ps",	vfma_ps_insn,	2,	SUF_Z,	0xAA,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1790 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomneqw",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 2016 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xlatb",	onebyte_insn,	1,	SUF_Z,	0xD7,	0x00,	0,	0,	0,	0,	0},
#line 1443 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnltss",	ssecmp_32_insn,	4,	SUF_Z,	0x05,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 423 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fidiv",	fiarith_insn,	2,	SUF_Z,	0x06,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 295 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpxchgq",	cmpxchgxadd_insn,	4,	SUF_Q,	0xB0,	0,	0,	ONLY_64,	CPU_486,	0,	0},
#line 872 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pblendw",	sse4imm_insn,	2,	SUF_Z,	0x0E,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 748 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movb",	mov_insn,	69,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 698 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopnew",	loopw_insn,	4,	SUF_Z,	0x00,	0x10,	0,	NOT_64,	0,	0,	0},
#line 308 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtdq2ps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 551 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"hsubps",	xmm_xmm128_insn,	2,	SUF_Z,	0xF2,	0x7D,	0,	0,	CPU_SSE3,	0,	0},
#line 480 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fnop",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xD0,	0,	0,	CPU_FPU,	0,	0},
#line 821 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mwait",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC9,	0,	CPU_SSE3,	0,	0},
#line 807 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movzxw",	movszx_insn,	5,	SUF_W,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 166 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnael",	cmovcc_insn,	3,	SUF_L,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 133 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovbe",	cmovcc_insn,	3,	SUF_Z,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 1614 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vhsubps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0xF2,	0x7D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 223 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovow",	cmovcc_insn,	3,	SUF_W,	0x00,	0,	0,	0,	CPU_686,	0,	0},
#line 299 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cpuid",	twobyte_insn,	1,	SUF_Z,	0x0F,	0xA2,	0,	0,	CPU_486,	0,	0},
#line 755 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movhlps",	movhllhps_insn,	2,	SUF_Z,	0x12,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1437 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnlt_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x15,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 162 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovlq",	cmovcc_insn,	3,	SUF_Q,	0x0C,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1903 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmulld",	ssse3_insn,	5,	SUF_Z,	0x40,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1937 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsrld",	vpshift_insn,	8,	SUF_Z,	0xD2,	0x72,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1488 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtsd2siq",	cvt_rx_xmm64_insn,	4,	SUF_Q,	0xF2,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1238 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sidt",	twobytemem_insn,	1,	SUF_Z,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 666 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lgs",	lfgss_insn,	3,	SUF_Z,	0xB5,	0,	0,	0,	CPU_386,	0,	0},
#line 1357 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpfalse_osps",	ssecmp_128_insn,	3,	SUF_Z,	0x1B,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1871 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmaskmovq",	vmaskmov_vexw1_avx2_insn,	4,	SUF_Z,	0x8C,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1589 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsub132sd",	vfma_sd_insn,	2,	SUF_Z,	0x9F,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1383 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmple_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x12,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 852 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"packusdw",	sse4_insn,	2,	SUF_Z,	0x2B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1855 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpinsrwq",	pinsrw_insn,	9,	SUF_Q,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 948 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pminsd",	sse4_insn,	2,	SUF_Z,	0x39,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1337 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vbroadcasti128",	vbroadcastif128_insn,	1,	SUF_Z,	0x5A,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 391 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcmovu",	fcmovcc_insn,	1,	SUF_Z,	0xDA,	0xD8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1068 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rdgsbase",	fs_gs_base_insn,	2,	SUF_Z,	0x01,	0,	0,	ONLY_64,	CPU_FSGSBASE,	0,	0},
#line 1832 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphadddq",	vphaddsub_insn,	1,	SUF_Z,	0xCB,	0,	0,	0,	CPU_XOP,	0,	0},
#line 136 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovbew",	cmovcc_insn,	3,	SUF_W,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 409 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fdivrs",	farith_insn,	7,	SUF_S,	0xF0,	0xF8,	0x07,	0,	CPU_FPU,	0,	0},
#line 279 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpsd",	cmpsd_insn,	5,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1693 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpaddd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1185 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnle",	setcc_insn,	1,	SUF_Z,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 189 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnge",	cmovcc_insn,	3,	SUF_Z,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 372 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"extractps",	extractps_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 766 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movmskpsl",	movmsk_insn,	4,	SUF_L,	0,	0,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 596 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jae",	jcc_insn,	9,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 1455 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpss",	xmm_xmm32_imm_insn,	4,	SUF_Z,	0xF3,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 250 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpl",	arith_insn,	22,	SUF_L,	0x38,	0x07,	0,	0,	CPU_386,	0,	0},
#line 257 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpltsd",	ssecmp_64_insn,	4,	SUF_Z,	0x01,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 449 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fisttpll",	fildstp_insn,	4,	SUF_Q,	0x07,	0,	0,	0,	CPU_SSE3,	0,	0},
#line 1142 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sbbw",	arith_insn,	22,	SUF_W,	0x18,	0x03,	0,	0,	0,	0,	0},
#line 1766 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomleq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 20 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"adcw",	arith_insn,	22,	SUF_W,	0x10,	0x02,	0,	0,	0,	0,	0},
#line 1199 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setpe",	setcc_insn,	1,	SUF_Z,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 1296 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sysretl",	twobyte_insn,	1,	SUF_L,	0x0F,	0x07,	0,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 1132 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sarl",	shift_insn,	16,	SUF_L,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 1718 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcmpeqb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x74,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 963 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovzxbq",	sse4m16_insn,	4,	SUF_Z,	0x32,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 835 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"orl",	arith_insn,	22,	SUF_L,	0x08,	0x01,	0,	0,	CPU_386,	0,	0},
#line 1979 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vsubss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 619 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jnl",	jcc_insn,	9,	SUF_Z,	0x0D,	0,	0,	0,	0,	0,	0},
#line 1349 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeq_usps",	ssecmp_128_insn,	3,	SUF_Z,	0x18,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 367 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"emms",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x77,	0,	0,	CPU_MMX,	0,	0},
#line 940 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmagw",	cyrixmmx_insn,	1,	SUF_Z,	0x52,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 618 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jnge",	jcc_insn,	9,	SUF_Z,	0x0C,	0,	0,	0,	0,	0,	0},
#line 1734 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomeqq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1202 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setpob",	setcc_insn,	1,	SUF_B,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 378 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"faddp",	farithp_insn,	3,	SUF_Z,	0xC0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1914 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpshad",	amd_vpshift_insn,	2,	SUF_Z,	0x9A,	0,	0,	0,	CPU_XOP,	0,	0},
#line 647 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"leal",	lea_insn,	3,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 726 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lzcntw",	cnt_insn,	3,	SUF_W,	0xBD,	0,	0,	0,	CPU_LZCNT,	0,	0},
#line 163 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovlw",	cmovcc_insn,	3,	SUF_W,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 2019 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xorl",	arith_insn,	22,	SUF_L,	0x30,	0x06,	0,	0,	CPU_386,	0,	0},
#line 112 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cbw",	onebyte_insn,	1,	SUF_Z,	0x98,	0x10,	0,	0,	0,	0,	0},
#line 522 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsubl",	farith_insn,	7,	SUF_L,	0xE8,	0xE0,	0x04,	0,	CPU_FPU,	0,	0},
#line 297 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"comisd",	xmm_xmm64_insn,	4,	SUF_Z,	0x66,	0x2F,	0,	0,	CPU_SSE2,	0,	0},
#line 754 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movdqu",	movau_insn,	6,	SUF_Z,	0xF3,	0x6F,	0x10,	0,	CPU_SSE2,	0,	0},
#line 419 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ficomp",	fiarith_insn,	2,	SUF_Z,	0x03,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1981 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vtestps",	sse4_insn,	2,	SUF_Z,	0x0E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 549 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"hnt",	NULL,	X86_SEGREG>>8,	0x2E,	0,	0,	0,	0,	0,	0,	0},
#line 1889 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovsxbw",	sse4m64_insn,	4,	SUF_Z,	0x20,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 261 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpneqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x04,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1943 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsubb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1080 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ret",	retnf_insn,	6,	SUF_Z,	0xC2,	0,	0,	0,	0,	0,	0},
#line 1051 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pushq",	push_insn,	35,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1305 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"tzcntq",	cnt_insn,	3,	SUF_Q,	0xBC,	0,	0,	ONLY_64,	CPU_BMI1,	0,	0},
#line 482 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fnsavel",	onebytemem_insn,	1,	SUF_L,	0x06,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 1850 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpinsrb",	pinsrb_insn,	4,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1936 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsraw",	vpshift_insn,	8,	SUF_Z,	0xE1,	0x71,	0x04,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1030 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psubusw",	mmxsse2_insn,	2,	SUF_Z,	0xD9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 588 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"invvpidl",	eptvpid_insn,	2,	SUF_L,	0x01,	0,	0,	NOT_64,	CPU_386,	CPU_EPTVPID,	0},
#line 1270 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"stmxcsr",	ldstmxcsr_insn,	1,	SUF_Z,	0x03,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1824 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpgatherdd",	gather_32x_32y_insn,	2,	SUF_Z,	0x90,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 961 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovsxwq",	sse4m32_insn,	4,	SUF_Z,	0x24,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 813 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mulps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x59,	0,	0,	CPU_SSE,	0,	0},
#line 70 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"blsmskw",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_W,	0x00,	0xF3,	0x02,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1953 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpunpckhdq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x6A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1396 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneq_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x0C,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 650 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"leavel",	onebyte_insn,	1,	SUF_Z,	0xC9,	0x00,	0x40,	0,	CPU_186,	0,	0},
#line 334 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvttps2pi",	cvt_mm_xmm64_insn,	2,	SUF_Z,	0x2C,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1574 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmadd132ss",	vfma_ss_insn,	2,	SUF_Z,	0x9D,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 442 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fistpl",	fildstp_insn,	4,	SUF_L,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 640 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lcallw",	ljmpcall_insn,	7,	SUF_W,	0x03,	0x9A,	0,	0,	0,	0,	0},
#line 570 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"incw",	incdec_insn,	6,	SUF_W,	0x40,	0x00,	0,	0,	0,	0,	0},
#line 1529 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmadd213sd",	vfma_sd_insn,	2,	SUF_Z,	0xA9,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1947 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsubsw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1515 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vdpps",	sse4imm_256_insn,	4,	SUF_Z,	0x40,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 519 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fstsw",	fstsw_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 80 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bsfw",	bsfr_insn,	3,	SUF_W,	0xBC,	0,	0,	0,	CPU_386,	0,	0},
#line 561 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"imull",	imul_insn,	19,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 873 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pclmulhqhqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x11,	0,	0,	0,	CPU_AVX,	0,	0},
#line 1774 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomltq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1479 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtpd2ps",	avx_cvt_xmm128_insn,	2,	SUF_Z,	0x66,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 88 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bt",	bittest_insn,	6,	SUF_Z,	0xA3,	0x04,	0,	0,	CPU_386,	0,	0},
#line 1671 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmresume",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC3,	0,	CPU_P4,	0,	0},
#line 318 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtsd2sil",	cvt_rx_xmm64_insn,	4,	SUF_L,	0xF2,	0x2D,	0,	0,	CPU_386,	CPU_SSE2,	0},
#line 944 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmaxub",	mmxsse2_insn,	2,	SUF_Z,	0xDE,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 361 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"divsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5E,	0,	0,	CPU_SSE2,	0,	0},
#line 841 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"outb",	out_insn,	12,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 608 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jmpl",	jmp_insn,	31,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 1180 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setngb",	setcc_insn,	1,	SUF_B,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 1928 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpslld",	vpshift_insn,	8,	SUF_Z,	0xF2,	0x72,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 642 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ldmxcsr",	ldstmxcsr_insn,	1,	SUF_Z,	0x02,	0,	0,	0,	CPU_SSE,	0,	0},
#line 575 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"insl",	onebyte_insn,	1,	SUF_Z,	0x6D,	0x20,	0,	0,	CPU_386,	0,	0},
#line 424 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fidivl",	fiarith_insn,	2,	SUF_L,	0x06,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 876 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pclmullqlqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x00,	0,	0,	0,	CPU_AVX,	0,	0},
#line 1538 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmaddss",	fma_128_m32_insn,	3,	SUF_Z,	0x6A,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 964 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovzxbw",	sse4m64_insn,	4,	SUF_Z,	0x30,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1547 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsub132pd",	vfma_pd_insn,	2,	SUF_Z,	0x9A,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1040 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"punpcklqdq",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x6C,	0,	0,	CPU_SSE2,	0,	0},
#line 1746 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomfalseuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 1678 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmwrite",	vmxmemwr_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 747 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movaps",	movau_insn,	6,	SUF_Z,	0x00,	0x28,	0x01,	0,	CPU_SSE,	0,	0},
#line 692 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopeq",	loopq_insn,	4,	SUF_Z,	0x01,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 537 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fxch",	fxch_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1418 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpngesd",	ssecmp_64_insn,	4,	SUF_Z,	0x09,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 294 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpxchgl",	cmpxchgxadd_insn,	4,	SUF_L,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 1348 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeq_uspd",	ssecmp_128_insn,	3,	SUF_Z,	0x18,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 971 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmulhrwa",	now3d_insn,	1,	SUF_Z,	0xB7,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 773 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movntpd",	movnt_insn,	2,	SUF_Z,	0x66,	0x2B,	0,	0,	CPU_SSE2,	0,	0},
#line 937 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmachriw",	pmachriw_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1494 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtsi2ssl",	cvt_xmm_rmx_insn,	6,	SUF_L,	0xF3,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 502 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fscale",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFD,	0,	0,	CPU_FPU,	0,	0},
#line 121 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cltq",	onebyte_insn,	1,	SUF_Z,	0x98,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 183 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovncw",	cmovcc_insn,	3,	SUF_W,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 434 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fimul",	fiarith_insn,	2,	SUF_Z,	0x01,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1261 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sqrtss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x51,	0,	0,	CPU_SSE,	0,	0},
#line 1925 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsignb",	ssse3_insn,	5,	SUF_Z,	0x08,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1760 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgtud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 31 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"addss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x58,	0,	0,	CPU_SSE,	0,	0},
#line 357 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"divl",	div_insn,	8,	SUF_L,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 970 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmulhrsw",	ssse3_insn,	5,	SUF_Z,	0x0B,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1828 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphaddbd",	vphaddsub_insn,	1,	SUF_Z,	0xC2,	0,	0,	0,	CPU_XOP,	0,	0},
#line 947 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pminsb",	sse4_insn,	2,	SUF_Z,	0x38,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1492 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtsi2sdq",	cvt_xmm_rmx_insn,	6,	SUF_Q,	0xF2,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 811 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mull",	f6_insn,	4,	SUF_L,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 540 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fxsave",	twobytemem_insn,	1,	SUF_Z,	0x00,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 1493 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtsi2ss",	cvt_xmm_rmx_insn,	6,	SUF_Z,	0xF3,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1474 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtdq2pd",	avx_cvt_xmm64_insn,	3,	SUF_Z,	0xF3,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 874 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pclmulhqlqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x01,	0,	0,	0,	CPU_AVX,	0,	0},
#line 123 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmc",	onebyte_insn,	1,	SUF_Z,	0xF5,	0,	0,	0,	0,	0,	0},
#line 1468 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpunordpd",	ssecmp_128_insn,	3,	SUF_Z,	0x03,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1343 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeq_osss",	ssecmp_32_insn,	4,	SUF_Z,	0x10,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1089 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rex64xz",	NULL,	X86_REX>>8,	0x4D,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1794 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomneuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1682 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmxon",	vmxthreebytemem_insn,	1,	SUF_Z,	0xF3,	0,	0,	0,	CPU_P4,	0,	0},
#line 1714 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpclmullqhqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x10,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1608 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vgatherdps",	gather_32x_32y_insn,	2,	SUF_Z,	0x92,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 645 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ldsw",	ldes_insn,	2,	SUF_W,	0xC5,	0,	0,	NOT_64,	0,	0,	0},
#line 843 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"outsb",	onebyte_insn,	1,	SUF_Z,	0x6E,	0x00,	0,	0,	0,	0,	0},
#line 245 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpb",	arith_insn,	22,	SUF_B,	0x38,	0x07,	0,	0,	0,	0,	0},
#line 1098 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rexyz",	NULL,	X86_REX>>8,	0x43,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1122 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rsts",	cyrixsmm_insn,	1,	SUF_Z,	0x7D,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 555 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"idivb",	div_insn,	8,	SUF_B,	0x07,	0,	0,	0,	0,	0,	0},
#line 444 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fistpq",	fildstp_insn,	4,	SUF_Q,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 1833 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphaddsw",	ssse3_insn,	5,	SUF_Z,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1641 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovdqu",	movau_insn,	6,	SUF_Z,	0xF3,	0x6F,	0x10,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 114 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cdqe",	onebyte_insn,	1,	SUF_Z,	0x98,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1416 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpngepd",	ssecmp_128_insn,	3,	SUF_Z,	0x09,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 965 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovzxdq",	sse4m64_insn,	4,	SUF_Z,	0x35,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1048 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pushfq",	onebyte_insn,	1,	SUF_Z,	0x9C,	0x40,	0x40,	ONLY_64,	0,	0,	0},
#line 1147 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"seta",	setcc_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 89 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btc",	bittest_insn,	6,	SUF_Z,	0xBB,	0x07,	0,	0,	CPU_386,	0,	0},
#line 1800 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomtrueub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 224 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovp",	cmovcc_insn,	3,	SUF_Z,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 2002 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xaddq",	cmpxchgxadd_insn,	4,	SUF_Q,	0xC0,	0,	0,	ONLY_64,	CPU_486,	0,	0},
#line 376 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fadd",	farith_insn,	7,	SUF_Z,	0xC0,	0xC0,	0x00,	0,	CPU_FPU,	0,	0},
#line 1537 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmaddsd",	fma_128_m64_insn,	3,	SUF_Z,	0x6B,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1556 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsub231ps",	vfma_ps_insn,	2,	SUF_Z,	0xBA,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 59 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bextrl",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_L,	0x00,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1934 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsrad",	vpshift_insn,	8,	SUF_Z,	0xE2,	0x72,	0x04,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 768 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movntdq",	movnt_insn,	2,	SUF_Z,	0x66,	0xE7,	0,	0,	CPU_SSE2,	0,	0},
#line 556 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"idivl",	div_insn,	8,	SUF_L,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 761 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movlps",	movhlp_insn,	3,	SUF_Z,	0x00,	0x12,	0,	0,	CPU_SSE,	0,	0},
#line 399 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcomps",	fcom_insn,	6,	SUF_S,	0xD8,	0x03,	0,	0,	CPU_FPU,	0,	0},
#line 182 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovncq",	cmovcc_insn,	3,	SUF_Q,	0x03,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1243 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sldt",	sldtmsw_insn,	6,	SUF_Z,	0x00,	0x00,	0,	0,	CPU_286,	0,	0},
#line 1625 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmaxsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 899 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pextrq",	pextrq_insn,	1,	SUF_Z,	0,	0,	0,	ONLY_64,	CPU_SSE41,	0,	0},
#line 1428 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnle_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x16,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1728 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcmpistri",	sse4pcmpstr_insn,	1,	SUF_Z,	0x63,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 617 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jng",	jcc_insn,	9,	SUF_Z,	0x0E,	0,	0,	0,	0,	0,	0},
#line 663 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lgdtl",	twobytemem_insn,	1,	SUF_L,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 900 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pextrw",	pextrw_insn,	7,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 763 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movmskpdl",	movmsk_insn,	4,	SUF_L,	0x66,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1931 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsllvd",	vpshiftv_vexw0_avx2_insn,	2,	SUF_Z,	0x47,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 278 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpsb",	onebyte_insn,	1,	SUF_Z,	0xA6,	0x00,	0,	0,	0,	0,	0},
#line 1616 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vinserti128",	vinsertif128_insn,	1,	SUF_Z,	0x38,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1444 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpord_spd",	ssecmp_128_insn,	3,	SUF_Z,	0x17,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 143 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovcw",	cmovcc_insn,	3,	SUF_W,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 1363 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpfalsess",	ssecmp_32_insn,	4,	SUF_Z,	0x0B,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1970 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vshufps",	xmm_xmm128_imm_256_insn,	3,	SUF_Z,	0x00,	0xC6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 792 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movswl",	movszx_insn,	5,	SUF_W,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 244 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmp",	arith_insn,	22,	SUF_Z,	0x38,	0x07,	0,	0,	0,	0,	0},
#line 1000 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"prefetcht0",	twobytemem_insn,	1,	SUF_Z,	0x01,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 1079 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"repz",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 1635 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmmcall",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xD9,	0,	CPU_SVM,	0,	0},
#line 1990 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vzeroall",	vzero_insn,	1,	SUF_Z,	0xC4,	0,	0,	0,	CPU_AVX,	0,	0},
#line 942 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmaxsd",	sse4_insn,	2,	SUF_Z,	0x3D,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 914 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfpnacc",	now3d_insn,	1,	SUF_Z,	0x8E,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 621 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jno",	jcc_insn,	9,	SUF_Z,	0x01,	0,	0,	0,	0,	0,	0},
#line 87 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bswapq",	bswap_insn,	2,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1510 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vdivpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 576 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"insw",	onebyte_insn,	1,	SUF_Z,	0x6D,	0x10,	0,	0,	0,	0,	0},
#line 1372 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpgt_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x1E,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1230 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shrl",	shift_insn,	16,	SUF_L,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 1347 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeq_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x08,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 468 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fldlg2",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xEC,	0,	0,	CPU_FPU,	0,	0},
#line 1627 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmcall",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC1,	0,	CPU_P4,	0,	0},
#line 211 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnpw",	cmovcc_insn,	3,	SUF_W,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 265 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpnlesd",	ssecmp_64_insn,	4,	SUF_Z,	0x06,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1059 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rclw",	shift_insn,	16,	SUF_W,	0x02,	0,	0,	0,	0,	0,	0},
#line 1726 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcmpgtq",	ssse3_insn,	5,	SUF_Z,	0x37,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 660 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lfsq",	lfgss_insn,	3,	SUF_Q,	0xB4,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 145 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovel",	cmovcc_insn,	3,	SUF_L,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 1471 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpunordss",	ssecmp_32_insn,	4,	SUF_Z,	0x03,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 83 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bsrq",	bsfr_insn,	3,	SUF_Q,	0xBD,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1362 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpfalsesd",	ssecmp_64_insn,	4,	SUF_Z,	0x0B,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1029 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psubusb",	mmxsse2_insn,	2,	SUF_Z,	0xD8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1463 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmptruess",	ssecmp_32_insn,	4,	SUF_Z,	0x0F,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1006 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pshufd",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x66,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 658 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lfs",	lfgss_insn,	3,	SUF_Z,	0xB4,	0,	0,	0,	CPU_386,	0,	0},
#line 548 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"hlt",	onebyte_insn,	1,	SUF_Z,	0xF4,	0,	0,	0,	CPU_Priv,	0,	0},
#line 1991 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vzeroupper",	vzero_insn,	1,	SUF_Z,	0xC0,	0,	0,	0,	CPU_AVX,	0,	0},
#line 530 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fucom",	fcom2_insn,	2,	SUF_Z,	0xDD,	0xE0,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 48 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"andnps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x55,	0,	0,	CPU_SSE,	0,	0},
#line 1214 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shld",	shlrd_insn,	9,	SUF_Z,	0xA4,	0,	0,	0,	CPU_386,	0,	0},
#line 61 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"blendpd",	sse4imm_insn,	2,	SUF_Z,	0x0D,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1787 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomnequd",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 427 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fidivrs",	fiarith_insn,	2,	SUF_S,	0x07,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1427 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpngtss",	ssecmp_32_insn,	4,	SUF_Z,	0x0A,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 386 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcmove",	fcmovcc_insn,	1,	SUF_Z,	0xDA,	0xC8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 97 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btrq",	bittest_insn,	6,	SUF_Q,	0xB3,	0x06,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1129 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"salw",	shift_insn,	16,	SUF_W,	0x04,	0,	0,	0,	0,	0,	0},
#line 96 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btrl",	bittest_insn,	6,	SUF_L,	0xB3,	0x06,	0,	0,	CPU_386,	0,	0},
#line 1227 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shrdl",	shlrd_insn,	9,	SUF_L,	0xAC,	0,	0,	0,	CPU_386,	0,	0},
#line 956 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovsxbd",	sse4m32_insn,	4,	SUF_Z,	0x21,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1809 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomw",	vpcom_imm_insn,	1,	SUF_Z,	0xCD,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1322 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vaesdec",	aes_insn,	2,	SUF_Z,	0x38,	0xDE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1144 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"scasl",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x20,	0,	0,	CPU_386,	0,	0},
#line 36 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"aesdec",	aes_insn,	2,	SUF_Z,	0x38,	0xDE,	0,	0,	CPU_AVX,	0,	0},
#line 883 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pcmpestrm",	sse4pcmpstr_insn,	1,	SUF_Z,	0x60,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 371 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"enterw",	enter_insn,	3,	SUF_W,	0,	0,	0,	0,	CPU_186,	0,	0},
#line 928 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"phsubw",	ssse3_insn,	5,	SUF_Z,	0x05,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 734 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"minpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5D,	0,	0,	CPU_SSE2,	0,	0},
#line 1963 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vroundpd",	avx_sse4imm_insn,	3,	SUF_Z,	0x09,	0,	0,	ONLY_AVX,	CPU_SSE41,	0,	0},
#line 1715 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpclmullqlqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1423 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpngt_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x1A,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1160 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setgb",	setcc_insn,	1,	SUF_B,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 681 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lmsww",	prot286_insn,	1,	SUF_W,	0x06,	0x01,	0,	0,	CPU_286,	CPU_Priv,	0},
#line 788 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movslq",	movsxd_insn,	1,	SUF_L,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 554 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"idiv",	div_insn,	8,	SUF_Z,	0x07,	0,	0,	0,	0,	0,	0},
#line 1983 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vucomiss",	avx_xmm_xmm32_insn,	2,	SUF_Z,	0x00,	0x2E,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1393 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpltps",	ssecmp_128_insn,	3,	SUF_Z,	0x01,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2024 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xrstor",	twobytemem_insn,	1,	SUF_Z,	0x05,	0x0F,	0xAE,	0,	CPU_386,	CPU_XSAVE,	0},
#line 488 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fnstenvs",	onebytemem_insn,	1,	SUF_S,	0x06,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 772 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movntiq",	movnti_insn,	2,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_P4,	0,	0},
#line 685 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lodsb",	onebyte_insn,	1,	SUF_Z,	0xAC,	0x00,	0,	0,	0,	0,	0},
#line 558 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"idivw",	div_insn,	8,	SUF_W,	0x07,	0,	0,	0,	0,	0,	0},
#line 54 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"aqword",	NULL,	X86_ADDRSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 402 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fdecstp",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF6,	0,	0,	CPU_FPU,	0,	0},
#line 1020 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psrldq",	pslrldq_insn,	4,	SUF_Z,	0x03,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 810 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mulb",	f6_insn,	4,	SUF_B,	0x04,	0,	0,	0,	0,	0,	0},
#line 1198 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setpb",	setcc_insn,	1,	SUF_B,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 786 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movsl",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x20,	0,	0,	CPU_386,	0,	0},
#line 514 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fstp",	fstp_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1400 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneq_ospd",	ssecmp_128_insn,	3,	SUF_Z,	0x1C,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1072 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rdshr",	rdwrshr_insn,	1,	SUF_Z,	0x00,	0,	0,	0,	CPU_686,	CPU_Cyrix,	CPU_SMM},
#line 1754 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgeuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 1909 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vprotd",	vprot_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1653 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovmskpsq",	movmsk_insn,	4,	SUF_Q,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 824 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"negl",	f6_insn,	4,	SUF_L,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1224 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shr",	shift_insn,	16,	SUF_Z,	0x05,	0,	0,	0,	0,	0,	0},
#line 1591 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsub213pd",	vfma_pd_insn,	2,	SUF_Z,	0xAE,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1593 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsub213sd",	vfma_sd_insn,	2,	SUF_Z,	0xAF,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 458 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fld",	fld_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1701 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpand",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1778 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomltuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 859 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"paddsw",	mmxsse2_insn,	2,	SUF_Z,	0xED,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1191 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setns",	setcc_insn,	1,	SUF_Z,	0x09,	0,	0,	0,	CPU_386,	0,	0},
#line 1283 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"subps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5C,	0,	0,	CPU_SSE,	0,	0},
#line 790 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movss",	movss_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_SSE,	0,	0},
#line 215 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnsw",	cmovcc_insn,	3,	SUF_W,	0x09,	0,	0,	0,	CPU_686,	0,	0},
#line 1817 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpermq",	vperm_imm_avx2_insn,	1,	SUF_Z,	0x00,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1572 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmadd132ps",	vfma_ps_insn,	2,	SUF_Z,	0x9C,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1253 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"smovw",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x10,	0,	0,	0,	0,	0},
#line 1646 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovlpd",	movhlp_insn,	3,	SUF_Z,	0x66,	0x12,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 416 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fiadds",	fiarith_insn,	2,	SUF_S,	0x00,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1968 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vrsqrtss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x52,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1077 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"repne",	NULL,	X86_LOCKREP>>8,	0xF2,	0,	0,	0,	0,	0,	0,	0},
#line 629 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jrcxz",	jcxz_insn,	2,	SUF_Z,	0x40,	0,	0,	ONLY_64,	0,	0,	0},
#line 300 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cqo",	onebyte_insn,	1,	SUF_Z,	0x99,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 565 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"inb",	in_insn,	12,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 292 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpxchg8bq",	cmpxchg8b_insn,	1,	SUF_Q,	0,	0,	0,	0,	CPU_586,	0,	0},
#line 1674 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmulpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1389 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmplt_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x11,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 603 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jg",	jcc_insn,	9,	SUF_Z,	0x0F,	0,	0,	0,	0,	0,	0},
#line 93 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btl",	bittest_insn,	6,	SUF_L,	0xA3,	0x04,	0,	0,	CPU_386,	0,	0},
#line 746 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movapd",	movau_insn,	6,	SUF_Z,	0x66,	0x28,	0x01,	0,	CPU_SSE2,	0,	0},
#line 1873 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmaxsd",	ssse3_insn,	5,	SUF_Z,	0x3D,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 611 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jna",	jcc_insn,	9,	SUF_Z,	0x06,	0,	0,	0,	0,	0,	0},
#line 1434 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnlesd",	ssecmp_64_insn,	4,	SUF_Z,	0x06,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1540 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmaddsub132ps",	vfma_ps_insn,	2,	SUF_Z,	0x96,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 340 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvttss2siq",	cvt_rx_xmm32_insn,	4,	SUF_Q,	0xF3,	0x2C,	0,	ONLY_64,	CPU_SSE,	0,	0},
#line 1394 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpltsd",	ssecmp_64_insn,	4,	SUF_Z,	0x01,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 71 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"blsr",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_Z,	0x00,	0xF3,	0x01,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 415 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fiaddl",	fiarith_insn,	2,	SUF_L,	0x00,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1496 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtss2sd",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 76 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"boundw",	bound_insn,	2,	SUF_W,	0,	0,	0,	NOT_64,	CPU_186,	0,	0},
#line 1843 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphminposuw",	avx_ssse3_2op_insn,	1,	SUF_Z,	0x41,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1094 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rexxy",	NULL,	X86_REX>>8,	0x46,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 277 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpq",	arith_insn,	22,	SUF_Q,	0x38,	0x07,	0,	ONLY_64,	0,	0,	0},
#line 552 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ht",	NULL,	X86_SEGREG>>8,	0x3E,	0,	0,	0,	0,	0,	0,	0},
#line 791 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movsw",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x10,	0,	0,	0,	0,	0},
#line 1498 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtss2sil",	cvt_rx_xmm32_insn,	4,	SUF_L,	0xF3,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 401 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcos",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFF,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 881 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pcmpeqw",	mmxsse2_insn,	2,	SUF_Z,	0x75,	0,	0,	0,	CPU_MMX,	0,	0},
#line 712 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lretw",	retnf_insn,	6,	SUF_W,	0xCA,	0x10,	0,	0,	0,	0,	0},
#line 1215 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shldl",	shlrd_insn,	9,	SUF_L,	0xA4,	0,	0,	0,	CPU_386,	0,	0},
#line 1918 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpshld",	amd_vpshift_insn,	2,	SUF_Z,	0x96,	0,	0,	0,	CPU_XOP,	0,	0},
#line 2009 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xchgw",	xchg_insn,	16,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 1738 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomequw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1339 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vbroadcastss",	vbroadcastss_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1965 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vroundsd",	sse4m64imm_insn,	4,	SUF_Z,	0x0B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 489 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fnstsw",	fnstsw_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 758 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movl",	mov_insn,	69,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 676 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ljmpq",	ljmpcall_insn,	7,	SUF_Q,	0x05,	0xEA,	0,	ONLY_64,	0,	0,	0},
#line 360 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"divq",	div_insn,	8,	SUF_Q,	0x06,	0,	0,	ONLY_64,	0,	0,	0},
#line 1093 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rexx",	NULL,	X86_REX>>8,	0x44,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1857 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmacsdqh",	vpma_insn,	1,	SUF_Z,	0x9F,	0,	0,	0,	CPU_XOP,	0,	0},
#line 62 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"blendps",	sse4imm_insn,	2,	SUF_Z,	0x0C,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 727 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"maskmovdqu",	maskmovdqu_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1840 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphaddw",	ssse3_insn,	5,	SUF_Z,	0x01,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1893 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovzxbd",	sse4m32_insn,	4,	SUF_Z,	0x31,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1689 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpacksswb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x63,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 470 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fldpi",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xEB,	0,	0,	CPU_FPU,	0,	0},
#line 1993 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"wbinvd",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x09,	0,	0,	CPU_486,	CPU_Priv,	0},
#line 347 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"data16",	NULL,	X86_OPERSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 897 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pextrb",	pextrb_insn,	3,	SUF_Z,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 868 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pavgb",	mmxsse2_insn,	2,	SUF_Z,	0xE0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 780 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movsb",	onebyte_insn,	1,	SUF_Z,	0xA4,	0x00,	0,	0,	0,	0,	0},
#line 304 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"crc32l",	crc32_insn,	5,	SUF_L,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 1957 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpunpckldq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x62,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 330 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtss2siq",	cvt_rx_xmm32_insn,	4,	SUF_Q,	0xF3,	0x2D,	0,	ONLY_64,	CPU_SSE,	0,	0},
#line 1645 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovlhps",	movhllhps_insn,	2,	SUF_Z,	0x16,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1121 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rsqrtss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x52,	0,	0,	CPU_SSE,	0,	0},
#line 924 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"phaddw",	ssse3_insn,	5,	SUF_Z,	0x01,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1626 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmaxss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2003 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xaddw",	cmpxchgxadd_insn,	4,	SUF_W,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 582 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"inveptl",	eptvpid_insn,	2,	SUF_L,	0x00,	0,	0,	NOT_64,	CPU_386,	CPU_EPTVPID,	0},
#line 1886 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovmskbq",	pmovmskb_insn,	6,	SUF_Q,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 949 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pminsw",	mmxsse2_insn,	2,	SUF_Z,	0xEA,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 445 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fistps",	fildstp_insn,	4,	SUF_S,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 1816 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpermps",	vperm_var_avx2_insn,	1,	SUF_Z,	0x16,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 380 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fbld",	fbldstp_insn,	1,	SUF_Z,	0x04,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1459 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmptrue_usss",	ssecmp_32_insn,	4,	SUF_Z,	0x1F,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1803 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomtrueuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 1074 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rdtscp",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xF9,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 1597 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsub231sd",	vfma_sd_insn,	2,	SUF_Z,	0xBF,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1892 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovsxwq",	sse4m32_insn,	4,	SUF_Z,	0x24,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1043 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pusha",	onebyte_insn,	1,	SUF_Z,	0x60,	0x00,	0,	NOT_64,	CPU_186,	0,	0},
#line 1666 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmptrld",	vmxtwobytemem_insn,	1,	SUF_Z,	0x06,	0,	0,	0,	CPU_P4,	0,	0},
#line 18 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"adcl",	arith_insn,	22,	SUF_L,	0x10,	0x02,	0,	0,	CPU_386,	0,	0},
#line 462 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fldenv",	onebytemem_insn,	1,	SUF_Z,	0x04,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 1034 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"punpckhbw",	mmxsse2_insn,	2,	SUF_Z,	0x68,	0,	0,	0,	CPU_MMX,	0,	0},
#line 335 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvttsd2si",	cvt_rx_xmm64_insn,	4,	SUF_Z,	0xF2,	0x2C,	0,	0,	CPU_SSE2,	0,	0},
#line 1103 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rolq",	shift_insn,	16,	SUF_Q,	0x00,	0,	0,	ONLY_64,	0,	0,	0},
#line 929 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pi2fd",	now3d_insn,	1,	SUF_Z,	0x0D,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1825 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpgatherdq",	gather_64x_64x_insn,	2,	SUF_Z,	0x90,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1379 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpgtss",	ssecmp_32_insn,	4,	SUF_Z,	0x0E,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 343 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cwtd",	onebyte_insn,	1,	SUF_Z,	0x99,	0x10,	0,	0,	0,	0,	0},
#line 520 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fstsww",	fstsw_insn,	2,	SUF_W,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 930 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pi2fw",	now3d_insn,	1,	SUF_Z,	0x0C,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 1133 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sarq",	shift_insn,	16,	SUF_Q,	0x07,	0,	0,	ONLY_64,	0,	0,	0},
#line 1669 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmreadl",	vmxmemrd_insn,	2,	SUF_L,	0,	0,	0,	NOT_64,	CPU_P4,	0,	0},
#line 25 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"addps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x58,	0,	0,	CPU_SSE,	0,	0},
#line 194 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovngq",	cmovcc_insn,	3,	SUF_Q,	0x0E,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 2030 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xsha256",	padlock_insn,	1,	SUF_Z,	0xD0,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 903 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pf2id",	now3d_insn,	1,	SUF_Z,	0x1D,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 784 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movsd",	movsd_insn,	5,	SUF_Z,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 705 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopz",	loop_insn,	8,	SUF_Z,	0x01,	0,	0,	0,	0,	0,	0},
#line 770 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movnti",	movnti_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 990 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popf",	onebyte_insn,	1,	SUF_Z,	0x9D,	0x00,	0x40,	0,	0,	0,	0},
#line 191 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovngeq",	cmovcc_insn,	3,	SUF_Q,	0x0C,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1461 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmptrueps",	ssecmp_128_insn,	3,	SUF_Z,	0x0F,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1984 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vunpckhpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x15,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1944 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsubd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1012 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psignw",	ssse3_insn,	5,	SUF_Z,	0x09,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1902 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmulhw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1938 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsrldq",	pslrldq_insn,	4,	SUF_Z,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 15 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"aas",	onebyte_insn,	1,	SUF_Z,	0x3F,	0,	0,	NOT_64,	0,	0,	0},
#line 1327 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vaeskeygenassist",	aes_imm_insn,	1,	SUF_Z,	0x3A,	0xDF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 478 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fnclex",	twobyte_insn,	1,	SUF_Z,	0xDB,	0xE2,	0,	0,	CPU_FPU,	0,	0},
#line 584 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"invlpg",	twobytemem_insn,	1,	SUF_Z,	0x07,	0x0F,	0x01,	0,	CPU_486,	CPU_Priv,	0},
#line 303 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"crc32b",	crc32_insn,	5,	SUF_B,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 1575 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmadd213pd",	vfma_pd_insn,	2,	SUF_Z,	0xAC,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1440 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnltpd",	ssecmp_128_insn,	3,	SUF_Z,	0x05,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1609 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vgatherqpd",	gather_64x_64y_insn,	2,	SUF_Z,	0x93,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1697 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpaddusb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1675 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmulps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1181 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnge",	setcc_insn,	1,	SUF_Z,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 32 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"addsubpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0xD0,	0,	0,	CPU_SSE3,	0,	0},
#line 1236 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shufpd",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x66,	0xC6,	0,	0,	CPU_SSE2,	0,	0},
#line 382 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fchs",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE0,	0,	0,	CPU_FPU,	0,	0},
#line 1219 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shlq",	shift_insn,	16,	SUF_Q,	0x04,	0,	0,	ONLY_64,	0,	0,	0},
#line 1268 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"stgi",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xDC,	0,	CPU_SVM,	0,	0},
#line 1175 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnc",	setcc_insn,	1,	SUF_Z,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1875 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmaxub",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 260 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpneqps",	ssecmp_128_insn,	3,	SUF_Z,	0x04,	0,	0,	0,	CPU_SSE,	0,	0},
#line 564 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"in",	in_insn,	12,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1866 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmadcsswd",	vpma_insn,	1,	SUF_Z,	0xA6,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1010 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psignb",	ssse3_insn,	5,	SUF_Z,	0x08,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1057 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rcll",	shift_insn,	16,	SUF_L,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1619 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vldmxcsr",	ldstmxcsr_insn,	1,	SUF_Z,	0x02,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1541 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmaddsub213pd",	vfma_pd_insn,	2,	SUF_Z,	0xA6,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1997 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"wrmsr",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x30,	0,	0,	CPU_586,	CPU_Priv,	0},
#line 2007 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xchgl",	xchg_insn,	16,	SUF_L,	0,	0,	0,	0,	0,	0,	0},
#line 604 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jge",	jcc_insn,	9,	SUF_Z,	0x0D,	0,	0,	0,	0,	0,	0},
#line 196 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnl",	cmovcc_insn,	3,	SUF_Z,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 179 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnbw",	cmovcc_insn,	3,	SUF_W,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1076 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"repe",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 1041 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"punpcklwd",	mmxsse2_insn,	2,	SUF_Z,	0x61,	0,	0,	0,	CPU_MMX,	0,	0},
#line 738 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"monitor",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC8,	0,	CPU_SSE3,	0,	0},
#line 1336 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vbroadcastf128",	vbroadcastif128_insn,	1,	SUF_Z,	0x1A,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1441 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnltps",	ssecmp_128_insn,	3,	SUF_Z,	0x05,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 218 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnzq",	cmovcc_insn,	3,	SUF_Q,	0x05,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1395 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpltss",	ssecmp_32_insn,	4,	SUF_Z,	0x01,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 158 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovlel",	cmovcc_insn,	3,	SUF_L,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 432 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fildq",	fildstp_insn,	4,	SUF_Q,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 119 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cli",	onebyte_insn,	1,	SUF_Z,	0xFA,	0,	0,	0,	0,	0,	0},
#line 1546 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmaddsubps",	fma_128_256_insn,	4,	SUF_Z,	0x5C,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 613 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jnb",	jcc_insn,	9,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 476 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fmulp",	farithp_insn,	3,	SUF_Z,	0xC8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 895 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pextl",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_L,	0xF3,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1849 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphsubwd",	vphaddsub_insn,	1,	SUF_Z,	0xE2,	0,	0,	0,	CPU_XOP,	0,	0},
#line 498 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"frstors",	onebytemem_insn,	1,	SUF_S,	0x04,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 1289 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"svldt",	cyrixsmm_insn,	1,	SUF_Z,	0x7A,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 148 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovg",	cmovcc_insn,	3,	SUF_Z,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 649 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"leave",	onebyte_insn,	1,	SUF_Z,	0xC9,	0x00,	0x40,	0,	CPU_186,	0,	0},
#line 998 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"prefetch",	twobytemem_insn,	1,	SUF_Z,	0x00,	0x0F,	0x0D,	0,	CPU_3DNow,	0,	0},
#line 1408 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x04,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 686 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lodsl",	onebyte_insn,	1,	SUF_Z,	0xAD,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1712 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpclmulhqhqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x11,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 641 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lddqu",	lddqu_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SSE3,	0,	0},
#line 2015 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xgetbv",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xD0,	0,	CPU_386,	CPU_XSAVE,	0},
#line 1868 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmaddubsw",	ssse3_insn,	5,	SUF_Z,	0x04,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 379 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fadds",	farith_insn,	7,	SUF_S,	0xC0,	0xC0,	0x00,	0,	CPU_FPU,	0,	0},
#line 317 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtsd2si",	cvt_rx_xmm64_insn,	4,	SUF_Z,	0xF2,	0x2D,	0,	0,	CPU_386,	CPU_SSE2,	0},
#line 714 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lsll",	larlsl_insn,	6,	SUF_L,	0x03,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 377 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"faddl",	farith_insn,	7,	SUF_L,	0xC0,	0xC0,	0x00,	0,	CPU_FPU,	0,	0},
#line 1822 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpextrwl",	pextrw_insn,	7,	SUF_L,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 79 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bsfq",	bsfr_insn,	3,	SUF_Q,	0xBC,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 969 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmulhriw",	cyrixmmx_insn,	1,	SUF_Z,	0x5D,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1876 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmaxud",	ssse3_insn,	5,	SUF_Z,	0x3F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 150 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovgel",	cmovcc_insn,	3,	SUF_L,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 691 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopel",	loopl_insn,	4,	SUF_Z,	0x01,	0x20,	0,	0,	0,	0,	0},
#line 1135 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sarx",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Z,	0xF3,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1580 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmadd231ps",	vfma_ps_insn,	2,	SUF_Z,	0xBC,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1406 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneq_ussd",	ssecmp_64_insn,	4,	SUF_Z,	0x14,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1761 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgtuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 337 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvttsd2siq",	cvt_rx_xmm64_insn,	4,	SUF_Q,	0xF2,	0x2C,	0,	ONLY_64,	CPU_SSE2,	0,	0},
#line 1508 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvttss2sil",	cvt_rx_xmm32_insn,	4,	SUF_L,	0xF3,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 393 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fcomi",	fcom2_insn,	2,	SUF_Z,	0xDB,	0xF0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1260 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sqrtsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x51,	0,	0,	CPU_SSE2,	0,	0},
#line 1166 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setleb",	setcc_insn,	1,	SUF_B,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 1775 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomltub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1867 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmadcswd",	vpma_insn,	1,	SUF_Z,	0xB6,	0,	0,	0,	CPU_XOP,	0,	0},
#line 913 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfnacc",	now3d_insn,	1,	SUF_Z,	0x8A,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 246 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpeqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x00,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 840 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"out",	out_insn,	12,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 934 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pinsrw",	pinsrw_insn,	9,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 231 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovpol",	cmovcc_insn,	3,	SUF_L,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 787 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movsldup",	xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x12,	0,	0,	CPU_SSE3,	0,	0},
#line 1152 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setbb",	setcc_insn,	1,	SUF_B,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1564 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsubadd231ps",	vfma_ps_insn,	2,	SUF_Z,	0xB7,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1220 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shlw",	shift_insn,	16,	SUF_W,	0x04,	0,	0,	0,	0,	0,	0},
#line 1449 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpordps",	ssecmp_128_insn,	3,	SUF_Z,	0x07,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 433 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"filds",	fildstp_insn,	4,	SUF_S,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 1114 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"roundps",	sse4imm_insn,	2,	SUF_Z,	0x08,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 176 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnbew",	cmovcc_insn,	3,	SUF_W,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 206 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnoq",	cmovcc_insn,	3,	SUF_Q,	0x01,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 102 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"btsw",	bittest_insn,	6,	SUF_W,	0xAB,	0x05,	0,	0,	CPU_386,	0,	0},
#line 1764 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomleb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 1812 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpermd",	vperm_var_avx2_insn,	1,	SUF_Z,	0x36,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 428 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fidivs",	fiarith_insn,	2,	SUF_S,	0x06,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1912 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsadbw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 406 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fdivr",	farith_insn,	7,	SUF_Z,	0xF0,	0xF8,	0x07,	0,	CPU_FPU,	0,	0},
#line 40 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"aesimc",	aesimc_insn,	1,	SUF_Z,	0x38,	0xDB,	0,	0,	CPU_AES,	0,	0},
#line 884 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pcmpgtb",	mmxsse2_insn,	2,	SUF_Z,	0x64,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1178 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setneb",	setcc_insn,	1,	SUF_B,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 1002 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"prefetcht2",	twobytemem_insn,	1,	SUF_Z,	0x03,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 577 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"int",	int_insn,	1,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1364 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpge_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x1D,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 311 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtpd2ps",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 1516 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"verr",	prot286_insn,	1,	SUF_Z,	0x04,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1913 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpshab",	amd_vpshift_insn,	2,	SUF_Z,	0x98,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1640 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovdqa",	movau_insn,	6,	SUF_Z,	0x66,	0x6F,	0x10,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1834 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphaddubd",	vphaddsub_insn,	1,	SUF_Z,	0xD2,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1924 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpshuflw",	xmm_xmm128_imm_256avx2_insn,	2,	SUF_Z,	0xF2,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 637 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lcall",	ljmpcall_insn,	7,	SUF_Z,	0x03,	0x9A,	0,	0,	0,	0,	0},
#line 1066 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rcrw",	shift_insn,	16,	SUF_W,	0x03,	0,	0,	0,	0,	0,	0},
#line 888 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pcmpistri",	sse4pcmpstr_insn,	1,	SUF_Z,	0x63,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 1520 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vextractf128",	vextractif128_insn,	1,	SUF_Z,	0x19,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 222 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovoq",	cmovcc_insn,	3,	SUF_Q,	0x00,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1211 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sgdtw",	twobytemem_insn,	1,	SUF_W,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 65 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"blsi",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_Z,	0x00,	0xF3,	0x03,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1584 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmaddps",	fma_128_256_insn,	4,	SUF_Z,	0x78,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1617 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vinsertps",	insertps_insn,	4,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1216 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shldq",	shlrd_insn,	9,	SUF_Q,	0xA4,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1036 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"punpckhqdq",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x6D,	0,	0,	CPU_SSE2,	0,	0},
#line 863 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"palignr",	ssse3imm_insn,	2,	SUF_Z,	0x0F,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 885 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pcmpgtd",	mmxsse2_insn,	2,	SUF_Z,	0x66,	0,	0,	0,	CPU_MMX,	0,	0},
#line 620 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jnle",	jcc_insn,	9,	SUF_Z,	0x0F,	0,	0,	0,	0,	0,	0},
#line 546 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"haddpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x7C,	0,	0,	CPU_SSE3,	0,	0},
#line 2012 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xcryptctr",	padlock_insn,	1,	SUF_Z,	0xD8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1168 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnab",	setcc_insn,	1,	SUF_B,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 1252 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"smovq",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1601 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsubsd",	fma_128_m64_insn,	3,	SUF_Z,	0x7F,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1633 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmlaunch",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC2,	0,	CPU_P4,	0,	0},
#line 845 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"outsw",	onebyte_insn,	1,	SUF_Z,	0x6F,	0x10,	0,	0,	0,	0,	0},
#line 358 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"divpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5E,	0,	0,	CPU_SSE2,	0,	0},
#line 417 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ficom",	fiarith_insn,	2,	SUF_Z,	0x02,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 981 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmvzb",	cyrixmmx_insn,	1,	SUF_Z,	0x58,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1189 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnp",	setcc_insn,	1,	SUF_Z,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 1624 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmaxps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 816 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mulss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x59,	0,	0,	CPU_SSE,	0,	0},
#line 1503 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvttps2dq",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 528 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsubs",	farith_insn,	7,	SUF_S,	0xE8,	0xE0,	0x04,	0,	CPU_FPU,	0,	0},
#line 1710 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpbroadcastq",	vpbroadcastq_avx2_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1251 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"smovl",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x20,	0,	0,	CPU_386,	0,	0},
#line 718 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lssl",	lfgss_insn,	3,	SUF_L,	0xB2,	0,	0,	0,	CPU_386,	0,	0},
#line 935 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pinsrwl",	pinsrw_insn,	9,	SUF_L,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 839 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"orw",	arith_insn,	22,	SUF_W,	0x08,	0x01,	0,	0,	0,	0,	0},
#line 1044 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pushal",	onebyte_insn,	1,	SUF_Z,	0x60,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 1420 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpngt_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x1A,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 506 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsqrt",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFA,	0,	0,	CPU_FPU,	0,	0},
#line 1039 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"punpckldq",	mmxsse2_insn,	2,	SUF_Z,	0x62,	0,	0,	0,	CPU_MMX,	0,	0},
#line 441 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fistp",	fildstp_insn,	4,	SUF_Z,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 1173 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnbe",	setcc_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 789 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movsq",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 219 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnzw",	cmovcc_insn,	3,	SUF_W,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 512 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fstenvs",	twobytemem_insn,	1,	SUF_S,	0x06,	0x9B,	0xD9,	0,	CPU_FPU,	0,	0},
#line 1814 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpermilps",	vpermil_insn,	4,	SUF_Z,	0x04,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1342 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpeq_ossd",	ssecmp_64_insn,	4,	SUF_Z,	0x10,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1525 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmadd132sd",	vfma_sd_insn,	2,	SUF_Z,	0x99,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 760 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movlpd",	movhlp_insn,	3,	SUF_Z,	0x66,	0x12,	0,	0,	CPU_SSE2,	0,	0},
#line 744 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movabsq",	movabs_insn,	9,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 37 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"aesdeclast",	aes_insn,	2,	SUF_Z,	0x38,	0xDF,	0,	0,	CPU_AVX,	0,	0},
#line 655 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lesl",	ldes_insn,	2,	SUF_L,	0xC4,	0,	0,	NOT_64,	CPU_386,	0,	0},
#line 171 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnaw",	cmovcc_insn,	3,	SUF_W,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 1519 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"verww",	prot286_insn,	1,	SUF_W,	0x05,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1118 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rsldt",	cyrixsmm_insn,	1,	SUF_Z,	0x7B,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 1621 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmaskmovpd",	vmaskmov_insn,	4,	SUF_Z,	0x2D,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 808 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mpsadbw",	sse4imm_insn,	2,	SUF_Z,	0x42,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 878 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pcmpeqb",	mmxsse2_insn,	2,	SUF_Z,	0x74,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1522 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vextractps",	extractps_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1915 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpshaq",	amd_vpshift_insn,	2,	SUF_Z,	0x9B,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1285 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"subsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5C,	0,	0,	CPU_SSE2,	0,	0},
#line 1568 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsubps",	fma_128_256_insn,	4,	SUF_Z,	0x6C,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 861 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"paddusw",	mmxsse2_insn,	2,	SUF_Z,	0xDD,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1458 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmptrue_ussd",	ssecmp_64_insn,	4,	SUF_Z,	0x1F,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1017 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psrad",	pshift_insn,	4,	SUF_Z,	0xE2,	0x72,	0x04,	0,	CPU_MMX,	0,	0},
#line 1967 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vrsqrtps",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x52,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 911 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfmin",	now3d_insn,	1,	SUF_Z,	0x94,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 326 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cvtsi2ssq",	cvt_xmm_rmx_insn,	6,	SUF_Q,	0xF3,	0x2A,	0,	ONLY_64,	CPU_SSE,	0,	0},
#line 174 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnbel",	cmovcc_insn,	3,	SUF_L,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 1975 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vstmxcsr",	ldstmxcsr_insn,	1,	SUF_Z,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 198 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnlel",	cmovcc_insn,	3,	SUF_L,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 736 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"minsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5D,	0,	0,	CPU_SSE2,	0,	0},
#line 1338 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vbroadcastsd",	vbroadcastsd_insn,	2,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1999 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xadd",	cmpxchgxadd_insn,	4,	SUF_Z,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 1273 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"stosq",	onebyte_insn,	1,	SUF_Z,	0xAB,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 707 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopzq",	loopq_insn,	4,	SUF_Z,	0x01,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1864 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmacswd",	vpma_insn,	1,	SUF_Z,	0x96,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1316 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vaddpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1412 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnge_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x19,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 263 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpnlepd",	ssecmp_128_insn,	3,	SUF_Z,	0x06,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1932 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsllvq",	vpshiftv_vexw1_avx2_insn,	2,	SUF_Z,	0x47,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 657 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lfence",	threebyte_insn,	1,	SUF_Z,	0x0F,	0xAE,	0xE8,	0,	CPU_P3,	0,	0},
#line 921 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfsubr",	now3d_insn,	1,	SUF_Z,	0xAA,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 515 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fstpl",	fstp_insn,	4,	SUF_L,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1630 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vminps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1486 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtsd2si",	cvt_rx_xmm64_insn,	4,	SUF_Z,	0xF2,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 457 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fisubs",	fiarith_insn,	2,	SUF_S,	0x04,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1860 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmacssdqh",	vpma_insn,	1,	SUF_Z,	0x8F,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1491 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtsi2sdl",	cvt_xmm_rmx_insn,	6,	SUF_L,	0xF2,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 851 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"packsswb",	mmxsse2_insn,	2,	SUF_Z,	0x63,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1960 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpxor",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1070 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rdpmc",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x33,	0,	0,	CPU_686,	0,	0},
#line 1495 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtsi2ssq",	cvt_xmm_rmx_insn,	6,	SUF_Q,	0xF3,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1061 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rcpss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x53,	0,	0,	CPU_SSE,	0,	0},
#line 46 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"andnl",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_L,	0x00,	0x38,	0xF2,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1560 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsubadd132ps",	vfma_ps_insn,	2,	SUF_Z,	0x97,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1949 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsubusw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xD9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1723 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcmpestrm",	sse4pcmpstr_insn,	1,	SUF_Z,	0x60,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 435 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fimull",	fiarith_insn,	2,	SUF_L,	0x01,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1398 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneq_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x0C,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 943 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmaxsw",	mmxsse2_insn,	2,	SUF_Z,	0xEE,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1566 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsubaddps",	fma_128_256_insn,	4,	SUF_Z,	0x5E,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 111 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cbtw",	onebyte_insn,	1,	SUF_Z,	0x98,	0x10,	0,	0,	0,	0,	0},
#line 1559 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsubadd132pd",	vfma_pd_insn,	2,	SUF_Z,	0x97,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 2006 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xchgb",	xchg_insn,	16,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 1169 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnae",	setcc_insn,	1,	SUF_Z,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1717 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcmov",	vpcmov_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1845 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphsubd",	ssse3_insn,	5,	SUF_Z,	0x06,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 541 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fxsaveq",	twobytemem_insn,	1,	SUF_Q,	0x00,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 1582 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmadd231ss",	vfma_ss_insn,	2,	SUF_Z,	0xBD,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1895 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovzxbw",	sse4m64_insn,	4,	SUF_Z,	0x30,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 800 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movzbl",	movszx_insn,	5,	SUF_B,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 743 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movabsl",	movabs_insn,	9,	SUF_L,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1821 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpextrw",	pextrw_insn,	7,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 684 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lock",	NULL,	X86_LOCKREP>>8,	0xF0,	0,	0,	0,	0,	0,	0,	0},
#line 757 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movhps",	movhlp_insn,	3,	SUF_Z,	0x00,	0x16,	0,	0,	CPU_SSE,	0,	0},
#line 284 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpunordpd",	ssecmp_128_insn,	3,	SUF_Z,	0x03,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 521 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsub",	farith_insn,	7,	SUF_Z,	0xE8,	0xE0,	0x04,	0,	CPU_FPU,	0,	0},
#line 1317 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vaddps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 898 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pextrd",	pextrd_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 1073 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rdtsc",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x31,	0,	0,	CPU_586,	0,	0},
#line 81 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bsr",	bsfr_insn,	3,	SUF_Z,	0xBD,	0,	0,	0,	CPU_386,	0,	0},
#line 1046 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pushf",	onebyte_insn,	1,	SUF_Z,	0x9C,	0x00,	0x40,	0,	0,	0,	0},
#line 574 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"insertq",	insertq_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 783 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movsbw",	movszx_insn,	5,	SUF_B,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 1964 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vroundps",	avx_sse4imm_insn,	3,	SUF_Z,	0x08,	0,	0,	ONLY_AVX,	CPU_SSE41,	0,	0},
#line 879 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pcmpeqd",	mmxsse2_insn,	2,	SUF_Z,	0x76,	0,	0,	0,	CPU_MMX,	0,	0},
#line 904 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pf2iw",	now3d_insn,	1,	SUF_Z,	0x1C,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 212 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovns",	cmovcc_insn,	3,	SUF_Z,	0x09,	0,	0,	0,	CPU_686,	0,	0},
#line 1795 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomnew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 656 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lesw",	ldes_insn,	2,	SUF_W,	0xC4,	0,	0,	NOT_64,	0,	0,	0},
#line 1377 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpgtps",	ssecmp_128_insn,	3,	SUF_Z,	0x0E,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1815 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpermpd",	vperm_imm_avx2_insn,	1,	SUF_Z,	0x01,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1011 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psignd",	ssse3_insn,	5,	SUF_Z,	0x0A,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 230 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovpo",	cmovcc_insn,	3,	SUF_Z,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 1490 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtsi2sd",	cvt_xmm_rmx_insn,	6,	SUF_Z,	0xF2,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 139 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovbw",	cmovcc_insn,	3,	SUF_W,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 535 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fwait",	onebyte_insn,	1,	SUF_Z,	0x9B,	0,	0,	0,	CPU_FPU,	0,	0},
#line 253 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmplesd",	ssecmp_64_insn,	4,	SUF_Z,	0x02,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1788 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomnequq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1780 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomneb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 228 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovpew",	cmovcc_insn,	3,	SUF_W,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 846 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"outw",	out_insn,	12,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 890 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pdep",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Z,	0xF2,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 984 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popal",	onebyte_insn,	1,	SUF_Z,	0x61,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 646 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lea",	lea_insn,	3,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 997 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"por",	mmxsse2_insn,	2,	SUF_Z,	0xEB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 251 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmplepd",	ssecmp_128_insn,	3,	SUF_Z,	0x02,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1982 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vucomisd",	avx_xmm_xmm64_insn,	2,	SUF_Z,	0x66,	0x2E,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 632 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lahf",	onebyte_insn,	1,	SUF_Z,	0x9F,	0,	0,	0,	0,	0,	0},
#line 866 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pause",	onebyte_prefix_insn,	1,	SUF_Z,	0xF3,	0x90,	0,	0,	CPU_P4,	0,	0},
#line 491 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fpatan",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF3,	0,	0,	CPU_FPU,	0,	0},
#line 1467 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpunord_sss",	ssecmp_32_insn,	4,	SUF_Z,	0x13,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1232 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shrw",	shift_insn,	16,	SUF_W,	0x05,	0,	0,	0,	0,	0,	0},
#line 1221 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shlx",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Z,	0x66,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1842 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphaddwq",	vphaddsub_insn,	1,	SUF_Z,	0xC7,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1955 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpunpckhwd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x69,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 175 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnbeq",	cmovcc_insn,	3,	SUF_Q,	0x07,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 75 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"boundl",	bound_insn,	2,	SUF_L,	0,	0,	0,	NOT_64,	CPU_386,	0,	0},
#line 24 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"addpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x58,	0,	0,	CPU_SSE2,	0,	0},
#line 1172 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnbb",	setcc_insn,	1,	SUF_B,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1598 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsub231ss",	vfma_ss_insn,	2,	SUF_Z,	0xBF,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1989 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vxorps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x57,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 126 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovael",	cmovcc_insn,	3,	SUF_L,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 510 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fstenv",	twobytemem_insn,	1,	SUF_Z,	0x06,	0x9B,	0xD9,	0,	CPU_FPU,	0,	0},
#line 962 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pmovzxbd",	sse4m32_insn,	4,	SUF_Z,	0x31,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1588 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmsub132ps",	vfma_ps_insn,	2,	SUF_Z,	0x9E,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 365 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"dpps",	sse4imm_insn,	2,	SUF_Z,	0x40,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 756 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movhpd",	movhlp_insn,	3,	SUF_Z,	0x66,	0x16,	0,	0,	CPU_SSE2,	0,	0},
#line 1865 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmacsww",	vpma_insn,	1,	SUF_Z,	0x95,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1846 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vphsubdq",	vphaddsub_insn,	1,	SUF_Z,	0xE3,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1021 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psrlq",	pshift_insn,	4,	SUF_Z,	0xD3,	0x73,	0x02,	0,	CPU_MMX,	0,	0},
#line 1049 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pushfw",	onebyte_insn,	1,	SUF_Z,	0x9C,	0x10,	0x40,	0,	0,	0,	0},
#line 151 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovgeq",	cmovcc_insn,	3,	SUF_Q,	0x0D,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 227 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovpeq",	cmovcc_insn,	3,	SUF_Q,	0x0A,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1571 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmadd132pd",	vfma_pd_insn,	2,	SUF_Z,	0x9C,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1484 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtps2pd",	avx_cvt_xmm64_insn,	3,	SUF_Z,	0x00,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1100 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rol",	shift_insn,	16,	SUF_Z,	0x00,	0,	0,	0,	0,	0,	0},
#line 1234 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shrxl",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_L,	0xF2,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1753 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomgeuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 29 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"addr64",	NULL,	X86_ADDRSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1319 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vaddss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 926 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"phsubd",	ssse3_insn,	5,	SUF_Z,	0x06,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 753 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movdqa",	movau_insn,	6,	SUF_Z,	0x66,	0x6F,	0x10,	0,	CPU_SSE2,	0,	0},
#line 438 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"finit",	threebyte_insn,	1,	SUF_Z,	0x9B,	0xDB,	0xE3,	0,	CPU_FPU,	0,	0},
#line 131 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovaw",	cmovcc_insn,	3,	SUF_W,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 1905 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmuludq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1085 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rex64",	NULL,	X86_REX>>8,	0x48,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 217 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnzl",	cmovcc_insn,	3,	SUF_L,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 270 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpnltss",	ssecmp_32_insn,	4,	SUF_Z,	0x05,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 524 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsubr",	farith_insn,	7,	SUF_Z,	0xE0,	0xE8,	0x05,	0,	CPU_FPU,	0,	0},
#line 812 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mulpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x59,	0,	0,	CPU_SSE2,	0,	0},
#line 912 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pfmul",	now3d_insn,	1,	SUF_Z,	0xB4,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 706 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopzl",	loopl_insn,	4,	SUF_Z,	0x01,	0x20,	0,	0,	0,	0,	0},
#line 1095 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rexxyz",	NULL,	X86_REX>>8,	0x47,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 443 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fistpll",	fbldstp_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 875 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pclmullqhqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x10,	0,	0,	0,	CPU_AVX,	0,	0},
#line 1281 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"subl",	arith_insn,	22,	SUF_L,	0x28,	0x05,	0,	0,	CPU_386,	0,	0},
#line 1213 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"shlb",	shift_insn,	16,	SUF_B,	0x04,	0,	0,	0,	0,	0,	0},
#line 572 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"insb",	onebyte_insn,	1,	SUF_Z,	0x6C,	0x00,	0,	0,	0,	0,	0},
#line 628 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jpo",	jcc_insn,	9,	SUF_Z,	0x0B,	0,	0,	0,	0,	0,	0},
#line 1417 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpngeps",	ssecmp_128_insn,	3,	SUF_Z,	0x09,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1082 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"retq",	retnf_insn,	6,	SUF_Z,	0xC2,	0,	0,	ONLY_64,	0,	0,	0},
#line 258 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpltss",	ssecmp_32_insn,	4,	SUF_Z,	0x01,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1927 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpsignw",	ssse3_insn,	5,	SUF_Z,	0x09,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 177 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnbl",	cmovcc_insn,	3,	SUF_L,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 44 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"andl",	arith_insn,	22,	SUF_L,	0x20,	0x04,	0,	0,	CPU_386,	0,	0},
#line 1407 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneq_usss",	ssecmp_32_insn,	4,	SUF_Z,	0x14,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1544 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmaddsub231ps",	vfma_ps_insn,	2,	SUF_Z,	0xB6,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1087 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rex64xy",	NULL,	X86_REX>>8,	0x4E,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 662 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lgdt",	twobytemem_insn,	1,	SUF_Z,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1109 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rorw",	shift_insn,	16,	SUF_W,	0x01,	0,	0,	0,	0,	0,	0},
#line 1888 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovsxbq",	sse4m16_insn,	4,	SUF_Z,	0x22,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 639 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lcallq",	ljmpcall_insn,	7,	SUF_Q,	0x03,	0x9A,	0,	ONLY_64,	0,	0,	0},
#line 1298 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"test",	test_insn,	20,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1201 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setpo",	setcc_insn,	1,	SUF_Z,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 1744 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomfalseud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 1673 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmsave",	svm_rax_insn,	2,	SUF_Z,	0xDB,	0,	0,	0,	CPU_SVM,	0,	0},
#line 1258 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sqrtpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x51,	0,	0,	CPU_SSE2,	0,	0},
#line 1248 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"smint",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x38,	0,	0,	CPU_686,	CPU_Cyrix,	0},
#line 1618 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vlddqu",	lddqu_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 381 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fbstp",	fbldstp_insn,	1,	SUF_Z,	0x06,	0,	0,	0,	CPU_FPU,	0,	0},
#line 569 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"incq",	incdec_insn,	6,	SUF_Q,	0x40,	0x00,	0,	ONLY_64,	0,	0,	0},
#line 296 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpxchgw",	cmpxchgxadd_insn,	4,	SUF_W,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 105 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bzhil",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_L,	0x00,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1397 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpneq_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x0C,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1921 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpshufb",	ssse3_insn,	5,	SUF_Z,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1162 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setgeb",	setcc_insn,	1,	SUF_B,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 285 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpunordps",	ssecmp_128_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_SSE,	0,	0},
#line 723 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lzcnt",	cnt_insn,	3,	SUF_Z,	0xBD,	0,	0,	0,	CPU_LZCNT,	0,	0},
#line 626 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jp",	jcc_insn,	9,	SUF_Z,	0x0A,	0,	0,	0,	0,	0,	0},
#line 1115 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"roundsd",	sse4m64imm_insn,	4,	SUF_Z,	0x0B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 99 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bts",	bittest_insn,	6,	SUF_Z,	0xAB,	0x05,	0,	0,	CPU_386,	0,	0},
#line 531 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fucomi",	fcom2_insn,	2,	SUF_Z,	0xDB,	0xE8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 697 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopneq",	loopq_insn,	4,	SUF_Z,	0x00,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 670 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lidt",	twobytemem_insn,	1,	SUF_Z,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 858 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"paddsiw",	cyrixmmx_insn,	1,	SUF_Z,	0x51,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 674 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ljmp",	ljmpcall_insn,	7,	SUF_Z,	0x05,	0xEA,	0,	0,	0,	0,	0},
#line 1127 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sall",	shift_insn,	16,	SUF_L,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 1511 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vdivps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1193 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnz",	setcc_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 1631 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vminsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1439 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpnlt_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x15,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1331 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vandps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x54,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 408 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fdivrp",	farithp_insn,	3,	SUF_Z,	0xF8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1016 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psllw",	pshift_insn,	4,	SUF_Z,	0xF1,	0x71,	0x06,	0,	CPU_MMX,	0,	0},
#line 713 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lsl",	larlsl_insn,	6,	SUF_Z,	0x03,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 855 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"paddd",	mmxsse2_insn,	2,	SUF_Z,	0xFE,	0,	0,	0,	CPU_MMX,	0,	0},
#line 256 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpltps",	ssecmp_128_insn,	3,	SUF_Z,	0x01,	0,	0,	0,	CPU_SSE,	0,	0},
#line 614 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jnbe",	jcc_insn,	9,	SUF_Z,	0x07,	0,	0,	0,	0,	0,	0},
#line 1539 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmaddsub132pd",	vfma_pd_insn,	2,	SUF_Z,	0x96,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1561 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsubadd213pd",	vfma_pd_insn,	2,	SUF_Z,	0xA7,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 283 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmpsw",	onebyte_insn,	1,	SUF_Z,	0xA7,	0x10,	0,	0,	0,	0,	0},
#line 1183 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnl",	setcc_insn,	1,	SUF_Z,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 471 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"flds",	fld_insn,	4,	SUF_S,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 152 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovgew",	cmovcc_insn,	3,	SUF_W,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 661 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lfsw",	lfgss_insn,	3,	SUF_W,	0xB4,	0,	0,	0,	CPU_386,	0,	0},
#line 987 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popcntl",	cnt_insn,	3,	SUF_L,	0xB8,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 1962 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vrcpss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x53,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 464 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fldenvs",	onebytemem_insn,	1,	SUF_S,	0x04,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 1483 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtps2dq",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 667 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lgsl",	lfgss_insn,	3,	SUF_L,	0xB5,	0,	0,	0,	CPU_386,	0,	0},
#line 1032 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pswapd",	now3d_insn,	1,	SUF_Z,	0xBB,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 497 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"frstorl",	onebytemem_insn,	1,	SUF_L,	0x04,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 599 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"jc",	jcc_insn,	9,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 1894 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovzxbq",	sse4m16_insn,	4,	SUF_Z,	0x32,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1583 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmaddpd",	fma_128_256_insn,	4,	SUF_Z,	0x79,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 724 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lzcntl",	cnt_insn,	3,	SUF_L,	0xBD,	0,	0,	0,	CPU_LZCNT,	0,	0},
#line 1577 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmadd213sd",	vfma_sd_insn,	2,	SUF_Z,	0xAD,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1197 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setp",	setcc_insn,	1,	SUF_Z,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 699 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"loopnz",	loop_insn,	8,	SUF_Z,	0x00,	0,	0,	0,	0,	0,	0},
#line 184 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovne",	cmovcc_insn,	3,	SUF_Z,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 1874 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmaxsw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1696 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpaddsw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xED,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 527 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsubrs",	farith_insn,	7,	SUF_S,	0xE0,	0xE8,	0x05,	0,	CPU_FPU,	0,	0},
#line 678 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"lldt",	prot286_insn,	1,	SUF_Z,	0x02,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 1610 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vgatherqps",	gather_32x_32y_128_insn,	2,	SUF_Z,	0x93,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1192 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnsb",	setcc_insn,	1,	SUF_B,	0x09,	0,	0,	0,	CPU_386,	0,	0},
#line 989 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"popcntw",	cnt_insn,	3,	SUF_W,	0xB8,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 1475 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtdq2ps",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1269 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sti",	onebyte_insn,	1,	SUF_Z,	0xFB,	0,	0,	0,	0,	0,	0},
#line 1165 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setle",	setcc_insn,	1,	SUF_Z,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 492 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fprem",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF8,	0,	0,	CPU_FPU,	0,	0},
#line 1959 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpunpcklwd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x61,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1381 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmple_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x12,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1801 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomtrueud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 1579 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfnmadd231pd",	vfma_pd_insn,	2,	SUF_Z,	0xBC,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 777 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"movntss",	movntss_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 1805 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomub",	vpcom_imm_insn,	1,	SUF_Z,	0xEC,	0,	0,	0,	CPU_XOP,	0,	0},
#line 559 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"imul",	imul_insn,	19,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1916 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpshaw",	amd_vpshift_insn,	2,	SUF_Z,	0x99,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1186 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnleb",	setcc_insn,	1,	SUF_B,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 1551 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsub213pd",	vfma_pd_insn,	2,	SUF_Z,	0xAA,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1885 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmovmskbl",	pmovmskb_insn,	6,	SUF_L,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 740 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"mov",	mov_insn,	69,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1480 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtpd2psx",	avx_cvt_xmm128_x_insn,	1,	SUF_Z,	0x66,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 58 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bextr",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Z,	0x00,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 505 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fsincos",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFB,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 1767 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomleub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 356 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"divb",	div_insn,	8,	SUF_B,	0x06,	0,	0,	0,	0,	0,	0},
#line 477 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fmuls",	farith_insn,	7,	SUF_S,	0xC8,	0xC8,	0x01,	0,	CPU_FPU,	0,	0},
#line 1861 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmacssdql",	vpma_insn,	1,	SUF_Z,	0x87,	0,	0,	0,	CPU_XOP,	0,	0},
#line 579 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"into",	onebyte_insn,	1,	SUF_Z,	0xCE,	0,	0,	NOT_64,	0,	0,	0},
#line 1899 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpmuldq",	ssse3_insn,	5,	SUF_Z,	0x28,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1053 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pxor",	mmxsse2_insn,	2,	SUF_Z,	0xEF,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1004 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"psadbw",	mmxsse2_insn,	2,	SUF_Z,	0xF6,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 538 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"fxrstor",	twobytemem_insn,	1,	SUF_Z,	0x01,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 1050 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pushl",	push_insn,	35,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 1797 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomtrueb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 104 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bzhi",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Z,	0x00,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1424 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmpngtpd",	ssecmp_128_insn,	3,	SUF_Z,	0x0A,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1056 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"rclb",	shift_insn,	16,	SUF_B,	0x02,	0,	0,	0,	0,	0,	0},
#line 495 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"frndint",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFC,	0,	0,	CPU_FPU,	0,	0},
#line 1171 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnb",	setcc_insn,	1,	SUF_Z,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 2011 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"xcryptcfb",	padlock_insn,	1,	SUF_Z,	0xE0,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1783 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomneqb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1659 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmovsd",	movsd_insn,	5,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 822 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"neg",	f6_insn,	4,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 1170 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"setnaeb",	setcc_insn,	1,	SUF_B,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1481 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcvtpd2psy",	avx_cvt_xmm128_y_insn,	1,	SUF_Z,	0x66,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1622 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vmaskmovps",	vmaskmov_insn,	4,	SUF_Z,	0x2C,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1743 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vpcomfalseub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 889 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"pcmpistrm",	sse4pcmpstr_insn,	1,	SUF_Z,	0x62,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 1910 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vprotq",	vprot_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_XOP,	0,	0},
#line 677 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"ljmpw",	ljmpcall_insn,	7,	SUF_W,	0x05,	0xEA,	0,	0,	0,	0,	0},
#line 146 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmoveq",	cmovcc_insn,	3,	SUF_Q,	0x04,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1456 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vcmptrue_uspd",	ssecmp_128_insn,	3,	SUF_Z,	0x1F,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 185 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"cmovnel",	cmovcc_insn,	3,	SUF_L,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 578 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"int3",	onebyte_insn,	1,	SUF_Z,	0xCC,	0,	0,	0,	0,	0,	0},
#line 84 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bsrw",	bsfr_insn,	3,	SUF_W,	0xBD,	0,	0,	0,	CPU_386,	0,	0},
#line 1286 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"subss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5C,	0,	0,	CPU_SSE,	0,	0},
#line 1282 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"subpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5C,	0,	0,	CPU_SSE2,	0,	0},
#line 78 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"bsfl",	bsfr_insn,	3,	SUF_L,	0xBC,	0,	0,	0,	CPU_386,	0,	0},
#line 1549 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"vfmsub132sd",	vfma_sd_insn,	2,	SUF_Z,	0x9B,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1102 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"roll",	shift_insn,	16,	SUF_L,	0x00,	0,	0,	0,	CPU_386,	0,	0},
#line 1137 "../../../../out_mac/Debug/gen/third_party/yasm/x86insn_gas.gperf"
    {"sarxq",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Q,	0xF3,	0x38,	0xF7,	ONLY_64|ONLY_AVX,	CPU_BMI2,	0,	0}
  };
  static const unsigned short tab[] = {
    1109,1550,764,1000,1140,1020,1338,323,1091,823,605,1074,1530,281,988,11,
    1550,1639,988,1550,83,1312,1273,1453,1453,1544,0,0,1550,764,2038,864,
    1759,11,1140,440,1213,1163,1654,288,0,1213,1699,83,83,0,1530,1613,
    1213,755,702,605,1140,1896,988,1791,83,1550,605,702,1091,1429,281,1869,
    807,0,1042,0,1165,764,793,1430,553,1896,159,55,1044,702,1949,605,
    1287,1689,281,764,1135,1044,815,443,2014,47,1140,1550,1391,1243,94,630,
    1550,1044,764,323,793,2025,1035,1140,1287,1822,1791,1218,1105,764,45,1834,
    1654,1109,1586,1689,864,314,2014,0,1689,83,1213,815,1749,11,1654,1849,
    1453,1212,1231,764,1105,517,1550,1213,0,11,1379,1613,506,348,1140,0,
    665,864,0,1224,764,1550,665,1212,1383,1689,218,884,1140,1819,1140,1529,
    1140,764,924,1095,1140,665,1878,83,1639,1749,1977,764,1519,1550,11,2025,
    924,1509,1262,1312,1042,1550,864,1425,1748,2014,83,988,721,83,0,889,
    455,1834,829,1550,11,1823,1140,323,764,532,305,1892,1748,1550,1432,0,
    242,702,1896,1896,605,504,0,333,764,665,255,733,1044,2002,0,1823,
    1869,1089,736,605,580,764,1549,1165,399,1749,1044,281,823,1639,347,1059,
    281,605,323,764,1430,884,947,824,1896,1550,755,1042,1027,517,1107,764,
    1218,684,605,336,1042,11,1822,0,988,764,323,188,1791,767,1603,1212,
    1757,764,1109,359,1091,137,1530,1550,1550,1140,47,864,1107,630,1639,765,
    1896,629,1564,1142,1107,665,1896,1074,1140,366,1312,427,1119,824,605,11,
    1432,1875,83,0,1314,997,864,1212,316,1020,580,0,1834,1151,1896,1628,
    1519,899,1896,952,11,1791,1550,1064,341,0,665,1638,1748,338,508,684,
    1000,1415,1896,1116,181,733,1212,665,1892,1938,1140,1654,1966,1529,83,1058,
    6,1822,1949,629,323,288,1678,1044,639,11,1654,553,764,338,716,1441,
    427,605,1869,1095,1892,427,605,11,629,517,1689,1042,75,660,1768,1581,
    884,1140,834,102,1312,1878,884,1973,1550,793,179,323,1338,1295,1000,1140,
    988,1748,281,1550,1892,1044,83,0,11,323,1109,265,333,1042,83,517,
    702,506,704,11,455,1282,605,1836,1689,1839,1312,629,988,1965,1822,665,
    1689,1613,1836,1823,793,1223,83,764,338,854,315,1042,347,1042,721,1579,
    338,793,1550,149,244,1391,665,33,823,1218,271,302,702,1236,764,544,
    517,1069,1140,665,580,1042,2014,567,517,1286,94,298,435,2028,1878,1994,
    937,517,1061,1463,1591,864,2038,548,1716,1516,197,1843,752,1213,1550,11,
    815,0,1602,1549,1791,1654,1053,104,702,498,1109,281,0,281,1714,348,
  };

  const struct insnprefix_parse_data *ret;
  unsigned long rsl, val = phash_lookup(key, len, 0x9363c928UL);
  rsl = ((val>>23)^tab[val&0x1ff]);
  if (rsl >= 2021) return NULL;
  ret = &pd[rsl];
  if (strcmp(key, ret->name) != 0) return NULL;
  return ret;
}
