//----- (0000000140851E10) ----------------------------------------------------
__int64 __fastcall sub_140851E10(__int64 a1, _WORD* a2, char a3, __int64 a4)
{
	__int64* v4; // r10
	__int64 result; // rax
	__int64 v8; // r10
	__int64 v10; // rdi
	unsigned __int16 v11; // dx
	char v12; // r9
	__int64 v13; // r8
	__int64 v14; // rbx
	__int64 v15; // rcx
	__int64 v16; // [rsp+60h] [rbp+8h] BYREF

	v4 = *(__int64**)(a1 + 56);
	result = *v4;
	v8 = v4[1];
	if (result != v8)
	{
		do
		{
			if (*(_QWORD*)result == a4)
				break;
			result += 24i64;
		} while (result != v8);
		if (result != v8)
		{
			v10 = result + 8;
			if (result != -8)
			{
				result = 0xFFFFi64;
				--* (_WORD*)(v10 + 10);
				if (a3)
				{
					result = *(_QWORD*)v10;
					if (*(_QWORD*)v10)
					{
						v11 = *(_WORD*)(result + 24);
						if (v11)
						{
							result = v11;
							if (*(unsigned __int16*)(v10 + 8) - (unsigned __int16)*a2 - *(unsigned __int16*)(v10 + 10) > v11)
							{
								v12 = *(_BYTE*)(a1 + 90);
								v13 = *(unsigned int*)(a1 + 24);
								v16 = 0i64;
								result = sub_140843FB0(101.0, a4, v13, v12 & 1, (v12 & 2) != 0, &v16, 0);
								if (!v16
									|| (v14 = (*(__int64 (**)(void))(*(_QWORD*)v16 + 256i64))(),
										result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 256i64))(a1),
										v14 == result))
								{
									++* a2;
								}
							}
						}
					}
				}
				if (!*(_WORD*)(v10 + 8) && !*(_WORD*)(v10 + 10))
				{
					sub_140852150((__int64*)v10);
					result = sub_140855300(*(_QWORD*)(a1 + 56), a4);
					v15 = *(_QWORD*)(a1 + 56);
					if (!*(_WORD*)(v15 + 72)
						&& !*(_WORD*)(v15 + 74)
						&& !*(_WORD*)(v15 + 76)
						&& !*(_WORD*)(v15 + 78)
						&& !*(_QWORD*)(v15 + 24))
					{
						result = *(_QWORD*)v15;
						if (*(_QWORD*)(v15 + 8) == *(_QWORD*)v15)
							return sub_1408520B0(a1);
					}
				}
			}
		}
	}
	return result;
}

