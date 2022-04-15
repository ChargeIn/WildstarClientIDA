//----- (0000000140872FC0) ----------------------------------------------------
__int64 __fastcall sub_140872FC0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rdx

	v2 = *(_QWORD*)(a1 + 56);
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v2 + 8i64))(v2, &off_140C10F70);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 64);
	if (v4)
	{
		result = sub_140881720(dword_140C10F28, v4);
		*(_QWORD*)(a1 + 64) = 0i64;
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();

