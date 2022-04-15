//----- (00000001408EA9A0) ----------------------------------------------------
__int64 __fastcall sub_1408EA9A0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 392);
	if (v1)
	{
		sub_140881720(dword_140C10F28, v1);
		result = 0i64;
		*(_QWORD*)(a1 + 392) = 0i64;
		*(_DWORD*)(a1 + 400) = 0;
		*(_WORD*)(a1 + 404) = 0;
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

