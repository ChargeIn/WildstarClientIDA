//----- (00000001405E3FA0) ----------------------------------------------------
__int64 __fastcall sub_1405E3FA0(__int64 a1)
{
	__int64 v1; // rbx

	v1 = qword_140C65898 + 26680;
	if (*(_QWORD*)(a1 + 8) != *(_QWORD*)(a1 + 16))
		sub_1405DE2E0(qword_140C65898 + 26680, 0i64, a1);
	if (*(_DWORD*)(v1 + 752) == 2)
		return sub_1405DF560(v1, 0);
	else
		return sub_1405DF560(v1, 2u);
}
// 140C65898: using guessed type __int64 qword_140C65898;

