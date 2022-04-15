//----- (00000001405C8950) ----------------------------------------------------
__int64 __fastcall sub_1405C8950(__int64 a1)
{
	__int64 v2; // rbx
	__int64 result; // rax
	__int64 v4; // r14
	unsigned int v5; // r15d
	__int64 v6; // rbp
	__int64 v7; // rsi
	int v8; // r14d
	int v9; // r12d
	_DWORD* i; // rcx

	v2 = *(_QWORD*)(*(_QWORD*)(a1 + 344) + 56i64);
	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 128i64))(a1, 1i64);
	v4 = result;
	if (v2)
	{
		if (result)
		{
			v5 = **(_DWORD**)(result + 112);
			v6 = *(_QWORD*)(qword_140C65898 + 120);
			v7 = *(_QWORD*)(qword_140C65898 + 25744);
			if (v6)
			{
				result = *(unsigned int*)(v2 + 8);
				if ((_DWORD)result)
				{
					if ((_DWORD)result == 1 && *(_DWORD*)(v2 + 4) == v5)
					{
						v8 = sub_14046A690(*(_QWORD*)(qword_140C65898 + 120), v5, v2);
						if (v7)
						{
							if (v7 != v6)
								v8 |= sub_14046A690(v7, v5, v2);
						}
						result = v8 == 0;
						*(_DWORD*)(a1 + 388) = result;
					}
					else if ((_DWORD)result == 2 && *(_QWORD*)(v4 + 56))
					{
						result = sub_14046A690(*(_QWORD*)(qword_140C65898 + 120), v5, v2);
						v9 = result;
						if (v7 && v7 != v6)
						{
							result = sub_14046A690(v7, v5, v2);
							v9 |= result;
						}
						if (!v9)
						{
							result = 0i64;
							for (i = (_DWORD*)(*(_QWORD*)(v4 + 56) + 4i64); *(_DWORD*)(v2 + 4) != *i; ++i)
							{
								if ((unsigned __int64)++result >= 3)
									return result;
							}
							*(_DWORD*)(a1 + 388) = 1;
						}
					}
				}
				else
				{
					*(_DWORD*)(a1 + 384) = 1;
				}
			}
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

