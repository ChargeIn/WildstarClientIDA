//----- (000000014007F270) ----------------------------------------------------
__int64 __fastcall sub_14007F270(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // rbx
	__int64 v12; // r8
	unsigned __int64 v13; // rdx
	__int64 v14; // rcx
	unsigned __int64 v15; // r9
	_QWORD* v16; // rdx
	__int64 v17; // rcx

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
	v11 = 0i64;
	if (*a2)
	{
		while (1)
		{
			result = sub_14007F0C0(a1, (unsigned int*)(*((_QWORD*)a2 + 1) + 40 * v11));
			if ((int)result < 0)
				break;
			v11 = (unsigned int)(v11 + 1);
			if ((unsigned int)v11 >= *a2)
				goto LABEL_10;
		}
	}
	else
	{
	LABEL_10:
		v12 = *(_QWORD*)(a1 + 8);
		v13 = a2[4];
		if (v12
			&& (v14 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v12 + 24) - *(_QWORD*)(v12 + 32)) - v14) >= 0x40))
		{
			v15 = (unsigned int)v13;
			v16 = *(_QWORD**)(v12 + 32);
			*v16 &= (1i64 << v14) - 1;
			*v16 |= (unsigned __int64)(unsigned int)v15 << *(_QWORD*)(a1 + 16);
			v17 = *(_QWORD*)(a1 + 16);
			if (((v17 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v12 + 32) + 8i64) = v15 >> (64 - (unsigned __int8)v17);
			*(_QWORD*)(v12 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
		}
		else
		{
			result = sub_140336470(a1, v13, 0x20ui64);
			if ((int)result < 0)
				return result;
		}
		return sub_1403360D0(a1, *((unsigned __int16**)a2 + 3), *((_QWORD*)a2 + 3) + 4i64 * a2[4]);
	}
	return result;
}

