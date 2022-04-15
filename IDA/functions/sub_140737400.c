#include "../winhttp.h"

//----- (0000000140737400) ----------------------------------------------------
__int64 __fastcall sub_140737400(_QWORD* a1)
{
	char* v1; // rax
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]

	v1 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v5, v1);
	v2 = 0i64;
	if (qword_140C7DE20)
	{
		while (1)
		{
			v3 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
			if (*(_DWORD*)(v3 + 16) == 7)
				break;
			if (++v2 >= (unsigned __int64)qword_140C7DE20)
				goto LABEL_7;
		}
		if (v3)
			sub_14057FF10((__int64*)v3, v6);
	}
LABEL_7:
	if (v6)
		sub_14018B900(v6, 0);
	return 0i64;
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

