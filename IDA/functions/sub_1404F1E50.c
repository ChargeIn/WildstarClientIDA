#include "../winhttp.h"

//----- (00000001404F1E50) ----------------------------------------------------
__int64 __fastcall sub_1404F1E50(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // ebx
	unsigned __int64 v7; // r8
	unsigned __int64 v8; // rdx
	unsigned __int64 v9; // rcx
	_DWORD* v10; // rax
	__int64 v11; // rdx
	unsigned __int64 v13; // rsi
	__int64 v14; // rcx
	unsigned __int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // r13d
	__int64 v19; // r15
	int v20; // r12d
	_QWORD* v21; // rax
	__int64 v22; // rdx
	unsigned __int64* v23; // r14
	unsigned __int64 v24; // rsi
	__int64 v25; // rbx
	__int64 v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64* v29; // rax
	int v30; // r8d
	int v31; // r15d
	_QWORD* v32; // rax
	__int64 v33; // rdx
	unsigned __int64* v34; // r14
	unsigned __int64 v35; // rsi
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64 v38; // rcx
	__int64 v39; // rax
	__int64* v40; // rax
	__int64 v41; // rdx
	_QWORD* v42; // rax
	__int64 v43; // rax
	__int64 v44; // [rsp+40h] [rbp-59h] BYREF
	unsigned __int64 v45; // [rsp+48h] [rbp-51h]
	unsigned __int64 v46; // [rsp+50h] [rbp-49h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp-41h] BYREF
	__int64(__fastcall * *v48)(); // [rsp+60h] [rbp-39h] BYREF
	int v49; // [rsp+68h] [rbp-31h]
	__int64 v50; // [rsp+70h] [rbp-29h]
	int v51; // [rsp+78h] [rbp-21h]
	__int64(__fastcall * *v52)(); // [rsp+80h] [rbp-19h] BYREF
	int v53; // [rsp+88h] [rbp-11h]
	__int64 v54; // [rsp+90h] [rbp-9h]
	int v55; // [rsp+98h] [rbp-1h]
	__int64 v56; // [rsp+A0h] [rbp+7h] BYREF
	__int64 v57; // [rsp+A8h] [rbp+Fh]

	v1 = a1;
	v50 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD*)(v2 + 112);
	v51 = 1;
	v48 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0(v1);
	v4 = *(_QWORD*)(v1 + 16);
	v5 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v1 + 16) += 16i64;
	v6 = sub_1400578C0(v1);
	v7 = *(_QWORD*)(qword_140C65908 + 80);
	v49 = v6;
	v8 = 0i64;
	if (!v7)
		goto LABEL_9;
	while (1)
	{
		v9 = v8 + ((v7 - v8) >> 1);
		v10 = *(_DWORD**)(*(_QWORD*)(qword_140C65908 + 72) + 8 * v9);
		if (*v10 > 0xD8u)
		{
			v7 = v8 + ((v7 - v8) >> 1);
			goto LABEL_8;
		}
		if (*v10 >= 0xD8u)
			break;
		v8 = v9 + 1;
	LABEL_8:
		if (v8 >= v7)
			goto LABEL_9;
	}
	if (!v10)
	{
	LABEL_9:
		v11 = *(_QWORD*)(v1 + 16);
		*(_DWORD*)(v11 + 8) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
		goto LABEL_10;
	}
	v45 = 0i64;
	v44 = 0i64;
	sub_1403D86E0(&v44, (__int64)(v10 + 8));
	v13 = 0i64;
	v46 = 0i64;
	if (v45)
	{
		do
		{
			v14 = *(_QWORD*)(v1 + 32);
			v52 = off_140B569F0;
			v54 = v1;
			v15 = *(_QWORD*)(v14 + 112);
			v55 = 1;
			if (*(_QWORD*)(v14 + 120) >= v15)
				sub_14005E2C0(v1);
			v16 = *(_QWORD*)(v1 + 16);
			v17 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v16 + 8) = 5;
			*(_QWORD*)v16 = v17;
			*(_QWORD*)(v1 + 16) += 16i64;
			v18 = sub_1400578C0(v1);
			v53 = v18;
			v19 = **(_QWORD**)(*(_QWORD*)(v44 + 8 * v13) + 64i64);
			v20 = *(_DWORD*)v19;
			v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v18);
			v22 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v22 = *v21;
			*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
			v23 = (unsigned __int64*)sub_14018F0E0(&v56, L"nId")[1];
			if (v23)
			{
				v24 = -1i64;
				do
					++v24;
				while (*((_BYTE*)v23 + v24));
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v25 = *(_QWORD*)(v1 + 16);
				v26 = sub_140062650(v1, v23, v24);
				*(_DWORD*)(v25 + 8) = 4;
				*(_QWORD*)v25 = v26;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			}
			v27 = v57;
			*(_QWORD*)(v1 + 16) += 16i64;
			if (v27)
				sub_14018B900(v27, 0);
			v28 = *(_QWORD*)(v1 + 16);
			*(_DWORD*)(v28 + 8) = 3;
			*(double*)v28 = (double)v20;
			*(_QWORD*)(v1 + 16) += 16i64;
			v29 = (__int64*)sub_1400580E0(v1, -3);
			sub_14005EA50(v1, v29, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
			*(_QWORD*)(v1 + 16) -= 48i64;
			GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
			v30 = 7;
			if (*(_DWORD*)(qword_140C635F0 + 5896))
				v30 = 19;
			if (*(float*)(v19 + 24) != 0.0)
				sub_1404ED2D0(v19, 0, v30, *(_QWORD*)&SystemTimeAsFileTime, (__int64)&v52, (__int64)L"tPrice", 0);
			v31 = *(_DWORD*)(*(_QWORD*)(v19 + 8) + 12i64);
			v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v18);
			v33 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v33 = *v32;
			*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
			v34 = (unsigned __int64*)sub_14018F0E0(&v56, L"nCount")[1];
			if (v34)
			{
				v35 = -1i64;
				do
					++v35;
				while (*((_BYTE*)v34 + v35));
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v36 = *(_QWORD*)(v1 + 16);
				v37 = sub_140062650(v1, v34, v35);
				*(_DWORD*)(v36 + 8) = 4;
				*(_QWORD*)v36 = v37;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			}
			v38 = v57;
			*(_QWORD*)(v1 + 16) += 16i64;
			if (v38)
				sub_14018B900(v38, 0);
			v39 = *(_QWORD*)(v1 + 16);
			*(_DWORD*)(v39 + 8) = 3;
			*(double*)v39 = (double)v31;
			*(_QWORD*)(v1 + 16) += 16i64;
			v40 = (__int64*)sub_1400580E0(v1, -3);
			sub_14005EA50(v1, v40, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
			*(_QWORD*)(v1 + 16) -= 48i64;
			sub_1400FB1D0((__int64)&v48);
			sub_1400579E0(v1, v41, v18);
			v13 = v46 + 1;
			v46 = v13;
		} while (v13 < v45);
		v1 = v50;
		v6 = v49;
	}
	v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v6);
	v11 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v11 = *v42;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v42 + 2);
	v43 = v44;
	*(_QWORD*)(v1 + 16) += 16i64;
	if (v43)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v43 - 16) + 8i64))(v43 - 16);
LABEL_10:
	sub_1400579E0(v1, v11, v6);
	return 1i64;
}
// 1404F1F1F: variable 'v11' is possibly undefined
// 1404F2239: variable 'v41' is possibly undefined
// 140B0DE80: using guessed type wchar_t aNid_16[4];
// 140B0E038: using guessed type wchar_t aTprice[7];
// 140B0E048: using guessed type wchar_t aNcount_20[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65908: using guessed type __int64 qword_140C65908;

