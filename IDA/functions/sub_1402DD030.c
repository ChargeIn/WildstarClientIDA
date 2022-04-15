//----- (00000001402DD030) ----------------------------------------------------
__int64 __fastcall sub_1402DD030(void(__fastcall*** a1)(_QWORD), __int64* a2)
{
	int* v5; // rax
	__int64 v6; // rax
	__int64 v7; // rbx
	int v8; // esi

	if (!a2)
		return 2147942487i64;
	v5 = sub_14018B280(232i64, 1u);
	if (!v5)
		return 2147942414i64;
	v6 = sub_1402E14D0((__int64)v5);
	v7 = v6;
	if (!v6)
		return 2147942414i64;
	v8 = sub_1402E15F0(v6, a1);
	if (v8 >= 0)
	{
		*a2 = v7;
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		return (unsigned int)v8;
	}
}

