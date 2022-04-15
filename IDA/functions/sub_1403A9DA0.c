//----- (00000001403A9DA0) ----------------------------------------------------
int* __fastcall sub_1403A9DA0(__int64 a1, unsigned int a2, __int64* a3)
{
	int* result; // rax
	unsigned int v6; // r12d
	unsigned int v7; // esi
	__int64 v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rbx
	int* v11; // r15

	result = (int*)qword_140C63838;
	if (qword_140C63838)
	{
		result = (int*)qword_140C63838(off_140A69918, qword_140C63858);
	}
	else
	{
		if (dword_140C64084)
		{
			v6 = 0;
			goto LABEL_9;
		}
		result = (int*)sub_1401F2B40();
		if ((int)result < 0)
		{
			v6 = 0;
			goto LABEL_9;
		}
		result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64540 + 40i64))(qword_140C64540);
	}
	v6 = (unsigned int)result;
LABEL_9:
	v7 = 0;
	if (v6)
	{
		while (!qword_140C63848)
		{
			if (dword_140C64084)
			{
				v9 = 0i64;
			}
			else
			{
				if ((int)sub_1401F2B40() >= 0)
				{
					v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64540 + 32i64))(qword_140C64540, v7);
					goto LABEL_17;
				}
				v9 = 0i64;
			}
		LABEL_18:
			result = (int*)sub_1403C9450(a1, a2, *(_DWORD*)(v9 + 12));
			if ((_DWORD)result)
			{
				v10 = a3[1];
				result = sub_14018DB00(*a3, v10 + 1, 8i64);
				v11 = result;
				*(_QWORD*)&result[2 * v10] = v9;
				if ((int*)*a3 != result)
				{
					result = sub_1407DB590(result, (int*)*a3, 8 * a3[1]);
					a1 = *a3;
					if (*a3)
						result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(a1 - 16) + 8i64))(a1 - 16);
					*a3 = (__int64)v11;
				}
				a3[1] = v10 + 1;
			}
			if (++v7 >= v6)
				return result;
		}
		v8 = qword_140C63848(off_140A69918, v7, qword_140C63858);
	LABEL_17:
		v9 = v8;
		goto LABEL_18;
	}
	return result;
}
// 1403A9E73: variable 'a1' is possibly undefined
// 140A69918: using guessed type wchar_t *off_140A69918[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64084: using guessed type int dword_140C64084;
// 140C64540: using guessed type __int64 qword_140C64540;

