#include "../winhttp.h"

//----- (0000000140549270) ----------------------------------------------------
__int64 sub_140549270()
{
	int v0; // ecx
	int v1; // eax
	int v2; // eax
	int v3; // eax
	int v4; // eax
	int v5; // eax
	int v6; // eax
	int v7; // eax
	int v8; // eax
	int v9; // eax
	int v10; // eax
	int v11; // eax
	int v12; // r13d
	int v13; // eax
	int v14; // r15d
	int v15; // eax
	int v16; // r12d
	int v17; // eax
	int v18; // r14d
	int v19; // eax
	int v20; // esi
	int v21; // eax
	int v22; // ebp
	int v23; // eax
	int v24; // edi
	int v25; // eax
	int v26; // r11d
	int v27; // eax
	int v28; // ebx
	int v29; // eax
	int v30; // r10d
	int v31; // eax
	int v32; // r8d
	int v33; // eax
	int v34; // r9d
	int v35; // eax
	int v36; // edx
	int v37; // eax
	int v38; // ecx
	int v39; // ecx
	int v40; // eax
	int v41; // eax
	int v42; // eax
	int v43; // eax
	int v44; // eax
	int v45; // eax
	int v46; // eax
	int v47; // eax
	int v48; // eax
	int v49; // eax
	int v50; // eax
	int v51; // r13d
	int v52; // eax
	int v53; // r15d
	int v54; // eax
	int v55; // r12d
	int v56; // eax
	int v57; // r14d
	int v58; // eax
	int v59; // esi
	int v60; // eax
	int v61; // ebp
	int v62; // eax
	int v63; // edi
	int v64; // eax
	int v65; // r11d
	int v66; // eax
	int v67; // ebx
	int v68; // eax
	int v69; // r10d
	int v70; // eax
	int v71; // r8d
	int v72; // eax
	int v73; // r9d
	int v74; // eax
	int v75; // edx
	int v76; // eax
	int v77; // ecx
	__int64 result; // rax
	unsigned __int8 v79; // [rsp+0h] [rbp-68h]
	unsigned __int8 v80; // [rsp+0h] [rbp-68h]
	unsigned __int8 v81; // [rsp+1h] [rbp-67h]
	unsigned __int8 v82; // [rsp+1h] [rbp-67h]
	unsigned __int8 v83; // [rsp+2h] [rbp-66h]
	unsigned __int8 v84; // [rsp+2h] [rbp-66h]
	unsigned __int8 v85; // [rsp+3h] [rbp-65h]
	unsigned __int8 v86; // [rsp+3h] [rbp-65h]
	unsigned __int8 v87; // [rsp+4h] [rbp-64h]
	unsigned __int8 v88; // [rsp+4h] [rbp-64h]
	unsigned __int8 v89; // [rsp+5h] [rbp-63h]
	unsigned __int8 v90; // [rsp+5h] [rbp-63h]
	unsigned __int8 v91; // [rsp+70h] [rbp+8h]
	unsigned __int8 v92; // [rsp+70h] [rbp+8h]
	unsigned __int8 v93; // [rsp+78h] [rbp+10h]
	unsigned __int8 v94; // [rsp+78h] [rbp+10h]
	unsigned __int8 v95; // [rsp+80h] [rbp+18h]
	unsigned __int8 v96; // [rsp+80h] [rbp+18h]
	unsigned __int8 v97; // [rsp+88h] [rbp+20h]
	unsigned __int8 v98; // [rsp+88h] [rbp+20h]

	v0 = *(_DWORD*)qword_140C63750;
	v1 = dword_140C4AA20;
	if (*(_DWORD*)qword_140C63750 < dword_140C4AA20)
		v1 = *(_DWORD*)qword_140C63750;
	v91 = dword_140C4AA30[v1];
	v2 = dword_140C4AA80;
	if (v0 < dword_140C4AA80)
		v2 = *(_DWORD*)qword_140C63750;
	v93 = dword_140C4AA90[v2];
	v3 = dword_140C4AAE0;
	if (v0 < dword_140C4AAE0)
		v3 = *(_DWORD*)qword_140C63750;
	v95 = dword_140C4AAF0[v3];
	v4 = dword_140C4AB40;
	if (v0 < dword_140C4AB40)
		v4 = *(_DWORD*)qword_140C63750;
	v97 = dword_140C4AB50[v4];
	v5 = dword_140C4ABA0;
	if (v0 < dword_140C4ABA0)
		v5 = *(_DWORD*)qword_140C63750;
	v79 = dword_140C4ABB0[v5];
	v6 = dword_140C4AC00;
	if (v0 < dword_140C4AC00)
		v6 = *(_DWORD*)qword_140C63750;
	v81 = dword_140C4AC10[v6];
	v7 = dword_140C4AC60;
	if (v0 < dword_140C4AC60)
		v7 = *(_DWORD*)qword_140C63750;
	v83 = dword_140C4AC70[v7];
	v8 = dword_140C4ACC0;
	if (v0 < dword_140C4ACC0)
		v8 = *(_DWORD*)qword_140C63750;
	v85 = dword_140C4ACD0[v8];
	v9 = dword_140C4AD20;
	if (v0 < dword_140C4AD20)
		v9 = *(_DWORD*)qword_140C63750;
	v87 = dword_140C4AD30[v9];
	v10 = dword_140C4AD80;
	if (v0 < dword_140C4AD80)
		v10 = *(_DWORD*)qword_140C63750;
	v89 = dword_140C4AD90[v10];
	v11 = dword_140C4ADE0;
	if (v0 < dword_140C4ADE0)
		v11 = *(_DWORD*)qword_140C63750;
	v12 = LOBYTE(dword_140C4ADF0[v11]);
	v13 = dword_140C4AE40;
	if (v0 < dword_140C4AE40)
		v13 = *(_DWORD*)qword_140C63750;
	v14 = LOBYTE(dword_140C4AE50[v13]);
	v15 = dword_140C4AEA0;
	if (v0 < dword_140C4AEA0)
		v15 = *(_DWORD*)qword_140C63750;
	v16 = LOBYTE(dword_140C4AEB0[v15]);
	v17 = dword_140C4AF00;
	if (v0 < dword_140C4AF00)
		v17 = *(_DWORD*)qword_140C63750;
	v18 = LOBYTE(dword_140C4AF10[v17]);
	v19 = dword_140C4AF60;
	if (v0 < dword_140C4AF60)
		v19 = *(_DWORD*)qword_140C63750;
	v20 = LOBYTE(dword_140C4AF70[v19]);
	v21 = dword_140C4AFC0;
	if (v0 < dword_140C4AFC0)
		v21 = *(_DWORD*)qword_140C63750;
	v22 = LOBYTE(dword_140C4AFD0[v21]);
	v23 = dword_140C4B020;
	if (v0 < dword_140C4B020)
		v23 = *(_DWORD*)qword_140C63750;
	v24 = LOBYTE(dword_140C4B030[v23]);
	v25 = dword_140C4B080;
	if (v0 < dword_140C4B080)
		v25 = *(_DWORD*)qword_140C63750;
	v26 = LOBYTE(dword_140C4B090[v25]);
	v27 = dword_140C4B0E0;
	if (v0 < dword_140C4B0E0)
		v27 = *(_DWORD*)qword_140C63750;
	v28 = LOBYTE(dword_140C4B0F0[v27]);
	v29 = dword_140C4B140;
	if (v0 < dword_140C4B140)
		v29 = *(_DWORD*)qword_140C63750;
	v30 = LOBYTE(dword_140C4B150[v29]);
	v31 = dword_140C4B1A0;
	if (v0 < dword_140C4B1A0)
		v31 = *(_DWORD*)qword_140C63750;
	v32 = LOBYTE(dword_140C4B1B0[v31]);
	v33 = dword_140C4B200;
	if (v0 < dword_140C4B200)
		v33 = *(_DWORD*)qword_140C63750;
	v34 = LOBYTE(dword_140C4B210[v33]);
	v35 = dword_140C4B260;
	if (v0 < dword_140C4B260)
		v35 = *(_DWORD*)qword_140C63750;
	v36 = LOBYTE(dword_140C4B270[v35]);
	v37 = dword_140C4B2C0;
	if (v0 < dword_140C4B2C0)
		v37 = *(_DWORD*)qword_140C63750;
	v38 = *((unsigned __int8*)&qword_140C4B2D0 + 4 * v37);
	xmmword_140C7DA60 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v91),
				(__m128)COERCE_UNSIGNED_INT((float)v95)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v93), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	xmmword_140C7DA50 = xmmword_140C7DA60;
	xmmword_140C7DAA0 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v97),
				(__m128)COERCE_UNSIGNED_INT((float)v81)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v79), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	xmmword_140C7DA90 = xmmword_140C7DAA0;
	xmmword_140C7DA10 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v83),
				(__m128)COERCE_UNSIGNED_INT((float)v87)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v85), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	xmmword_140C7DA20 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v89),
				(__m128)COERCE_UNSIGNED_INT((float)v14)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v12), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	xmmword_140C7DA70 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v16),
				(__m128)COERCE_UNSIGNED_INT((float)v20)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v18), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	xmmword_140C7DA80 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v22),
				(__m128)COERCE_UNSIGNED_INT((float)v26)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v24), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	xmmword_140C7DA30 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v28),
				(__m128)COERCE_UNSIGNED_INT((float)v32)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v30), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	xmmword_140C7DA40 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v34),
				(__m128)COERCE_UNSIGNED_INT((float)v38)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v36), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	v39 = *(_DWORD*)qword_140C63750;
	v40 = dword_140C4B320;
	if (*(_DWORD*)qword_140C63750 < dword_140C4B320)
		v40 = *(_DWORD*)qword_140C63750;
	v92 = dword_140C4B330[v40];
	v41 = dword_140C4B380;
	if (v39 < dword_140C4B380)
		v41 = *(_DWORD*)qword_140C63750;
	v94 = dword_140C4B390[v41];
	v42 = dword_140C4B3E0;
	if (v39 < dword_140C4B3E0)
		v42 = *(_DWORD*)qword_140C63750;
	v96 = dword_140C4B3F0[v42];
	v43 = dword_140C4B440;
	if (v39 < dword_140C4B440)
		v43 = *(_DWORD*)qword_140C63750;
	v98 = dword_140C4B450[v43];
	v44 = dword_140C4B4A0;
	if (v39 < dword_140C4B4A0)
		v44 = *(_DWORD*)qword_140C63750;
	v90 = dword_140C4B4B0[v44];
	v45 = dword_140C4B500;
	if (v39 < dword_140C4B500)
		v45 = *(_DWORD*)qword_140C63750;
	v88 = dword_140C4B510[v45];
	v46 = dword_140C4B560;
	if (v39 < dword_140C4B560)
		v46 = *(_DWORD*)qword_140C63750;
	v86 = dword_140C4B570[v46];
	v47 = dword_140C4B5C0;
	if (v39 < dword_140C4B5C0)
		v47 = *(_DWORD*)qword_140C63750;
	v84 = dword_140C4B5D0[v47];
	v48 = dword_140C4B620;
	if (v39 < dword_140C4B620)
		v48 = *(_DWORD*)qword_140C63750;
	v82 = dword_140C4B630[v48];
	v49 = dword_140C4B680;
	if (v39 < dword_140C4B680)
		v49 = *(_DWORD*)qword_140C63750;
	v80 = dword_140C4B690[v49];
	v50 = dword_140C4B6E0;
	if (v39 < dword_140C4B6E0)
		v50 = *(_DWORD*)qword_140C63750;
	v51 = LOBYTE(dword_140C4B6F0[v50]);
	v52 = dword_140C4B760;
	if (v39 < dword_140C4B760)
		v52 = *(_DWORD*)qword_140C63750;
	v53 = LOBYTE(dword_140C4B770[v52]);
	v54 = dword_140C4B7C0;
	if (v39 < dword_140C4B7C0)
		v54 = *(_DWORD*)qword_140C63750;
	v55 = LOBYTE(dword_140C4B7D0[v54]);
	v56 = dword_140C4B820;
	if (v39 < dword_140C4B820)
		v56 = *(_DWORD*)qword_140C63750;
	v57 = LOBYTE(dword_140C4B830[v56]);
	v58 = dword_140C4B880;
	if (v39 < dword_140C4B880)
		v58 = *(_DWORD*)qword_140C63750;
	v59 = LOBYTE(dword_140C4B890[v58]);
	v60 = dword_140C4B8E0;
	if (v39 < dword_140C4B8E0)
		v60 = *(_DWORD*)qword_140C63750;
	v61 = LOBYTE(dword_140C4B8F0[v60]);
	v62 = dword_140C4B940;
	if (v39 < dword_140C4B940)
		v62 = *(_DWORD*)qword_140C63750;
	v63 = LOBYTE(dword_140C4B950[v62]);
	v64 = dword_140C4B9A0;
	if (v39 < dword_140C4B9A0)
		v64 = *(_DWORD*)qword_140C63750;
	v65 = LOBYTE(dword_140C4B9B0[v64]);
	v66 = dword_140C4BA00;
	if (v39 < dword_140C4BA00)
		v66 = *(_DWORD*)qword_140C63750;
	v67 = LOBYTE(dword_140C4BA10[v66]);
	v68 = dword_140C4BA60;
	if (v39 < dword_140C4BA60)
		v68 = *(_DWORD*)qword_140C63750;
	v69 = LOBYTE(dword_140C4BA70[v68]);
	v70 = dword_140C4BAC0;
	if (v39 < dword_140C4BAC0)
		v70 = *(_DWORD*)qword_140C63750;
	v71 = LOBYTE(dword_140C4BAD0[v70]);
	v72 = dword_140C4BB20;
	if (v39 < dword_140C4BB20)
		v72 = *(_DWORD*)qword_140C63750;
	v73 = LOBYTE(dword_140C4BB30[v72]);
	v74 = dword_140C4BB80;
	if (v39 < dword_140C4BB80)
		v74 = *(_DWORD*)qword_140C63750;
	v75 = LOBYTE(dword_140C4BB90[v74]);
	v76 = dword_140C4BBE0;
	if (v39 < dword_140C4BBE0)
		v76 = *(_DWORD*)qword_140C63750;
	v77 = *((unsigned __int8*)&qword_140C4BBF0 + 4 * v76);
	xmmword_140C7DAF0 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v92),
				(__m128)COERCE_UNSIGNED_INT((float)v96)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v94), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	xmmword_140C7DB00 = xmmword_140C7DAF0;
	xmmword_140C7DB40 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v98),
				(__m128)COERCE_UNSIGNED_INT((float)v88)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v90), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	xmmword_140C7DB30 = xmmword_140C7DB40;
	xmmword_140C7DAB0 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v86),
				(__m128)COERCE_UNSIGNED_INT((float)v82)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v84), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	xmmword_140C7DAC0 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v80),
				(__m128)COERCE_UNSIGNED_INT((float)v53)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v51), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	xmmword_140C7DB10 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v55),
				(__m128)COERCE_UNSIGNED_INT((float)v59)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v57), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	xmmword_140C7DB20 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v61),
				(__m128)COERCE_UNSIGNED_INT((float)v65)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v63), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	result = (unsigned int)v77;
	xmmword_140C7DAD0 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v67),
				(__m128)COERCE_UNSIGNED_INT((float)v71)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v69), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	xmmword_140C7DAE0 = (__int128)_mm_div_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)v73),
				(__m128)COERCE_UNSIGNED_INT((float)v77)),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v75), (__m128)0x437F0000u)),
		(__m128)xmmword_140B7B470);
	return result;
}
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C4AA20: using guessed type int dword_140C4AA20;
// 140C4AA30: using guessed type int dword_140C4AA30[];
// 140C4AA80: using guessed type int dword_140C4AA80;
// 140C4AA90: using guessed type int dword_140C4AA90[];
// 140C4AAE0: using guessed type int dword_140C4AAE0;
// 140C4AAF0: using guessed type int dword_140C4AAF0[];
// 140C4AB40: using guessed type int dword_140C4AB40;
// 140C4AB50: using guessed type int dword_140C4AB50[];
// 140C4ABA0: using guessed type int dword_140C4ABA0;
// 140C4ABB0: using guessed type int dword_140C4ABB0[];
// 140C4AC00: using guessed type int dword_140C4AC00;
// 140C4AC10: using guessed type int dword_140C4AC10[];
// 140C4AC60: using guessed type int dword_140C4AC60;
// 140C4AC70: using guessed type int dword_140C4AC70[];
// 140C4ACC0: using guessed type int dword_140C4ACC0;
// 140C4ACD0: using guessed type int dword_140C4ACD0[];
// 140C4AD20: using guessed type int dword_140C4AD20;
// 140C4AD30: using guessed type int dword_140C4AD30[];
// 140C4AD80: using guessed type int dword_140C4AD80;
// 140C4AD90: using guessed type int dword_140C4AD90[];
// 140C4ADE0: using guessed type int dword_140C4ADE0;
// 140C4ADF0: using guessed type int dword_140C4ADF0[];
// 140C4AE40: using guessed type int dword_140C4AE40;
// 140C4AE50: using guessed type int dword_140C4AE50[];
// 140C4AEA0: using guessed type int dword_140C4AEA0;
// 140C4AEB0: using guessed type int dword_140C4AEB0[];
// 140C4AF00: using guessed type int dword_140C4AF00;
// 140C4AF10: using guessed type int dword_140C4AF10[];
// 140C4AF60: using guessed type int dword_140C4AF60;
// 140C4AF70: using guessed type int dword_140C4AF70[];
// 140C4AFC0: using guessed type int dword_140C4AFC0;
// 140C4AFD0: using guessed type int dword_140C4AFD0[];
// 140C4B020: using guessed type int dword_140C4B020;
// 140C4B030: using guessed type int dword_140C4B030[];
// 140C4B080: using guessed type int dword_140C4B080;
// 140C4B090: using guessed type int dword_140C4B090[];
// 140C4B0E0: using guessed type int dword_140C4B0E0;
// 140C4B0F0: using guessed type int dword_140C4B0F0[];
// 140C4B140: using guessed type int dword_140C4B140;
// 140C4B150: using guessed type int dword_140C4B150[];
// 140C4B1A0: using guessed type int dword_140C4B1A0;
// 140C4B1B0: using guessed type int dword_140C4B1B0[];
// 140C4B200: using guessed type int dword_140C4B200;
// 140C4B210: using guessed type int dword_140C4B210[];
// 140C4B260: using guessed type int dword_140C4B260;
// 140C4B270: using guessed type int dword_140C4B270[];
// 140C4B2C0: using guessed type int dword_140C4B2C0;
// 140C4B2D0: using guessed type __int64 qword_140C4B2D0;
// 140C4B320: using guessed type int dword_140C4B320;
// 140C4B330: using guessed type int dword_140C4B330[];
// 140C4B380: using guessed type int dword_140C4B380;
// 140C4B390: using guessed type int dword_140C4B390[];
// 140C4B3E0: using guessed type int dword_140C4B3E0;
// 140C4B3F0: using guessed type int dword_140C4B3F0[];
// 140C4B440: using guessed type int dword_140C4B440;
// 140C4B450: using guessed type int dword_140C4B450[];
// 140C4B4A0: using guessed type int dword_140C4B4A0;
// 140C4B4B0: using guessed type int dword_140C4B4B0[];
// 140C4B500: using guessed type int dword_140C4B500;
// 140C4B510: using guessed type int dword_140C4B510[];
// 140C4B560: using guessed type int dword_140C4B560;
// 140C4B570: using guessed type int dword_140C4B570[];
// 140C4B5C0: using guessed type int dword_140C4B5C0;
// 140C4B5D0: using guessed type int dword_140C4B5D0[];
// 140C4B620: using guessed type int dword_140C4B620;
// 140C4B630: using guessed type int dword_140C4B630[];
// 140C4B680: using guessed type int dword_140C4B680;
// 140C4B690: using guessed type int dword_140C4B690[];
// 140C4B6E0: using guessed type int dword_140C4B6E0;
// 140C4B6F0: using guessed type int dword_140C4B6F0[];
// 140C4B760: using guessed type int dword_140C4B760;
// 140C4B770: using guessed type int dword_140C4B770[];
// 140C4B7C0: using guessed type int dword_140C4B7C0;
// 140C4B7D0: using guessed type int dword_140C4B7D0[];
// 140C4B820: using guessed type int dword_140C4B820;
// 140C4B830: using guessed type int dword_140C4B830[];
// 140C4B880: using guessed type int dword_140C4B880;
// 140C4B890: using guessed type int dword_140C4B890[];
// 140C4B8E0: using guessed type int dword_140C4B8E0;
// 140C4B8F0: using guessed type int dword_140C4B8F0[];
// 140C4B940: using guessed type int dword_140C4B940;
// 140C4B950: using guessed type int dword_140C4B950[];
// 140C4B9A0: using guessed type int dword_140C4B9A0;
// 140C4B9B0: using guessed type int dword_140C4B9B0[];
// 140C4BA00: using guessed type int dword_140C4BA00;
// 140C4BA10: using guessed type int dword_140C4BA10[];
// 140C4BA60: using guessed type int dword_140C4BA60;
// 140C4BA70: using guessed type int dword_140C4BA70[];
// 140C4BAC0: using guessed type int dword_140C4BAC0;
// 140C4BAD0: using guessed type int dword_140C4BAD0[];
// 140C4BB20: using guessed type int dword_140C4BB20;
// 140C4BB30: using guessed type int dword_140C4BB30[];
// 140C4BB80: using guessed type int dword_140C4BB80;
// 140C4BB90: using guessed type int dword_140C4BB90[];
// 140C4BBE0: using guessed type int dword_140C4BBE0;
// 140C4BBF0: using guessed type __int64 qword_140C4BBF0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C7DA10: using guessed type __int128 xmmword_140C7DA10;
// 140C7DA20: using guessed type __int128 xmmword_140C7DA20;
// 140C7DA30: using guessed type __int128 xmmword_140C7DA30;
// 140C7DA40: using guessed type __int128 xmmword_140C7DA40;
// 140C7DA50: using guessed type __int128 xmmword_140C7DA50;
// 140C7DA60: using guessed type __int128 xmmword_140C7DA60;
// 140C7DA70: using guessed type __int128 xmmword_140C7DA70;
// 140C7DA80: using guessed type __int128 xmmword_140C7DA80;
// 140C7DA90: using guessed type __int128 xmmword_140C7DA90;
// 140C7DAA0: using guessed type __int128 xmmword_140C7DAA0;
// 140C7DAB0: using guessed type __int128 xmmword_140C7DAB0;
// 140C7DAC0: using guessed type __int128 xmmword_140C7DAC0;
// 140C7DAD0: using guessed type __int128 xmmword_140C7DAD0;
// 140C7DAE0: using guessed type __int128 xmmword_140C7DAE0;
// 140C7DAF0: using guessed type __int128 xmmword_140C7DAF0;
// 140C7DB00: using guessed type __int128 xmmword_140C7DB00;
// 140C7DB10: using guessed type __int128 xmmword_140C7DB10;
// 140C7DB20: using guessed type __int128 xmmword_140C7DB20;
// 140C7DB30: using guessed type __int128 xmmword_140C7DB30;
// 140C7DB40: using guessed type __int128 xmmword_140C7DB40;

