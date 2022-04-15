#include "../winhttp.h"

//----- (0000000140572120) ----------------------------------------------------
void __fastcall sub_140572120(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rdi
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // eax
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v8 = a1;
	v2 = qword_140C65970;
	sub_140481460(qword_140C65970 + 128, a2);
	v4 = *(_QWORD*)(v2 + 168);
	v5 = *(_QWORD*)(v4 + 8);
	v6 = v4;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < *a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v4 || (v7 = *(_DWORD*)(v6 + 32), v8 = v6, *a2 < v7))
		v8 = v4;
	if (v8 != v4)
		sub_140481F20(v2 + 160, &v8);
}
// 140C65970: using guessed type __int64 qword_140C65970;

