//----- (00000001405E7D80) ----------------------------------------------------
__int64 __fastcall sub_1405E7D80(__int64 a1, int a2, __int64 a3, __int64 a4, _DWORD* a5)
{
	unsigned int v6; // ebx
	__int64 v8; // rcx
	__int64 v10; // rdi
	__int64 v12; // rcx
	unsigned int v13; // eax

	v6 = a2;
	if (!a2)
		return 0i64;
	if (!a3)
		goto LABEL_11;
	v8 = 0i64;
	if (*(_QWORD*)(qword_140C65898 + 120) == a3 || *(_QWORD*)(qword_140C65898 + 25744) == a3)
		v8 = qword_140C65898;
	if (!v8 || (v10 = sub_1405A5B90(v8, v6)) == 0)
	{
		a2 = v6;
	LABEL_11:
		v10 = sub_1407A0FD0(qword_140C65B70, a2);
	}
	if (!v10)
		return 0i64;
	if (a5 && a5[100])
		return (*(__int64 (**)(void))(*(_QWORD*)a5 + 8i64))();
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1))
	{
		v13 = sub_140565090(v12, v10, a3);
		if (v13)
			return v13;
	}
	return v6;
}
// 1405E7E28: variable 'v12' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

