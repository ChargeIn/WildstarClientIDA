#include "../winhttp.h"

//----- (00000001402891F0) ----------------------------------------------------
__int64 __fastcall sub_1402891F0(__int64 a1)
{
	int v1; // eax
	unsigned int v3; // edi
	__int64 v4; // rbx
	int v6; // [rsp+20h] [rbp-18h] BYREF

	v1 = -1;
	if ((*(_BYTE*)(a1 + 36) & 1) != 0)
		v1 = 0;
	v6 = v1;
	(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 32i64))(a1, &v6);
	v3 = *(_DWORD*)(a1 + 32);
	v4 = *(_QWORD*)(a1 + 8);
	if (v3 >= *(_DWORD*)(v4 + 76))
		return 0i64;
	v6 = 0;
	if ((unsigned int)sub_140288B50(v4))
		sub_140288D50(v4, v3, (__int64)&v6);
	return *(_QWORD*)(v4 + 104);
}
// 140289219: conditional instruction was optimized away because eax.4 is in (==0|==FFFFFFFF)

