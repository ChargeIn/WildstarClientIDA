//----- (00000001403DF7E0) ----------------------------------------------------
int** __fastcall sub_1403DF7E0(__int64 a1, int** a2, __int64* a3, _QWORD* a4)
{
	__int64 v4; // r8
	__int64 v6; // r9
	unsigned int v8; // edx
	int* v9; // rcx
	int** result; // rax
	__int64 v11; // r9
	unsigned int v12; // eax
	__int64 i; // rax
	__int64 v14; // rax
	unsigned int v15; // eax
	unsigned int v16; // edx
	unsigned int v17; // eax
	char v18[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *a3;
	v6 = *(_QWORD*)(a1 + 8);
	if (v4 == *(_QWORD*)(v6 + 16))
	{
		if (!*(_QWORD*)(a1 + 16)
			|| (v8 = *(_DWORD*)(v4 + 32), *(_DWORD*)a4 >= v8) && (*(_DWORD*)a4 > v8 || a4[1] >= *(_QWORD*)(v4 + 40)))
		{
		LABEL_6:
			v9 = *(int**)sub_1403DFC90(a1, (__int64)v18, a4);
			result = a2;
			*a2 = v9;
			return result;
		}
		goto LABEL_28;
	}
	if (v4 == v6)
	{
		v11 = *(_QWORD*)(v6 + 24);
		v12 = *(_DWORD*)(v11 + 32);
		if (v12 >= *(_DWORD*)a4 && (v12 > *(_DWORD*)a4 || *(_QWORD*)(v11 + 40) >= a4[1]))
			goto LABEL_6;
	}
	else
	{
		if (*(_BYTE*)v4 || *(_QWORD*)(*(_QWORD*)(v4 + 8) + 8i64) != v4)
		{
			v11 = *(_QWORD*)(v4 + 16);
			if (v11)
			{
				for (i = *(_QWORD*)(v11 + 24); i; i = *(_QWORD*)(i + 24))
					v11 = i;
			}
			else
			{
				v11 = *(_QWORD*)(v4 + 8);
				if (v4 == *(_QWORD*)(v11 + 16))
				{
					do
					{
						v14 = v11;
						v11 = *(_QWORD*)(v11 + 8);
					} while (v14 == *(_QWORD*)(v11 + 16));
				}
			}
		}
		else
		{
			v11 = *(_QWORD*)(v4 + 24);
		}
		v15 = *(_DWORD*)(v11 + 32);
		v16 = *(_DWORD*)a4;
		if (v15 >= *(_DWORD*)a4 && (v15 > v16 || *(_QWORD*)(v11 + 40) >= a4[1]))
			goto LABEL_6;
		v17 = *(_DWORD*)(v4 + 32);
		if (v16 >= v17 && (v16 > v17 || a4[1] >= *(_QWORD*)(v4 + 40)))
			goto LABEL_6;
		if (*(_QWORD*)(v11 + 24))
		{
		LABEL_28:
			v11 = v4;
			goto LABEL_29;
		}
	}
	v4 = 0i64;
LABEL_29:
	sub_1403DFB70(a1, a2, v4, v11, a4);
	return a2;
}
// 1403DF7E0: using guessed type char var_18[24];

