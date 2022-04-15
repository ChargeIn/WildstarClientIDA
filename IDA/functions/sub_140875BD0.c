#include "../winhttp.h"

//----- (0000000140875BD0) ----------------------------------------------------
__int64 __fastcall sub_140875BD0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	int v5; // eax
	unsigned int v6; // edx
	int v8; // [rsp+30h] [rbp+8h] BYREF
	int v9; // [rsp+34h] [rbp+Ch]

	v5 = sub_140855A70(a1);
	v6 = *(_DWORD*)(a1 + 56);
	v8 = v5;
	v9 = *(_BYTE*)(a1 + 62) & 0x1F;
	return sub_140837C80(qword_140C61BB0, v6, a3, &v8);
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

