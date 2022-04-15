//----- (000000014008CB70) ----------------------------------------------------
__int64 __fastcall sub_14008CB70(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	unsigned int v11; // ebx
	__int64 v12; // r8
	unsigned __int64 v13; // r9
	__int64 v14; // rcx
	_QWORD* v15; // rdx
	__int64 v16; // rdx

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
	v11 = 0;
	if (*a2)
	{
		while (1)
		{
			result = sub_14008C6F0(a1, (unsigned int*)(*((_QWORD*)a2 + 1) + 52i64 * v11));
			if ((int)result < 0)
				break;
			if (++v11 >= *a2)
				goto LABEL_10;
		}
	}
	else
	{
	LABEL_10:
		v12 = *(_QWORD*)(a1 + 8);
		v13 = *((_QWORD*)a2 + 2);
		if (v12
			&& (v14 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v12 + 24) - *(_QWORD*)(v12 + 32)) - v14) >= 0x40))
		{
			v15 = *(_QWORD**)(v12 + 32);
			*v15 &= (1i64 << v14) - 1;
			*v15 |= v13 << *(_QWORD*)(a1 + 16);
			v16 = *(_QWORD*)(a1 + 16);
			if (((v16 + 71) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v12 + 32) + 8i64) = v13 >> (64 - (unsigned __int8)v16);
			*(_QWORD*)(v12 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 64i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
			return 0i64;
		}
		else
		{
			return sub_140336470(a1, *((_QWORD*)a2 + 2), 0x40ui64);
		}
	}
	return result;
}

