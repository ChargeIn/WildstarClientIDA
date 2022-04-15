#include "../winhttp.h"

//----- (00000001400B3360) ----------------------------------------------------
int __fastcall sub_1400B3360(int* a1, unsigned __int16* a2, int a3)
{
	_DWORD* StackBase; // rbx
	int v6; // ebp
	__int64 v7; // rsi
	int** v8; // rax
	int result; // eax
	int* v10; // [rsp+40h] [rbp+8h] BYREF
	__int64 v11; // [rsp+48h] [rbp+10h] BYREF

	v10 = a1;
	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v6 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	if (a2 && *a2)
	{
		v7 = (*(__int64(__fastcall**)(_QWORD, __int64*))(*(_QWORD*)xmmword_140C67080 + 104i64))(
			xmmword_140C67080,
			&qword_140C67148);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 48i64))(v7, 5i64);
		dword_140C67240 = 5;
		v8 = sub_14018DD50(&v10, a2);
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v7 + 56i64))(v7, *v8);
		if (v10)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
		dword_140C67238 = a3;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		result = sub_1400B23B0((__int64)&qword_140C66F70, 12);
		*(StackBase - 1) = v6;
	}
	else
	{
		sub_1400B23B0((__int64)&qword_140C66F70, 17);
		v11 = 0x141D0DDF0i64;
		result = sub_1401A3130(95, 0, &v11);
		*(StackBase - 1) = v6;
	}
	return result;
}
// 140C66F70: using guessed type __int64 qword_140C66F70;
// 140C67080: using guessed type __int128 xmmword_140C67080;
// 140C67148: using guessed type __int64 qword_140C67148;
// 140C67238: using guessed type int dword_140C67238;
// 140C67240: using guessed type int dword_140C67240;

