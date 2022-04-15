#include "../winhttp.h"

//----- (00000001405C2D40) ----------------------------------------------------
__int64 __fastcall sub_1405C2D40(__int64 a1, int a2, int a3)
{
	unsigned int i; // ebx
	unsigned int v6; // eax
	__int64 result; // rax

	for (i = 0; ; ++i)
	{
		if (qword_140C63838)
		{
			v6 = qword_140C63838(off_140A6B588, qword_140C63858);
			goto LABEL_7;
		}
		if (dword_140C6558C || (int)sub_140215420() < 0)
			break;
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64D10 + 40i64))(qword_140C64D10);
	LABEL_7:
		if (i >= v6)
			return 0i64;
		if (qword_140C63848)
		{
			result = qword_140C63848(off_140A6B588, i, qword_140C63858);
		}
		else
		{
			if (dword_140C6558C || (int)sub_140215420() < 0)
				continue;
			result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D10 + 32i64))(qword_140C64D10, i);
		}
		if (result && *(_DWORD*)(result + 4) == a2 && *(_DWORD*)(result + 48) == a3)
			return result;
	}
	return 0i64;
}
// 140A6B588: using guessed type wchar_t *off_140A6B588[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64D10: using guessed type __int64 qword_140C64D10;
// 140C6558C: using guessed type int dword_140C6558C;

