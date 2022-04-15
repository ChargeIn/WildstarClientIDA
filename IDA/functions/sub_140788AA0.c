#include "../winhttp.h"

//----- (0000000140788AA0) ----------------------------------------------------
__int64 __fastcall sub_140788AA0(_QWORD* a1, int a2)
{
	_QWORD* v5; // rax
	_QWORD* v6; // rbx
	__int64 v7; // rax
	unsigned int v8; // edx

	if ((*(unsigned int(__fastcall**)(_QWORD*))(*a1 + 96i64))(a1))
		return 1i64;
	v5 = (_QWORD*)a1[5];
	v6 = (_QWORD*)*v5;
	if ((_QWORD*)*v5 == v5)
		return 0i64;
	while (1)
	{
		v7 = v6[2];
		if (!v7 || (*(_DWORD*)(v7 + 16) & 1) == 0)
		{
			v8 = **(_DWORD**)(v6[3] + 8i64);
			if (v8 == a2 || (unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, v8) != 3)
				break;
		}
		v6 = (_QWORD*)*v6;
		if (v6 == (_QWORD*)a1[5])
			return 0i64;
	}
	return 1i64;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

