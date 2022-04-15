//----- (000000014054AE10) ----------------------------------------------------
__int64 __fastcall sub_14054AE10(__int64 a1)
{
	int* v2; // rax
	int* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // r12
	__int64 v7; // r15
	__int64 v8; // rax
	int v9; // edi
	int v10; // esi
	int* i; // r11
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // edx
	int v15; // r10d
	unsigned int v16; // r8d
	int v17; // ebx
	_DWORD* v18; // r9
	int v19; // edx
	int v20; // ecx
	int v21; // edx
	char v23[16]; // [rsp+20h] [rbp-38h] BYREF
	unsigned int v24; // [rsp+60h] [rbp+8h]

	if ((dword_140DC3324 & 1) == 0)
	{
		dword_140DC3324 |= 1u;
		v2 = sub_14018B280(40i64, 0);
		qword_140DC3338 = 0i64;
		qword_140DC3330 = (__int64)v2;
		*(_BYTE*)v2 = 0;
		*(_QWORD*)(qword_140DC3330 + 8) = 0i64;
		*(_QWORD*)(qword_140DC3330 + 16) = qword_140DC3330;
		*(_QWORD*)(qword_140DC3330 + 24) = qword_140DC3330;
		sub_1407DD89C(sub_1409541F0);
	}
	if (!qword_140DC3338)
	{
		v3 = (int*)&unk_140C5A418;
		v4 = 13i64;
		do
		{
			sub_1403ADDD0((__int64)&unk_140DC3328, (__int64)v23, v3++);
			--v4;
		} while (v4);
	}
	v5 = *(_QWORD*)(a1 + 280);
	if (!v5)
		return 0i64;
	if (*(_DWORD*)(*(_QWORD*)(v5 + 112) + 24i64) != 8)
		return 0i64;
	v6 = *(_QWORD*)(v5 + 88);
	if (!v6)
		return 0i64;
	v7 = *(_QWORD*)(a1 + 48);
	v8 = *(_QWORD*)(a1 + 256);
	v9 = *(_DWORD*)(v7 + 36);
	if (v8)
		v9 = *(_DWORD*)(a1 + 80) - *(_DWORD*)(v8 + 404);
	v10 = 0;
	v24 = *(_DWORD*)(v5 + 40);
	if (!v24)
		return 0i64;
	for (i = (int*)(*(_QWORD*)(v5 + 48) + 16i64); ; i += 42)
	{
		v12 = *(_QWORD*)(qword_140DC3330 + 8);
		v13 = qword_140DC3330;
		if (v12)
		{
			v14 = *i;
			do
			{
				if (*(_DWORD*)(v12 + 32) < v14)
				{
					v12 = *(_QWORD*)(v12 + 24);
				}
				else
				{
					v13 = v12;
					v12 = *(_QWORD*)(v12 + 16);
				}
			} while (v12);
			if (v13 != qword_140DC3330 && v14 >= *(_DWORD*)(v13 + 32))
			{
				v15 = 0;
				v16 = 0;
				if (*(_DWORD*)(v6 + 8) != 1)
					break;
			}
		}
	LABEL_30:
		if (++v10 >= v24)
			return 0i64;
	}
	v18 = *(_DWORD**)v6;
	while (1)
	{
		v15 += *v18;
		v17 = i[3];
		if (_bittest(&v17, v16))
		{
			v19 = *(_DWORD*)(v7 + 40);
			v20 = v15 + i[4] + i[10];
			v21 = v19 ? v19 - *(_DWORD*)(v7 + 36) : 3600000;
			if (v20 - v21 - v9 <= 0 && v20 - v9 >= 0)
				return 1i64;
		}
		++v16;
		++v18;
		if (v16 >= *(_DWORD*)(v6 + 8) - 1)
			goto LABEL_30;
	}
}
// 140DC3324: using guessed type int dword_140DC3324;
// 140DC3330: using guessed type __int64 qword_140DC3330;
// 140DC3338: using guessed type __int64 qword_140DC3338;
// 14054AE10: using guessed type char var_38[16];

