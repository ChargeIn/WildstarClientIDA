#include "../winhttp.h"

//----- (00000001401E7DE0) ----------------------------------------------------
__int64 __fastcall sub_1401E7DE0(__int64 a1)
{
	__int64* v1; // rdx
	__int64 result; // rax
	__int64* v4; // rdx
	__int64* v5; // rdx
	__int64* v6; // rdx
	__int64* v7; // rdx

	v1 = *(__int64**)(a1 + 48);
	if (v1)
		result = sub_1401E7E50(a1, v1);
	v4 = *(__int64**)(a1 + 56);
	if (v4)
		result = sub_1401E7E50(a1, v4);
	v5 = *(__int64**)(a1 + 72);
	if (v5)
		result = sub_1401E7E50(a1, v5);
	v6 = *(__int64**)(a1 + 80);
	if (v6)
		result = sub_1401E7E50(a1, v6);
	v7 = *(__int64**)(a1 + 88);
	if (v7)
		result = sub_1401E7E50(a1, v7);
	*(_DWORD*)(a1 + 112) = 0;
	return result;
}

