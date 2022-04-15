#include "../winhttp.h"

//----- (00000001406CBC30) ----------------------------------------------------
void __fastcall sub_1406CBC30(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rbx
	int i; // esi
	unsigned int v9; // edx
	__int64 v10; // rdx

	*a1 = off_140B70C00;
	v2 = a1[199];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v3 = a1[196];
	if (v3)
		sub_14018B900(v3, 0);
	v4 = a1[192];
	if (v4)
		sub_14018B900(v4, 0);
	v5 = a1[188];
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a1[184];
	if (v6)
		sub_14018B900(v6, 0);
	v7 = a1 + 183;
	for (i = 5; i >= 0; --i)
	{
		v9 = *((_DWORD*)v7 - 1);
		v7 = (_QWORD*)((char*)v7 - 4);
		sub_1401429A0(qword_140C63678, v9);
	}
	sub_1400C4170((__int64)(a1 + 128));
	sub_1400C6030((__int64)a1, v10);
}
// 1406CBCF5: variable 'v10' is possibly undefined
// 140B70C00: using guessed type __int64 (__fastcall *off_140B70C00[25])();
// 140C63678: using guessed type __int64 qword_140C63678;

