#include "../winhttp.h"

//----- (000000014005AD40) ----------------------------------------------------
signed __int64 __fastcall sub_14005AD40(__int64 a1, unsigned __int64* a2)
{
	__int64 v2; // rdi
	unsigned __int64 v4; // r8
	__int64 v5; // rax
	signed __int64 result; // rax
	int v7; // edx
	int v8; // edx

	v2 = *(_QWORD*)(a1 + 16);
	v4 = -1i64;
	do
		++v4;
	while (*((_BYTE*)a2 + v4));
	v5 = sub_140062650(a1, a2, v4);
	*(_DWORD*)(v2 + 8) = 4;
	*(_QWORD*)v2 = v5;
	result = *(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16);
	if (result <= 16)
	{
		v7 = *(_DWORD*)(a1 + 88);
		if (v7 < 1)
			v8 = v7 + 1;
		else
			v8 = 2 * v7;
		result = sub_140061210(a1, v8);
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}

