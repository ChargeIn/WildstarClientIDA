#include "../winhttp.h"

//----- (00000001400583A0) ----------------------------------------------------
_BOOL8 __fastcall sub_1400583A0(__int64 a1, int a2)
{
	_DWORD* v2; // rax
	int v3; // ecx
	unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

	v2 = sub_1400580E0(a1, a2);
	v3 = v2[2];
	return v3 == 3 || v3 == 4 && sub_14005AC80((char*)(*(_QWORD*)v2 + 32i64), &v5);
}

