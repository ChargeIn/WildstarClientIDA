//----- (00000001404D1D50) ----------------------------------------------------
_BOOL8 __fastcall sub_1404D1D50(__int64 a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v4; // rax
	__int64 v5; // r8
	__int64 v6; // rbx
	__int64 v7; // r8
	__int64 v8; // rax
	__int64 v9; // rax
	_BOOL8 result; // rax
	__int64 v11; // [rsp+40h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 16);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v2 || (v11 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v11 = *(_QWORD*)(a1 + 16);
	result = 0;
	if (v11 != v2)
	{
		v6 = *(_QWORD*)(v11 + 40);
		if (v6)
		{
			v7 = *(unsigned int*)(*(_QWORD*)(v6 + 8) + 8i64);
			if (!(_DWORD)v7
				|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						*(_QWORD*)(qword_140C65898 + 120),
						v7,
						0i64,
						0i64,
						0))
			{
				if ((*(_BYTE*)(*(_QWORD*)(v6 + 8) + 84i64) & 1) == 0)
					return 1;
				v8 = *(_QWORD*)(v6 + 32);
				if (!v8)
					return 1;
				v9 = sub_1404D1B20(a1, **(_DWORD**)(v8 + 8));
				if (v9)
				{
					if (*(_DWORD*)(v9 + 40))
						return 1;
				}
			}
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

