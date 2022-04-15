//----- (00000001403360D0) ----------------------------------------------------
__int64 __fastcall sub_1403360D0(__int64 a1, unsigned __int16* a2, __int64 a3)
{
	__int64 result; // rax
	unsigned __int16* v4; // rsi
	__int64 v5; // rdi
	__int64 v7; // r8
	unsigned __int8 v8; // dl
	__int64 v9; // rcx
	unsigned __int64 v10; // r9
	_QWORD* v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // r8
	unsigned __int64 v14; // rdx
	__int64 v15; // rcx
	unsigned __int64 v16; // r9
	_QWORD* v17; // rdx
	__int64 v18; // rcx
	__int64 v19; // r8
	unsigned __int64 v20; // r9
	__int64 v21; // rcx
	_QWORD* v22; // rdx
	__int64 v23; // rcx

	result = 0i64;
	v4 = a2;
	v5 = a3 - (_QWORD)a2;
	if ((((_BYTE)a3 - (_BYTE)a2) & 1) != 0)
	{
		v7 = *(_QWORD*)(a1 + 8);
		v8 = *(_BYTE*)a2;
		if (v7
			&& (v9 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v7 + 24) - *(_QWORD*)(v7 + 32)) - v9) >= 0x40))
		{
			v10 = v8;
			v11 = *(_QWORD**)(v7 + 32);
			*v11 &= (1i64 << v9) - 1;
			*v11 |= (unsigned __int64)(unsigned int)v10 << *(_QWORD*)(a1 + 16);
			v12 = *(_QWORD*)(a1 + 16);
			if (((v12 + 15) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v7 + 32) + 8i64) = v10 >> (64 - (unsigned __int8)v12);
			*(_QWORD*)(v7 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 8i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
			result = 0i64;
		}
		else
		{
			result = sub_140336470(a1, v8, 8ui64);
		}
		--v5;
		v4 = (unsigned __int16*)((char*)v4 + 1);
	}
	if ((v5 & 2) != 0 && (int)result >= 0)
	{
		result = sub_1400A7360(a1, *v4);
		v5 -= 2i64;
		++v4;
	}
	if ((v5 & 4) != 0 && (int)result >= 0)
	{
		v13 = *(_QWORD*)(a1 + 8);
		v14 = *(unsigned int*)v4;
		if (v13
			&& (v15 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v13 + 24) - *(_QWORD*)(v13 + 32)) - v15) >= 0x40))
		{
			v16 = (unsigned int)v14;
			v17 = *(_QWORD**)(v13 + 32);
			*v17 &= (1i64 << v15) - 1;
			*v17 |= (unsigned __int64)(unsigned int)v16 << *(_QWORD*)(a1 + 16);
			v18 = *(_QWORD*)(a1 + 16);
			if (((v18 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v13 + 32) + 8i64) = v16 >> (64 - (unsigned __int8)v18);
			*(_QWORD*)(v13 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
			result = 0i64;
		}
		else
		{
			result = sub_140336470(a1, v14, 0x20ui64);
		}
		v5 -= 4i64;
		v4 += 2;
	}
	for (; v5; v5 -= 8i64)
	{
		if ((int)result < 0)
			break;
		v19 = *(_QWORD*)(a1 + 8);
		v20 = *(_QWORD*)v4;
		if (v19
			&& (v21 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v19 + 24) - *(_QWORD*)(v19 + 32)) - v21) >= 0x40))
		{
			v22 = *(_QWORD**)(v19 + 32);
			*v22 &= (1i64 << v21) - 1;
			*v22 |= v20 << *(_QWORD*)(a1 + 16);
			v23 = *(_QWORD*)(a1 + 16);
			if (((v23 + 71) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v19 + 32) + 8i64) = v20 >> (64 - (unsigned __int8)v23);
			*(_QWORD*)(v19 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 64i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
			result = 0i64;
		}
		else
		{
			result = sub_140336470(a1, *(_QWORD*)v4, 0x40ui64);
		}
		v4 += 4;
	}
	return result;
}

