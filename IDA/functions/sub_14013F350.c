#include "../winhttp.h"

//----- (000000014013F350) ----------------------------------------------------
char __fastcall sub_14013F350(__int64 a1, _QWORD* a2)
{
	__int64 v3; // rax
	__int64(__fastcall * **v4)(_QWORD); // rdi
	__int64 v5; // rsi
	__int64 v6; // rbx
	__int64 v7; // rax

	v3 = sub_14013F060(a1);
	v4 = (__int64(__fastcall***)(_QWORD))a2[2];
	v5 = v3;
	if ((*(__int64(__fastcall**)(_QWORD*))(*a2 + 48i64))(a2))
		v6 = 0i64;
	else
		v6 = sub_1401A4F40((__int64)(a2 + 3));
	v7 = (**v4)(v4);
	sub_140140590(v5, v7, v6);
	return 1;
}

