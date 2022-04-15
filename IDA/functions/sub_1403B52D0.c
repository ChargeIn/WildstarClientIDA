#include "../winhttp.h"

//----- (00000001403B52D0) ----------------------------------------------------
__int64 __fastcall sub_1403B52D0(__int64 a1, char a2)
{
	__int64 v3; // rcx
	_QWORD* v5; // rcx
	_QWORD* v6; // rcx

	v3 = a1 + 72;
	*(_QWORD*)(v3 - 72) = off_140B6E4A0;
	sub_140195D70(v3);
	*(_DWORD*)(a1 + 72) = 0;
	v5 = *(_QWORD**)(a1 + 88);
	if (v5)
		*v5 = *(_QWORD*)(a1 + 96);
	v6 = *(_QWORD**)(a1 + 96);
	if (v6)
		*v6 = *(_QWORD*)(a1 + 88);
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B6E4A0: using guessed type __int64 (__fastcall *off_140B6E4A0[19])();

