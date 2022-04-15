//----- (00000001400C2F70) ----------------------------------------------------
__int64 __fastcall sub_1400C2F70(__int64 a1, _WORD* a2, unsigned __int64 a3)
{
	unsigned __int64 v6; // rcx
	int v7; // r8d
	_WORD* v8; // rax
	unsigned __int64 v9; // rsi
	__int64 v10; // r8
	unsigned __int64 v11; // rsi
	__int64 v12; // rcx
	_QWORD* v13; // rdx
	__int64 v14; // rcx
	__int64 result; // rax
	unsigned __int64 i; // rdi
	__int64 v17; // r8
	unsigned __int16 v18; // dx
	__int64 v19; // rcx
	unsigned __int64 v20; // r9
	_QWORD* v21; // rdx
	__int64 v22; // rcx

	if (!a2 || a3 > 0x7FFFFFFF)
		return (unsigned int)-2147024809;
	v6 = a3;
	v7 = 0;
	v8 = a2;
	if (v6)
	{
		while (*v8)
		{
			++v8;
			if (!--v6)
				goto LABEL_6;
		}
		v9 = a3 - v6;
	}
	else
	{
	LABEL_6:
		v9 = 0i64;
		v7 = -2147024809;
	}
	if (v7 < 0)
		return (unsigned int)v7;
	v10 = *(_QWORD*)(a1 + 8);
	v11 = v9 + 1;
	if (v10
		&& (v12 = *(_QWORD*)(a1 + 16),
			(unsigned __int64)(8i64 * (*(_QWORD*)(v10 + 24) - *(_QWORD*)(v10 + 32)) - v12) >= 0x40))
	{
		v13 = *(_QWORD**)(v10 + 32);
		*v13 &= (1i64 << v12) - 1;
		*v13 |= (unsigned __int64)(unsigned __int16)v11 << *(_QWORD*)(a1 + 16);
		v14 = *(_QWORD*)(a1 + 16);
		if (((v14 + 23) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v10 + 32) + 8i64) = (unsigned __int64)(unsigned __int16)v11 >> (64 - (unsigned __int8)v14);
		*(_QWORD*)(v10 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 16i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
		result = 0i64;
	}
	else
	{
		result = sub_140336470(a1, (unsigned __int16)v11, 0x10ui64);
		if ((int)result < 0)
			return result;
	}
	for (i = 0i64; i < v11; ++i)
	{
		v17 = *(_QWORD*)(a1 + 8);
		v18 = a2[i];
		if (v17
			&& (v19 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v17 + 24) - *(_QWORD*)(v17 + 32)) - v19) >= 0x40))
		{
			v20 = v18;
			v21 = *(_QWORD**)(v17 + 32);
			*v21 &= (1i64 << v19) - 1;
			*v21 |= (unsigned __int64)(unsigned int)v20 << *(_QWORD*)(a1 + 16);
			v22 = *(_QWORD*)(a1 + 16);
			if (((v22 + 23) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v17 + 32) + 8i64) = v20 >> (64 - (unsigned __int8)v22);
			*(_QWORD*)(v17 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 16i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
			result = 0i64;
		}
		else
		{
			result = sub_140336470(a1, v18, 0x10ui64);
			if ((int)result < 0)
				return result;
		}
	}
	return result;
}
// 1400C2FC6: conditional instruction was optimized away because rcx.8!=0
// 1400C2FD8: conditional instruction was optimized away because r8d.4==80070057

