//----- (00000001403D3E70) ----------------------------------------------------
int** __fastcall sub_1403D3E70(__int64 a1, int** a2, __int64* a3, _QWORD* a4)
{
	__int64 v4; // rax
	__int64 v5; // r8
	int** result; // rax
	_QWORD* v10; // r8
	int* v11; // rcx
	__int64 v12; // rdi
	int* v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rax
	int* v16; // rcx
	__int64 v17; // r9
	__int64 i; // rax
	__int64 v19; // rax
	_QWORD* v20; // [rsp+20h] [rbp-28h]
	char v21[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v5 = *a3;
	if (v5 == *(_QWORD*)(v4 + 16))
	{
		if (*(_QWORD*)(a1 + 16) && *(_DWORD*)a4 < *(_DWORD*)(v5 + 32))
		{
			v20 = a4;
		LABEL_5:
			sub_1403D6B20(a1, a2, v5, v5, v20);
			return a2;
		}
		v10 = a4;
		goto LABEL_7;
	}
	if (v5 == v4)
	{
		v12 = *(_QWORD*)(v4 + 24);
		if (*(_DWORD*)(v12 + 32) >= *(_DWORD*)a4)
		{
			v16 = *(int**)sub_1403D6C10(a1, (__int64)v21, a4);
			result = a2;
			*a2 = v16;
		}
		else
		{
			if (v12 == v4 || *(_DWORD*)a4 < *(_DWORD*)(v12 + 32))
			{
				v13 = sub_14018B280(40i64, 0);
				if (v13 != (int*)-32i64)
					*((_QWORD*)v13 + 4) = *a4;
				*(_QWORD*)(v12 + 16) = v13;
				v15 = *(_QWORD*)(a1 + 8);
				if (v12 == v15)
				{
					*(_QWORD*)(v15 + 8) = v13;
					*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v13;
				}
				else if (v12 == *(_QWORD*)(v15 + 16))
				{
					*(_QWORD*)(v15 + 16) = v13;
				}
			}
			else
			{
				v13 = sub_14018B280(40i64, 0);
				if (v13 != (int*)-32i64)
					*((_QWORD*)v13 + 4) = *a4;
				*(_QWORD*)(v12 + 24) = v13;
				v14 = *(_QWORD*)(a1 + 8);
				if (v12 == *(_QWORD*)(v14 + 24))
					*(_QWORD*)(v14 + 24) = v13;
			}
			*((_QWORD*)v13 + 1) = v12;
			*((_QWORD*)v13 + 2) = 0i64;
			*((_QWORD*)v13 + 3) = 0i64;
			sub_1400081C0((__int64)v13, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
			++* (_QWORD*)(a1 + 16);
			*a2 = v13;
			return a2;
		}
	}
	else
	{
		if (*(_BYTE*)v5 || *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) != v5)
		{
			v17 = *(_QWORD*)(v5 + 16);
			if (v17)
			{
				for (i = *(_QWORD*)(v17 + 24); i; i = *(_QWORD*)(i + 24))
					v17 = i;
			}
			else
			{
				v17 = *(_QWORD*)(v5 + 8);
				if (v5 == *(_QWORD*)(v17 + 16))
				{
					do
					{
						v19 = v17;
						v17 = *(_QWORD*)(v17 + 8);
					} while (v19 == *(_QWORD*)(v17 + 16));
				}
			}
		}
		else
		{
			v17 = *(_QWORD*)(v5 + 24);
		}
		if (*(_DWORD*)(v17 + 32) >= *(_DWORD*)a4 || *(_DWORD*)a4 >= *(_DWORD*)(v5 + 32))
		{
			v10 = a4;
		LABEL_7:
			v11 = *(int**)sub_1403D6C10(a1, (__int64)v21, v10);
			result = a2;
			*a2 = v11;
			return result;
		}
		v20 = a4;
		if (*(_QWORD*)(v17 + 24))
			goto LABEL_5;
		sub_1403D6B20(a1, a2, 0i64, v17, a4);
		return a2;
	}
	return result;
}

