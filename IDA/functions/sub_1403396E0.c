#include "../winhttp.h"

//----- (00000001403396E0) ----------------------------------------------------
__int64 __fastcall sub_1403396E0(__int64 a1, _QWORD** a2, _QWORD* a3)
{
	_QWORD* v3; // rcx
	_QWORD* v6; // rbx
	__int64 v7; // rax

	v3 = *a2;
	if (a3)
	{
		sub_140337F20(v3 + 48, a3);
		v6 = *a2;
		v7 = sub_140337C90(a3);
		++v6[59];
		v6[55] += v7;
		++v6[58];
		v3 = *a2;
	}
	if (v3)
		(*(void(__fastcall**)(_QWORD*))(*v3 + 8i64))(v3);
	return 0i64;
}

