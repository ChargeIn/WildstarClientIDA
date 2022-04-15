#include "../winhttp.h"

//----- (00000001405721C0) ----------------------------------------------------
__int64 __fastcall sub_1405721C0(__int64 a1)
{
	__int64 v1; // r8
	__int64 v2; // rbp
	__int64 v3; // rax
	unsigned int v4; // edi
	int v5; // edx
	__int64 v6; // rax
	__int64 v7; // rbx
	unsigned int v8; // eax
	__int64 v9; // rcx
	__int64 v10; // rsi
	__int64 v11; // rdi
	__int64 v12; // rax
	__int64 v13; // r9
	__int64 v14; // rcx
	__int64 v15; // r8
	__int64 v16; // rcx
	unsigned int v17; // edx
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rax
	__int64 v21; // rbx
	__int64 v23; // [rsp+40h] [rbp+8h] BYREF
	__int64 v24; // [rsp+48h] [rbp+10h] BYREF

	v23 = a1;
	v1 = qword_140C65898;
	v2 = qword_140C65970;
	v3 = *(_QWORD*)(qword_140C65898 + 25744);
	v4 = *(_DWORD*)(qword_140C65898 + 29008);
	if (v3)
	{
		v5 = *(_DWORD*)(v3 + 264);
		if (v5)
		{
			v6 = sub_1403D90D0(qword_140C65898, v5);
			if (v6)
			{
				v7 = *(_QWORD*)(qword_140C65898 + 120);
				v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				v10 = sub_1403D3950(v9, v8, v7);
				if (v10)
					goto LABEL_7;
			}
			v1 = qword_140C65898;
		}
	}
	v10 = (__int64)sub_1405744F0(a1, v4, *(_QWORD*)(v1 + 120));
	if (!v10)
		return 0i64;
LABEL_7:
	v11 = 0i64;
	if (!*(_QWORD*)(v10 + 120))
		return 0i64;
	while (1)
	{
		v12 = sub_1403D83C0(v2, ***(_DWORD***)(*(_QWORD*)(v10 + 112) + 8 * v11));
		v13 = v12;
		if (v12)
		{
			v14 = *(_QWORD*)(v2 + 88);
			if (v14)
			{
				if (***(_DWORD***)(v14 + 72) == ***(_DWORD***)(v12 + 72))
				{
					v15 = *(_QWORD*)(v12 + 16);
					v16 = v15;
					v17 = ***(_DWORD***)(*(_QWORD*)(v10 + 112) + 8 * v11);
					v18 = *(_QWORD*)(v15 + 8);
					while (v18)
					{
						if (*(_DWORD*)(v18 + 32) < v17)
						{
							v18 = *(_QWORD*)(v18 + 24);
						}
						else
						{
							v16 = v18;
							v18 = *(_QWORD*)(v18 + 16);
						}
					}
					if (v16 == v15 || v17 < *(_DWORD*)(v16 + 32))
					{
						v24 = *(_QWORD*)(v13 + 16);
						v19 = &v24;
					}
					else
					{
						v23 = v16;
						v19 = &v23;
					}
					v20 = *v19;
					if (v20 != v15)
					{
						v21 = *(_QWORD*)(v20 + 40);
						if (v21)
						{
							if ((unsigned int)sub_1403D7C30(*(_QWORD*)(v21 + 48), *(_QWORD*)(qword_140C65898 + 120), 0))
								break;
						}
					}
				}
			}
		}
		if ((unsigned __int64)++v11 >= *(_QWORD*)(v10 + 120))
			return 0i64;
	}
	return v21;
}
// 140572223: variable 'v9' is possibly undefined
// 14057223D: variable 'a1' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

