//----- (0000000140093580) ----------------------------------------------------
__int64 __fastcall sub_140093580(__int64 a1, unsigned __int16* a2)
{
	__int64 v2; // r8
	unsigned __int16 v4; // dx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // r8
	unsigned __int64 v12; // rdx
	__int64 v13; // rcx
	unsigned __int64 v14; // r9
	_QWORD* v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // r8
	bool v18; // dl
	__int64 v19; // rcx
	_BOOL8 v20; // r9
	_QWORD* v21; // rdx
	__int64 v22; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= (unsigned __int64)(unsigned int)v7 << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 23) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 16i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
	}
	else
	{
		result = sub_140336470(a1, v4, 0x10ui64);
		if ((int)result < 0)
			return result;
	}
	v11 = *(_QWORD*)(a1 + 8);
	v12 = *((unsigned int*)a2 + 1);
	if (v11
		&& (v13 = *(_QWORD*)(a1 + 16),
			(unsigned __int64)(8i64 * (*(_QWORD*)(v11 + 24) - *(_QWORD*)(v11 + 32)) - v13) >= 0x40))
	{
		v14 = (unsigned int)v12;
		v15 = *(_QWORD**)(v11 + 32);
		*v15 &= (1i64 << v13) - 1;
		*v15 |= (unsigned __int64)(unsigned int)v14 << *(_QWORD*)(a1 + 16);
		v16 = *(_QWORD*)(a1 + 16);
		if (((v16 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v11 + 32) + 8i64) = v14 >> (64 - (unsigned __int8)v16);
		*(_QWORD*)(v11 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
	}
	else
	{
		result = sub_140336470(a1, v12, 0x20ui64);
		if ((int)result < 0)
			return result;
	}
	v17 = *(_QWORD*)(a1 + 8);
	v18 = *((_DWORD*)a2 + 2) != 0;
	if (!v17)
		return sub_140336470(a1, v18, 1ui64);
	v19 = *(_QWORD*)(a1 + 16);
	if ((unsigned __int64)(8i64 * (*(_QWORD*)(v17 + 24) - *(_QWORD*)(v17 + 32)) - v19) < 0x40)
		return sub_140336470(a1, v18, 1ui64);
	v20 = v18;
	v21 = *(_QWORD**)(v17 + 32);
	*v21 &= (1i64 << v19) - 1;
	*v21 |= v20 << *(_QWORD*)(a1 + 16);
	v22 = *(_QWORD*)(a1 + 16);
	if (((v22 + 8) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
		*(_BYTE*)(*(_QWORD*)(v17 + 32) + 8i64) = (unsigned __int64)v20 >> (64 - (unsigned __int8)v22);
	*(_QWORD*)(v17 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 1i64) >> 3;
	*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
	return 0i64;
}

