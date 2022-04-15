//----- (00000001404FECA0) ----------------------------------------------------
unsigned int* __fastcall sub_1404FECA0(__int64 a1, int a2)
{
	unsigned int* result; // rax
	unsigned int* v4; // rsi
	int* v5; // rax
	__int64* v6; // rbx
	__int64* v7; // [rsp+50h] [rbp+8h] BYREF

	result = *(unsigned int**)(a1 + 2192);
	if (result)
	{
		if (*((_QWORD*)result + 2))
		{
			result = (unsigned int*)sub_1407A0FD0(qword_140C65B70, a2);
			v4 = result;
			if (result)
			{
				result = (unsigned int*)*((_QWORD*)result + 1);
				if (result)
				{
					if (result[7])
					{
						result = (unsigned int*)sub_1402DD480(a1 + 2232, (__int64)(result + 7), &v7);
						if ((_DWORD)result)
						{
							v6 = v7;
						}
						else
						{
							v5 = sub_14018B280(8i64, 0);
							v6 = (__int64*)v5;
							if (v5)
							{
								*(_QWORD*)v5 = 0i64;
								v7 = (__int64*)v5;
							}
							else
							{
								v6 = 0i64;
								v7 = 0i64;
							}
							result = (unsigned int*)sub_1400B6080(a1 + 2232, (int*)(*((_QWORD*)v4 + 1) + 28i64), &v7);
						}
						if (*(_QWORD*)(a1 + 2184))
						{
							if (qword_140C65B78)
								return sub_1405792A0(
									*(_QWORD*)(*(_QWORD*)(a1 + 2192) + 16i64),
									*(_DWORD*)(*((_QWORD*)v4 + 1) + 28i64),
									*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 2192) + 16i64) + 8i64),
									*(void(__fastcall****)(_QWORD))(a1 + 2160),
									*(void(__fastcall****)(_QWORD))(a1 + 2168),
									v6);
						}
					}
				}
			}
		}
	}
	return result;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C65B78: using guessed type __int64 qword_140C65B78;

