//----- (00000001403A8810) ----------------------------------------------------
int* __fastcall sub_1403A8810(__int64 a1, int a2, unsigned int a3)
{
	__int64 v3; // rbp
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v8; // rax
	int v9; // r9d
	int v10; // eax
	int* v11; // rax
	int* v12; // rbx
	__int64 v14[2]; // [rsp+20h] [rbp-28h] BYREF
	char v15[24]; // [rsp+30h] [rbp-18h] BYREF
	__int64 v16; // [rsp+50h] [rbp+8h]

	v3 = a1 + 32392;
	v6 = *(_QWORD*)(a1 + 32400);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		v9 = *(_DWORD*)(v8 + 32);
		if (v9 < a2 || a2 >= v9 && *(_DWORD*)(v8 + 36) < a3)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v10 = *(_DWORD*)(v7 + 32), a2 < v10) || v10 >= a2 && a3 < *(_DWORD*)(v7 + 36))
		v16 = *(_QWORD*)(a1 + 32400);
	else
		v16 = v7;
	if (v16 != *(_QWORD*)(a1 + 32400))
		return *(int**)(v16 + 40);
	v11 = sub_14018B280(80i64, 0);
	v12 = v11;
	if (v11)
		sub_1407E4830(v11, 0i64, 0x50ui64);
	else
		v12 = 0i64;
	v14[0] = __PAIR64__(a3, a2);
	*v12 = a2;
	v12[1] = a3;
	v14[1] = (__int64)v12;
	sub_1403AE510(v3, (__int64)v15, (int*)v14);
	return v12;
}
// 1403A8810: using guessed type char var_18[24];

