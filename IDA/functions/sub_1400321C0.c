//----- (00000001400321C0) ----------------------------------------------------
__int64 __fastcall sub_1400321C0(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // r11
	__int64 v12; // r8
	__int64 v13; // rax
	int v14; // edx
	int v15; // eax
	__int64 v16; // [rsp+30h] [rbp+8h]
	__int64 v17; // [rsp+30h] [rbp+8h]

	if (!a2)
		return 0i64;
	v8 = *(_QWORD*)(qword_140C63600 + 8);
	v9 = *(_QWORD*)(v8 + 8);
	v10 = v8;
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < a5)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v10 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v10 == v8 || (v16 = v10, a5 < *(_DWORD*)(v10 + 32)))
		v16 = *(_QWORD*)(qword_140C63600 + 8);
	if (v16 == v8)
		return 0i64;
	v11 = *(_QWORD*)(v16 + 48);
	v12 = v11;
	v13 = *(_QWORD*)(v11 + 8);
	while (v13)
	{
		v14 = *(_DWORD*)(v13 + 32);
		if (v14 < a3 || a3 >= v14 && *(_DWORD*)(v13 + 36) < a4)
		{
			v13 = *(_QWORD*)(v13 + 24);
		}
		else
		{
			v12 = v13;
			v13 = *(_QWORD*)(v13 + 16);
		}
	}
	if (v12 == v11 || (v15 = *(_DWORD*)(v12 + 32), a3 < v15) || v15 >= a3 && a4 < *(_DWORD*)(v12 + 36))
		v17 = *(_QWORD*)(v16 + 48);
	else
		v17 = v12;
	if (v17 == v11)
		return 0i64;
	*(_DWORD*)a2 = a3;
	*(_DWORD*)(a2 + 4) = a4;
	*(_DWORD*)(a2 + 8) = a5;
	*(_QWORD*)(a2 + 16) = v17 + 40;
	sub_140030E30((_QWORD*)a2);
	return 1i64;
}
// 140C63600: using guessed type __int64 qword_140C63600;

