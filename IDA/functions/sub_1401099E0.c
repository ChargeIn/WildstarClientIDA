#include "../winhttp.h"

//----- (00000001401099E0) ----------------------------------------------------
bool __fastcall sub_1401099E0(__int64 a1)
{
	__int64 v1; // r9
	double v3; // xmm1_8
	__int64* v4; // rax
	float v5; // [rsp+30h] [rbp+8h] BYREF

	v1 = *(_QWORD*)a1;
	if (!*(_QWORD*)a1)
		return 0;
	if (!(unsigned int)((*(_QWORD*)(v1 + 64) - *(_QWORD*)(v1 + 56)) / 304i64))
		return 1;
	*(_QWORD*)&v3 = (unsigned int)dword_140C63664;
	*(float*)&v3 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 8)) * *(float*)(a1 + 12);
	v4 = (__int64*)sub_140101180(v1, v3, &v5);
	return v4 && *v4 && sub_1400FE680(*v4) != 0;
}
// 140C63664: using guessed type int dword_140C63664;

