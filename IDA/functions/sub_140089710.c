//----- (0000000140089710) ----------------------------------------------------
__int64 __fastcall sub_140089710(__int64 a1, __int64 a2)
{
	unsigned __int64 i; // rdi
	__int64 v5; // r8
	bool v6; // r9
	__int64 v7; // rcx
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // r8
	bool v12; // dl
	__int64 v13; // rcx
	_BOOL8 v14; // r9
	_QWORD* v15; // rdx
	__int64 v16; // rcx

	for (i = 0i64; i < 3; ++i)
	{
		v5 = *(_QWORD*)(a1 + 8);
		v6 = *(_DWORD*)(a2 + 4 * i) != 0;
		if (v5
			&& (v7 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v5 + 24) - *(_QWORD*)(v5 + 32)) - v7) >= 0x40))
		{
			v8 = *(_QWORD**)(v5 + 32);
			*v8 &= (1i64 << v7) - 1;
			*v8 |= (unsigned __int64)v6 << *(_QWORD*)(a1 + 16);
			v9 = *(_QWORD*)(a1 + 16);
			if (((v9 + 8) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v5 + 32) + 8i64) = (unsigned __int64)v6 >> (64 - (unsigned __int8)v9);
			*(_QWORD*)(v5 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 1i64) >> 3;
			*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
		}
		else
		{
			result = sub_140336470(a1, v6, 1ui64);
			if ((int)result < 0)
				return result;
		}
	}
	v11 = *(_QWORD*)(a1 + 8);
	v12 = *(_DWORD*)(a2 + 12) != 0;
	if (!v11)
		return sub_140336470(a1, v12, 1ui64);
	v13 = *(_QWORD*)(a1 + 16);
	if ((unsigned __int64)(8i64 * (*(_QWORD*)(v11 + 24) - *(_QWORD*)(v11 + 32)) - v13) < 0x40)
		return sub_140336470(a1, v12, 1ui64);
	v14 = v12;
	v15 = *(_QWORD**)(v11 + 32);
	*v15 &= (1i64 << v13) - 1;
	*v15 |= v14 << *(_QWORD*)(a1 + 16);
	v16 = *(_QWORD*)(a1 + 16);
	if (((v16 + 8) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
		*(_BYTE*)(*(_QWORD*)(v11 + 32) + 8i64) = (unsigned __int64)v14 >> (64 - (unsigned __int8)v16);
	*(_QWORD*)(v11 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 1i64) >> 3;
	result = 0i64;
	*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
	return result;
}

