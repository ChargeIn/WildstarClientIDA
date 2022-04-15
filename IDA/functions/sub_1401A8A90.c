#include "../winhttp.h"

//----- (00000001401A8A90) ----------------------------------------------------
char __fastcall sub_1401A8A90(_BYTE* a1, _QWORD* a2, __int64 a3)
{
	__int64(__fastcall * **v4)(_QWORD); // rcx
	__int64 v7; // rax
	char v8; // bp
	__int64 v9; // rax
	_WORD* v10; // rbx
	__int64 v11; // rax

	v4 = (__int64(__fastcall***)(_QWORD))a2[2];
	if (v4 && (v7 = (**v4)(v4)) != 0)
		v8 = (*(__int64(__fastcall**)(_BYTE*, __int64))(*(_QWORD*)a1 + 80i64))(a1, v7);
	else
		v8 = a1[137];
	if ((*(__int64(__fastcall**)(_QWORD*))(*a2 + 48i64))(a2))
		v9 = 0i64;
	else
		v9 = sub_1401A4F40((__int64)(a2 + 3));
	sub_1401A86E0((__int64)a1, v9, v8);
	for (; a3; a3 = *(_QWORD*)(a3 + 56))
	{
		v10 = (_WORD*)sub_1401A4F40(a3 + 32);
		v11 = sub_1401A4F40(a3 + 8);
		sub_1401A8480((__int64)a1, (__int64)L" %s=\"", v11);
		sub_1401A8580((__int64)a1, v10, 0);
		sub_1401A8480((__int64)a1, (__int64)&unk_1409E2524);
	}
	return 1;
}
// 140A453E0: using guessed type wchar_t aS_22[6];

