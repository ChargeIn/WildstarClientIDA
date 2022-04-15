//----- (00000001400A64C0) ----------------------------------------------------
__int64 __fastcall sub_1400A64C0(__int64 a1, int* a2)
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
	__int64 v16; // rdi
	unsigned __int16* i; // rsi
	__int64 v18; // r8
	unsigned __int64 v19; // rdx
	__int64 v20; // rcx
	unsigned __int64 v21; // r9
	_QWORD* v22; // rdx
	__int64 v23; // rcx
	__int64 v24; // r8
	bool v25; // dl
	__int64 v26; // rcx
	_BOOL8 v27; // r9
	_QWORD* v28; // rdx
	__int64 v29; // rcx

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
		v13 = a2[1];
		v14 = *(_QWORD**)(v11 + 32);
		*v14 &= (1i64 << v12) - 1;
		*v14 |= (v13 & 3) << *(_QWORD*)(a1 + 16);
		v15 = *(_QWORD*)(a1 + 16);
		if (((v15 + 9) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v11 + 32) + 8i64) = v13 >> (64 - (unsigned __int8)v15);
		*(_QWORD*)(v11 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 2i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 2) & 7;
	}
	else
	{
		result = sub_140336470(a1, a2[1], 2ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_1400A7160(a1, *((_QWORD*)a2 + 1));
	if ((int)result >= 0)
	{
		v16 = 0i64;
		for (i = (unsigned __int16*)(a2 + 4); ; i += 8)
		{
			result = sub_1400A63A0(a1, i);
			if ((int)result < 0)
				break;
			if ((unsigned __int64)++v16 >= 7)
			{
				v18 = *(_QWORD*)(a1 + 8);
				v19 = (unsigned int)a2[32];
				if (v18
					&& (v20 = *(_QWORD*)(a1 + 16),
						(unsigned __int64)(8i64 * (*(_QWORD*)(v18 + 24) - *(_QWORD*)(v18 + 32)) - v20) >= 0x40))
				{
					v21 = (unsigned int)v19;
					v22 = *(_QWORD**)(v18 + 32);
					*v22 &= (1i64 << v20) - 1;
					*v22 |= (unsigned __int64)(unsigned int)v21 << *(_QWORD*)(a1 + 16);
					v23 = *(_QWORD*)(a1 + 16);
					if (((v23 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
						*(_BYTE*)(*(_QWORD*)(v18 + 32) + 8i64) = v21 >> (64 - (unsigned __int8)v23);
					*(_QWORD*)(v18 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
					*(_QWORD*)(a1 + 16) &= 7ui64;
				}
				else
				{
					result = sub_140336470(a1, v19, 0x20ui64);
					if ((int)result < 0)
						return result;
				}
				v24 = *(_QWORD*)(a1 + 8);
				v25 = a2[33] != 0;
				if (!v24)
					return sub_140336470(a1, v25, 1ui64);
				v26 = *(_QWORD*)(a1 + 16);
				if ((unsigned __int64)(8i64 * (*(_QWORD*)(v24 + 24) - *(_QWORD*)(v24 + 32)) - v26) < 0x40)
					return sub_140336470(a1, v25, 1ui64);
				v27 = v25;
				v28 = *(_QWORD**)(v24 + 32);
				*v28 &= (1i64 << v26) - 1;
				*v28 |= v27 << *(_QWORD*)(a1 + 16);
				v29 = *(_QWORD*)(a1 + 16);
				if (((v29 + 8) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
					*(_BYTE*)(*(_QWORD*)(v24 + 32) + 8i64) = (unsigned __int64)v27 >> (64 - (unsigned __int8)v29);
				*(_QWORD*)(v24 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 1i64) >> 3;
				result = 0i64;
				*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
				return result;
			}
		}
	}
	return result;
}

