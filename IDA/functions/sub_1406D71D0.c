#include "../winhttp.h"

//----- (00000001406D71D0) ----------------------------------------------------
__int64 __fastcall sub_1406D71D0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rdx
	__int64 v4; // rbp
	unsigned __int64 v5; // rdx
	_DWORD* v6; // rcx
	__int64 v7; // rdx
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	__int64 v11; // rbx
	int v12; // r14d
	__int64 v13; // r9
	unsigned int v14; // ecx
	unsigned __int64 v15; // rdx
	__int64 v16; // r8
	__int64 v17; // rax
	__int64 v18; // rax
	unsigned int v19; // ecx
	unsigned __int64 v20; // r8
	__int64 v21; // rdx
	__int64 v22; // rax
	__int64 v23; // rcx
	_QWORD* v24; // rax
	_DWORD* v25; // rax
	__int64 v26; // rcx
	const char* v27; // r9
	const char* v28; // rax
	__int64(__fastcall * *v29)(); // [rsp+20h] [rbp-38h] BYREF
	int v30; // [rsp+28h] [rbp-30h]
	_QWORD* v31; // [rsp+30h] [rbp-28h]

	result = sub_1406D5FA0(a1);
	v4 = result;
	if (result)
	{
		v31 = a1;
		v29 = off_140B56A08;
		v30 = -2;
		sub_1400579E0((__int64)a1, v3, -2);
		v5 = a1[2];
		v6 = dword_140A12138;
		if (a1[3] + 16i64 < v5)
			v6 = (_DWORD*)(v31[3] + 16i64);
		*(_QWORD*)v5 = *(_QWORD*)v6;
		*(_DWORD*)(v5 + 8) = v6[2];
		a1[2] += 16i64;
		v30 = sub_1400578C0((__int64)v31);
		if ((__int64(__fastcall***)())(v4 + 2056) != &v29)
		{
			*(_QWORD*)(v4 + 2072) = v31;
			if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v29[1])(&v29))
			{
				sub_1400579E0(*(_QWORD*)(v4 + 2072), v7, *(_DWORD*)(v4 + 2064));
				v8 = sub_14005C3C0(*(_QWORD*)(v31[4] + 160i64), v30);
				v10 = *(_QWORD*)(v9 + 16);
				*(_QWORD*)v10 = *v8;
				*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
				*(_QWORD*)(v9 + 16) += 16i64;
				*(_DWORD*)(v4 + 2064) = sub_1400578C0(*(_QWORD*)(v4 + 2072));
			}
		}
		v29 = off_140B56A08;
		if (v31)
			sub_1400579E0((__int64)v31, v7, v30);
		v11 = 0i64;
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(v4 + 2056) + 8i64))(v4 + 2056)
			&& *(_QWORD*)(v4 + 2072)
			&& (unsigned int)sub_1400F9ED0(v4 + 2056) == 6)
		{
			v12 = 1;
		}
		else
		{
			v12 = 0;
			if (*(_QWORD*)(v4 + 2072) && (int)sub_1400F9ED0(v4 + 2056) > 0)
			{
				v25 = (_DWORD*)(a1[3] + 16i64);
				if ((unsigned __int64)v25 >= a1[2]
					|| v25 == dword_140A12138
					|| (v26 = *(int*)(a1[3] + 24i64), (_DWORD)v26 == -1))
				{
					v27 = aNoValue;
				}
				else
				{
					v27 = off_140A123B0[v26];
				}
				v28 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aFunction_3, v27);
				sub_140056570(a1, 2u, v28);
			}
		}
		*(_QWORD*)(v4 + 2040) = 0i64;
		*(_QWORD*)(v4 + 2048) = 0i64;
		if (v12)
		{
			v13 = qword_140C63650;
			v14 = 0;
			v15 = *(_QWORD*)(qword_140C63650 + 768);
			if (v15)
			{
				v16 = *(_QWORD*)(qword_140C63650 + 760);
				v17 = 0i64;
				while (*(_QWORD*)(*(_QWORD*)(v16 + 8 * v17) + 400i64) != *(_QWORD*)(v4 + 2072))
				{
					v17 = ++v14;
					if (v14 >= v15)
						goto LABEL_18;
				}
				v18 = *(_QWORD*)(v16 + 8i64 * v14);
			}
			else
			{
			LABEL_18:
				v18 = 0i64;
			}
			v19 = 0;
			*(_QWORD*)(v4 + 2040) = v18 + 384;
			v20 = *(_QWORD*)(v13 + 768);
			if (v20)
			{
				v21 = *(_QWORD*)(v13 + 760);
				v22 = 0i64;
				while (*(_QWORD**)(*(_QWORD*)(v21 + 8 * v22) + 400i64) != a1)
				{
					v22 = ++v19;
					if (v19 >= v20)
						goto LABEL_23;
				}
				v23 = *(_QWORD*)(v21 + 8i64 * v19);
			}
			else
			{
			LABEL_23:
				v23 = 0i64;
			}
			v24 = *(_QWORD**)(v23 + 2480);
			if ((_QWORD*)*v24 != v24)
				v11 = *(_QWORD*)(v24[1] + 16i64);
			*(_QWORD*)(v4 + 2048) = v11;
			*(_DWORD*)(v4 + 2080) = 1;
		}
		return 0i64;
	}
	return result;
}
// 1406D721F: variable 'v3' is possibly undefined
// 1406D7298: variable 'v7' is possibly undefined
// 1406D72B6: variable 'v9' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C63650: using guessed type __int64 qword_140C63650;

