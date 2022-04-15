//----- (0000000140873760) ----------------------------------------------------
__int64 __fastcall sub_140873760(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 56);
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v2 + 8i64))(v2, &off_140C10F70);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	return result;
}
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();

