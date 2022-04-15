//----- (00000001408299E0) ----------------------------------------------------
__int64 __fastcall sub_1408299E0(__int64 a1)
{
	__int64* i; // rbx
	__int64 result; // rax

	for (i = *(__int64**)a1; i != *(__int64**)(a1 + 8); i += 2)
		sub_140881720(dword_140C10F20, *i);
	result = *(_QWORD*)a1;
	if (*(_QWORD*)a1)
	{
		*(_QWORD*)(a1 + 8) = result;
		sub_140881720(dword_140C10F20, result);
		result = 0i64;
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_DWORD*)(a1 + 16) = 0;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

