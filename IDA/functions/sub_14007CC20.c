//----- (000000014007CC20) ----------------------------------------------------
__int64 __fastcall sub_14007CC20(__int64 a1, __int16* a2)
{
	__int64 v2; // r8
	__int16 v4; // dx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // r8
	__int16 v12; // dx
	__int64 v13; // rcx
	unsigned __int64 v14; // r9
	_QWORD* v15; // rdx
	__int64 v16; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= (unsigned __int64)(unsigned __int16)v7 << *(_QWORD*)(a1 + 16);
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
	v12 = a2[1];
	if (v11
		&& (v13 = *(_QWORD*)(a1 + 16),
			(unsigned __int64)(8i64 * (*(_QWORD*)(v11 + 24) - *(_QWORD*)(v11 + 32)) - v13) >= 0x40))
	{
		v14 = v12;
		v15 = *(_QWORD**)(v11 + 32);
		*v15 &= (1i64 << v13) - 1;
		*v15 |= (unsigned __int64)(unsigned __int16)v14 << *(_QWORD*)(a1 + 16);
		v16 = *(_QWORD*)(a1 + 16);
		if (((v16 + 23) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v11 + 32) + 8i64) = v14 >> (64 - (unsigned __int8)v16);
		*(_QWORD*)(v11 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 16i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
	}
	else
	{
		result = sub_140336470(a1, v12, 0x10ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_14006BD80(a1, *((float*)a2 + 1));
	if ((int)result >= 0)
	{
		result = sub_14006BD80(a1, *((float*)a2 + 2));
		if ((int)result >= 0)
		{
			result = sub_14006BD80(a1, *((float*)a2 + 3));
			if ((int)result >= 0)
			{
				result = sub_140336040(a1, *((unsigned __int16**)a2 + 2));
				if ((int)result >= 0)
				{
					result = sub_140336040(a1, *((unsigned __int16**)a2 + 3));
					if ((int)result >= 0)
						return sub_1400A72A0(a1, *((_DWORD*)a2 + 8));
				}
			}
		}
	}
	return result;
}

