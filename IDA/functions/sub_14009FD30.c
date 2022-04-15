//----- (000000014009FD30) ----------------------------------------------------
__int64 __fastcall sub_14009FD30(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // r8
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // r8
	__int64 v11; // rcx
	unsigned __int64 v12; // r9
	_QWORD* v13; // rdx
	__int64 v14; // rcx

	result = sub_140085170(a1, (unsigned int*)a2);
	if ((int)result >= 0)
	{
		v5 = *(_QWORD*)(a1 + 8);
		if (v5
			&& (v6 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v5 + 24) - *(_QWORD*)(v5 + 32)) - v6) >= 0x40))
		{
			v7 = *(int*)(a2 + 16);
			v8 = *(_QWORD**)(v5 + 32);
			*v8 &= (1i64 << v6) - 1;
			*v8 |= (v7 & 7) << *(_QWORD*)(a1 + 16);
			v9 = *(_QWORD*)(a1 + 16);
			if (((v9 + 10) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v5 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
			*(_QWORD*)(v5 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 3i64) >> 3;
			*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 3) & 7;
		}
		else
		{
			result = sub_140336470(a1, *(int*)(a2 + 16), 3ui64);
			if ((int)result < 0)
				return result;
		}
		v10 = *(_QWORD*)(a1 + 8);
		if (v10
			&& (v11 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v10 + 24) - *(_QWORD*)(v10 + 32)) - v11) >= 0x40))
		{
			v12 = *(int*)(a2 + 20);
			v13 = *(_QWORD**)(v10 + 32);
			*v13 &= (1i64 << v11) - 1;
			*v13 |= (v12 & 0xF) << *(_QWORD*)(a1 + 16);
			v14 = *(_QWORD*)(a1 + 16);
			if (((v14 + 11) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v10 + 32) + 8i64) = v12 >> (64 - (unsigned __int8)v14);
			*(_QWORD*)(v10 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 4i64) >> 3;
			*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 4) & 7;
		}
		else
		{
			result = sub_140336470(a1, *(int*)(a2 + 20), 4ui64);
			if ((int)result < 0)
				return result;
		}
		result = sub_140336040(a1, *(unsigned __int16**)(a2 + 24));
		if ((int)result >= 0)
		{
			result = sub_1400A7160(a1, *(_QWORD*)(a2 + 32));
			if ((int)result >= 0)
			{
				result = sub_14006BD80(a1, *(float*)(a2 + 40));
				if ((int)result >= 0)
					return sub_1400A7250(a1, *(_DWORD*)(a2 + 44) != 0, 1ui64);
			}
		}
	}
	return result;
}

