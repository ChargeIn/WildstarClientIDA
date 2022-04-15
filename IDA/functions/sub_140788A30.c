#include "../winhttp.h"

//----- (0000000140788A30) ----------------------------------------------------
__int64 __fastcall sub_140788A30(__int64 a1, int a2)
{
	_QWORD* v2; // rax
	unsigned int v3; // edi
	_QWORD* v5; // rbx

	v2 = *(_QWORD**)(a1 + 40);
	v3 = 0;
	v5 = (_QWORD*)*v2;
	if ((_QWORD*)*v2 != v2)
	{
		do
		{
			if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v5[3] + 8i64)) == a2)
				++v3;
			v5 = (_QWORD*)*v5;
		} while (v5 != *(_QWORD**)(a1 + 40));
	}
	return v3;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

