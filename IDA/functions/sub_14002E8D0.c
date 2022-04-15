//----- (000000014002E8D0) ----------------------------------------------------
__int64 __fastcall sub_14002E8D0(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // ebp
	unsigned int v4; // edi
	__int64 v5; // rcx
	unsigned int* v6; // rbx
	unsigned int v7; // edx
	__int64 v8; // rcx
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	unsigned __int64 v11; // r8
	__int64 v12; // r9
	_DWORD* v13; // rcx
	int v14; // edx
	__int64 v15; // rcx
	unsigned int v16; // [rsp+38h] [rbp+10h] BYREF

	result = (__int64)qword_140C63838;
	if (qword_140C63838)
	{
		result = qword_140C63838(off_140A696B0, qword_140C63858);
	}
	else
	{
		if (dword_140C64324)
		{
			v3 = 0;
			goto LABEL_9;
		}
		result = sub_1401EFC80();
		if ((int)result < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63F68 + 40i64))(qword_140C63F68);
	}
	v3 = result;
LABEL_9:
	v4 = 0;
	if (v3)
	{
		while (1)
		{
			result = (__int64)qword_140C63848;
			if (qword_140C63848)
				break;
			if (!dword_140C64324)
			{
				result = sub_1401EFC80();
				if ((int)result >= 0)
				{
					result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63F68 + 32i64))(
						qword_140C63F68,
						v4);
					goto LABEL_15;
				}
			}
		LABEL_27:
			if (++v4 >= v3)
				return result;
		}
		result = qword_140C63848(off_140A696B0, v4, qword_140C63858);
	LABEL_15:
		v6 = (unsigned int*)result;
		if (result)
		{
			if (*(_DWORD*)(result + 88))
			{
				result = sub_1400322E0(v5, *(_DWORD*)(result + 8), *(_DWORD*)(a1 + 4860), &v16);
				if ((_DWORD)result)
				{
					v7 = v6[27];
					v8 = v6[1] + 23i64 * v6[2];
					result = 3 * v8;
					if (v7)
					{
						*(_DWORD*)(a1 + 12 * v8 + 4) = v7;
						v9 = *(_QWORD*)(qword_140C635F0 + 5584);
						v10 = 0i64;
						v11 = *(_QWORD*)(v9 + 160);
						if (v11)
						{
							v12 = *(_QWORD*)(v9 + 152);
							v13 = (_DWORD*)(v12 + 8);
							while (*v13 != v6[27])
							{
								++v10;
								v13 += 4;
								if (v10 >= v11)
									goto LABEL_23;
							}
							v14 = *(_DWORD*)(v12 + 16 * v10 + 12);
						}
						else
						{
						LABEL_23:
							v14 = 0;
						}
						v15 = v6[1] + 23i64 * v6[2];
						result = 3 * v15;
						*(_DWORD*)(a1 + 12 * v15 + 8) |= v14;
					}
					else
					{
						*(_DWORD*)(a1 + 12 * v8 + 8) = 1;
					}
				}
			}
		}
		goto LABEL_27;
	}
	return result;
}
// 14002E9AE: variable 'v5' is possibly undefined
// 140A696B0: using guessed type wchar_t *off_140A696B0[2];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F68: using guessed type __int64 qword_140C63F68;
// 140C64324: using guessed type int dword_140C64324;

