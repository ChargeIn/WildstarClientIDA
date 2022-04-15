//----- (00000001403CACD0) ----------------------------------------------------
unsigned int* __fastcall sub_1403CACD0(__int64 a1)
{
	unsigned int* result; // rax
	unsigned int v2; // ebx
	unsigned int v4; // edi

	result = (unsigned int*)qword_140C63838;
	v2 = 0;
	if (qword_140C63838)
	{
		result = (unsigned int*)qword_140C63838(off_140A6A328, qword_140C63858);
	}
	else
	{
		if (dword_140C6546C)
		{
			v4 = 0;
			goto LABEL_9;
		}
		result = (unsigned int*)sub_1401FEEC0();
		if ((int)result < 0)
		{
			v4 = 0;
			goto LABEL_9;
		}
		result = (unsigned int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64D20 + 40i64))(qword_140C64D20);
	}
	v4 = (unsigned int)result;
LABEL_9:
	if (v4)
	{
		while (1)
		{
			result = (unsigned int*)qword_140C63848;
			if (qword_140C63848)
			{
				result = (unsigned int*)qword_140C63848(off_140A6A328, v2, qword_140C63858);
			}
			else
			{
				if (dword_140C6546C)
					return result;
				result = (unsigned int*)sub_1401FEEC0();
				if ((int)result < 0)
					return result;
				result = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D20 + 32i64))(
					qword_140C64D20,
					v2);
			}
			if (result)
			{
				result = (unsigned int*)sub_1403CADA0(a1, *result);
				if (++v2 < v4)
					continue;
			}
			return result;
		}
	}
	return result;
}
// 140A6A328: using guessed type wchar_t *off_140A6A328[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64D20: using guessed type __int64 qword_140C64D20;
// 140C6546C: using guessed type int dword_140C6546C;

