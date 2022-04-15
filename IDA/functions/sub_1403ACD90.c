//----- (00000001403ACD90) ----------------------------------------------------
__int64 __fastcall sub_1403ACD90(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // r10
	__int64 result; // rax
	__int64 v5; // rcx

	v3 = a1;
	if (!a2)
		return 0i64;
	if (!a3)
		return sub_1407A0FD0(a1, a2);
	v5 = 0i64;
	if (*(_QWORD*)(qword_140C65898 + 120) == a3 || *(_QWORD*)(qword_140C65898 + 25744) == a3)
		v5 = qword_140C65898;
	if (!v5 || (result = sub_1405A5B90(v5, a2)) == 0)
	{
		a1 = v3;
		return sub_1407A0FD0(a1, a2);
	}
	return result;
}
// 1403ACDE0: variable 'v3' is possibly undefined
// 1403ACDE7: variable 'a2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

