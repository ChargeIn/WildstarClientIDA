//----- (00000001404A02E0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A02E0(__int64 a1, int a2, float a3, unsigned int a4)
{
	__int64 v6; // rax
	__int64 v7; // rcx

	if (!qword_140C65960)
		return 0i64;
	v6 = sub_140432960(qword_140C65960, a4);
	if (!v6)
		return 0i64;
	v7 = *(unsigned int*)(*(_QWORD*)(v6 + 8) + 8i64);
	return sub_1404A2010(v7, a2, (float)((float)*(int*)(v6 + 100) / (float)(int)v7) * 100.0, a3);
}
// 140C65960: using guessed type __int64 qword_140C65960;

