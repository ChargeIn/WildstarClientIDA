//----- (00000001400370D0) ----------------------------------------------------
__int64 __fastcall sub_1400370D0(__int64 a1, int a2, int a3, _DWORD* a4)
{
	int v5; // ecx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rax

	v5 = *(_DWORD*)(a1 + 168);
	if (v5 == 11)
		return 1i64;
	v8 = *(_QWORD*)(a1 + 232);
	if (v8 && a2 == *(_DWORD*)(v8 + 152))
	{
		switch (a3)
		{
		case 3:
			return sub_140037B70(a1, a4);
		case 987:
			return sub_140037F30(a1, (__int64)a4);
		case 1007:
			return 0i64;
		case 1425:
			if (((v5 - 6) & 0xFFFFFFFD) != 0)
				return 0i64;
			sub_1400114E0(qword_140C635F0, *(int**)(a1 + 176));
			*(_DWORD*)(qword_140C635F0 + 5740) = *a4 & 1;
			*(_DWORD*)(a1 + 168) = 9;
			return 0i64;
		default:
			v9 = a1;
			if (a3 != 1597)
			{
			LABEL_10:
				sub_1400383A0(v9, 524722, a3);
				return 0i64;
			}
			return sub_140037DB0(a1, (__int64)a4);
		}
	}
	else
	{
		v10 = *(_QWORD*)(a1 + 240);
		if (!v10 || a2 != *(_DWORD*)(v10 + 152))
			return 0i64;
		v9 = a1;
		if (a3 != 3)
			goto LABEL_10;
		return sub_140038120(a1, (__int64)a4);
	}
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

