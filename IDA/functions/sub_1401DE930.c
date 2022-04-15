//----- (00000001401DE930) ----------------------------------------------------
int** __fastcall sub_1401DE930(__int64 a1, int** a2, __int64* a3, int* a4)
{
	__int64 v4; // rax
	__int64 v5; // r8
	int** result; // rax
	int* v10; // r8
	int* v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rbp
	int* v14; // rax
	int* v15; // rbx
	__int64 v16; // rax
	int* v17; // rax
	__int64 v18; // rax
	int* v19; // rcx
	__int64 v20; // r9
	__int64 i; // rax
	__int64 v22; // rax
	int* v23; // [rsp+20h] [rbp-28h]
	char v24[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v5 = *a3;
	if (v5 == *(_QWORD*)(v4 + 16))
	{
		if (*(_QWORD*)(a1 + 16) && *a4 < *(_DWORD*)(v5 + 32))
		{
			v23 = a4;
		LABEL_5:
			sub_1401DF0C0(a1, a2, v5, v5, v23);
			return a2;
		}
		v10 = a4;
		goto LABEL_7;
	}
	if (v5 == v4)
	{
		v12 = (unsigned int)*a4;
		v13 = *(_QWORD*)(v4 + 24);
		if (*(_DWORD*)(v13 + 32) >= (int)v12)
		{
			v19 = *(int**)sub_1401DF1C0(a1, (__int64)v24, a4);
			result = a2;
			*a2 = v19;
		}
		else
		{
			if (v13 == v4 || (int)v12 < *(_DWORD*)(v13 + 32))
			{
				v17 = sub_14018B280(56i64, 0);
				v15 = v17;
				if (v17 != (int*)-32i64)
				{
					v17[8] = *a4;
					v17[9] = a4[1];
					v17[10] = a4[2];
					v17[11] = a4[3];
					v17[12] = a4[4];
				}
				*(_QWORD*)(v13 + 16) = v17;
				v18 = *(_QWORD*)(a1 + 8);
				if (v13 == v18)
				{
					*(_QWORD*)(v18 + 8) = v15;
					*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v15;
				}
				else if (v13 == *(_QWORD*)(v18 + 16))
				{
					*(_QWORD*)(v18 + 16) = v15;
				}
			}
			else
			{
				v14 = sub_1401DEB50(v12, a4);
				*(_QWORD*)(v13 + 24) = v14;
				v15 = v14;
				v16 = *(_QWORD*)(a1 + 8);
				if (v13 == *(_QWORD*)(v16 + 24))
					*(_QWORD*)(v16 + 24) = v15;
			}
			*((_QWORD*)v15 + 1) = v13;
			*((_QWORD*)v15 + 2) = 0i64;
			*((_QWORD*)v15 + 3) = 0i64;
			sub_1400081C0((__int64)v15, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
			++* (_QWORD*)(a1 + 16);
			*a2 = v15;
			return a2;
		}
	}
	else
	{
		if (*(_BYTE*)v5 || *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) != v5)
		{
			v20 = *(_QWORD*)(v5 + 16);
			if (v20)
			{
				for (i = *(_QWORD*)(v20 + 24); i; i = *(_QWORD*)(i + 24))
					v20 = i;
			}
			else
			{
				v20 = *(_QWORD*)(v5 + 8);
				if (v5 == *(_QWORD*)(v20 + 16))
				{
					do
					{
						v22 = v20;
						v20 = *(_QWORD*)(v20 + 8);
					} while (v22 == *(_QWORD*)(v20 + 16));
				}
			}
		}
		else
		{
			v20 = *(_QWORD*)(v5 + 24);
		}
		if (*(_DWORD*)(v20 + 32) >= *a4 || *a4 >= *(_DWORD*)(v5 + 32))
		{
			v10 = a4;
		LABEL_7:
			v11 = *(int**)sub_1401DF1C0(a1, (__int64)v24, v10);
			result = a2;
			*a2 = v11;
			return result;
		}
		v23 = a4;
		if (*(_QWORD*)(v20 + 24))
			goto LABEL_5;
		sub_1401DF0C0(a1, a2, 0i64, v20, a4);
		return a2;
	}
	return result;
}

