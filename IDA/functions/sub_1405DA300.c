//----- (00000001405DA300) ----------------------------------------------------
void __fastcall sub_1405DA300(__int64 a1)
{
	int v2; // edx
	__int64 v3; // rax
	__int64 v4; // rax

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
	v2 = *(_DWORD*)(a1 + 92);
	v3 = *(_QWORD*)(qword_140C65898 + 120);
	if (v3 && *(_DWORD*)(v3 + 8) == v2 || (v4 = *(_QWORD*)(qword_140C65898 + 25744)) != 0 && *(_DWORD*)(v4 + 8) == v2)
		sub_1403EB430(
			qword_140C65898,
			*(_DWORD*)(a1 + 336),
			*(_DWORD*)(a1 + 188),
			*(_DWORD*)(*(_QWORD*)(a1 + 80) + 92i64),
			v2);
}
// 140C65898: using guessed type __int64 qword_140C65898;

