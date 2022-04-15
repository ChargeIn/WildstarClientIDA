#include "../winhttp.h"

//----- (0000000140512990) ----------------------------------------------------
__int64 __fastcall sub_140512990(__int64 a1)
{
	__int64* v1; // rdx
	int v2; // eax
	__int64 v4; // [rsp+20h] [rbp-18h] BYREF
	int v5; // [rsp+28h] [rbp-10h]
	__int64 v6; // [rsp+48h] [rbp+10h] BYREF

	v1 = (__int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(__int64**)(a1 + 24);
	v2 = *((_DWORD*)v1 + 2);
	if (v2 == 3)
		goto LABEL_7;
	if (v2 == 4 && sub_14005AC80((char*)(*v1 + 32), (unsigned __int64*)&v6))
	{
		v5 = 3;
		v1 = &v4;
		v4 = v6;
	LABEL_7:
		dword_140C7D62C += (int)*(double*)v1;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C7D62C: using guessed type int dword_140C7D62C;

