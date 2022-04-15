//----- (00000001400AF180) ----------------------------------------------------
__int64 __fastcall sub_1400AF180(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // rdi
	__int64 v12; // r8
	__int64 v13; // rcx
	unsigned __int64 v14; // r9
	_QWORD* v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // r8
	unsigned __int64 v18; // rdx
	__int64 v19; // rcx
	unsigned __int64 v20; // r9
	_QWORD* v21; // rdx
	__int64 v22; // rcx
	__int64 v23; // r8
	bool v24; // dl
	__int64 v25; // rcx
	_BOOL8 v26; // r9
	_QWORD* v27; // rdx
	__int64 v28; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = (unsigned int)v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= (unsigned __int64)(unsigned __int8)v7 << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 15) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 8i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
	}
	else
	{
		result = sub_140336470(a1, v4, 8ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_1403360D0(a1, *((unsigned __int16**)a2 + 1), *((_QWORD*)a2 + 1) + 4i64 * *a2);
	if ((int)result >= 0)
	{
		v11 = 0i64;
		if (*a2)
		{
			while (1)
			{
				result = sub_1400A8A90(a1, (unsigned __int16*)(*((_QWORD*)a2 + 2) + 2 * v11));
				if ((int)result < 0)
					break;
				v11 = (unsigned int)(v11 + 1);
				if ((unsigned int)v11 >= *a2)
					goto LABEL_11;
			}
		}
		else
		{
		LABEL_11:
			v12 = *(_QWORD*)(a1 + 8);
			if (v12
				&& (v13 = *(_QWORD*)(a1 + 16),
					(unsigned __int64)(8i64 * (*(_QWORD*)(v12 + 24) - *(_QWORD*)(v12 + 32)) - v13) >= 0x40))
			{
				v14 = (int)a2[6];
				v15 = *(_QWORD**)(v12 + 32);
				*v15 &= (1i64 << v13) - 1;
				*v15 |= (v14 & 3) << *(_QWORD*)(a1 + 16);
				v16 = *(_QWORD*)(a1 + 16);
				if (((v16 + 9) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
					*(_BYTE*)(*(_QWORD*)(v12 + 32) + 8i64) = v14 >> (64 - (unsigned __int8)v16);
				*(_QWORD*)(v12 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 2i64) >> 3;
				*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 2) & 7;
			}
			else
			{
				result = sub_140336470(a1, (int)a2[6], 2ui64);
				if ((int)result < 0)
					return result;
			}
			v17 = *(_QWORD*)(a1 + 8);
			v18 = a2[7];
			if (v17
				&& (v19 = *(_QWORD*)(a1 + 16),
					(unsigned __int64)(8i64 * (*(_QWORD*)(v17 + 24) - *(_QWORD*)(v17 + 32)) - v19) >= 0x40))
			{
				v20 = (unsigned int)v18;
				v21 = *(_QWORD**)(v17 + 32);
				*v21 &= (1i64 << v19) - 1;
				*v21 |= (unsigned __int64)(unsigned int)v20 << *(_QWORD*)(a1 + 16);
				v22 = *(_QWORD*)(a1 + 16);
				if (((v22 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
					*(_BYTE*)(*(_QWORD*)(v17 + 32) + 8i64) = v20 >> (64 - (unsigned __int8)v22);
				*(_QWORD*)(v17 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
				*(_QWORD*)(a1 + 16) &= 7ui64;
			}
			else
			{
				result = sub_140336470(a1, v18, 0x20ui64);
				if ((int)result < 0)
					return result;
			}
			v23 = *(_QWORD*)(a1 + 8);
			v24 = a2[8] != 0;
			if (v23
				&& (v25 = *(_QWORD*)(a1 + 16),
					(unsigned __int64)(8i64 * (*(_QWORD*)(v23 + 24) - *(_QWORD*)(v23 + 32)) - v25) >= 0x40))
			{
				v26 = v24;
				v27 = *(_QWORD**)(v23 + 32);
				*v27 &= (1i64 << v25) - 1;
				*v27 |= v26 << *(_QWORD*)(a1 + 16);
				v28 = *(_QWORD*)(a1 + 16);
				if (((v28 + 8) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
					*(_BYTE*)(*(_QWORD*)(v23 + 32) + 8i64) = (unsigned __int64)v26 >> (64 - (unsigned __int8)v28);
				*(_QWORD*)(v23 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 1i64) >> 3;
				result = 0i64;
				*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
			}
			else
			{
				return sub_140336470(a1, v24, 1ui64);
			}
		}
	}
	return result;
}

