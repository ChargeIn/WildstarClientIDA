#include "../winhttp.h"

//----- (000000014088A1F0) ----------------------------------------------------
__int64 __fastcall sub_14088A1F0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
	__int64 v7; // rax
	_QWORD* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rdi
	unsigned int v11; // edx
	unsigned int v12; // edi
	int v14; // ebx
	int v15[6]; // [rsp+20h] [rbp-18h] BYREF

	v7 = sub_1408819F0(dword_140C10F20, 80i64);
	if (!v7)
		return 2i64;
	v8 = (_QWORD*)sub_14088C840(v7, (__int64)a2, a3, a4);
	if (!v8)
		return 2i64;
	v9 = (*(__int64(__fastcall**)(_QWORD*))(*a2 + 120i64))(a2);
	v10 = v9;
	if (!v9)
	{
	LABEL_15:
		v14 = dword_140C10F20;
		sub_14088C940(v8);
		sub_140881720(v14, (__int64)v8);
		return 2i64;
	}
	if (!(*(unsigned __int8(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 304i64))(v9, 3i64))
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v10 + 312i64))(v10, 3i64);
		goto LABEL_15;
	}
	if (qword_140C629D8)
	{
		a2[15] = qword_140C629D8;
		qword_140C629D8 = (__int64)a2;
	}
	else
	{
		qword_140C629E0 = (__int64)a2;
		qword_140C629D8 = (__int64)a2;
		a2[15] = 0i64;
	}
	sub_14088C4D0((__int64)a2, (__int64)v8);
	v11 = *(_DWORD*)(a3 + 24);
	if (!v11)
		return 2i64;
	v15[0] = 0;
	v12 = sub_14083C300(qword_140C61B80, v11, (__int64)(a2 + 3), v15);
	sub_14088C4C0((__int64)a2, v15[0]);
	if ((v15[0] & 0x20000) != 0 && (unsigned int)sub_14088C5A0((__int64)&unk_140C629F0, *(_DWORD*)(a3 + 24)) != 1)
		sub_14088C4C0((__int64)a2, v15[0] & 0xFFFDFFFF);
	sub_14083BE70(qword_140C61B80, *(_DWORD*)(a3 + 24));
	return v12;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 140C629D8: using guessed type __int64 qword_140C629D8;
// 140C629E0: using guessed type __int64 qword_140C629E0;
// 14088A1F0: using guessed type int var_18[6];

