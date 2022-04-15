//----- (00000001404A8960) ----------------------------------------------------
__int64 __fastcall sub_1404A8960(__int64 a1, unsigned int a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	__int64 v5; // rdi
	_QWORD* v6; // rcx

	v2 = qword_140C659B0;
	v4 = sub_1401FC260(a2);
	v5 = v4;
	if (v4 && *(_DWORD*)(v4 + 36) && (unsigned int)sub_1404A7F50(v2, a2) && (v6 = *(_QWORD**)(v2 + 232)) != 0i64)
		return sub_140712A40(v6, *(_DWORD*)(v5 + 36), (__int64)sub_1404A89E0, v2);
	else
		return 2147500037i64;
}
// 140C659B0: using guessed type __int64 qword_140C659B0;

