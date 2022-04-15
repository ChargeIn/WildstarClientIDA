#include "../winhttp.h"

//----- (000000014052FEB0) ----------------------------------------------------
__int64 __fastcall sub_14052FEB0(_QWORD* a1)
{
	_QWORD* v1; // rsi
	__int64 result; // rax
	__int64 v3; // rbx
	_DWORD* v4; // rax
	unsigned int v5; // edx
	__int64 v6; // r8
	unsigned __int64 v7; // rbp
	__int64 v8; // rax
	__int64 v9; // r14
	__int64 v10; // rcx
	__int64 v11; // rcx
	unsigned __int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // r15d
	__int64* v16; // rbx
	__int64 v17; // rdi
	unsigned int v18; // eax
	_QWORD* v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rcx
	unsigned __int64 v22; // rax
	__int64 v23; // rbx
	__int64 v24; // rax
	int v25; // eax
	__int64 v26; // rdx
	__int64 v27; // rcx
	int v28; // ebx
	__int64 v29; // rcx
	_QWORD* v30; // rax
	__int64 v31; // r8
	__int64(__fastcall * *v32)(); // [rsp+20h] [rbp-68h] BYREF
	int v33; // [rsp+28h] [rbp-60h]
	_QWORD* v34; // [rsp+30h] [rbp-58h]
	int v35; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v36)(); // [rsp+40h] [rbp-48h] BYREF
	int v37; // [rsp+48h] [rbp-40h]
	_QWORD* v38; // [rsp+50h] [rbp-38h]
	int v39; // [rsp+58h] [rbp-30h]
	__int64 v40; // [rsp+98h] [rbp+10h]

	v1 = a1;
	result = sub_14052E9B0(a1);
	v3 = result;
	if (!result)
		return result;
	v4 = (_DWORD*)(v1[3] + 16i64);
	if ((unsigned __int64)v4 >= v1[2] || v4 == dword_140A12138 || *(int*)(v1[3] + 24i64) <= 0)
		v5 = -1;
	else
		v5 = sub_140056D60(v1, 2u);
	v6 = *(_QWORD*)(v3 + 1168);
	v7 = 0i64;
	v8 = *(_QWORD*)(v6 + 8);
	v9 = 0i64;
	v10 = v6;
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < v5)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v10 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v10 == v6 || (v40 = v10, v5 < *(_DWORD*)(v10 + 32)))
		v40 = *(_QWORD*)(v3 + 1168);
	if (v40 != v6)
		v9 = *(_QWORD*)(v40 + 40);
	v11 = v1[4];
	v34 = v1;
	v12 = *(_QWORD*)(v11 + 112);
	v32 = off_140B569F0;
	v35 = 1;
	if (*(_QWORD*)(v11 + 120) >= v12)
		sub_14005E2C0((__int64)v1);
	v13 = v1[2];
	v14 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v13 + 8) = 5;
	*(_QWORD*)v13 = v14;
	v1[2] += 16i64;
	v15 = sub_1400578C0((__int64)v1);
	v33 = v15;
	if (!v9)
		goto LABEL_32;
	if (((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v9 + 8) + 48i64))(*(_QWORD*)(v9 + 8)) & 1) == 0
		|| (v16 = *(__int64**)(v9 + 8),
			v17 = *v16,
			v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72),
			(*(unsigned int(__fastcall**)(__int64*, _QWORD))(v17 + 64))(v16, v18)))
	{
		if (((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v9 + 8) + 48i64))(*(_QWORD*)(v9 + 8)) & 4) != 0)
		{
			if (*(_QWORD*)(v9 + 24))
			{
				do
				{
					v21 = v1[4];
					v36 = off_140B569F0;
					v38 = v1;
					v22 = *(_QWORD*)(v21 + 112);
					v39 = 1;
					if (*(_QWORD*)(v21 + 120) >= v22)
						sub_14005E2C0((__int64)v1);
					v23 = v1[2];
					v24 = sub_14005C1B0((__int64)v1, 0, 0);
					*(_DWORD*)(v23 + 8) = 5;
					*(_QWORD*)v23 = v24;
					v1[2] += 16i64;
					v25 = sub_1400578C0((__int64)v1);
					v27 = *(_QWORD*)(v9 + 16);
					v28 = v25;
					v37 = v25;
					v29 = *(_QWORD*)(v27 + 8 * v7);
					if (v29 && (int)sub_14052ED60(v29, (__int64)&v36) >= 0)
						sub_1400FB1D0((__int64)&v32);
					sub_1400579E0((__int64)v1, v26, v28);
					++v7;
				} while (v7 < *(_QWORD*)(v9 + 24));
				v1 = v34;
				v15 = v33;
			}
		LABEL_32:
			v30 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v15);
			v31 = v1[2];
			*(_QWORD*)v31 = *v30;
			v20 = *((unsigned int*)v30 + 2);
			*(_DWORD*)(v31 + 8) = v20;
			goto LABEL_33;
		}
	}
	v19 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v15);
	v20 = v1[2];
	*(_QWORD*)v20 = *v19;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
LABEL_33:
	v1[2] += 16i64;
	if (v1)
		sub_1400579E0((__int64)v1, v20, v15);
	return 1i64;
}
// 1405300E3: variable 'v26' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

