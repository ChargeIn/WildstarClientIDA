//----- (00000001400B3480) ----------------------------------------------------
__int64 __fastcall sub_1400B3480(int* a1, unsigned __int16* a2, int a3)
{
	_DWORD* StackBase; // rbx
	int v5; // ebp
	__int64 v6; // rsi
	int** v7; // rax
	__int64 result; // rax
	int* v9; // [rsp+40h] [rbp+8h] BYREF
	__int64 v10; // [rsp+48h] [rbp+10h] BYREF

	v9 = a1;
	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v5 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	if (a2 && *a2)
	{
		dword_140C6723C = a3;
		v6 = (*(__int64(__fastcall**)(_QWORD, __int64*))(*(_QWORD*)xmmword_140C67080 + 104i64))(
			xmmword_140C67080,
			&qword_140C67148);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 48i64))(v6, 8i64);
		dword_140C67240 = 8;
		v7 = sub_14018DD50(&v9, a2);
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v6 + 56i64))(v6, *v7);
		if (v9)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(StackBase - 1) = v5;
	}
	else
	{
		sub_1400B23B0((__int64)&qword_140C66F70, 37);
		v10 = 0x141D0DD70i64;
		result = sub_1401A3130(95, 0, &v10);
		*(StackBase - 1) = v5;
	}
	return result;
}
// 140C66F70: using guessed type __int64 qword_140C66F70;
// 140C67080: using guessed type __int128 xmmword_140C67080;
// 140C67148: using guessed type __int64 qword_140C67148;
// 140C6723C: using guessed type int dword_140C6723C;
// 140C67240: using guessed type int dword_140C67240;

