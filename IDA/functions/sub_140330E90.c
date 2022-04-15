//----- (0000000140330E90) ----------------------------------------------------
__int64 __fastcall sub_140330E90(unsigned __int64* a1, int** a2, int a3)
{
	unsigned __int64 v6; // rsi
	int* v7; // r15
	__int64 result; // rax
	int v9; // r14d
	__int64 v10; // rcx
	__int64 v11; // rdi
	__int64 v12; // rcx
	bool v13; // zf
	int* v14; // rdx
	__int64 v15; // [rsp+50h] [rbp+8h] BYREF

	v6 = 0i64;
	v7 = sub_14018B280(48i64, 0);
	if (v7)
	{
		*(_QWORD*)v7 = off_140B64648;
		v7[2] = 1;
		*((_QWORD*)v7 + 3) = 0i64;
		*((_QWORD*)v7 + 4) = 0i64;
		*((_QWORD*)v7 + 5) = 0i64;
	}
	else
	{
		v7 = 0i64;
	}
	sub_140334160((_QWORD*)v7 + 2, a1[16]);
	result = sub_14018CDF0();
	v9 = result;
	if (a1[17])
	{
		do
		{
			v10 = *(_QWORD*)(a1[18] + 8 * v6);
			if (v10)
			{
				do
				{
					v11 = *(_QWORD*)(v10 + 8);
					v12 = v10 + 104;
					v13 = *(_QWORD*)(v12 + 24) == 0i64;
					v15 = v12;
					if (!v13)
					{
						if (!a3 || (result = (unsigned int)(v9 - *(_DWORD*)(v12 + 4)), (unsigned int)result <= 0x2710))
						{
							v14 = (int*)*((_QWORD*)v7 + 4);
							if (v14 == *((int**)v7 + 5))
							{
								result = (__int64)sub_14010A1C0((_QWORD*)v7 + 2, v14, &v15);
							}
							else
							{
								if (v14)
									*(_QWORD*)v14 = v12;
								*((_QWORD*)v7 + 4) += 8i64;
							}
						}
					}
					v10 = v11;
				} while (v11);
			}
			++v6;
		} while (v6 < a1[17]);
	}
	*a2 = v7;
	return result;
}
// 140B64648: using guessed type __int64 (__fastcall *off_140B64648[5])();

