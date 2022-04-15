//----- (00000001403400F0) ----------------------------------------------------
__int64 __fastcall sub_1403400F0(__int64 a1, __int64* a2, __int64 a3, unsigned __int64 a4)
{
	int* v7; // rax
	__int64 v8; // rbx
	int v9; // esi

	if (!a4 || !a3 || !a2)
		return 2147942487i64;
	v7 = sub_14018B280(80i64, 0);
	v8 = (__int64)v7;
	if (v7)
	{
		*(_QWORD*)v7 = off_140B64F70;
		v7[4] = 1;
		v7[10] = -2147024809;
		*((_QWORD*)v7 + 6) = 0i64;
		*((_QWORD*)v7 + 4) = off_140B65328;
		*((_QWORD*)v7 + 7) = 0i64;
		v7[18] = 1;
		*((_QWORD*)v7 + 3) = 0i64;
		*((_QWORD*)v7 + 1) = 0i64;
		*((_QWORD*)v7 + 8) = 0i64;
		sub_14034A1A0((__int64)(v7 + 8), 0x80070057);
	}
	else
	{
		v8 = 0i64;
	}
	v9 = sub_140344600(v8, a3, a4);
	if (v9 >= 0)
	{
		*a2 = v8;
	}
	else if (v8)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 64i64))(v8, 1i64);
		return (unsigned int)v9;
	}
	return (unsigned int)v9;
}
// 140B64F70: using guessed type __int64 (__fastcall *off_140B64F70[9])();
// 140B65328: using guessed type __int64 (__fastcall *off_140B65328[13])();

