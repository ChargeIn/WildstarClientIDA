//----- (0000000140089B50) ----------------------------------------------------
__int64 __fastcall sub_140089B50(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // r8
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx

	result = sub_140336040(a1, *(unsigned __int16**)a2);
	if ((int)result >= 0)
	{
		result = sub_140336040(a1, *(unsigned __int16**)(a2 + 8));
		if ((int)result >= 0)
		{
			result = sub_140336040(a1, *(unsigned __int16**)(a2 + 16));
			if ((int)result >= 0)
			{
				result = sub_140336040(a1, *(unsigned __int16**)(a2 + 24));
				if ((int)result >= 0)
				{
					result = sub_1400A7160(a1, *(_QWORD*)(a2 + 32));
					if ((int)result >= 0)
					{
						result = sub_1400A7160(a1, *(_QWORD*)(a2 + 40));
						if ((int)result >= 0)
						{
							v5 = *(_QWORD*)(a1 + 8);
							if (v5
								&& (v6 = *(_QWORD*)(a1 + 16),
									(unsigned __int64)(8i64 * (*(_QWORD*)(v5 + 24) - *(_QWORD*)(v5 + 32)) - v6) >= 0x40))
							{
								v7 = *(int*)(a2 + 48);
								v8 = *(_QWORD**)(v5 + 32);
								*v8 &= (1i64 << v6) - 1;
								*v8 |= (v7 & 3) << *(_QWORD*)(a1 + 16);
								v9 = *(_QWORD*)(a1 + 16);
								if (((v9 + 9) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
									*(_BYTE*)(*(_QWORD*)(v5 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
								*(_QWORD*)(v5 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 2i64) >> 3;
								*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 2) & 7;
							}
							else
							{
								result = sub_140336470(a1, *(int*)(a2 + 48), 2ui64);
								if ((int)result < 0)
									return result;
							}
							result = sub_1400A7110(a1, *(_DWORD*)(a2 + 52), 0x20ui64);
							if ((int)result >= 0)
								return sub_1403360D0(a1, (unsigned __int16*)(a2 + 56), a2 + 136);
						}
					}
				}
			}
		}
	}
	return result;
}

