//----- (0000000140080A20) ----------------------------------------------------
__int64 __fastcall sub_140080A20(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // r8
	unsigned __int64 v6; // rdx
	__int64 v7; // rcx
	unsigned __int64 v8; // r9
	_QWORD* v9; // rdx
	__int64 v10; // rcx

	result = sub_1400ACF80(a1, (unsigned int*)a2);
	if ((int)result >= 0)
	{
		v5 = *(_QWORD*)(a1 + 8);
		v6 = *(unsigned int*)(a2 + 48);
		if (v5
			&& (v7 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v5 + 24) - *(_QWORD*)(v5 + 32)) - v7) >= 0x40))
		{
			v8 = (unsigned int)v6;
			v9 = *(_QWORD**)(v5 + 32);
			*v9 &= (1i64 << v7) - 1;
			*v9 |= (unsigned __int64)(unsigned int)v8 << *(_QWORD*)(a1 + 16);
			v10 = *(_QWORD*)(a1 + 16);
			if (((v10 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v5 + 32) + 8i64) = v8 >> (64 - (unsigned __int8)v10);
			*(_QWORD*)(v5 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
		}
		else
		{
			result = sub_140336470(a1, v6, 0x20ui64);
			if ((int)result < 0)
				return result;
		}
		result = sub_140085170(a1, (unsigned int*)(a2 + 56));
		if ((int)result >= 0)
			return sub_140336040(a1, *(unsigned __int16**)(a2 + 72));
	}
	return result;
}

