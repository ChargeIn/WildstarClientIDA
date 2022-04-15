//----- (0000000140862B80) ----------------------------------------------------
__int64 __fastcall sub_140862B80(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rdx

	v2 = *(_QWORD*)(a1 + 1056);
	if (v2)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v2 + 312i64))(v2, 3i64);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1056) + 16i64))(*(_QWORD*)(a1 + 1056));
	}
	result = sub_140862E30(a1);
	v4 = *(_QWORD*)(a1 + 848);
	if (v4)
	{
		result = sub_140881720(dword_140C10F28, v4);
		*(_QWORD*)(a1 + 848) = 0i64;
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

