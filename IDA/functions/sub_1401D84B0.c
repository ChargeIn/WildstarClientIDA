#include "../winhttp.h"

//----- (00000001401D84B0) ----------------------------------------------------
__int64 __fastcall sub_1401D84B0(__int64 a1, void(__fastcall*** a2)(_QWORD), int** a3, __int64 a4)
{
	unsigned __int64 v9; // rsi
	int* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // r8
	_QWORD* v13; // rdi

	if ((*(_BYTE*)(a1 + 544) & 1) == 0)
		return 2147942405i64;
	if (!a2 || !a3)
		return 2147942487i64;
	v9 = *(_QWORD*)(a1 + 568) + ((__int64(__fastcall*)(_QWORD))(*a2)[2])(a2);
	if (v9 > *(_QWORD*)(a1 + 552))
		return 2147500037i64;
	v10 = sub_14018B280(200i64, 0);
	if (v10)
		v13 = sub_1401D91C0(v10, a1, *(_QWORD*)(a1 + 568), a2, a4);
	else
		v13 = 0i64;
	sub_14019E010(v11, (void(__fastcall***)(_QWORD))v13, v12, 0i64, a3);
	(*(void(__fastcall**)(_QWORD*))(*v13 + 8i64))(v13);
	*(_QWORD*)(a1 + 568) = v9;
	return 0i64;
}
// 1401D8571: variable 'v11' is possibly undefined
// 1401D8571: variable 'v12' is possibly undefined

