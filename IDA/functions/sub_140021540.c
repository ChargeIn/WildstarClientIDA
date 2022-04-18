#include "../winhttp.h"

//----- (0000000140021540) ----------------------------------------------------
__int64 __fastcall sub_140021540(__int64 a1, __int64* a2)
{
	__int64 v2; // rbx
	__int64 v5; // rbx
	__int64 v6; // r8
	int* v7; // rdx
	int v8; // ecx
	int v9; // ecx
	_QWORD* v10; // r12
	unsigned __int64 v11; // rbx
	__int64 v12; // rdi
	__int64 v13; // rcx
	int v14; // eax
	__int64 v15; // rdi
	__int64 v16; // rcx
	__int64 v17; // rsi
	unsigned __int64 v18; // rax
	__int64 v19; // rbx
	__int64 v20; // rax
	int dwLowDateTime; // r13d
	int v22; // ebp
	__int64 v23; // rsi
	__int64 v24; // rbp
	__int64 v25; // rcx
	unsigned __int64 v26; // rax
	__int64 v27; // rbx
	__int64 v28; // rax
	int v29; // eax
	__int64 v30; // rcx
	int v31; // r13d
	__int64 v32; // r9
	_DWORD* v33; // rdx
	__int64 v34; // rcx
	unsigned __int64* v35; // rbp
	unsigned __int64 v36; // rsi
	__int64 v37; // rbx
	__int64 v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rax
	int v41; // ebx
	int v42; // ebx
	__int64* v43; // rax
	__int64 v44; // rbp
	__int64 v45; // rcx
	unsigned int v46; // eax
	__int64 v47; // rdx
	unsigned __int64 v48; // rax
	__int64 v49; // rbx
	__int64 v50; // rax
	int v51; // eax
	int v52; // ebx
	_QWORD* v53; // rax
	__int64 v54; // rdx
	int v55; // r10d
	_QWORD* v56; // rax
	__int64 v57; // r10
	__int64 v58; // rdx
	__int64 v59; // rdx
	__int64 v60; // rdx
	__int64 v62; // [rsp+40h] [rbp-C8h]
	__int64(__fastcall * *v63)(); // [rsp+48h] [rbp-C0h] BYREF
	int v64; // [rsp+50h] [rbp-B8h]
	__int64 v65; // [rsp+58h] [rbp-B0h]
	int v66; // [rsp+60h] [rbp-A8h]
	__int64(__fastcall * *v67)(); // [rsp+68h] [rbp-A0h] BYREF
	int v68; // [rsp+70h] [rbp-98h]
	__int64 v69; // [rsp+78h] [rbp-90h]
	int v70; // [rsp+80h] [rbp-88h]
	_QWORD v71[5]; // [rsp+88h] [rbp-80h] BYREF
	struct _FILETIME v72; // [rsp+110h] [rbp+8h] BYREF
	unsigned __int64 v73; // [rsp+118h] [rbp+10h]
	double v74; // [rsp+120h] [rbp+18h]
	__int64 v75; // [rsp+128h] [rbp+20h]

	*(_DWORD*)(a1 + 360) = 1;
	v2 = *a2;
	GetSystemTimeAsFileTime(&v72);
	v5 = v2 - *(_QWORD*)&v72;
	*(_DWORD*)(a1 + 480) = *((_DWORD*)a2 + 14);
	v6 = *((unsigned int*)a2 + 6);
	v7 = (int*)a2[4];
	qword_140C658B8 = v5;
	sub_1400291A0((__int64*)(a1 + 232), v7, v6);
	sub_140029250((__int64*)(a1 + 232), (__int64)sub_140020710, 0i64);
	sub_1400291A0((__int64*)(a1 + 248), (int*)a2[6], *((unsigned int*)a2 + 10));
	sub_140029250((__int64*)(a1 + 248), (__int64)sub_140020710, 0i64);
	*(_QWORD*)(a1 + 512) = a2[8];
	*(_QWORD*)(a1 + 520) = a2[9];
	v8 = *((_DWORD*)a2 + 20);
	if (v8)
		v9 = dword_140C636A8 + v8;
	else
		v9 = 0;
	v10 = (_QWORD*)(a1 + 264);
	v11 = 0i64;
	*(_DWORD*)(a1 + 528) = v9;
	if (*(_QWORD*)(a1 + 272))
	{
		v12 = 0i64;
		do
		{
			v13 = *(_QWORD*)(v12 + *v10 + 784);
			if (v13)
				sub_14018B900(v13, 0);
			++v11;
			v12 += 816i64;
		} while (v11 < *(_QWORD*)(a1 + 272));
	}
	*(_QWORD*)(a1 + 272) = 0i64;
	sub_1400295B0((__int64*)(a1 + 264), *((unsigned int*)a2 + 2));
	v14 = *((_DWORD*)a2 + 23);
	v66 = 1;
	*(_DWORD*)(a1 + 568) = v14;
	*(_DWORD*)(a1 + 572) = *((_DWORD*)a2 + 24);
	*(_DWORD*)(a1 + 576) = *((_DWORD*)a2 + 25);
	v15 = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 400i64);
	v16 = *(_QWORD*)(v15 + 32);
	v63 = off_140B569F0;
	v17 = v15;
	v18 = *(_QWORD*)(v16 + 112);
	v65 = v15;
	if (*(_QWORD*)(v16 + 120) >= v18)
		sub_14005E2C0(v15);
	v19 = *(_QWORD*)(v15 + 16);
	v20 = sub_14005C1B0(v15, 0, 0);
	*(_DWORD*)(v19 + 8) = 5;
	*(_QWORD*)v19 = v20;
	*(_QWORD*)(v15 + 16) += 16i64;
	dwLowDateTime = 0;
	v22 = sub_1400578C0(v15);
	v64 = v22;
	v72.dwLowDateTime = 0;
	sub_140019C40((__int64*)(qword_140C635F0 + 5960));
	v73 = 0i64;
	if (*((_DWORD*)a2 + 2))
	{
		v23 = 0i64;
		v24 = 0i64;
		v75 = 0i64;
		v62 = 0i64;
		do
		{
			sub_1400201F0(v24 + *v10, v23 + a2[2]);
			v25 = *(_QWORD*)(v15 + 32);
			v67 = off_140B569F0;
			v26 = *(_QWORD*)(v25 + 112);
			v69 = v15;
			v70 = 1;
			if (*(_QWORD*)(v25 + 120) >= v26)
				sub_14005E2C0(v15);
			v27 = *(_QWORD*)(v15 + 16);
			v28 = sub_14005C1B0(v15, 0, 0);
			*(_DWORD*)(v27 + 8) = 5;
			*(_QWORD*)v27 = v28;
			*(_QWORD*)(v15 + 16) += 16i64;
			v29 = sub_1400578C0(v15);
			v30 = *(_QWORD*)(v15 + 32);
			v31 = v29;
			v68 = v29;
			v32 = *(_QWORD*)(v30 + 160);
			if ((unsigned int)(v29 - 1) >= *(_DWORD*)(v32 + 56))
			{
				v74 = (double)v29;
				if ((double)v29 == 0.0)
					v33 = *(_DWORD**)(v32 + 32);
				else
					v33 = (_DWORD*)(*(_QWORD*)(v32 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v74) + HIDWORD(v74)) % (((1i64 << *(_BYTE*)(v32 + 11)) - 1) | 1)));
				while (v33[6] != 3 || (double)v29 != *((double*)v33 + 2))
				{
					v33 = (_DWORD*)*((_QWORD*)v33 + 4);
					if (!v33)
					{
						v33 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v33 = (_DWORD*)(*(_QWORD*)(v32 + 24) + 16i64 * (v29 - 1));
			}
			v34 = *(_QWORD*)(v15 + 16);
			*(_QWORD*)v34 = *(_QWORD*)v33;
			*(_DWORD*)(v34 + 8) = v33[2];
			*(_QWORD*)(v15 + 16) += 16i64;
			v35 = (unsigned __int64*)sub_14018F0E0(v71, L"nIndex")[1];
			if (v35)
			{
				v36 = -1i64;
				do
					++v36;
				while (*((_BYTE*)v35 + v36));
				if (*(_QWORD*)(*(_QWORD*)(v15 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v15 + 32) + 112i64))
					sub_14005E2C0(v15);
				v37 = *(_QWORD*)(v15 + 16);
				v38 = sub_140062650(v15, v35, v36);
				v23 = v62;
				*(_DWORD*)(v37 + 8) = 4;
				*(_QWORD*)v37 = v38;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v15 + 16) + 8i64) = 0;
			}
			v39 = v71[1];
			*(_QWORD*)(v15 + 16) += 16i64;
			if (v39)
				sub_14018B900(v39, 0);
			v40 = *(_QWORD*)(v15 + 16);
			v41 = v73;
			*(_DWORD*)(v40 + 8) = 3;
			v42 = v41 + 1;
			*(double*)v40 = (double)v42;
			*(_QWORD*)(v15 + 16) += 16i64;
			v43 = (__int64*)sub_1400580E0(v15, -3);
			sub_14005EA50(v15, v43, (int*)(*(_QWORD*)(v15 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v15 + 16) - 16i64));
			*(_QWORD*)(v15 + 16) -= 48i64;
			v44 = v75;
			sub_1400235D0((__int64)&v67, v75 + *v10);
			sub_1400FB1D0((__int64)&v63);
			if (*(_DWORD*)(a1 + 512))
			{
				if (*(_QWORD*)(a1 + 520))
				{
					v45 = a2[2];
					if (*(_QWORD*)(v23 + v45) == *(_QWORD*)(a1 + 520))
					{
						v46 = 0x7FFFFFFF;
						v45 = 0x80000000i64;
						if (v42 != 0x7FFFFFFF)
							v46 = v42;
						if (v46 != 0x80000000)
							v45 = v46;
						v72.dwLowDateTime = v45;
					}
				}
			}
			sub_140016B90(v45, *(int**)(v23 + a2[2] + 8));
			sub_1400579E0(v15, v47, v31);
			v48 = *((unsigned int*)a2 + 2);
			v24 = v44 + 816;
			v23 += 160i64;
			++v73;
			v75 = v24;
			v62 = v23;
		} while (v73 < v48);
		v17 = v65;
		v22 = v64;
		dwLowDateTime = v72.dwLowDateTime;
	}
	sub_140021BB0((_QWORD*)a1);
	sub_140021D40(a1);
	*(_DWORD*)(a1 + 536) = *((_DWORD*)a2 + 21);
	if (*(_QWORD*)(*(_QWORD*)(v15 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v15 + 32) + 112i64))
		sub_14005E2C0(v15);
	v49 = *(_QWORD*)(v15 + 16);
	v50 = sub_14005C1B0(v15, 0, 0);
	*(_DWORD*)(v49 + 8) = 5;
	*(_QWORD*)v49 = v50;
	*(_QWORD*)(v15 + 16) += 16i64;
	v51 = sub_1400578C0(v15);
	v52 = v51;
	if (*(_DWORD*)(a1 + 512) && *(_QWORD*)(a1 + 520) && dwLowDateTime > 0)
	{
		v53 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v15 + 32) + 160i64), v51);
		v54 = *(_QWORD*)(v15 + 16);
		*(_QWORD*)v54 = *v53;
		*(_DWORD*)(v54 + 8) = *((_DWORD*)v53 + 2);
		*(_QWORD*)(v15 + 16) += 16i64;
		sub_1400F06F0(v15, v54, L"nCharacterRemoveTime", v55);
		*(_QWORD*)(v15 + 16) -= 16i64;
		v56 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v15 + 32) + 160i64), v52);
		*(_QWORD*)v57 = *v56;
		*(_DWORD*)(v57 + 8) = *((_DWORD*)v56 + 2);
		*(_QWORD*)(v15 + 16) += 16i64;
		sub_1400F06F0(v15, v58, L"nCharacterIndex", dwLowDateTime);
		*(_QWORD*)(v15 + 16) -= 16i64;
	}
	Apollo_LUAEvent(
		*(_QWORD*)(a1 + 72),
		"CharacterList",
		"iTTi",
		*((unsigned int*)a2 + 22),
		v22,
		v52,
		*(_DWORD*)(a1 + 572));
	sub_1400579E0(v15, v59, v52);
	if (v17)
		sub_1400579E0(v17, v60, v22);
	return 0i64;
}
// 1400219B7: variable 'v45' is possibly undefined
// 1400219C2: variable 'v47' is possibly undefined
// 140021ADB: variable 'v55' is possibly undefined
// 140021B08: variable 'v57' is possibly undefined
// 140021B1A: variable 'v58' is possibly undefined
// 140021B58: variable 'v59' is possibly undefined
// 140021B90: variable 'v60' is possibly undefined
// 1409ED668: using guessed type wchar_t aNindex[7];
// 1409ED678: using guessed type wchar_t aNcharacterremo[21];
// 1409ED6A8: using guessed type wchar_t aNcharacterinde[16];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C658B8: using guessed type __int64 qword_140C658B8;

