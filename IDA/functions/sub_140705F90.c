//----- (0000000140705F90) ----------------------------------------------------
__int64 __fastcall sub_140705F90(_QWORD* a1)
{
	int v2; // edi
	__int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // rax
	__int64 v6; // r11
	unsigned __int64 v7; // rcx
	_DWORD* v8; // rax
	_DWORD* v9; // rax
	__int64 v11; // rax
	__int64 v12; // r11
	_DWORD* v13; // rcx
	int v14; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_140056D60(a1, 1u);
	v4 = sub_1407A1440(v3, v2, 1u);
	if (!v4)
		goto LABEL_9;
	if (!*(_QWORD*)(qword_140C65898 + 120) || !qword_140C65898 || (v5 = sub_1405A5B90(qword_140C65898, v4)) == 0)
	{
		v5 = sub_1407A0FD0(qword_140C65B70, v4);
		v6 = qword_140C65898;
		if (!v5)
			goto LABEL_9;
	}
	v7 = 0i64;
	v8 = (_DWORD*)(*(_QWORD*)(v5 + 112) + 408i64);
	while (*v8 != 10)
	{
		++v7;
		++v8;
		if (v7 >= 5)
			goto LABEL_9;
	}
	v11 = sub_1403BACC0(v6, v2, 0);
	if (v11 && *(_BYTE*)(v11 + 8))
	{
		if ((dword_140DC4C4C & 1) == 0)
		{
			dword_140DC4C54 = 0;
			dword_140DC4C4C |= 1u;
			dword_140DC4C58 = 3000;
			dword_140DC4C5C = 1;
			dword_140DC4C60 = 3000;
			dword_140DC4C50 = dword_140C636A8 - 3000;
			sub_1407DD89C(nullsub_11);
			v12 = qword_140C65898;
		}
		if (dword_140C636A8 - dword_140DC4C50 >= (unsigned int)dword_140DC4C60)
		{
			if (dword_140C636A8 - dword_140DC4C50 < (unsigned int)dword_140DC4C58)
			{
				dword_140DC4C50 += dword_140DC4C60;
			}
			else
			{
				dword_140DC4C50 = dword_140C636A8;
				dword_140DC4C54 = 1;
			}
		}
		else
		{
			if (dword_140DC4C54 == dword_140DC4C5C)
			{
				v13 = (_DWORD*)a1[2];
				*v13 = 0;
				v13[2] = 1;
				goto LABEL_11;
			}
			++dword_140DC4C54;
		}
		v14 = v2;
		sub_1403F4900(v12, 0x82Fu, (__int64)&v14);
		v9 = (_DWORD*)a1[2];
		*v9 = 1;
	}
	else
	{
	LABEL_9:
		v9 = (_DWORD*)a1[2];
		*v9 = 0;
	}
	v9[2] = 1;
LABEL_11:
	a1[2] += 16i64;
	return 1i64;
}
// 140705FB3: variable 'v3' is possibly undefined
// 140705FE6: variable 'v4' is possibly undefined
// 140706045: variable 'v6' is possibly undefined
// 14070612A: variable 'v12' is possibly undefined
// 140956800: using guessed type __int64 __fastcall nullsub_11();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140DC4C4C: using guessed type int dword_140DC4C4C;
// 140DC4C50: using guessed type int dword_140DC4C50;
// 140DC4C54: using guessed type int dword_140DC4C54;
// 140DC4C58: using guessed type int dword_140DC4C58;
// 140DC4C5C: using guessed type int dword_140DC4C5C;
// 140DC4C60: using guessed type int dword_140DC4C60;

