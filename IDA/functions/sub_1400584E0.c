#include "../winhttp.h"

//----- (00000001400584E0) ----------------------------------------------------
__int64 __fastcall sub_1400584E0(__int64 a1, int a2)
{
	__int64* v2; // rax
	int v3; // ecx
	__int64 v5; // [rsp+20h] [rbp-18h] BYREF
	int v6; // [rsp+28h] [rbp-10h]
	__int64 v7; // [rsp+50h] [rbp+18h] BYREF

	v2 = (__int64*)sub_1400580E0(a1, a2);
	v3 = *((_DWORD*)v2 + 2);
	if (v3 == 3)
		return (unsigned int)(int)*(double*)v2;
	if (v3 == 4 && sub_14005AC80((char*)(*v2 + 32), (unsigned __int64*)&v7))
	{
		v6 = 3;
		v2 = &v5;
		v5 = v7;
		return (unsigned int)(int)*(double*)v2;
	}
	return 0i64;
}

