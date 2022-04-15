//----- (00000001401A11D0) ----------------------------------------------------
signed int __fastcall sub_1401A11D0(__int64** a1, _BYTE* a2)
{
	signed int result; // eax
	int* v5; // rax
	__int64* v6; // rbx
	signed int v7; // edi

	if (!a1)
		return -2147024809;
	v5 = sub_14018B280(56i64, 0);
	v6 = (__int64*)v5;
	if (v5)
	{
		*(_QWORD*)v5 = off_140B5E728;
		v5[2] = 1;
		*((_QWORD*)v5 + 2) = 0i64;
		*((_QWORD*)v5 + 3) = 0i64;
		*((_QWORD*)v5 + 5) = 0i64;
		*((_QWORD*)v5 + 6) = 0i64;
	}
	else
	{
		v6 = 0i64;
	}
	result = sub_1401A05D0(v6, a2);
	v7 = result;
	if (result >= 0)
	{
		*a1 = v6;
	}
	else
	{
		(*(void(__fastcall**)(__int64*))(*v6 + 8))(v6);
		return v7;
	}
	return result;
}
// 140B5E728: using guessed type __int64 (__fastcall *off_140B5E728[2])();

