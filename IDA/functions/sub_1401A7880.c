//----- (00000001401A7880) ----------------------------------------------------
__int64 __fastcall sub_1401A7880(__int64 a1, int* a2)
{
	__int64 v2; // rdi
	__int64 v5; // rax
	__int64 v6; // rbx

	v2 = a1 + 384;
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(a1 + 384) + 16i64))(a1 + 384);
	v6 = v5;
	if (v5)
	{
		*(_QWORD*)(v5 + 8) = a1;
		*(_QWORD*)(v5 + 16) = 0i64;
		*(_DWORD*)(v5 + 24) = 0;
		*(_QWORD*)(v5 + 32) = 0i64;
		*(_QWORD*)(v5 + 40) = 0i64;
		*(_QWORD*)(v5 + 48) = 0i64;
		*(_QWORD*)(v5 + 56) = 0i64;
		*(_QWORD*)(v5 + 64) = 0i64;
		*(_QWORD*)(v5 + 72) = 0i64;
		*(_QWORD*)(v5 + 80) = 0i64;
		*(_BYTE*)(v5 + 88) = 0;
		*(_QWORD*)v5 = off_140B5EE70;
	}
	else
	{
		v6 = 0i64;
	}
	*(_QWORD*)(v6 + 80) = v2;
	sub_1401A4C50(v6 + 24, a2);
	return v6;
}
// 140B5EE70: using guessed type __int64 (__fastcall *off_140B5EE70[17])();

