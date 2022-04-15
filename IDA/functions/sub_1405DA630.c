//----- (00000001405DA630) ----------------------------------------------------
void __fastcall sub_1405DA630(__int64 a1)
{
	int v2; // ecx
	__int64 v3; // rax
	__int64 v4; // rax
	_DWORD* v5; // rcx

	v2 = *(_DWORD*)(a1 + 92);
	v3 = *(_QWORD*)(qword_140C65898 + 120);
	if (v3 && *(_DWORD*)(v3 + 8) == v2 || (v4 = *(_QWORD*)(qword_140C65898 + 25744)) != 0 && *(_DWORD*)(v4 + 8) == v2)
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
		v5 = *(_DWORD**)(a1 + 176);
		*(_DWORD*)(a1 + 336) = v5[16];
		*(_DWORD*)(a1 + 340) = v5[17];
		*(_DWORD*)(a1 + 344) = v5[18];
		sub_140566020((__int64)v5, a1);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

