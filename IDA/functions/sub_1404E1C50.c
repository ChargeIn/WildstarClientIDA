//----- (00000001404E1C50) ----------------------------------------------------
__int64 __fastcall sub_1404E1C50(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v5; // r8
	BOOL v6; // eax
	__int64 v7; // r9
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // [rsp+30h] [rbp+8h]

	if (!a2)
		return 0i64;
	v5 = 0i64;
	if (a3)
		v6 = *(_QWORD*)(qword_140C65898 + 120) == a3 || *(_QWORD*)(qword_140C65898 + 25744) == a3;
	else
		v6 = 0;
	if (v6)
		v5 = qword_140C65898;
	if (!v5)
		return sub_1407A1080(qword_140C65B70, a2);
	v7 = *(_QWORD*)(v5 + 32056);
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < a2)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v10 = v8, a2 < *(_DWORD*)(v8 + 32)))
		v10 = *(_QWORD*)(v5 + 32056);
	if (v10 == v7)
		return sub_1407A1080(qword_140C65B70, a2);
	result = *(_QWORD*)(v10 + 40);
	if (!result)
		return sub_1407A1080(qword_140C65B70, a2);
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

