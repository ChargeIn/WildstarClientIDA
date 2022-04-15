#include "../winhttp.h"

//----- (00000001403A2060) ----------------------------------------------------
__int64 __fastcall sub_1403A2060(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 result; // rax
	int v6; // ecx
	__int64 v7; // rax
	int v8; // ecx
	__int64 v9; // r10
	int v10; // eax
	__int64 v11; // r10
	int v12; // eax
	__int64* v13; // r8
	__int64 v14; // [rsp+20h] [rbp-60h] BYREF
	int v15; // [rsp+28h] [rbp-58h]
	__int64 v16; // [rsp+2Ch] [rbp-54h]
	__int64 v17; // [rsp+34h] [rbp-4Ch]
	int v18; // [rsp+3Ch] [rbp-44h]
	__int64 v19; // [rsp+40h] [rbp-40h] BYREF
	int v20; // [rsp+48h] [rbp-38h]
	__int64 v21; // [rsp+4Ch] [rbp-34h]
	__int64 v22; // [rsp+54h] [rbp-2Ch]
	int v23; // [rsp+5Ch] [rbp-24h]
	__int64 v24; // [rsp+60h] [rbp-20h] BYREF
	int v25; // [rsp+68h] [rbp-18h]
	__int64 v26; // [rsp+6Ch] [rbp-14h]
	__int64 v27; // [rsp+74h] [rbp-Ch]
	int v28; // [rsp+7Ch] [rbp-4h]

	v2 = *(_QWORD*)(a1 + 27872);
	if (v2)
	{
		LODWORD(v14) = -1;
		(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)v2 + 32i64))(v2, &v14);
		v3 = *(_QWORD*)(a1 + 27872);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(a1 + 27872) = 0i64;
		}
	}
	if (*(_DWORD*)(a1 + 25796) != *(_DWORD*)(a1 + 25800))
	{
		v4 = *(_QWORD*)(a1 + 29504);
		if (v4)
			sub_1400EA3E0(v4, "MouseOverUnitChanged", L"U", *(unsigned int*)(qword_140C65898 + 25796));
		sub_1403971C0(a1);
	}
	result = *(unsigned int*)(a1 + 25796);
	v6 = *(_DWORD*)(a1 + 25824);
	if (!(_DWORD)result)
	{
		result = *(unsigned int*)(a1 + 26408);
		if (!(_DWORD)result)
		{
			v7 = *(_QWORD*)(a1 + 25744);
			if (v7)
				result = *(unsigned int*)(v7 + 264);
			else
				result = 0i64;
		}
	}
	*(_DWORD*)(a1 + 25824) = result;
	if (v6 != (_DWORD)result)
	{
		if ((_DWORD)result)
		{
			result = sub_1403D90D0(a1, result);
			if (result)
			{
				if (*(_QWORD*)(result + 24) || (v8 = *(_DWORD*)(result + 128), v8 == 20) || v8 == 23)
				{
					v9 = *(_QWORD*)(a1 + 120);
					if (v9)
					{
						if ((unsigned int)sub_14045BED0(result, *(_DWORD*)(v9 + 8)))
							v10 = 0;
						else
							v10 = sub_14045A950(v11, *(_DWORD*)(a1 + 25824));
					}
					else
					{
						v10 = 1;
					}
					if (v10)
					{
						v12 = v10 - 1;
						if (v12)
						{
							result = (unsigned int)(v12 - 1);
							if ((_DWORD)result)
								return result;
							v14 = 1226i64;
							v16 = 0i64;
							v17 = 3i64;
							v18 = 0;
							v13 = &v14;
							v15 = 1065353216;
						}
						else
						{
							v19 = 1227i64;
							v21 = 0i64;
							v22 = 3i64;
							v23 = 0;
							v13 = &v19;
							v20 = 1065353216;
						}
					}
					else
					{
						v24 = 1225i64;
						v26 = 0i64;
						v27 = 3i64;
						v28 = 0;
						v13 = &v24;
						v25 = 1065353216;
					}
					return (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(a1 + 25832) + 584i64))(
						*(_QWORD*)(a1 + 25832),
						0i64,
						v13);
				}
			}
		}
	}
	return result;
}
// 1403A2192: variable 'v11' is possibly undefined
// 1409EE004: using guessed type wchar_t aU_2[2];
// 140C65898: using guessed type __int64 qword_140C65898;

