//----- (000000014054E0E0) ----------------------------------------------------
int** __fastcall sub_14054E0E0(__int64 a1, int** a2, __int64* a3, unsigned int* a4)
{
	__int64 v4; // r8
	__int64 v6; // rdx
	unsigned int v9; // ecx
	int** result; // rax
	unsigned int* v11; // r8
	int* v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rdi
	unsigned int v15; // eax
	int* v16; // rcx
	unsigned int v17; // eax
	int* v18; // rax
	int* v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rax
	__int64 v22; // r9
	__int64 i; // rax
	__int64 v24; // rax
	unsigned int v25; // eax
	unsigned int v26; // ecx
	unsigned int v27; // eax
	char v28[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *a3;
	v6 = *(_QWORD*)(a1 + 8);
	if (v4 == *(_QWORD*)(v6 + 16))
	{
		if (*(_QWORD*)(a1 + 16))
		{
			v9 = *(_DWORD*)(v4 + 32);
			if (*a4 < v9 || v9 >= *a4 && a4[1] < *(_DWORD*)(v4 + 36))
			{
				sub_14054E5E0(a1, a2, v4, v4, a4);
				return a2;
			}
		}
		v11 = a4;
		goto LABEL_8;
	}
	if (v4 == v6)
	{
		v13 = *a4;
		v14 = *(_QWORD*)(v6 + 24);
		v15 = *(_DWORD*)(v14 + 32);
		if (v15 < (unsigned int)v13 || (unsigned int)v13 >= v15 && *(_DWORD*)(v14 + 36) < a4[1])
		{
			if (v14 == v6
				|| (v17 = *(_DWORD*)(v14 + 32), (unsigned int)v13 < v17)
				|| v17 >= (unsigned int)v13 && a4[1] < *(_DWORD*)(v14 + 36))
			{
				v19 = sub_14054E8E0(v13, (__int64)a4);
				*(_QWORD*)(v14 + 16) = v19;
				v21 = *(_QWORD*)(a1 + 8);
				if (v14 == v21)
				{
					*(_QWORD*)(v21 + 8) = v19;
					*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v19;
				}
				else if (v14 == *(_QWORD*)(v21 + 16))
				{
					*(_QWORD*)(v21 + 16) = v19;
				}
			}
			else
			{
				v18 = sub_14054E8E0(v13, (__int64)a4);
				*(_QWORD*)(v14 + 24) = v18;
				v19 = v18;
				v20 = *(_QWORD*)(a1 + 8);
				if (v14 == *(_QWORD*)(v20 + 24))
					*(_QWORD*)(v20 + 24) = v19;
			}
			*((_QWORD*)v19 + 1) = v14;
			*((_QWORD*)v19 + 2) = 0i64;
			*((_QWORD*)v19 + 3) = 0i64;
			sub_1400081C0((__int64)v19, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
			++* (_QWORD*)(a1 + 16);
			*a2 = v19;
			return a2;
		}
		else
		{
			v16 = *(int**)sub_14054E6B0(a1, (__int64)v28, a4);
			result = a2;
			*a2 = v16;
		}
	}
	else
	{
		if (*(_BYTE*)v4 || *(_QWORD*)(*(_QWORD*)(v4 + 8) + 8i64) != v4)
		{
			v22 = *(_QWORD*)(v4 + 16);
			if (v22)
			{
				for (i = *(_QWORD*)(v22 + 24); i; i = *(_QWORD*)(i + 24))
					v22 = i;
			}
			else
			{
				v22 = *(_QWORD*)(v4 + 8);
				if (v4 == *(_QWORD*)(v22 + 16))
				{
					do
					{
						v24 = v22;
						v22 = *(_QWORD*)(v22 + 8);
					} while (v24 == *(_QWORD*)(v22 + 16));
				}
			}
		}
		else
		{
			v22 = *(_QWORD*)(v4 + 24);
		}
		v25 = *(_DWORD*)(v22 + 32);
		v26 = *a4;
		if (v25 >= *a4 && (v26 < v25 || *(_DWORD*)(v22 + 36) >= a4[1])
			|| (v27 = *(_DWORD*)(v4 + 32), v26 >= v27) && (v27 < v26 || a4[1] >= *(_DWORD*)(v4 + 36)))
		{
			v11 = a4;
		LABEL_8:
			v12 = *(int**)sub_14054E6B0(a1, (__int64)v28, v11);
			result = a2;
			*a2 = v12;
			return result;
		}
		if (*(_QWORD*)(v22 + 24))
			sub_14054E5E0(a1, a2, v4, v4, a4);
		else
			sub_14054E5E0(a1, a2, 0i64, v22, a4);
		return a2;
	}
	return result;
}

