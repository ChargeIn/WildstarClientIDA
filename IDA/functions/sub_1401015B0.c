//----- (00000001401015B0) ----------------------------------------------------
int* __fastcall sub_1401015B0(_QWORD* a1, int* a2)
{
	int v4; // esi
	__int64 v5; // rdi
	_QWORD* v6; // rax
	_QWORD* v7; // rcx
	int v8; // ecx
	int v9; // eax
	_QWORD* v10; // rcx
	int v11; // ecx
	int v12; // eax
	_DWORD* v13; // rax
	_DWORD* v14; // r8
	int v15; // edx
	char v17; // [rsp+40h] [rbp+8h] BYREF
	char v18; // [rsp+48h] [rbp+10h] BYREF

	*(_QWORD*)a2 = 0i64;
	v4 = 0;
	v5 = 0i64;
	if ((int)sub_140101370(a1) > 0)
	{
		while (v5 >= 0)
		{
			if (v4 < (int)((__int64)(a1[12] - a1[11]) >> 3))
			{
				v6 = *(_QWORD**)(a1[11] + 8 * v5);
			LABEL_6:
				if (v6 != a1)
				{
					if (v5 >= 0)
					{
						if (v4 < (int)((__int64)(a1[12] - a1[11]) >> 3))
							v7 = *(_QWORD**)(a1[11] + 8 * v5);
						else
							v7 = a1;
					}
					else
					{
						v7 = 0i64;
					}
					v8 = *(_DWORD*)sub_1401015B0(v7, &v17);
					v9 = *a2;
					if (*a2 < v8)
						v9 = v8;
					*a2 = v9;
					if (v5 >= 0)
					{
						if (v4 < (int)((__int64)(a1[12] - a1[11]) >> 3))
							v10 = *(_QWORD**)(a1[11] + 8 * v5);
						else
							v10 = a1;
					}
					else
					{
						v10 = 0i64;
					}
					v11 = *(_DWORD*)(sub_1401015B0(v10, &v18) + 4);
					v12 = a2[1];
					if (v12 < v11)
						v12 = v11;
					a2[1] = v12;
				}
			}
			++v4;
			++v5;
			if (v4 >= (int)sub_140101370(a1))
				goto LABEL_23;
		}
		v6 = 0i64;
		goto LABEL_6;
	}
LABEL_23:
	v13 = (_DWORD*)a1[7];
	v14 = (_DWORD*)a1[8];
	if (v13 != v14)
	{
		v15 = a2[1];
		do
		{
			if (v13[16] > *a2)
				*a2 = v13[3] + v13[5] + v13[7] - v13[6] - v13[4] - v13[2];
			if (v13[17] > v15)
				v15 = v13[9] + v13[11] + v13[13] - v13[12] - v13[10] - v13[8];
			v13 += 76;
		} while (v13 != v14);
		a2[1] = v15;
	}
	return a2;
}

