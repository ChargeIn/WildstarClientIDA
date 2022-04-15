//----- (00000001403CBDF0) ----------------------------------------------------
__int64 __fastcall sub_1403CBDF0(__int64 a1, int a2, unsigned int a3)
{
	int* v6; // rax
	int v8; // ecx
	unsigned int v9; // eax
	__int64 v10; // r9
	unsigned __int64 v11; // rax
	__int64* v12; // r9
	unsigned __int64 v13; // rdx
	unsigned __int64 v14; // rcx
	unsigned int v15; // r8d
	int* v16; // rax
	int v17; // ecx
	unsigned int v18; // eax
	__int64 v19; // r9
	unsigned __int64 v20; // rax
	_QWORD* v21; // r9
	unsigned __int64 v22; // rcx
	__int64 v23; // rdx
	unsigned int v24; // r8d
	unsigned int v25; // [rsp+40h] [rbp+18h] BYREF

	v25 = a3;
	switch (a2)
	{
	case 0:
		v6 = sub_1400B5DF0(qword_140C658F0, a3, 0i64);
		if (!v6)
			return 1i64;
		v8 = v6[95];
		if ((unsigned int)(v8 - 1) > 5)
		{
			if (v8 != 20)
				return 1i64;
			v9 = 6;
		}
		else
		{
			v9 = v8 - 1;
			if ((unsigned int)(v8 - 1) >= 7)
				return 1i64;
		}
		v10 = v9;
		v11 = 0i64;
		v12 = (__int64*)(*(_QWORD*)(a1 + 1384) + 16 * v10);
		v13 = v12[1];
		if (v13)
		{
			do
			{
				v14 = v11 + ((v13 - v11) >> 1);
				v15 = *(_DWORD*)(*v12 + 4 * v14);
				if (a3 < v15)
				{
					v13 = v11 + ((v13 - v11) >> 1);
				}
				else
				{
					if (v15 >= a3)
						goto LABEL_16;
					v11 = v14 + 1;
				}
			} while (v11 < v13);
		}
		sub_1401C2E70(v12, v11, (int*)&v25);
		goto LABEL_16;
	case 1:
	case 2:
	case 3:
	case 6:
	case 7:
	LABEL_16:
		sub_140431520(*(_QWORD*)(qword_140C65898 + 29504), a3, a2);
		return 0i64;
	case 4:
		v16 = sub_1400B5DF0(qword_140C658F0, a3, 0i64);
		if (!v16)
			return 1i64;
		v17 = v16[95];
		if ((unsigned int)(v17 - 1) > 5)
		{
			if (v17 != 20)
				return 1i64;
			v18 = 6;
		}
		else
		{
			v18 = v17 - 1;
			if ((unsigned int)(v17 - 1) >= 7)
				return 1i64;
		}
		v19 = v18;
		v20 = 0i64;
		v21 = (_QWORD*)(*(_QWORD*)(a1 + 1384) + 16 * v19);
		v22 = v21[1];
		if (!v22)
			goto LABEL_31;
		break;
	case 5:
	case 8:
	case 9:
		goto LABEL_31;
	default:
		return 0i64;
	}
	while (1)
	{
		v23 = v20 + ((v22 - v20) >> 1);
		v24 = *(_DWORD*)(*v21 + 4 * v23);
		if (a3 < v24)
		{
			v22 = v20 + ((v22 - v20) >> 1);
			goto LABEL_28;
		}
		if (v24 >= a3)
			break;
		v20 = v23 + 1;
	LABEL_28:
		if (v20 >= v22)
			goto LABEL_31;
	}
	sub_1401C2F20((__int64)v21, v23);
LABEL_31:
	sub_140431570(*(_QWORD*)(qword_140C65898 + 29504), a3, a2);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

