//----- (00000001400AEB30) ----------------------------------------------------
__int64 __fastcall sub_1400AEB30(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = (unsigned int)v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= (v7 & 0x3FF) << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 17) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 10i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 2) & 7;
	}
	else
	{
		result = sub_140336470(a1, v4, 0xAui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_1403360D0(a1, *((unsigned __int16**)a2 + 1), *((_QWORD*)a2 + 1) + 4i64 * *a2);
	if ((int)result >= 0)
	{
		result = sub_1400A8A90(a1, (unsigned __int16*)a2 + 8);
		if ((int)result >= 0)
		{
			result = sub_14006BD80(a1, *((float*)a2 + 5));
			if ((int)result >= 0)
			{
				result = sub_14006BD80(a1, *((float*)a2 + 6));
				if ((int)result >= 0)
				{
					result = sub_14006BD80(a1, *((float*)a2 + 7));
					if ((int)result >= 0)
					{
						result = sub_1400A73C0(a1, a2[8]);
						if ((int)result >= 0)
						{
							result = sub_1400A7110(a1, a2[9], 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_1400A7110(a1, a2[10], 0x20ui64);
								if ((int)result >= 0)
									return sub_1400A7250(a1, a2[11] != 0, 1ui64);
							}
						}
					}
				}
			}
		}
	}
	return result;
}

