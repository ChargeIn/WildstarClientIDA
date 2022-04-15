//----- (00000001401E0CC0) ----------------------------------------------------
__int64 __fastcall sub_1401E0CC0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64* v5; // rdi
	unsigned int i; // ebx
	unsigned __int64 v7; // rbx
	__int64* v8; // rdi
	_DWORD* v9; // rsi
	__int64 v10; // rcx
	int v11[4]; // [rsp+20h] [rbp-28h] BYREF

	if ((*(_BYTE*)(a1 + 3168) & 8) != 0)
		return 1i64;
	if (!*(_DWORD*)(a1 + 3124)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 288) + 24i64))(
			*(_QWORD*)(a1 + 288),
			a2,
			0i64))
	{
		return 0i64;
	}
	v5 = (__int64*)(a1 + 328);
	for (i = 0; i < 0x48; ++i)
	{
		if (*v5 && !(unsigned int)sub_1401E8170(*v5, a2))
			return 0i64;
		++v5;
	}
	v7 = 0i64;
	v8 = (__int64*)(a1 + 2872);
	v9 = (_DWORD*)(a1 + 2904);
	do
	{
		v10 = *v8;
		if (*v8)
		{
			if (*v9 >= *(_DWORD*)(v10 + 1220))
			{
				v11[0] = 0;
				if (!*(_DWORD*)(v10 + 1204))
					sub_1401E5510(v10, (__int64)v11);
			}
			else if (!*(_DWORD*)(v10 + 1204))
			{
				result = sub_1401E5510(v10, a2);
				if (!(_DWORD)result)
					return result;
			}
		}
		++v7;
		++v8;
		++v9;
	} while (v7 < 4);
	*(_DWORD*)(a1 + 3168) |= 8u;
	return 1i64;
}
// 1401E0CC0: using guessed type int var_28[4];

