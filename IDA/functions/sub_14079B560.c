#include "../winhttp.h"

//----- (000000014079B560) ----------------------------------------------------
void __fastcall sub_14079B560(_QWORD* a1)
{
	void* v2; // rcx
	void* v3; // rcx
	void* v4; // rcx

	v2 = (void*)a1[26];
	if (v2 != &unk_140C665F8)
		sub_14018B900((__int64)v2, 0);
	v3 = (void*)a1[24];
	if (v3 != &unk_140C66620)
		sub_14018B900((__int64)v3, 0);
	v4 = (void*)a1[25];
	if (v4 != &unk_140C66640)
		sub_14018B900((__int64)v4, 0);
}

