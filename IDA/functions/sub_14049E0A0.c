//----- (000000014049E0A0) ----------------------------------------------------
_BOOL8 __fastcall sub_14049E0A0(__int64 a1, __int64 a2, int a3, int a4)
{
	int v6; // edi
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax

	if (!a2 || a2 != *(_QWORD*)(qword_140C65898 + 120) || !qword_140C65B98)
		return 0i64;
	v6 = 0;
	v7 = 0i64;
	if (!qword_140C7DE20)
		return 0i64;
	while (1)
	{
		v8 = *(_QWORD*)(qword_140C7DE18 + 8 * v7);
		if (v8)
		{
			if (*(_DWORD*)(v8 + 16) == 6)
				break;
		}
		if (++v7 >= (unsigned __int64)qword_140C7DE20)
			return 0i64;
	}
	v10 = sub_1405BFE80(qword_140C65B98, 2, 0xFFFFFFFF);
	if (v10)
	{
		v6 = *(_DWORD*)(v10 + 4);
	}
	else if (dword_140C7E0AC)
	{
		v6 = dword_140C7E0A8;
	}
	else
	{
		dword_140C7E0AC = 1;
		v12 = sub_140200220(0x330u);
		if (v12)
			v6 = *(_DWORD*)(v12 + 4);
		dword_140C7E0A8 = v6;
	}
	return sub_1404A2010(v11, a3, fabs(1.0 - (float)((float)v6 / (float)*(int*)(v8 + 520))), (float)a4);
}
// 14049E1B4: variable 'v11' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 140C7E0A8: using guessed type int dword_140C7E0A8;
// 140C7E0AC: using guessed type int dword_140C7E0AC;

