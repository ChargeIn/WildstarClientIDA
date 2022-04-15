//----- (00000001402ED850) ----------------------------------------------------
int** __fastcall sub_1402ED850(__int64 a1, int** a2, __int64* a3, _QWORD* a4)
{
	__int64 v4; // r8
	_QWORD* v6; // r9
	__int64 v10; // r8
	__int64 v11; // rdi
	int* v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // r9
	__int64 i; // rax
	__int64 v17; // rax
	_QWORD* v18; // [rsp+20h] [rbp-18h]

	v4 = *a3;
	v6 = *(_QWORD**)(a1 + 8);
	if (v4 != v6[2])
	{
		if ((_QWORD*)v4 == v6)
		{
			v11 = v6[3];
			if (*(_DWORD*)a4 >= *(_DWORD*)(v11 + 32))
			{
				if ((_QWORD*)v11 == v6 || *(_DWORD*)a4 < *(_DWORD*)(v11 + 32))
				{
					v12 = sub_14018B280(48i64, 0);
					if (v12 != (int*)-32i64)
					{
						*((_QWORD*)v12 + 4) = *a4;
						*((_QWORD*)v12 + 5) = a4[1];
					}
					*(_QWORD*)(v11 + 16) = v12;
					v14 = *(_QWORD*)(a1 + 8);
					if (v11 == v14)
					{
						*(_QWORD*)(v14 + 8) = v12;
						*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v12;
					}
					else if (v11 == *(_QWORD*)(v14 + 16))
					{
						*(_QWORD*)(v14 + 16) = v12;
					}
				}
				else
				{
					v12 = sub_14018B280(48i64, 0);
					if (v12 != (int*)-32i64)
					{
						*((_QWORD*)v12 + 4) = *a4;
						*((_QWORD*)v12 + 5) = a4[1];
					}
					*(_QWORD*)(v11 + 24) = v12;
					v13 = *(_QWORD*)(a1 + 8);
					if (v11 == *(_QWORD*)(v13 + 24))
						*(_QWORD*)(v13 + 24) = v12;
				}
				*((_QWORD*)v12 + 1) = v11;
				*((_QWORD*)v12 + 2) = 0i64;
				*((_QWORD*)v12 + 3) = 0i64;
				sub_1400081C0((__int64)v12, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
				++* (_QWORD*)(a1 + 16);
				*a2 = v12;
				return a2;
			}
		}
		else
		{
			if (*(_BYTE*)v4 || *(_QWORD*)(*(_QWORD*)(v4 + 8) + 8i64) != v4)
			{
				v15 = *(_QWORD*)(v4 + 16);
				if (v15)
				{
					for (i = *(_QWORD*)(v15 + 24); i; i = *(_QWORD*)(i + 24))
						v15 = i;
				}
				else
				{
					v15 = *(_QWORD*)(v4 + 8);
					if (v4 == *(_QWORD*)(v15 + 16))
					{
						do
						{
							v17 = v15;
							v15 = *(_QWORD*)(v15 + 8);
						} while (v17 == *(_QWORD*)(v15 + 16));
					}
				}
			}
			else
			{
				v15 = *(_QWORD*)(v4 + 24);
			}
			if (*(_DWORD*)a4 >= *(_DWORD*)(v15 + 32) && *(_DWORD*)(v4 + 32) >= *(_DWORD*)a4)
			{
				v18 = a4;
				if (*(_QWORD*)(v15 + 24))
					goto LABEL_5;
				sub_140055E80(a1, a2, 0i64, v15, a4);
				return a2;
			}
		}
		sub_1402EDAA0(a1, a2, a4);
		return a2;
	}
	if (*(_QWORD*)(a1 + 16) && *(_DWORD*)(v4 + 32) >= *(_DWORD*)a4)
	{
		v18 = a4;
	LABEL_5:
		sub_140055E80(a1, a2, v4, v4, v18);
		return a2;
	}
	v10 = v6[1];
	while (v10)
	{
		v6 = (_QWORD*)v10;
		if (*(_DWORD*)a4 >= *(_DWORD*)(v10 + 32))
			v10 = *(_QWORD*)(v10 + 24);
		else
			v10 = *(_QWORD*)(v10 + 16);
	}
	sub_140055E80(a1, a2, v10, (__int64)v6, a4);
	return a2;
}

