#include "../winhttp.h"

//----- (0000000140787B10) ----------------------------------------------------
__int64 __fastcall sub_140787B10(__int64 a1, __int64 a2)
{
	unsigned int v3; // ecx
	int v4; // ebx
	_DWORD* v5; // rax
	unsigned int v6; // edi

	*(_QWORD*)(a1 + 8) = a2;
	v3 = *(_DWORD*)(a2 + 20);
	if (!v3)
		return 0i64;
	v4 = 0;
	v5 = (_DWORD*)sub_14024DB80(v3);
	if (v5)
	{
		do
		{
			if ((unsigned int)++v4 >= 0x3E8)
				break;
			*(_DWORD*)(a1 + 16) = *v5;
			v6 = v5[2];
			if (!v6)
				break;
			if (qword_140C63840)
			{
				v5 = (_DWORD*)qword_140C63840(off_140A6E3E8, v6, qword_140C63858);
			}
			else
			{
				if (dword_140C64634 || (int)sub_14024D920() < 0)
					break;
				v5 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(
					qword_140C64270,
					v6);
			}
		} while (v5);
		if (v4 == 1000)
			*(_DWORD*)(a1 + 16) = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 20i64);
	}
	return 0i64;
}
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;

