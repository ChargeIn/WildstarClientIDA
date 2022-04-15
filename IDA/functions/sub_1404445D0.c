#include "../winhttp.h"

//----- (00000001404445D0) ----------------------------------------------------
__int64 __fastcall sub_1404445D0(_DWORD* a1, __int64 a2, unsigned int a3)
{
	int* v6; // rdi
	__int64 i; // rcx
	int* v8; // rdi
	_DWORD* v9; // rbx
	int* v10; // r13
	bool v11; // zf
	__int64 v12; // rax
	int v13; // edx
	__int64 v14; // rax
	__int64 result; // rax
	__int64 v16; // rax
	unsigned int v17; // ecx
	int* v18; // r15
	int* v19; // r14
	int* v20; // r12
	int v21; // eax
	float v22; // xmm0_4
	_DWORD* v23; // rcx
	int v24; // eax
	int v25; // eax
	int v26; // edx
	int v27; // ecx
	int v28; // eax
	__int64 v29; // rax
	_DWORD* v30; // rax
	__int64 v31; // r14
	__int64 v32; // rax
	__int64 v33; // rax
	__int64 v34; // r15
	__int64 v35; // rax
	unsigned int v36; // ecx
	int* v37; // rax
	bool v38; // cc
	int v39; // eax
	int v40; // edx
	__int64 v41; // rax
	__int64 v42; // rcx
	__int64 v43; // r8
	int* v44; // rax
	int v45; // ecx
	unsigned int v46; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v47; // [rsp+38h] [rbp-C8h]
	unsigned int v48; // [rsp+40h] [rbp-C0h] BYREF
	_DWORD* v49; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v50; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v51)(); // [rsp+60h] [rbp-A0h] BYREF
	int v52; // [rsp+68h] [rbp-98h]
	int* v53; // [rsp+70h] [rbp-90h]
	__int64 v54; // [rsp+78h] [rbp-88h]
	__int64 v55; // [rsp+80h] [rbp-80h]
	__int64 v56; // [rsp+88h] [rbp-78h]
	__int64 v57; // [rsp+90h] [rbp-70h]
	__int64 v58; // [rsp+98h] [rbp-68h]
	__int64 v59; // [rsp+A0h] [rbp-60h]
	int v60; // [rsp+A8h] [rbp-58h]
	__int128 v61; // [rsp+B0h] [rbp-50h]
	int v62; // [rsp+C0h] [rbp-40h]
	__int64 v63; // [rsp+C8h] [rbp-38h]
	__int64 v64; // [rsp+D0h] [rbp-30h]
	__int64 v65; // [rsp+DCh] [rbp-24h]
	int v66; // [rsp+E4h] [rbp-1Ch]
	__int64 v67; // [rsp+E8h] [rbp-18h]
	__int64 v68; // [rsp+F0h] [rbp-10h]
	__int64 v69; // [rsp+F8h] [rbp-8h]
	__int128 v70; // [rsp+100h] [rbp+0h]
	__int64 v71; // [rsp+110h] [rbp+10h]
	int v72; // [rsp+12Ch] [rbp+2Ch]
	__int64 v73; // [rsp+178h] [rbp+78h]
	__int64 v74; // [rsp+180h] [rbp+80h]
	__int64 v75; // [rsp+188h] [rbp+88h]
	__int64 v76; // [rsp+190h] [rbp+90h]
	__int64 v77; // [rsp+198h] [rbp+98h]
	int v78; // [rsp+1D0h] [rbp+D0h] BYREF
	int v79[37]; // [rsp+1D8h] [rbp+D8h] BYREF
	int v80[85]; // [rsp+26Ch] [rbp+16Ch] BYREF

	v47 = a2;
	sub_1400B52A0((__int64)v79);
	sub_1407E4830(&v78, 0i64, 0x1F0ui64);
	sub_1407E4830(v79, 0i64, 0x138ui64);
	sub_1407E4830(v80, 0i64, 0x90ui64);
	v6 = v80;
	for (i = 15i64; i; --i)
		*v6++ = 197;
	v8 = &v78;
	if (a2)
		v8 = (int*)a2;
	v9 = (_DWORD*)sub_1402096E0(a3);
	v10 = v9;
	v11 = (v9[31] & 0x4000) == 0;
	v49 = v9 + 31;
	if (v11)
	{
	LABEL_24:
		v18 = (int*)sub_140209F60(v10[7]);
		v19 = (int*)sub_140209B20(v10[8]);
		v20 = (int*)sub_14020A3A0(v10[9]);
		sub_1407E4830(v8, 0i64, 0x1F0ui64);
		*v8 = *v10;
		v8[80] = *v18;
		v8[82] = *v19;
		v8[81] = *v20;
		v8[86] = v9[4];
		if ((v9[31] & 1) != 0 || (v21 = v9[16]) == 0)
			v8[87] = 1;
		else
			v8[87] = v21;
		v8[88] = v10[15];
		v8[89] = v9[17];
		v8[90] = v9[1];
		v8[91] = v9[2];
		v8[92] = v9[3];
		v8[93] = v9[6];
		v8[94] = v9[43];
		v22 = *((float*)v9 + 43);
		if (v22 < -1.0 || v22 > 1.0)
			return 2147500037i64;
		v23 = v49;
		v8[99] = v9[12];
		v8[100] = v9[13];
		v8[101] = v9[14];
		v8[102] = v9[18];
		v8[104] = v10[20];
		v8[105] = v9[21];
		v8[106] = v9[22];
		v8[108] = v9[23];
		v8[109] = v9[24];
		v8[110] = v9[25];
		v24 = v9[31];
		v8[83] = v24;
		if ((*v23 & 0x4000) != 0)
			v8[83] = v24 | 0x4000;
		v8[84] = v9[32];
		if ((*v23 & 0x4000) != 0)
			v25 = 65540;
		else
			v25 = v18[2] | v19[3] | v20[5];
		v8[85] = v25;
		v8[103] = v19[2];
		v8[112] = v9[26];
		v8[113] = v9[27];
		v8[116] = v9[28];
		v8[117] = v9[29];
		v8[118] = v9[30];
		v26 = v9[5];
		if (v26)
		{
			if (!sub_14040FA40((__int64)a1, v26))
				return 2147500037i64;
			v8[111] = v9[5];
		}
		v27 = v10[10];
		v8[97] = v27;
		v8[98] = v10[42];
		if (!v27)
		{
			v28 = v9[10];
			if (v28)
			{
				v8[97] = v28;
				v8[98] = v9[42];
			}
		}
		if (!v8[97])
		{
			v29 = sub_140444130((__int64)a1, v10);
			if (v29)
				v8[97] = *(_DWORD*)(v29 + 20);
		}
		v30 = v49;
		v31 = 0i64;
		*(_QWORD*)(v8 + 95) = 0i64;
		if ((*v30 & 0x4000) != 0)
		{
			v32 = sub_14020BD20(v8[97]);
			if (v32 && (v33 = sub_14020A3A0(*(_DWORD*)(v32 + 16)), (v34 = v33) != 0))
			{
				v35 = sub_140209B20(*(_DWORD*)(v33 + 32));
				v36 = *(_DWORD*)(v34 + 8);
				v31 = v35;
			}
			else
			{
				v36 = v20[2];
			}
			v37 = (int*)sub_14020E7A0(v36);
			if (v37)
				v8[95] = *v37;
			if (v31)
				v8[103] = *(_DWORD*)(v31 + 8);
		}
		else
		{
			v44 = (int*)sub_14020E7A0(v20[2]);
			if (v44)
			{
				if ((v8[85] & 0x400) != 0)
					v45 = *v44;
				else
					v45 = 0;
				v8[95] = v45;
				v8[96] = v44[4];
			}
			v8[96] |= v9[19];
		}
		v38 = (unsigned int)v8[104] <= 1;
		v8[107] = v9[33];
		if (!v38 && (unsigned int)v8[105] > 1)
			v8[104] = 1;
		v39 = v8[85];
		if ((v39 & 4) == 0 && (v39 & 0x100) == 0 && (unsigned int)v8[104] > 1 && (v8[83] & 0x4000) == 0)
			v8[104] = 1;
		if ((v39 & 0x200) == 0 && v8[108])
			v8[108] = 0;
		if ((!v8[96] || v8[80] == 33 || (v39 & 0x400) != 0)
			&& (!v9[23]
				|| a1[4]
				|| (v40 = v9[5]) == 0
				|| (v41 = sub_14040FA40((__int64)a1, v40)) == 0
				|| !*(_DWORD*)(v41 + 16)))
		{
			v51 = off_140B66A40;
			v61 = 0i64;
			v70 = 0i64;
			v52 = 1;
			v58 = 0i64;
			v66 = 1;
			v59 = 0i64;
			v60 = 0;
			v62 = 0;
			v63 = 0i64;
			v64 = 0i64;
			v65 = 0i64;
			v67 = 0i64;
			v68 = 0i64;
			v69 = 0i64;
			v71 = 0i64;
			v72 = 0;
			v73 = 0i64;
			v74 = 0i64;
			v75 = 0i64;
			v76 = 0i64;
			v77 = 0i64;
			v53 = v8;
			v54 = 1i64;
			v55 = 0i64;
			v56 = 0i64;
			v57 = 0i64;
			if (!(unsigned int)sub_14040C310((__int64)&v51, (__int64)(v8 + 2), (__int64)a1, 0i64, 0i64, 0i64))
			{
				if (!v9[1]
					|| !v9[2]
					|| a1[4]
					|| (LODWORD(v50) = 1,
						v49 = 0i64,
						result = sub_14040EC60((__int64)a1, (__int64)v8, (__int64)&v49),
						(int)result >= 0))
				{
					if ((unsigned int)(v8[80] - 1) > 1)
						return (*(__int64(__fastcall**)(_DWORD*, __int64, int*))(*(_QWORD*)a1 + 32i64))(a1, v47, v10);
					if (a1[4])
						return (*(__int64(__fastcall**)(_DWORD*, __int64, int*))(*(_QWORD*)a1 + 32i64))(a1, v47, v10);
					if ((v8[83] & 0x4000) != 0)
						return (*(__int64(__fastcall**)(_DWORD*, __int64, int*))(*(_QWORD*)a1 + 32i64))(a1, v47, v10);
					result = sub_14040EFB0(v8, 0i64, (unsigned int*)&v49, &v46, &v48);
					if ((int)result >= 0)
					{
						v50 = 0i64;
						v49 = 0i64;
						result = sub_14040EED0(v42, v8, v43, &v49);
						if ((int)result >= 0)
							return (*(__int64(__fastcall**)(_DWORD*, __int64, int*))(*(_QWORD*)a1 + 32i64))(a1, v47, v10);
					}
				}
				return result;
			}
		}
		return 2147500037i64;
	}
	if (dword_140C7CDF4)
	{
		v13 = dword_140C7CDF0;
	}
	else
	{
		dword_140C7CDF4 = 1;
		v12 = sub_140200220(0x4BEu);
		if (v12)
		{
			v13 = *(_DWORD*)(v12 + 4);
			dword_140C7CDF0 = v13;
		}
		else
		{
			v13 = 0;
			dword_140C7CDF0 = 0;
		}
	}
	if (sub_140444550((__int64)a1, v13))
	{
		if (dword_140C7CDF4)
		{
			v17 = dword_140C7CDF0;
		}
		else
		{
			dword_140C7CDF4 = 1;
			v16 = sub_140200220(0x4BEu);
			if (v16)
			{
				v17 = *(_DWORD*)(v16 + 4);
				dword_140C7CDF0 = v17;
			}
			else
			{
				v17 = 0;
				dword_140C7CDF0 = 0;
			}
		}
		v9 = (_DWORD*)sub_1402096E0(v17);
		goto LABEL_24;
	}
	if (!dword_140C7CDF4)
	{
		dword_140C7CDF4 = 1;
		v14 = sub_140200220(0x4BEu);
		if (v14)
		{
			dword_140C7CDF0 = *(_DWORD*)(v14 + 4);
			return 2147500037i64;
		}
		dword_140C7CDF0 = 0;
	}
	return 2147500037i64;
}
// 140444C2E: variable 'v42' is possibly undefined
// 140444C2E: variable 'v43' is possibly undefined
// 140B66A40: using guessed type __int64 (__fastcall *off_140B66A40[121])();
// 140C7CDF0: using guessed type int dword_140C7CDF0;
// 140C7CDF4: using guessed type int dword_140C7CDF4;
// 1404445D0: using guessed type int var_228[37];
// 1404445D0: using guessed type int var_194[85];

