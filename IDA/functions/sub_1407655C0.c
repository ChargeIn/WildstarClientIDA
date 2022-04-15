#include "../winhttp.h"

//----- (00000001407655C0) ----------------------------------------------------
__int64 __fastcall sub_1407655C0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // eax
	unsigned __int64 v4; // rdx
	unsigned __int64 v5; // r8
	_DWORD* v6; // rax
	int v7; // r14d
	int v8; // ecx
	BOOL v9; // r12d
	_DWORD* v10; // rcx
	int v11; // eax
	BOOL v12; // esi
	_DWORD* v13; // rdx
	unsigned int v14; // r15d
	__int64 v15; // rcx
	unsigned __int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	int v19; // ebx
	__int64 v20; // rax
	int* v21; // rax
	bool v22; // zf
	int* v23; // rsi
	int* v24; // rax
	__int64 v25; // r12
	int* v26; // rax
	__int64 v27; // r12
	int* v28; // rax
	__int64 v29; // r12
	unsigned int v30; // eax
	__int64 v31; // r12
	__int64(__fastcall * *v32)(); // r15
	__int64 v33; // r14
	__int64 v34; // rcx
	unsigned __int64 v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64 v38; // rdx
	int* v39; // rcx
	unsigned int v40; // eax
	__int64 v41; // r14
	__int64 v42; // r15
	__int64 v43; // rsi
	__int64 v44; // rcx
	unsigned __int64 v45; // rax
	__int64 v46; // rbx
	__int64 v47; // rax
	__int64 v48; // rdx
	__int64 v49; // r9
	_DWORD* v50; // rcx
	__int64 v51; // r8
	__int64 v52; // rdx
	__int64 v54; // [rsp+20h] [rbp-60h] BYREF
	unsigned __int64 v55; // [rsp+28h] [rbp-58h]
	__int64(__fastcall * *v56)(); // [rsp+30h] [rbp-50h] BYREF
	unsigned __int64 v57; // [rsp+38h] [rbp-48h]
	_QWORD* v58; // [rsp+40h] [rbp-40h]
	int v59; // [rsp+48h] [rbp-38h]
	__int64(__fastcall * *v60)(); // [rsp+50h] [rbp-30h] BYREF
	int v61; // [rsp+58h] [rbp-28h]
	_QWORD* v62; // [rsp+60h] [rbp-20h]
	int v63; // [rsp+68h] [rbp-18h]
	double v64; // [rsp+A0h] [rbp+20h]

	if ((dword_140DC4D90 & 1) == 0)
	{
		dword_140DC4D90 |= 1u;
		v2 = sub_140200220(0x91u);
		if (v2)
			v3 = *(_DWORD*)(v2 + 4);
		else
			v3 = 50;
		dword_140DC4D94 = v3;
	}
	v4 = a1[3];
	v5 = a1[2];
	v6 = dword_140A12138;
	if (v4 < v5)
		v6 = (_DWORD*)a1[3];
	v7 = 0;
	v8 = v6[2];
	v9 = v8 && (v8 != 1 || *v6);
	v10 = dword_140A12138;
	if (v4 + 16 < v5)
		v10 = (_DWORD*)(v4 + 16);
	v11 = v10[2];
	v12 = v11 && (v11 != 1 || *v10);
	v13 = (_DWORD*)(v4 + 32);
	if ((unsigned __int64)v13 >= v5 || v13 == dword_140A12138 || (int)v13[2] <= 0)
		v14 = 3;
	else
		v14 = sub_140056D60(a1, 3u);
	v15 = a1[4];
	v62 = a1;
	v16 = *(_QWORD*)(v15 + 112);
	v60 = off_140B569F0;
	v63 = 1;
	if (*(_QWORD*)(v15 + 120) >= v16)
		sub_14005E2C0((__int64)a1);
	v17 = a1[2];
	v18 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v17 + 8) = 5;
	*(_QWORD*)v17 = v18;
	a1[2] += 16i64;
	v19 = sub_1400578C0((__int64)a1);
	v61 = v19;
	v20 = *(_QWORD*)(qword_140C65898 + 120);
	if (v20 && *(_DWORD*)(v20 + 56) > (unsigned int)dword_140DC4D94)
	{
		v21 = sub_14018DB00(0i64, 1ui64, 4i64);
		v22 = !v12;
		v54 = (__int64)v21;
		v23 = v21;
		if (v22)
		{
			*v21 = 0;
			v28 = sub_14018DB00((__int64)v21, 2ui64, 4i64);
			v28[1] = 3;
			v29 = (__int64)v28;
			if (v23 != v28)
			{
				*v28 = *v23;
				(*(void(__fastcall**)(int*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 4);
				v23 = (int*)v29;
				v54 = v29;
			}
			v55 = 2i64;
		}
		else
		{
			*v21 = 1;
			v24 = sub_14018DB00((__int64)v21, 2ui64, 4i64);
			v24[1] = 2;
			v25 = (__int64)v24;
			if (v23 != v24)
			{
				*v24 = *v23;
				(*(void(__fastcall**)(int*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 4);
				v23 = (int*)v25;
				v54 = v25;
			}
			v26 = sub_14018DB00((__int64)v23, 3ui64, 4i64);
			v27 = (__int64)v26;
			v26[2] = 3;
			if (v23 != v26)
			{
				*v26 = *v23;
				v26[1] = v23[1];
				if (v23)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 4);
				v23 = (int*)v27;
				v54 = v27;
			}
			v55 = 3i64;
		}
		v57 = 0i64;
		v56 = 0i64;
		sub_140764EE0((unsigned __int64*)&v54, (__int64*)&v56);
		v30 = v57;
		if (v57 > 1)
		{
			sub_140766060((__int64*)&v56);
			v30 = v57;
		}
		if (v30 < v14)
			v14 = v30;
		v31 = v14;
		v32 = v56;
		if (v31)
		{
			v33 = (__int64)v56;
			do
			{
				v34 = a1[4];
				v56 = off_140B569F0;
				v58 = a1;
				v35 = *(_QWORD*)(v34 + 112);
				v59 = 1;
				if (*(_QWORD*)(v34 + 120) >= v35)
					sub_14005E2C0((__int64)a1);
				v36 = a1[2];
				v37 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v36 + 8) = 5;
				*(_QWORD*)v36 = v37;
				a1[2] += 16i64;
				LODWORD(v36) = sub_1400578C0((__int64)a1);
				LODWORD(v57) = v36;
				sub_140764A20((__int64)&v56, v33);
				sub_1400FB1D0((__int64)&v60);
				sub_1400579E0((__int64)a1, v38, v36);
				v33 += 64i64;
				--v31;
			} while (v31);
			a1 = v62;
			v19 = v61;
		}
		if (v32)
			(*((void(__fastcall**)(__int64(__fastcall**)())) * (v32 - 2) + 1))(v32 - 2);
		if (v23)
		{
			v39 = v23 - 4;
		LABEL_68:
			(*(void(__fastcall**)(int*))(*(_QWORD*)v39 + 8i64))(v39);
		}
	}
	else
	{
		v55 = 0i64;
		v54 = 0i64;
		if (v9)
			sub_140764970(qword_140C665D8 + 48, &v54, !v12);
		LOBYTE(v7) = !v12;
		sub_140764970(qword_140C665D8 + 80, &v54, v7);
		sub_140764970(qword_140C665D8 + 96, &v54, v7);
		v40 = v55;
		if (v55 > 1)
		{
			sub_140766060(&v54);
			v40 = v55;
		}
		if (v40 < v14)
			v14 = v40;
		v41 = v14;
		v42 = v54;
		if (v41)
		{
			v43 = v54;
			do
			{
				v44 = a1[4];
				v56 = off_140B569F0;
				v58 = a1;
				v45 = *(_QWORD*)(v44 + 112);
				v59 = 1;
				if (*(_QWORD*)(v44 + 120) >= v45)
					sub_14005E2C0((__int64)a1);
				v46 = a1[2];
				v47 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v46 + 8) = 5;
				*(_QWORD*)v46 = v47;
				a1[2] += 16i64;
				LODWORD(v46) = sub_1400578C0((__int64)a1);
				LODWORD(v57) = v46;
				sub_140764A20((__int64)&v56, v43);
				sub_1400FB1D0((__int64)&v60);
				sub_1400579E0((__int64)a1, v48, v46);
				v43 += 64i64;
				--v41;
			} while (v41);
			a1 = v62;
			v19 = v61;
		}
		if (v42)
		{
			v39 = (int*)(v42 - 16);
			goto LABEL_68;
		}
	}
	v49 = *(_QWORD*)(a1[4] + 160i64);
	if ((unsigned int)(v19 - 1) >= *(_DWORD*)(v49 + 56))
	{
		if ((double)v19 == 0.0)
		{
			v50 = *(_DWORD**)(v49 + 32);
		}
		else
		{
			v64 = (double)v19;
			v50 = (_DWORD*)(*(_QWORD*)(v49 + 32)
				+ 40 * ((unsigned int)(LODWORD(v64) + HIDWORD(v64)) % (((1i64 << *(_BYTE*)(v49 + 11)) - 1) | 1)));
		}
		while (v50[6] != 3 || (double)v19 != *((double*)v50 + 2))
		{
			v50 = (_DWORD*)*((_QWORD*)v50 + 4);
			if (!v50)
			{
				v50 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v50 = (_DWORD*)(*(_QWORD*)(v49 + 24) + 16i64 * (v19 - 1));
	}
	v51 = a1[2];
	*(_QWORD*)v51 = *(_QWORD*)v50;
	v52 = (unsigned int)v50[2];
	*(_DWORD*)(v51 + 8) = v52;
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v52, v19);
	return 1i64;
}
// 1407658BF: variable 'v38' is possibly undefined
// 1407659FF: variable 'v48' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C665D8: using guessed type __int64 qword_140C665D8;
// 140DC4D90: using guessed type int dword_140DC4D90;
// 140DC4D94: using guessed type int dword_140DC4D94;

