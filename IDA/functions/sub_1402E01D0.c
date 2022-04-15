//----- (00000001402E01D0) ----------------------------------------------------
__int64 __fastcall sub_1402E01D0(_QWORD* a1, unsigned __int64 a2, __int64* a3)
{
	__int64 v7; // rbx
	int* v8; // rax
	__int64 v9; // rcx
	int v10; // esi
	void(__fastcall * **v11)(_QWORD); // [rsp+50h] [rbp+18h] BYREF

	if (!a3)
		return 2147942487i64;
	if (a2 >= a1[675])
		return 2147500037i64;
	if ((unsigned int)sub_1402DD480(a1[2] + 1744i64, *(_QWORD*)(a1[674] + 8 * a2), &v11))
	{
		v7 = (__int64)v11;
		(**v11)(v11);
	LABEL_7:
		*a3 = v7;
		return 0i64;
	}
	v8 = sub_14018B280(768i64, 1u);
	v7 = (__int64)v8;
	if (!v8)
		return 2147942414i64;
	v9 = a1[2];
	*(_QWORD*)v8 = off_140B63310;
	*((_OWORD*)v8 + 38) = xmmword_140B7B240;
	v8[2] = 1;
	*((_QWORD*)v8 + 2) = v9;
	_InterlockedIncrement((volatile signed __int32*)(v9 + 12));
	*((_QWORD*)v8 + 3) = 0i64;
	*((_QWORD*)v8 + 4) = 0i64;
	*((_QWORD*)v8 + 85) = 0i64;
	*((_QWORD*)v8 + 86) = 0i64;
	*((_QWORD*)v8 + 87) = 0i64;
	*((_QWORD*)v8 + 88) = 0i64;
	*((_QWORD*)v8 + 89) = 0i64;
	*((_QWORD*)v8 + 90) = 0i64;
	v8[13] = 0;
	sub_1407E4830(v8 + 19, 0i64, 0x208ui64);
	*(_DWORD*)(v7 + 624) = 1065353216;
	*(_OWORD*)(v7 + 640) = xmmword_140B7B240;
	v10 = sub_1402E3E00(v7, *(_DWORD**)(a1[674] + 8 * a2), *(void(__fastcall****)(_QWORD))(a1[676] + 8 * a2));
	if (v10 >= 0)
		goto LABEL_7;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	return (unsigned int)v10;
}
// 140B63310: using guessed type __int64 (__fastcall *off_140B63310[47])();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;

