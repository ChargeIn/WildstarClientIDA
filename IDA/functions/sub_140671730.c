#include "../winhttp.h"

//----- (0000000140671730) ----------------------------------------------------
void __fastcall sub_140671730(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rbx
	__int64 v5; // rax
	int v6; // r14d
	_QWORD* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rdx
	__int64 v10; // rdi
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	_DWORD* v13; // rcx
	__int64* v14; // rax
	__int64 v15; // rax
	int v16; // r14d
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	__int64 v20; // rdi
	unsigned __int64* v21; // rdx
	unsigned __int64 v22; // r8
	_DWORD* v23; // rcx
	__int64* v24; // rax
	__int64 v25; // rax
	float v26; // xmm6_4
	_QWORD* v27; // rax
	__int64 v28; // r10
	__int64 v29; // rdx
	__int64 v30; // rdi
	unsigned __int64* v31; // rdx
	unsigned __int64 v32; // r8
	__int64 v33; // rax
	__int64* v34; // rax
	__int64 v35; // rdi
	int v36; // esi
	_QWORD* v37; // rax
	__int64 v38; // r10
	__int64 v39; // rdx
	__int64 v40; // rdi
	unsigned __int64* v41; // rdx
	__int64 v42; // rcx
	__int64* v43; // rax
	__int64 v44; // [rsp+20h] [rbp-48h] BYREF
	__int64 v45; // [rsp+28h] [rbp-40h]

	v2 = -1i64;
	if (*(_DWORD*)(a1 + 1344))
	{
		v5 = *(_QWORD*)(a1 + 168);
		if (v5)
		{
			v6 = *(_DWORD*)(v5 + 332) & 0x40;
			v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v9 = *(_QWORD*)(v8 + 16);
			*(_QWORD*)v9 = *v7;
			*(_DWORD*)(v9 + 8) = *((_DWORD*)v7 + 2);
			*(_QWORD*)(v8 + 16) += 16i64;
			v10 = *(_QWORD*)(a2 + 16);
			v11 = (unsigned __int64*)sub_14018F0E0(&v44, L"bDestroyOnLogout")[1];
			if (v11)
			{
				v12 = -1i64;
				do
					++v12;
				while (*((_BYTE*)v11 + v12));
				sub_140058710(v10, v11, v12);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v10 + 16) + 8i64) = 0;
				*(_QWORD*)(v10 + 16) += 16i64;
			}
			if (v45)
				sub_14018B900(v45, 0);
			v13 = *(_DWORD**)(v10 + 16);
			v13[2] = 1;
			*v13 = v6 != 0;
			*(_QWORD*)(v10 + 16) += 16i64;
			v14 = (__int64*)sub_1400580E0(v10, -3);
			sub_14005EA50(v10, v14, (int*)(*(_QWORD*)(v10 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v10 + 16) - 16i64));
			*(_QWORD*)(v10 + 16) -= 32i64;
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
			if (*(_DWORD*)(a1 + 1344))
				v15 = *(_QWORD*)(a1 + 168);
			else
				v15 = 0i64;
			v16 = *(_DWORD*)(v15 + 332) & 0x80;
			v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v19 = *(_QWORD*)(v18 + 16);
			*(_QWORD*)v19 = *v17;
			*(_DWORD*)(v19 + 8) = *((_DWORD*)v17 + 2);
			*(_QWORD*)(v18 + 16) += 16i64;
			v20 = *(_QWORD*)(a2 + 16);
			v21 = (unsigned __int64*)sub_14018F0E0(&v44, L"bDestroyOnZone")[1];
			if (v21)
			{
				v22 = -1i64;
				do
					++v22;
				while (*((_BYTE*)v21 + v22));
				sub_140058710(v20, v21, v22);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v20 + 16) + 8i64) = 0;
				*(_QWORD*)(v20 + 16) += 16i64;
			}
			if (v45)
				sub_14018B900(v45, 0);
			v23 = *(_DWORD**)(v20 + 16);
			v23[2] = 1;
			*v23 = v16 != 0;
			*(_QWORD*)(v20 + 16) += 16i64;
			v24 = (__int64*)sub_1400580E0(v20, -3);
			sub_14005EA50(v20, v24, (int*)(*(_QWORD*)(v20 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v20 + 16) - 16i64));
			*(_QWORD*)(v20 + 16) -= 32i64;
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
			if (*(_DWORD*)(a1 + 1344))
				v25 = *(_QWORD*)(a1 + 168);
			else
				v25 = 0i64;
			v26 = (float)*(int*)(v25 + 424) * 60.0;
			v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v29 = *(_QWORD*)(v28 + 16);
			*(_QWORD*)v29 = *v27;
			*(_DWORD*)(v29 + 8) = *((_DWORD*)v27 + 2);
			*(_QWORD*)(v28 + 16) += 16i64;
			v30 = *(_QWORD*)(a2 + 16);
			v31 = (unsigned __int64*)sub_14018F0E0(&v44, L"nExpirationTimeSeconds")[1];
			if (v31)
			{
				v32 = -1i64;
				do
					++v32;
				while (*((_BYTE*)v31 + v32));
				sub_140058710(v30, v31, v32);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v30 + 16) + 8i64) = 0;
				*(_QWORD*)(v30 + 16) += 16i64;
			}
			if (v45)
				sub_14018B900(v45, 0);
			v33 = *(_QWORD*)(v30 + 16);
			*(_DWORD*)(v33 + 8) = 3;
			*(double*)v33 = v26;
			*(_QWORD*)(v30 + 16) += 16i64;
			v34 = (__int64*)sub_1400580E0(v30, -3);
			sub_14005EA50(v30, v34, (int*)(*(_QWORD*)(v30 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v30 + 16) - 16i64));
			*(_QWORD*)(v30 + 16) -= 32i64;
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
	}
	v35 = *(_QWORD*)(a1 + 160);
	if (v35)
	{
		if ((int)(*(_DWORD*)(v35 + 288) - sub_14018CDF0()) <= 0)
			v36 = 0;
		else
			v36 = *(_DWORD*)(v35 + 288) - sub_14018CDF0();
		v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v39 = *(_QWORD*)(v38 + 16);
		*(_QWORD*)v39 = *v37;
		*(_DWORD*)(v39 + 8) = *((_DWORD*)v37 + 2);
		*(_QWORD*)(v38 + 16) += 16i64;
		v40 = *(_QWORD*)(a2 + 16);
		v41 = (unsigned __int64*)sub_14018F0E0(&v44, L"nExpiresInTimeSeconds")[1];
		if (v41)
		{
			do
				++v2;
			while (*((_BYTE*)v41 + v2));
			sub_140058710(v40, v41, v2);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v40 + 16) + 8i64) = 0;
			*(_QWORD*)(v40 + 16) += 16i64;
		}
		if (v45)
			sub_14018B900(v45, 0);
		v42 = *(_QWORD*)(v40 + 16);
		*(_DWORD*)(v42 + 8) = 3;
		*(double*)v42 = (float)((float)v36 * 0.001);
		*(_QWORD*)(v40 + 16) += 16i64;
		v43 = (__int64*)sub_1400580E0(v40, -3);
		sub_14005EA50(v40, v43, (int*)(*(_QWORD*)(v40 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v40 + 16) - 16i64));
		*(_QWORD*)(v40 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
}
// 140671798: variable 'v8' is possibly undefined
// 140671889: variable 'v18' is possibly undefined
// 140671986: variable 'v28' is possibly undefined
// 140671A8E: variable 'v38' is possibly undefined
// 140B2F958: using guessed type wchar_t aNexpiresintime[22];
// 140B2F9A0: using guessed type wchar_t aBdestroyonzone[15];
// 140B2F9C0: using guessed type wchar_t aNexpirationtim[23];
// 140B2FA18: using guessed type wchar_t aBdestroyonlogo[17];

