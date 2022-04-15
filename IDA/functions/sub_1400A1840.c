//----- (00000001400A1840) ----------------------------------------------------
__int64 __fastcall sub_1400A1840(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // r8
	__int64 v12; // rcx
	unsigned __int64 v13; // r9
	_QWORD* v14; // rdx
	__int64 v15; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = (unsigned int)v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= (unsigned __int64)(unsigned int)v7 << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
	}
	else
	{
		result = sub_140336470(a1, v4, 0x20ui64);
		if ((int)result < 0)
			return result;
	}
	v11 = *(_QWORD*)(a1 + 8);
	if (v11
		&& (v12 = *(_QWORD*)(a1 + 16),
			(unsigned __int64)(8i64 * (*(_QWORD*)(v11 + 24) - *(_QWORD*)(v11 + 32)) - v12) >= 0x40))
	{
		v13 = (int)a2[1];
		v14 = *(_QWORD**)(v11 + 32);
		*v14 &= (1i64 << v12) - 1;
		*v14 |= (v13 & 7) << *(_QWORD*)(a1 + 16);
		v15 = *(_QWORD*)(a1 + 16);
		if (((v15 + 10) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v11 + 32) + 8i64) = v13 >> (64 - (unsigned __int8)v15);
		*(_QWORD*)(v11 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 3i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 3) & 7;
	}
	else
	{
		result = sub_140336470(a1, (int)a2[1], 3ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_14006BD80(a1, *((float*)a2 + 2));
	if ((int)result >= 0)
	{
		result = sub_140336040(a1, *((unsigned __int16**)a2 + 2));
		if ((int)result >= 0)
		{
			result = sub_1400A7160(a1, *((_QWORD*)a2 + 3));
			if ((int)result >= 0)
				return sub_1400A7110(a1, a2[8], 0x20ui64);
		}
	}
	return result;
}

