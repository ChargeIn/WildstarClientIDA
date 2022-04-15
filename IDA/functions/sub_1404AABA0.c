#include "../winhttp.h"

//----- (00000001404AABA0) ----------------------------------------------------
__int64 __fastcall sub_1404AABA0(__int64 a1)
{
	unsigned int v1; // ebx
	unsigned int v3; // eax
	unsigned int v4; // edi
	__int64 v6; // rax
	unsigned __int64 v7; // rdx
	int v8; // [rsp+38h] [rbp+10h] BYREF

	v1 = 0;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A692C0, qword_140C63858);
	}
	else
	{
		if (dword_140C63DC4 || (int)sub_1401EB000() < 0)
		{
			v4 = 0;
			goto LABEL_9;
		}
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64D80 + 40i64))(qword_140C64D80);
	}
	v4 = v3;
	if (v3 > 0xC)
		return 2147500037i64;
LABEL_9:
	v8 = 0;
	sub_1404AADC0((__int64*)(a1 + 8), v4, &v8);
	if (v4)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C63DC4 && (int)sub_1401EB000() >= 0)
			{
				v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D80 + 32i64))(qword_140C64D80, v1);
			LABEL_15:
				if (v6)
				{
					v7 = *(unsigned int*)(v6 + 4);
					if (v7 < *(_QWORD*)(a1 + 16))
						*(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v7) = *(_DWORD*)(v6 + 8);
				}
			}
			if (++v1 >= v4)
				return 0i64;
		}
		v6 = qword_140C63848(off_140A692C0, v1, qword_140C63858);
		goto LABEL_15;
	}
	return 0i64;
}
// 140A692C0: using guessed type wchar_t *off_140A692C0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DC4: using guessed type int dword_140C63DC4;
// 140C64D80: using guessed type __int64 qword_140C64D80;

