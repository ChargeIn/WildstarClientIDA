//----- (0000000140059AB0) ----------------------------------------------------
char* __fastcall sub_140059AB0(_QWORD* a1, _QWORD* a2, int a3)
{
	_DWORD* v4; // rcx
	__int64 v5; // rsi
	__int64 v7; // rbx
	__int64 v8; // rdi
	int v9; // r8d
	int v10; // r10d
	__int64 v11; // rdx
	__int64 v12; // rcx
	int v13; // edx
	__int64 v14; // rbx
	_DWORD* v15; // rax
	char* result; // rax
	__int64 v17; // rcx

	v4 = (_DWORD*)a2[1];
	v5 = a3;
	if (v4[2] == 6 && !*(_BYTE*)(*(_QWORD*)v4 + 10i64))
	{
		v7 = *(_QWORD*)(*(_QWORD*)v4 + 32i64);
		if (v7)
		{
			if (a2 == (_QWORD*)a1[5])
				a2[3] = a1[6];
			v8 = *(int*)(v7 + 92);
			v9 = 0;
			v10 = v5;
			v11 = a2[3] - *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 32i64) + 24i64);
			v12 = 0i64;
			v13 = (v11 >> 2) - 1;
			if (v8 > 0)
			{
				v14 = *(_QWORD*)(v7 + 48);
				v15 = (_DWORD*)(v14 + 12);
				while (*(v15 - 1) <= v13)
				{
					if (v13 < *v15 && !--v10)
					{
						result = (char*)(*(_QWORD*)(v14 + 16i64 * v9) + 32i64);
						if (*(_QWORD*)(v14 + 16i64 * v9) != -32i64)
							return result;
						break;
					}
					++v12;
					++v9;
					v15 += 4;
					if (v12 >= v8)
						break;
				}
			}
		}
	}
	if (a2 == (_QWORD*)a1[5])
		v17 = a1[2];
	else
		v17 = a2[6];
	if ((v17 - *a2) >> 4 < v5 || (int)v5 <= 0)
		return 0i64;
	else
		return aTemporary;
}

