//----- (000000014073F4C0) ----------------------------------------------------
__int64 __fastcall sub_14073F4C0(__int64 a1, __int64 a2)
{
	unsigned int v3; // ebp
	__int64 v4; // rdi
	_DWORD* v5; // rsi
	_DWORD* v6; // r14
	__int64 v7; // rbx
	unsigned int v8; // r8d
	_DWORD* v9; // rax
	__int64 v10; // r9

	if (*(_DWORD*)(a1 + 8) != *(_DWORD*)(a2 + 8)
		|| *(_DWORD*)(a1 + 12) != *(_DWORD*)(a2 + 12)
		|| *(_QWORD*)(a1 + 16) != *(_QWORD*)(a2 + 16))
	{
		return 0i64;
	}
	if (!*(_DWORD*)(a1 + 224) && !*(_DWORD*)(a2 + 224))
		return 1i64;
	if (*(_DWORD*)(a1 + 52) != *(_DWORD*)(a2 + 52))
		return 0i64;
	v3 = 0;
	v4 = 35i64;
	v5 = (_DWORD*)(a1 + 24);
	v6 = (_DWORD*)(a1 + 56);
	v7 = a2 - a1;
LABEL_10:
	if (*v5 == *(_DWORD*)((char*)v5 + v7))
	{
		v8 = 0;
		v9 = v6;
		v10 = 0i64;
		while (*v9 == *(_DWORD*)((char*)v9 + v7) && *(_DWORD*)(4 * (v4 + v10) + a1) == *(_DWORD*)(4 * (v4 + v10) + a2))
		{
			++v8;
			++v10;
			++v9;
			if (v8 >= 3)
			{
				++v3;
				++v5;
				v6 += 3;
				v4 += 3i64;
				if (v3 < 7)
					goto LABEL_10;
				return 1i64;
			}
		}
	}
	return 0i64;
}

