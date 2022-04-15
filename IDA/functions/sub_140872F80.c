//----- (0000000140872F80) ----------------------------------------------------
__int64 __fastcall sub_140872F80(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 64);
	if (!v1)
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16i64))(*(_QWORD*)(a1 + 8));
	result = sub_140881720(dword_140C10F28, v1);
	*(_QWORD*)(a1 + 64) = 0i64;
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

