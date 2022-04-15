#include "../winhttp.h"

//----- (0000000140657E40) ----------------------------------------------------
__int64 __fastcall sub_140657E40(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	_QWORD* v5; // rsi
	unsigned int v6; // edx
	__int64 v7; // r14
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // eax
	__int64 v13; // rcx
	int v14; // r13d
	unsigned __int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // eax
	__int64 v19; // rcx
	__int64 v20; // rbx
	BOOL v21; // ebx
	_QWORD* v22; // rax
	__int64 v23; // rcx
	unsigned __int64* v24; // rdx
	unsigned __int64 v25; // r8
	BOOL* v26; // rcx
	__int64* v27; // rax
	__int64 v28; // rbx
	_QWORD* v29; // rax
	unsigned int v30; // r11d
	__int64 v31; // rcx
	unsigned __int64 v32; // rax
	__int64 v33; // r15
	__int64 v34; // rbx
	__int64 v35; // rax
	int v36; // eax
	__int64 v37; // rcx
	int v38; // ebx
	unsigned __int64 v39; // r12
	__int64 v40; // r15
	__int64 v41; // rbx
	__int64 v42; // rax
	int v43; // ebx
	_QWORD* v44; // rax
	__int64 v45; // rcx
	__int64 v46; // rdx
	unsigned __int16* v47; // r11
	int v48; // r13d
	_QWORD* v49; // rax
	__int64 v50; // r11
	unsigned __int64* v51; // rdx
	unsigned __int64 v52; // r8
	__int64 v53; // rax
	__int64* v54; // rax
	__int64 v55; // rdx
	_QWORD* v56; // rax
	__int64 v57; // rdx
	__int64(__fastcall * *v59)(); // [rsp+20h] [rbp-49h] BYREF
	int v60; // [rsp+28h] [rbp-41h]
	_QWORD* v61; // [rsp+30h] [rbp-39h]
	int v62; // [rsp+38h] [rbp-31h]
	__int64(__fastcall * *v63)(); // [rsp+40h] [rbp-29h] BYREF
	__int64 v64; // [rsp+48h] [rbp-21h]
	_QWORD* v65; // [rsp+50h] [rbp-19h]
	int v66; // [rsp+58h] [rbp-11h]
	__int64(__fastcall * *v67)(); // [rsp+60h] [rbp-9h] BYREF
	int v68; // [rsp+68h] [rbp-1h]
	_QWORD* v69; // [rsp+70h] [rbp+7h]
	int v70; // [rsp+78h] [rbp+Fh]
	__int64 v71; // [rsp+80h] [rbp+17h] BYREF
	__int64 v72; // [rsp+88h] [rbp+1Fh]

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2), (v5 = (_QWORD*)v3) == 0i64))
		sub_140056570(a1, 1u, "invalid unit");
	v6 = *(_DWORD*)(v3 + 14120);
	if (v6 && (v7 = sub_140432A10(v4, v6)) != 0)
	{
		v8 = a1[4];
		v9 = *(_QWORD*)(v8 + 112);
		v69 = a1;
		v70 = 1;
		v67 = off_140B569F0;
		if (*(_QWORD*)(v8 + 120) >= v9)
			sub_14005E2C0((__int64)a1);
		v10 = a1[2];
		v11 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v10 + 8) = 5;
		*(_QWORD*)v10 = v11;
		a1[2] += 16i64;
		v12 = sub_1400578C0((__int64)a1);
		v13 = a1[4];
		v14 = v12;
		v68 = v12;
		v15 = *(_QWORD*)(v13 + 112);
		v59 = off_140B569F0;
		v61 = a1;
		v62 = 1;
		if (*(_QWORD*)(v13 + 120) >= v15)
			sub_14005E2C0((__int64)a1);
		v16 = a1[2];
		v17 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v16 + 8) = 5;
		*(_QWORD*)v16 = v17;
		a1[2] += 16i64;
		v18 = sub_1400578C0((__int64)a1);
		v19 = v5[1763];
		v20 = v5[1762];
		v60 = v18;
		if (((v19 - v20) & 0xFFFFFFFFFFFFFFE0ui64) != 0 && v20 != v19)
		{
			do
			{
				sub_1400FAD30((__int64)&v59);
				v20 += 32i64;
			} while (v20 != v5[1763]);
		}
		sub_1400FB2A0((__int64)&v67, (__int64)L"arOwnerNames", v60);
		v21 = *(_DWORD*)(*(_QWORD*)(v7 + 24) + 32i64) == -1;
		v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v14);
		v23 = a1[2];
		*(_QWORD*)v23 = *v22;
		*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
		a1[2] += 16i64;
		v24 = (unsigned __int64*)sub_14018F0E0(&v63, L"bIsInfiniteDuration")[1];
		if (v24)
		{
			v25 = -1i64;
			do
				++v25;
			while (*((_BYTE*)v24 + v25));
			sub_140058710((__int64)a1, v24, v25);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v64)
			sub_14018B900(v64, 0);
		v26 = (BOOL*)a1[2];
		v26[2] = 1;
		*v26 = v21;
		a1[2] += 16i64;
		v27 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v27, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v28 = a1[2];
		v29 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v14);
		*(_QWORD*)v28 = *v29;
		*(_DWORD*)(v28 + 8) = *((_DWORD*)v29 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v30 / 0x3E8, L"nRemainingTime", v30 / 0x3E8);
		a1[2] -= 16i64;
		v31 = a1[4];
		v32 = *(_QWORD*)(v31 + 112);
		v63 = off_140B569F0;
		v65 = a1;
		v33 = (__int64)a1;
		v66 = 1;
		if (*(_QWORD*)(v31 + 120) >= v32)
			sub_14005E2C0((__int64)a1);
		v34 = a1[2];
		v35 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v34 + 8) = 5;
		*(_QWORD*)v34 = v35;
		a1[2] += 16i64;
		v36 = sub_1400578C0((__int64)a1);
		v37 = v5[1768];
		v38 = v36;
		LODWORD(v64) = v36;
		v39 = 0i64;
		if ((v37 - v5[1767]) / 40)
		{
			v40 = 0i64;
			do
			{
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v41 = a1[2];
				v42 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v41 + 8) = 5;
				*(_QWORD*)v41 = v42;
				a1[2] += 16i64;
				v43 = sub_1400578C0((__int64)a1);
				v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v43);
				v45 = a1[2];
				*(_QWORD*)v45 = *v44;
				*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
				a1[2] += 16i64;
				sub_1400F0870((__int64)a1, v46, L"strName", v47);
				a1[2] -= 16i64;
				v48 = *(_DWORD*)(v5[1767] + v40) + 1;
				v49 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v43);
				*(_QWORD*)v50 = *v49;
				*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
				a1[2] += 16i64;
				v51 = (unsigned __int64*)sub_14018F0E0(&v71, L"nTier")[1];
				if (v51)
				{
					v52 = -1i64;
					do
						++v52;
					while (*((_BYTE*)v51 + v52));
					sub_140058710((__int64)a1, v51, v52);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v72)
					sub_14018B900(v72, 0);
				v53 = a1[2];
				*(_DWORD*)(v53 + 8) = 3;
				*(double*)v53 = (double)v48;
				a1[2] += 16i64;
				v54 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v54, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				sub_1400FB1D0((__int64)&v63);
				sub_1400579E0((__int64)a1, v55, v43);
				++v39;
				v40 += 40i64;
			} while (v39 < (v5[1768] - v5[1767]) / 40i64);
			v33 = (__int64)v65;
			v38 = v64;
			v14 = v68;
		}
		sub_1400FB2A0((__int64)&v67, (__int64)L"arTiers", v38);
		v56 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v14);
		v57 = a1[2];
		*(_QWORD*)v57 = *v56;
		*(_DWORD*)(v57 + 8) = *((_DWORD*)v56 + 2);
		a1[2] += 16i64;
		if (v33)
			sub_1400579E0(v33, v57, v38);
		if (v61)
			sub_1400579E0((__int64)v61, v57, v60);
		sub_1400579E0((__int64)a1, v57, v14);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140657E90: variable 'v4' is possibly undefined
// 1406580E3: variable 'v30' is possibly undefined
// 140658204: variable 'v46' is possibly undefined
// 140658204: variable 'v47' is possibly undefined
// 140658243: variable 'v50' is possibly undefined
// 1406582EC: variable 'v55' is possibly undefined
// 1406583A9: variable 'v57' is possibly undefined
// 140B2CE08: using guessed type wchar_t aArtiers[8];
// 140B2CE28: using guessed type wchar_t aStrname_44[8];
// 140B2CE38: using guessed type wchar_t aNtier_3[6];
// 140B2CE48: using guessed type wchar_t aBisinfinitedur[20];
// 140B2CE70: using guessed type wchar_t aNremainingtime[15];
// 140B2CEA0: using guessed type wchar_t aArownernames[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

