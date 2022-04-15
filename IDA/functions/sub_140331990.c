#include "../winhttp.h"

//----- (0000000140331990) ----------------------------------------------------
__int64 __fastcall sub_140331990(_QWORD* a1, __int64 a2, __int64 a3)
{
	int v3; // r11d
	__int64 v5; // rcx
	__int64 v8; // r9
	__int64 v9; // r8
	__int64 v10; // r10
	unsigned int v11; // edi
	__int64 v13; // rcx
	__int64 v14; // r13
	unsigned int v15; // ebx
	int v16; // eax
	__int64 v17; // r13
	__int64 v18; // r8
	__int64* v19; // rax
	__int64 v20; // r12
	__int64* v21; // rax
	__int64 v22; // r15
	_BYTE* v23; // rbx
	__int64 v24; // rcx
	__int64 v25; // r8
	__int64* v26; // rax
	__int64 v27; // r12
	__int64* v28; // rax
	__int64 v29; // r15
	_BYTE* v30; // rbx
	int v31; // eax
	unsigned int v32; // eax
	__int64* v33; // rax
	__int64 v34; // rax
	__int64 v35; // rcx
	bool v36; // zf
	__int64 v37; // r12
	unsigned __int8* v38; // r12
	__int64* v39; // rcx
	int v40; // eax
	unsigned int v41; // eax
	int(__fastcall * v42)(__int64, _QWORD*, unsigned __int8*); // rax
	__int64* v43; // rax
	__int64 v44; // rax
	int v45; // eax
	unsigned int v46; // eax
	int v47; // r15d
	unsigned int v48; // r15d
	__int64* v49; // rax
	__int64 v50; // rsi
	_BYTE* v51; // rbx
	__int64* v52; // rcx
	__int64 v53; // r8
	__int64 v54; // rax
	__int64* v55; // rax
	__int64 v56; // rdi
	_BYTE* v57; // rbx
	__int64 v58; // rcx
	__int64* v59; // rax
	__int64 v60; // rdi
	_BYTE* v61; // rbx
	__int64 v62; // rdx
	__int64 v63; // [rsp+28h] [rbp-51h]
	__int64 v64; // [rsp+30h] [rbp-49h]
	__int64 v65; // [rsp+50h] [rbp-29h] BYREF
	__int64 v66; // [rsp+58h] [rbp-21h]
	__int64 v67; // [rsp+60h] [rbp-19h] BYREF
	__int64 v68; // [rsp+68h] [rbp-11h]
	__int64 v69; // [rsp+80h] [rbp+7h] BYREF
	__int64 v70; // [rsp+88h] [rbp+Fh]
	__int64 v71; // [rsp+F0h] [rbp+77h] BYREF
	__int64 v72; // [rsp+F8h] [rbp+7Fh] BYREF

	v3 = *(_DWORD*)(a3 + 8);
	v5 = *(_QWORD*)(a3 + 16);
	LODWORD(v71) = v3;
	if (v5
		&& (v8 = *(_QWORD*)(a3 + 24),
			v9 = *(_QWORD*)(a3 + 32),
			(unsigned __int64)(8i64 * *(_QWORD*)(v5 + 32) - 8 * v8 - v9) >= 0x40))
	{
		v10 = *(_QWORD*)v8 >> v9;
		if (((v9 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			v10 |= (unsigned __int64)*(unsigned __int8*)(v8 + 8) << (64 - (unsigned __int8)v9);
		v11 = v10;
		*(_QWORD*)(a3 + 32) = v9 & 7;
		*(_QWORD*)(a3 + 24) = v8 + ((unsigned __int64)(v9 + 32) >> 3);
		*(_DWORD*)(a3 + 8) = v3 + ((unsigned __int64)(v9 + 32) >> 3);
	}
	else
	{
		if ((int)sub_140336D60(a3, &v72, 0x20ui64) < 0)
			return 12i64;
		v11 = v72;
	}
	v13 = *(_QWORD*)(a3 + 16);
	if (v13
		&& (v14 = *(_QWORD*)(a3 + 24),
			(unsigned __int64)(8i64 * *(_QWORD*)(v13 + 32) - 8 * v14 - *(_QWORD*)(a3 + 32)) >= 0x40))
	{
		v15 = sub_1400A71C0((_QWORD*)(a3 + 24), (__int64*)(a3 + 32), 0x10ui64);
		*(_DWORD*)(a3 + 8) += *(_DWORD*)(a3 + 24) - v14;
		v16 = 0;
	}
	else
	{
		v16 = sub_140336D60(a3, &v72, 0x10ui64);
		v15 = v72;
	}
	if (v16 < 0)
		return 12i64;
	if (*(_DWORD*)(a2 + 32) == 1)
		v15 |= 0x10000u;
	v17 = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 304i64))(a1, v15);
	if (!v17)
	{
		v18 = *(unsigned int*)(a2 + 792);
		if (qword_140C65828)
		{
			v19 = sub_140335F10(&v69, v18);
		}
		else
		{
			sub_14018EE90(&v69, (__int64)"Message Id #%d", v18);
			v19 = &v69;
		}
		v20 = v19[1];
		if (qword_140C65828)
		{
			v21 = sub_140335F10(&v67, v15);
		}
		else
		{
			sub_14018EE90(&v67, (__int64)"Message Id #%d", v15);
			v21 = &v67;
		}
		v22 = v21[1];
		v23 = (_BYTE*)(*(_QWORD*)(a2 + 24) + 200i64);
		if (!*v23)
			sub_140334D90(*(_QWORD*)(a2 + 24) + 144i64);
		v72 = 0x141DEBC30i64;
		sub_1401A2E50(0xBu, 0, &v72, v23, *(_DWORD*)(a2 + 16), v22, v11, *(_DWORD*)(a2 + 792), v20);
		if (v68)
			sub_14018B900(v68, 0);
		v24 = v70;
		goto LABEL_41;
	}
	LODWORD(v72) = sub_140335EC0(v15);
	v66 = (unsigned int)(int)(float)((float)(int)v72 * 2.0);
	if (v11 > (unsigned int)v72)
	{
		v25 = *(unsigned int*)(a2 + 792);
		if (qword_140C65828)
		{
			v26 = sub_140335F10(&v67, v25);
		}
		else
		{
			sub_14018EE90(&v67, (__int64)"Message Id #%d", v25);
			v26 = &v67;
		}
		v27 = v26[1];
		if (qword_140C65828)
		{
			v28 = sub_140335F10(&v69, v15);
		}
		else
		{
			sub_14018EE90(&v69, (__int64)"Message Id #%d", v15);
			v28 = &v69;
		}
		v29 = v28[1];
		v30 = (_BYTE*)(*(_QWORD*)(a2 + 24) + 200i64);
		if (!*v30)
			sub_140334D90(*(_QWORD*)(a2 + 24) + 144i64);
		v65 = 0x141DEBD30i64;
		sub_1401A2E50(0xBu, 0, &v65, v30, *(_DWORD*)(a2 + 16), v11, v72, v29, *(_DWORD*)(a2 + 792), v27);
		if (v70)
			sub_14018B900(v70, 0);
		v24 = v68;
	LABEL_41:
		if (v24)
			sub_14018B900(v24, 0);
		v31 = *(_DWORD*)(a3 + 8);
		if (*(_QWORD*)(a3 + 32))
			++v31;
		v32 = v31 - v71;
		if (v32 && v32 < v11)
		{
			sub_1403370C0((_QWORD*)a3, v11 - v32);
			return 8i64;
		}
		return 8i64;
	}
	if (v11 > (int)(float)((float)(int)v72 * 0.89999998))
	{
		if (qword_140C65828)
		{
			v33 = sub_140335F10(&v69, v15);
		}
		else
		{
			sub_14018EE90(&v69, (__int64)"Message Id #%d", v15);
			v33 = &v69;
		}
		v34 = v33[1];
		v35 = *(_QWORD*)(a2 + 24) + 144i64;
		v36 = *(_BYTE*)(*(_QWORD*)(a2 + 24) + 200i64) == 0;
		v65 = v34;
		v37 = v35 + 56;
		if (v36)
		{
			sub_140334D90(v35);
			v34 = v65;
		}
		v65 = 0x141DEBCC0i64;
		sub_1401A2E50(0xBu, 1, &v65, v37, v11, v72, v34);
		if (v70)
			sub_14018B900(v70, 0);
	}
	*(_DWORD*)(a2 + 792) = v15;
	sub_140334A70(v17 + 80, v11, 2);
	a1[12] = a1[10];
	a1[8] = (unsigned int)v66;
	v38 = (unsigned __int8*)sub_1403374E0(a1 + 8, *(_QWORD*)(v17 + 8));
	if (!v38)
	{
		if (qword_140C65828)
		{
			v39 = sub_140335F10(&v69, v15);
		}
		else
		{
			sub_14018EE90(&v69, (__int64)"Message Id #%d", v15);
			v39 = &v69;
		}
		v72 = 0x141DEBFB0i64;
		sub_1401A3130(11, 0, &v72, v15, v39[1], *(_QWORD*)(v17 + 8));
		if (v70)
			sub_14018B900(v70, 0);
		v40 = *(_DWORD*)(a3 + 8);
		if (*(_QWORD*)(a3 + 32))
			++v40;
		v41 = v40 - v71;
		if (v41 && v41 < v11)
			sub_1403370C0((_QWORD*)a3, v11 - v41);
		return 4i64;
	}
	v42 = *(int(__fastcall**)(__int64, _QWORD*, unsigned __int8*))(v17 + 32);
	if (!v42)
	{
		if (qword_140C65828)
		{
			v43 = sub_140335F10(&v69, v15);
		}
		else
		{
			sub_14018EE90(&v69, (__int64)"Message Id #%d", v15);
			v43 = &v69;
		}
		v44 = v43[1];
		v72 = 0x141DEBF40i64;
		sub_1401A3130(11, 0, &v72, v15, v44);
		if (v70)
			sub_14018B900(v70, 0);
		v45 = *(_DWORD*)(a3 + 8);
		if (*(_QWORD*)(a3 + 32))
			++v45;
		v46 = v45 - v71;
		if (v46 && v46 < v11)
			sub_1403370C0((_QWORD*)a3, v11 - v46);
		return 11i64;
	}
	if (v42(a3, a1 + 8, v38) < 0)
	{
		v47 = *(_DWORD*)(a3 + 8);
		if (*(_QWORD*)(a3 + 32))
			++v47;
		v48 = v47 - v71;
		if (v48 && v48 < v11)
			sub_1403370C0((_QWORD*)a3, v11 - v48);
		if (qword_140C65828)
		{
			v49 = sub_140335F10(&v69, v15);
		}
		else
		{
			sub_14018EE90(&v69, (__int64)"Message Id #%d", v15);
			v49 = &v69;
		}
		v50 = v49[1];
		v51 = (_BYTE*)(*(_QWORD*)(a2 + 24) + 200i64);
		if (!*v51)
			sub_140334D90(*(_QWORD*)(a2 + 24) + 144i64);
		LODWORD(v64) = v11;
		LODWORD(v63) = v48;
		v71 = 0x141DEC040i64;
		sub_1401A2E50(0xBu, 0, &v71, v51, v50, v63, v64);
		if (v70)
			sub_14018B900(v70, 0);
		return 8i64;
	}
	switch (v15)
	{
	case 0u:
		v62 = *(unsigned int*)(a2 + 16);
		LOBYTE(v71) = *v38;
		(*(void(__fastcall**)(_QWORD*, __int64, __int64, __int64*))(*a1 + 240i64))(a1, v62, 1i64, &v71);
		return 0i64;
	case 1u:
		sub_140333790((__int64)a1, *(_DWORD*)(a2 + 16), v38);
		return 0i64;
	case 2u:
		return 0i64;
	}
	v52 = (__int64*)a1[15];
	v53 = *(unsigned int*)(a2 + 16);
	v54 = *v52;
	if (*(_DWORD*)(a2 + 32))
	{
		if ((*(int(__fastcall**)(__int64*, _QWORD*, __int64))(v54 + 24))(v52, a1, v53) < 0)
		{
			if (qword_140C65828)
			{
				v59 = sub_140335F10(&v67, v15);
			}
			else
			{
				sub_14018EE90(&v67, (__int64)"Message Id #%d", v15);
				v59 = &v67;
			}
			v60 = v59[1];
			v61 = (_BYTE*)(*(_QWORD*)(a2 + 24) + 200i64);
			if (!*v61)
				sub_140334D90(*(_QWORD*)(a2 + 24) + 144i64);
			v71 = 0x141DEC0D8i64;
			sub_1401A2E50(0xBu, 0, &v71, v61, v60);
			v58 = v68;
			goto LABEL_112;
		}
		return 0i64;
	}
	if ((*(int(__fastcall**)(__int64*, _QWORD*, __int64, _QWORD, unsigned __int8*))(v54 + 16))(
		v52,
		a1,
		v53,
		v15,
		v38) >= 0)
		return 0i64;
	if (qword_140C65828)
	{
		v55 = sub_140335F10(&v69, v15);
	}
	else
	{
		sub_14018EE90(&v69, (__int64)"Message Id #%d", v15);
		v55 = &v69;
	}
	v56 = v55[1];
	v57 = (_BYTE*)(*(_QWORD*)(a2 + 24) + 200i64);
	if (!*v57)
		sub_140334D90(*(_QWORD*)(a2 + 24) + 144i64);
	v71 = 0x141DEC018i64;
	sub_1401A2E50(0xBu, 0, &v71, v57, v56);
	v58 = v70;
LABEL_112:
	if (v58)
		sub_14018B900(v58, 0);
	return 14i64;
}
// 140331FD3: variable 'v63' is possibly undefined
// 140331FD3: variable 'v64' is possibly undefined
// 140C65828: using guessed type __int64 qword_140C65828;

