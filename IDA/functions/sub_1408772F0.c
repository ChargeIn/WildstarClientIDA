//----- (00000001408772F0) ----------------------------------------------------
__int64 __fastcall sub_1408772F0(__int64** a1, __int64 a2, int a3, int a4, int a5, __int16 a6)
{
	__int64 v10; // rdi
	__int64 v11; // rax
	__int64 v12; // rbx

	if (!*a1)
		*a1 = sub_14087FA40();
	v10 = (*(__int64(__fastcall**)(__int64*)) * *a1)(*a1);
	if (!v10)
		return 0i64;
	v11 = sub_1408819F0(dword_140C10F20, 64i64);
	v12 = v11;
	if (!v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10);
		return 0i64;
	}
	*(_DWORD*)(v11 + 48) = 0;
	*(_QWORD*)(v11 + 56) = v10;
	*(_QWORD*)v11 = 0i64;
	*(_QWORD*)(v11 + 8) = 0i64;
	*(_QWORD*)(v11 + 16) = 0i64;
	*(_QWORD*)(v11 + 24) = 0i64;
	*(_QWORD*)(v11 + 32) = 0i64;
	*(_DWORD*)(v11 + 40) = 0;
	*(_WORD*)(v11 + 44) = 0;
	if ((unsigned int)sub_140877260(v11, a2, a3, a4, a5, a6) != 1)
	{
		sub_140881720(dword_140C10F20, v12);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10);
		return 0i64;
	}
	return v12;
}
// 140C10F20: using guessed type int dword_140C10F20;

