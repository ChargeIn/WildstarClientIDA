//----- (00000001405BE5A0) ----------------------------------------------------
_QWORD* __fastcall sub_1405BE5A0(_QWORD* a1)
{
	int* v2; // rax
	_QWORD* result; // rax

	sub_14079DA60(a1);
	*a1 = off_140B6DCD8;
	v2 = sub_14018B280(40i64, 0);
	a1[26] = v2;
	a1[27] = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(a1[26] + 8i64) = 0i64;
	*(_QWORD*)(a1[26] + 16i64) = a1[26];
	*(_QWORD*)(a1[26] + 24i64) = a1[26];
	a1[30] = 0i64;
	a1[29] = 0i64;
	a1[32] = 0i64;
	a1[31] = 0i64;
	result = a1;
	a1[34] = 0i64;
	a1[33] = 0i64;
	return result;
}
// 140B6DCD8: using guessed type __int64 (__fastcall *off_140B6DCD8[152])();

