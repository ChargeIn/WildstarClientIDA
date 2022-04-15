//----- (00000001404CA3F0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404CA3F0(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
	__int64 v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // rbx
	unsigned __int64 v11; // r8
	__int64 v12; // rax
	__int64 v13; // rcx
	unsigned __int64 v14; // r8
	__int64 v15; // rax
	unsigned __int64 v16; // r8

	if (!a4)
		return 1i64;
	if (a4 == *(_QWORD*)(a3 + 88))
		return 0i64;
	v8 = a3;
	v10 = sub_1404C9E20(a1, a2, a4);
	while (v10 && v8 != v10)
	{
		v11 = a4;
		if (v8 != a3)
			v11 = *(_QWORD*)(v8 + 240);
		v12 = sub_1404C9E20(v9, a2, v11);
		v14 = a4;
		v8 = v12;
		if (v10 != a3)
			v14 = *(_QWORD*)(v10 + 240);
		v15 = sub_1404C9E20(v13, a2, v14);
		v10 = v15;
		if (v15)
		{
			v16 = a4;
			if (v15 != a3)
				v16 = *(_QWORD*)(v15 + 240);
			v10 = sub_1404C9E20(v9, a2, v16);
		}
		if (!v8)
			return 1i64;
	}
	return !v8 || !v10 || v8 != v10;
}
// 1404CA470: variable 'v9' is possibly undefined
// 1404CA48A: variable 'v13' is possibly undefined

