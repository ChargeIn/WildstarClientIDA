#include "../winhttp.h"

//----- (00000001402BFA80) ----------------------------------------------------
__int64 __fastcall sub_1402BFA80(
	__int64 a1,
	_BYTE* a2,
	__int64 a3,
	__int64 a4,
	int a5,
	int a6,
	__int64* a7,
	_DWORD* a8)
{
	_DWORD* v8; // r12
	signed int v9; // r14d
	unsigned int v10; // r15d
	unsigned int v11; // r13d
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rdi
	int v17; // r13d
	__int64 result; // rax
	unsigned int v19; // ebx
	unsigned int v20; // eax
	char* v21; // rsi
	__int64 v22; // r14
	unsigned __int8* v23; // r10
	__int64 v24; // r15
	int v25; // eax
	int v26; // ecx
	int v27; // eax
	int v28; // ecx
	int v29; // eax
	int v30; // ecx
	int v31; // eax
	int v32; // ecx
	int v33; // eax
	int v34; // ecx
	int v35; // eax
	int v36; // ecx
	int v37; // eax
	int v38; // ecx
	int v39; // eax
	int v40; // ecx
	int v41; // eax
	int v42; // ecx
	int v43; // eax
	int v44; // ecx
	int v45; // eax
	int v46; // ecx
	int v47; // eax
	int v48; // ecx
	int v49; // eax
	int v50; // ecx
	int v51; // eax
	int v52; // ecx
	int v53; // eax
	unsigned __int8 v54; // r9
	unsigned __int8 v55; // r8
	_BYTE* v56; // r11
	__int64 v57; // r8
	__int16 v58; // ax
	__int64 v59; // r10
	__int64 v60; // rax
	unsigned int v61[4]; // [rsp+20h] [rbp-E0h] BYREF
	unsigned int v62[4]; // [rsp+30h] [rbp-D0h] BYREF
	_BYTE* v63; // [rsp+40h] [rbp-C0h] BYREF
	int v64; // [rsp+48h] [rbp-B8h]
	int v65; // [rsp+4Ch] [rbp-B4h]
	int v66; // [rsp+50h] [rbp-B0h]
	unsigned int v67; // [rsp+54h] [rbp-ACh]
	unsigned int v68; // [rsp+58h] [rbp-A8h]
	unsigned int v69; // [rsp+5Ch] [rbp-A4h]
	unsigned int v70; // [rsp+60h] [rbp-A0h]
	__int64 v71; // [rsp+68h] [rbp-98h]
	__int64 v72; // [rsp+70h] [rbp-90h]
	_DWORD* v73; // [rsp+78h] [rbp-88h]
	_BYTE* v74; // [rsp+80h] [rbp-80h]
	__int64 v75; // [rsp+88h] [rbp-78h]
	__int64 v76[4]; // [rsp+90h] [rbp-70h] BYREF
	char v77[65]; // [rsp+B0h] [rbp-50h] BYREF
	char v78; // [rsp+F1h] [rbp-Fh] BYREF
	__int64 v79[106]; // [rsp+1B0h] [rbp+B0h] BYREF
	__m128i v80; // [rsp+500h] [rbp+400h] BYREF
	int v81; // [rsp+510h] [rbp+410h]
	int v82; // [rsp+514h] [rbp+414h]
	int v83; // [rsp+518h] [rbp+418h]
	int v84; // [rsp+51Ch] [rbp+41Ch]
	int v85; // [rsp+520h] [rbp+420h]
	int v86; // [rsp+524h] [rbp+424h]
	int v87; // [rsp+528h] [rbp+428h]
	int v88; // [rsp+52Ch] [rbp+42Ch]
	int v89; // [rsp+530h] [rbp+430h]
	int v90; // [rsp+534h] [rbp+434h]
	int v91; // [rsp+538h] [rbp+438h]
	int v92; // [rsp+53Ch] [rbp+43Ch]

	v8 = a8;
	v75 = a1;
	v9 = (unsigned int)(a6 + 3) >> 2;
	v74 = a2;
	v10 = (unsigned int)(a5 + 7) >> 3;
	v11 = (unsigned int)(a6 + 7) >> 3;
	v14 = (unsigned int)(*a8 * v9);
	v73 = a8;
	v70 = v10;
	v69 = v11;
	v68 = (unsigned int)(a5 + 3) >> 2;
	v65 = v9;
	v76[0] = a3;
	*a7 = (__int64)sub_14018B280(v14, 8u);
	v76[1] = a4;
	v76[2] = a3;
	v76[3] = 0i64;
	sub_1402C0750(v79, (__int64)v76);
	v15 = *a7;
	v72 = *a7;
	v64 = 0;
	if (!v11)
		return 0i64;
	while (1)
	{
		v16 = v15;
		v71 = v15;
		v66 = 0;
		if (v10)
			break;
	LABEL_19:
		v9 -= 2;
		v60 = (unsigned int)(2 * *v8);
		v65 = v9;
		v15 += v60;
		v72 = v15;
		if (++v64 >= v11)
			return 0i64;
	}
	v17 = v68;
	v67 = v68;
	while (1)
	{
		result = sub_1402BD370(v77, (__int64)v79, v74, v75);
		if ((int)result < 0)
			return result;
		v19 = 2;
		v20 = 2;
		if (v17 < 2)
			v19 = v17;
		if (v9 < 2)
			v20 = v9;
		if (v20)
		{
			v21 = &v78;
			v22 = v20;
			do
			{
				if (v19)
				{
					v23 = (unsigned __int8*)v21;
					v24 = v19;
					do
					{
						v25 = *v23;
						v80.m128i_i32[0] = v23[127] | ((v23[63] | ((*(v23 - 1) | (*(v23 - 65) << 8)) << 8)) << 8);
						v26 = v23[128] | ((v23[64] | ((v25 | (*(v23 - 64) << 8)) << 8)) << 8);
						v27 = v23[1];
						v80.m128i_i32[1] = v26;
						v28 = v23[129] | ((v23[65] | ((v27 | (*(v23 - 63) << 8)) << 8)) << 8);
						v29 = v23[2];
						v80.m128i_i32[2] = v28;
						v30 = v23[130] | ((v23[66] | ((v29 | (*(v23 - 62) << 8)) << 8)) << 8);
						v31 = v23[7];
						v80.m128i_i32[3] = v30;
						v32 = v23[135] | ((v23[71] | ((v31 | (*(v23 - 57) << 8)) << 8)) << 8);
						v33 = v23[8];
						v81 = v32;
						v34 = v23[136] | ((v23[72] | ((v33 | (*(v23 - 56) << 8)) << 8)) << 8);
						v35 = v23[9];
						v82 = v34;
						v36 = v23[137] | ((v23[73] | ((v35 | (*(v23 - 55) << 8)) << 8)) << 8);
						v37 = v23[10];
						v83 = v36;
						v38 = v23[138] | ((v23[74] | ((v37 | (*(v23 - 54) << 8)) << 8)) << 8);
						v39 = v23[15];
						v84 = v38;
						v40 = v23[143] | ((v23[79] | ((v39 | (*(v23 - 49) << 8)) << 8)) << 8);
						v41 = v23[16];
						v85 = v40;
						v42 = v23[144] | ((v23[80] | ((v41 | (*(v23 - 48) << 8)) << 8)) << 8);
						v43 = v23[17];
						v86 = v42;
						v44 = v23[145] | ((v23[81] | ((v43 | (*(v23 - 47) << 8)) << 8)) << 8);
						v45 = v23[18];
						v87 = v44;
						v46 = v23[146] | ((v23[82] | ((v45 | (*(v23 - 46) << 8)) << 8)) << 8);
						v47 = v23[23];
						v88 = v46;
						v48 = v23[151] | ((v23[87] | ((v47 | (*(v23 - 41) << 8)) << 8)) << 8);
						v49 = v23[24];
						v89 = v48;
						v50 = v23[152] | ((v23[88] | ((v49 | (*(v23 - 40) << 8)) << 8)) << 8);
						v51 = v23[25];
						v90 = v50;
						v52 = v23[153] | ((v23[89] | ((v51 | (*(v23 - 39) << 8)) << 8)) << 8);
						v53 = v23[26];
						v91 = v52;
						v92 = v23[154] | ((v23[90] | ((v53 | (*(v23 - 38) << 8)) << 8)) << 8);
						sub_1402C7250(&v80, v62, v61);
						v54 = HIBYTE(v61[0]);
						v55 = HIBYTE(v62[0]);
						*v56 = HIBYTE(v61[0]);
						v56[1] = v55;
						v63 = v56 + 2;
						sub_1402C77D0(&v80, (__int64*)&v63, v55, v54);
						v57 = (__int64)(v63 + 4);
						v63 = (_BYTE*)v57;
						v58 = BYTE2(v62[0]);
						*(_WORD*)(v57 - 4) = (BYTE1(v61[0]) >> 3) | (8 * (BYTE2(v61[0]) & 0xFC | (32 * (v61[0] & 0xF8))));
						*(_WORD*)(v57 - 2) = (BYTE1(v62[0]) >> 3) | (8 * (v58 & 0xFFFC | (32 * (v62[0] & 0xF8))));
						sub_1402C74E0((__int64)&v80, (__int64*)&v63, v62, v61);
						v23 = (unsigned __int8*)(v59 + 4);
						--v24;
					} while (v24);
					v8 = v73;
				}
				v21 += 32;
				v16 += (unsigned int)*v8;
				--v22;
			} while (v22);
			v17 = v67;
			v9 = v65;
			v10 = v70;
		}
		v17 -= 2;
		v67 = v17;
		v16 = 16 * v19 + v71;
		v71 = v16;
		if (++v66 >= v10)
		{
			v15 = v72;
			v11 = v69;
			goto LABEL_19;
		}
	}
}
// 1402BFEEE: variable 'v56' is possibly undefined
// 1402BFFA6: variable 'v59' is possibly undefined
// 1402BFA80: using guessed type __int64 var_3D0[106];
// 1402BFA80: using guessed type char var_4D0[65];

