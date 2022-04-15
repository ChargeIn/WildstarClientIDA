//----- (00000001405E3F40) ----------------------------------------------------
__int64 __fastcall sub_1405E3F40(__int64 a1)
{
	__int64 v1; // rbx

	v1 = qword_140C65898 + 26680;
	if (*(_QWORD*)(a1 + 8) != *(_QWORD*)(a1 + 16))
		sub_1405DE2E0(qword_140C65898 + 26680, a1, 0i64);
	if (*(_DWORD*)(v1 + 752) == 1)
		return sub_1405DF560(v1, 0);
	else
		return sub_1405DF560(v1, 1u);
}
// 140C65898: using guessed type __int64 qword_140C65898;

