//----- (00000001403D7C30) ----------------------------------------------------
__int64 __fastcall sub_1403D7C30(__int64 a1, __int64 a2, int a3)
{
	int v5; // ecx
	unsigned int v6; // eax
	__int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // r9
	int v10; // ecx
	int v11; // eax
	int v13; // eax
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // r8

	if (!a2)
		return 0i64;
	v5 = *(_DWORD*)(*(_QWORD*)a1 + 12i64);
	if (a3)
	{
		v6 = sub_140491EF0(v5);
		v9 = v6;
		if (a2 == *(_QWORD*)(qword_140C65898 + 120))
		{
			if (!qword_140C65970)
				return 0i64;
			v11 = *(_DWORD*)(qword_140C65970 + 12);
			v10 = _bittest(&v11, v9);
		}
		else
		{
			v10 = *(_DWORD*)(a2 + 14080) == v6;
		}
		if (!v10)
			return 0i64;
	}
	else if (*(_DWORD*)(a2 + 14080) != (unsigned int)sub_140491EF0(v5))
	{
		return 0i64;
	}
	v13 = *(_DWORD*)(v8 + 56);
	if (v13)
	{
		if (v13 == 2)
		{
			v14 = *(_QWORD*)(a2 + 272);
			if (!v14
				|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v14 + 24i64))(
					v14,
					v7,
					v8,
					v9) != 166)
			{
				return 0i64;
			}
		}
		if (*(_DWORD*)(*(_QWORD*)a1 + 56i64) == 1)
		{
			v15 = *(_QWORD*)(a2 + 272);
			if (!v15
				|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v15 + 24i64))(
					v15,
					v7,
					v8,
					v9) != 167)
			{
				return 0i64;
			}
		}
	}
	v16 = *(unsigned int*)(*(_QWORD*)a1 + 60i64);
	if ((_DWORD)v16)
	{
		if (!(*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				a2,
				v16,
				0i64,
				0i64,
				0))
			return 0i64;
	}
	return 1i64;
}
// 1403D7CA9: variable 'v8' is possibly undefined
// 1403D7CC5: variable 'v7' is possibly undefined
// 1403D7CC5: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C659A0: using guessed type __int64 qword_140C659A0;

