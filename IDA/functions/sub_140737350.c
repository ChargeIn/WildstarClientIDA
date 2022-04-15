#include "../winhttp.h"

//----- (0000000140737350) ----------------------------------------------------
__int64 __fastcall sub_140737350(__int64 a1)
{
	__int64* v1; // rdx
	__int64 v2; // rbx
	int v3; // eax
	unsigned int v4; // r8d
	__int64 v5; // rax
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]
	__int64 v9; // [rsp+48h] [rbp+10h] BYREF

	v1 = (__int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(__int64**)(a1 + 24);
	v2 = 0i64;
	v3 = *((_DWORD*)v1 + 2);
	if (v3 == 3)
		goto LABEL_7;
	if (v3 == 4 && sub_14005AC80((char*)(*v1 + 32), (unsigned __int64*)&v9))
	{
		v8 = 3;
		v1 = &v7;
		v7 = v9;
	LABEL_7:
		v4 = (int)*(double*)v1;
		goto LABEL_8;
	}
	v4 = 0;
LABEL_8:
	if (qword_140C7DE20)
	{
		while (1)
		{
			v5 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
			if (*(_DWORD*)(v5 + 16) == 7)
				break;
			if (++v2 >= (unsigned __int64)qword_140C7DE20)
				return 0i64;
		}
		if (v5)
			sub_14057FE90(*(__int64**)(qword_140C7DE18 + 8 * v2), v4);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

