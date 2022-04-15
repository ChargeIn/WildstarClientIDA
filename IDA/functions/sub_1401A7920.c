//----- (00000001401A7920) ----------------------------------------------------
__int64 __fastcall sub_1401A7920(__int64 a1, int* a2)
{
	__int64 v2; // rdi
	__int64 v5; // rax
	__int64 v6; // rbx
	int* v7; // rdx

	v2 = a1 + 512;
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(a1 + 512) + 16i64))(a1 + 512);
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
		*(_QWORD*)v5 = off_140B5ED50;
	}
	else
	{
		v6 = 0i64;
	}
	v7 = (int*)L"xml version=\"1.0\" encoding=\"UTF-8\"";
	if (a2)
		v7 = a2;
	*(_QWORD*)(v6 + 80) = v2;
	sub_1401A4C50(v6 + 24, v7);
	return v6;
}
// 140A452D0: using guessed type wchar_t aXmlVersion10En[35];
// 140B5ED50: using guessed type __int64 (__fastcall *off_140B5ED50[17])();

