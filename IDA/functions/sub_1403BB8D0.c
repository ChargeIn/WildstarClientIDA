#include "../winhttp.h"

//----- (00000001403BB8D0) ----------------------------------------------------
__int64 sub_1403BB8D0()
{
	__int64 v0; // rbx
	unsigned int v1; // esi
	__int64 v2; // rax
	int v3; // edi
	_QWORD* v5; // rbx

	v0 = qword_140C65898;
	v1 = 0;
	if ((dword_140DC2278 & 1) != 0)
	{
		v3 = dword_140DC227C;
	}
	else
	{
		dword_140DC2278 |= 1u;
		v2 = sub_140200220(0x41Eu);
		if (v2)
		{
			v3 = *(_DWORD*)(v2 + 4);
			dword_140DC227C = v3;
		}
		else
		{
			v3 = 0;
			dword_140DC227C = 0;
		}
	}
	if (!v3)
		return 0i64;
	v5 = *(_QWORD**)(*(_QWORD*)(v0 + 25744) + 5568i64);
	if (v5)
	{
		while ((*(unsigned int(__fastcall**)(_QWORD*))(*v5 + 8i64))(v5) != v3)
		{
			v5 = (_QWORD*)v5[2];
			if (!v5)
				return 0i64;
		}
		return 1;
	}
	return v1;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC2278: using guessed type int dword_140DC2278;
// 140DC227C: using guessed type int dword_140DC227C;

