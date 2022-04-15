#include "../winhttp.h"

//----- (0000000140845B80) ----------------------------------------------------
void __fastcall sub_140845B80(__int64 a1)
{
	char v1; // di
	__int64 v3; // rbx
	__int64 v4; // rbx
	__int64 v5; // rbx
	float v6; // xmm0_4
	__int64 v7; // rax
	int v8; // xmm1_4

	v1 = 0;
	v3 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 16i64);
	if (v3)
		v4 = *(_QWORD*)(v3 + 24);
	else
		v4 = 0i64;
	if ((*(_BYTE*)(v4 + 382) & 0x40) == 0)
		sub_1408605D0(v4);
	v5 = *(_QWORD*)(v4 + 496);
	if (*(float*)(v5 + 16) > 0.1 && **(_QWORD**)(a1 + 80) && (*(_QWORD*)(v5 + 24) || sub_140870740(v5)))
	{
		v6 = *(float*)(v5 + 16);
		v7 = *(_QWORD*)(v5 + 24);
		v8 = 0;
		if (v6 < 0.0 || (v8 = 1120403456, v6 > 100.0))
			v6 = *(float*)&v8;
		if (v6 != *(float*)(v7 + 196))
			v1 = 1;
		*(_BYTE*)(v7 + 206) |= v1;
		*(float*)(v7 + 196) = v6;
		sub_1408718E0(*(__m128**)(v5 + 24), *(__int64**)(a1 + 80));
	}
}

