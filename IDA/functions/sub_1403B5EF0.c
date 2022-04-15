#include "../winhttp.h"

//----- (00000001403B5EF0) ----------------------------------------------------
void __fastcall sub_1403B5EF0(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v2; // rax
	__int64 v3; // rcx
	int v4; // eax
	__int64 v5; // [rsp+30h] [rbp+8h] BYREF

	v5 = a1;
	v1 = qword_140C65898;
	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (v2
		&& !*(_DWORD*)(v2 + 684)
		&& (*(_BYTE*)(v2 + 5544) & 2) == 0
		&& !(unsigned int)sub_1405FD420(*(_QWORD*)qword_140C65B80))
	{
		v3 = *(_QWORD*)(v1 + 120);
		LODWORD(v5) = 0;
		if (!v3 || !sub_1403B48B0(v3) || (v4 = sub_1403B5EA0(v1), LODWORD(v5) = 0, v4))
			LODWORD(v5) = 1;
		sub_1403F4900(v1, 0x173u, (__int64)&v5);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;

