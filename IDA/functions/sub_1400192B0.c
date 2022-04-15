#include "../winhttp.h"

//----- (00000001400192B0) ----------------------------------------------------
__int64 __fastcall sub_1400192B0(__int64 a1)
{
	__int64* v1; // rdx
	int v2; // eax
	double v3; // xmm0_8
	int v4; // edx
	float v5; // xmm2_4
	int v6; // eax
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	int v9; // [rsp+28h] [rbp-10h]
	__int64 v10; // [rsp+48h] [rbp+10h] BYREF

	v1 = (__int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(__int64**)(a1 + 24);
	v2 = *((_DWORD*)v1 + 2);
	if (v2 == 3)
		goto LABEL_7;
	if (v2 == 4 && sub_14005AC80((char*)(*v1 + 32), (unsigned __int64*)&v10))
	{
		v9 = 3;
		v1 = &v8;
		v8 = v10;
	LABEL_7:
		v3 = *(double*)v1;
		goto LABEL_8;
	}
	v3 = 0.0;
LABEL_8:
	v4 = dword_140C3B3F0;
	v6 = dword_140C3B3F0;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B3F0)
		v6 = *(_DWORD*)qword_140C63750;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B3F0)
		v4 = *(_DWORD*)qword_140C63750;
	v5 = v3;
	sub_14001A820((__int64)&off_140C3B3E0, v4, v5 + *((float*)&off_140C3B3E0 + v6 + 8));
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C3B3E0: using guessed type __int64 (__fastcall *off_140C3B3E0)();
// 140C3B3F0: using guessed type int dword_140C3B3F0;
// 140C63750: using guessed type __int64 qword_140C63750;

