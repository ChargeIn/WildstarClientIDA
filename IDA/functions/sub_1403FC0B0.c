//----- (00000001403FC0B0) ----------------------------------------------------
int** __fastcall sub_1403FC0B0(__int64 a1, int** a2, __int64* a3, int* a4)
{
	__int64 v4; // r8
	__int64 v6; // r9
	__int64 v8; // r11
	int v9; // eax
	int** result; // rax
	_DWORD* v11; // r9
	int v12; // eax
	__int64 v13; // r9
	__int64 i; // rax
	__int64 v15; // rax
	int v16; // ecx
	int v17; // eax
	int* v18; // rcx
	__int64 v19; // [rsp+20h] [rbp-28h]
	char v20[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *a3;
	v6 = *(_QWORD*)(a1 + 8);
	v8 = a1;
	if (v4 == *(_QWORD*)(v6 + 16))
	{
		if (*(_QWORD*)(a1 + 16))
		{
			v9 = *a4 - *(_DWORD*)(v4 + 32);
			if (*a4 == *(_DWORD*)(v4 + 32))
			{
				v9 = a4[1] - *(_DWORD*)(v4 + 36);
				if (!v9)
					v9 = a4[2] - *(_DWORD*)(v4 + 40);
			}
			if (v9 < 0)
			{
				v19 = (__int64)a4;
			LABEL_8:
				sub_1403FE500(a1, a2, v4, v4, v19);
				return a2;
			}
		}
		goto LABEL_35;
	}
	if (v4 == v6)
	{
		v11 = *(_DWORD**)(v6 + 24);
		v12 = v11[8] - *a4;
		if (!v12)
		{
			v12 = v11[9] - a4[1];
			if (!v12)
				v12 = v11[10] - a4[2];
		}
		if (v12 < 0)
		{
			sub_1403FE500(a1, a2, 0i64, (__int64)v11, (__int64)a4);
			return a2;
		}
		goto LABEL_35;
	}
	if (*(_BYTE*)v4 || *(_QWORD*)(*(_QWORD*)(v4 + 8) + 8i64) != v4)
	{
		v13 = *(_QWORD*)(v4 + 16);
		if (v13)
		{
			for (i = *(_QWORD*)(v13 + 24); i; i = *(_QWORD*)(i + 24))
				v13 = i;
		}
		else
		{
			v13 = *(_QWORD*)(v4 + 8);
			if (v4 == *(_QWORD*)(v13 + 16))
			{
				do
				{
					v15 = v13;
					v13 = *(_QWORD*)(v13 + 8);
				} while (v15 == *(_QWORD*)(v13 + 16));
			}
		}
	}
	else
	{
		v13 = *(_QWORD*)(v4 + 24);
	}
	v16 = *(_DWORD*)(v13 + 32) - *a4;
	if (!v16)
	{
		v16 = *(_DWORD*)(v13 + 36) - a4[1];
		if (!v16)
			v16 = *(_DWORD*)(v13 + 40) - a4[2];
	}
	if (v16 >= 0)
		goto LABEL_34;
	v17 = *a4 - *(_DWORD*)(v4 + 32);
	if (!v17)
	{
		v17 = a4[1] - *(_DWORD*)(v4 + 36);
		if (!v17)
			v17 = a4[2] - *(_DWORD*)(v4 + 40);
	}
	if (v17 >= 0)
	{
	LABEL_34:
		a1 = v8;
	LABEL_35:
		v18 = *(int**)sub_1403FE620(a1, (__int64)v20, a4);
		result = a2;
		*a2 = v18;
		return result;
	}
	v19 = (__int64)a4;
	a1 = v8;
	if (*(_QWORD*)(v13 + 24))
		goto LABEL_8;
	sub_1403FE500(v8, a2, 0i64, v13, (__int64)a4);
	return a2;
}
// 1403FC0B0: using guessed type char var_18[24];

