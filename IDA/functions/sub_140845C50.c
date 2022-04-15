//----- (0000000140845C50) ----------------------------------------------------
__int64 __fastcall sub_140845C50(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 result; // rax

	v2 = *(_QWORD**)(a1 + 80);
	if (*v2)
		sub_140868480((__int64)v2);
	result = sub_140881720(dword_140C10F28, *(_QWORD*)(a1 + 80));
	*(_QWORD*)(a1 + 80) = 0i64;
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

