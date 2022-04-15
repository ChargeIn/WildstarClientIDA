//----- (0000000140101470) ----------------------------------------------------
int* __fastcall sub_140101470(_QWORD* a1, int* a2)
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
	__int64 v13; // rcx
	__int64 v14; // r8
	int v15; // edx
	int v16; // eax
	char v18; // [rsp+40h] [rbp+8h] BYREF
	char v19; // [rsp+48h] [rbp+10h] BYREF

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
					v8 = *(_DWORD*)sub_140101470(v7, &v18);
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
					v11 = *(_DWORD*)(sub_140101470(v10, &v19) + 4);
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
	v13 = a1[7];
	v14 = a1[8];
	if (v13 != v14)
	{
		v15 = a2[1];
		do
		{
			v16 = *(_DWORD*)(v13 + 64);
			if (v16 > *a2)
				*a2 = v16;
			if (*(_DWORD*)(v13 + 68) > v15)
				v15 = *(_DWORD*)(v13 + 68);
			v13 += 304i64;
		} while (v13 != v14);
		a2[1] = v15;
	}
	return a2;
}

