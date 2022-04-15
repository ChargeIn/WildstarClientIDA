//----- (00000001405BC390) ----------------------------------------------------
void __fastcall sub_1405BC390(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v6; // r8d
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rbp
	__int64 v10; // rcx
	int* v11; // rbx
	int* v12; // rax
	__int64 v13; // r8
	unsigned int v14; // edx
	__int64 v15; // rcx
	int* v16; // rax
	__int64 v17; // rcx
	unsigned int v18; // r8d
	__int64 v19; // rdx
	__int64 v20; // r9
	__int64 v21; // rax
	int* v22; // rax
	__int64 v23; // [rsp+20h] [rbp-28h] BYREF
	__int64 v24; // [rsp+28h] [rbp-20h]
	__int64 v25; // [rsp+60h] [rbp+18h] BYREF
	int* v26; // [rsp+68h] [rbp+20h] BYREF

	if (a3 && (*(_BYTE*)(a3 + 28) & 1) != 0 && a2)
	{
		v6 = *(_DWORD*)(a2 + 8);
		v7 = *(_QWORD*)(a1 + 48);
		v8 = *(_QWORD*)(v7 + 8);
		v9 = a1 + 40;
		v10 = v7;
		while (v8)
		{
			if (*(_DWORD*)(v8 + 32) < v6)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v10 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v10 == v7 || (v25 = v10, v6 < *(_DWORD*)(v10 + 32)))
			v25 = v7;
		if (v25 == *(_QWORD*)(a1 + 48))
		{
			v11 = sub_14018B280(32i64, 0);
			if (v11)
			{
				v12 = sub_14018B280(48i64, 0);
				*((_QWORD*)v11 + 2) = 0i64;
				*((_QWORD*)v11 + 1) = v12;
				*(_BYTE*)v12 = 0;
				*(_QWORD*)(*((_QWORD*)v11 + 1) + 8i64) = 0i64;
				*(_QWORD*)(*((_QWORD*)v11 + 1) + 16i64) = *((_QWORD*)v11 + 1);
				*(_QWORD*)(*((_QWORD*)v11 + 1) + 24i64) = *((_QWORD*)v11 + 1);
			}
			else
			{
				v11 = 0i64;
			}
			v13 = *(_QWORD*)(v9 + 8);
			v14 = *(_DWORD*)(a2 + 8);
			v15 = *(_QWORD*)(v13 + 8);
			v16 = (int*)v13;
			while (v15)
			{
				if (*(_DWORD*)(v15 + 32) < v14)
				{
					v15 = *(_QWORD*)(v15 + 24);
				}
				else
				{
					v16 = (int*)v15;
					v15 = *(_QWORD*)(v15 + 16);
				}
			}
			if (v16 == (int*)v13 || v14 < v16[8])
			{
				LODWORD(v23) = *(_DWORD*)(a2 + 8);
				v24 = 0i64;
				v25 = (__int64)v16;
				sub_140055C60(v9, &v26, &v25, &v23);
				v16 = v26;
			}
			*((_QWORD*)v16 + 5) = v11;
		}
		else
		{
			v11 = *(int**)(v25 + 40);
		}
		v17 = *((_QWORD*)v11 + 1);
		v18 = *(_DWORD*)(a3 + 24);
		v19 = *(_QWORD*)(v17 + 8);
		v20 = v17;
		v21 = v19;
		while (v21)
		{
			if (*(_DWORD*)(v21 + 32) < v18)
			{
				v21 = *(_QWORD*)(v21 + 24);
			}
			else
			{
				v20 = v21;
				v21 = *(_QWORD*)(v21 + 16);
			}
		}
		if (v20 == v17 || (v25 = v20, v18 < *(_DWORD*)(v20 + 32)))
			v25 = v17;
		if (v25 == v17)
		{
			v22 = (int*)v17;
			while (v19)
			{
				if (*(_DWORD*)(v19 + 32) < v18)
				{
					v19 = *(_QWORD*)(v19 + 24);
				}
				else
				{
					v22 = (int*)v19;
					v19 = *(_QWORD*)(v19 + 16);
				}
			}
			if (v22 == (int*)v17 || v18 < v22[8])
			{
				LODWORD(v23) = v18;
				v24 = 0i64;
				v25 = (__int64)v22;
				sub_140055C60((__int64)v11, &v26, &v25, &v23);
				v22 = v26;
			}
			*((_QWORD*)v22 + 5) = a3;
			(**(void(__fastcall***)(__int64))a3)(a3);
		}
	}
}

