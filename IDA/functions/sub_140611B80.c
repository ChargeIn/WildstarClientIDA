//----- (0000000140611B80) ----------------------------------------------------
void __fastcall sub_140611B80(__int64 a1, _DWORD** a2)
{
	unsigned int v4; // ebp
	__int64 v5; // rcx
	int v6; // edi
	__int64 v7; // rbx
	__int64* v8; // rax
	__int64 v9; // rcx
	int* v10; // rbx
	unsigned int v11; // edi
	int* v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rax
	void(__fastcall * **v16)(_QWORD, __int64); // rcx
	__int64 v17; // rbp
	int* v18; // rax
	int* v19; // rdi
	int* v20; // rdx
	__int64 v21; // rcx
	char v22; // [rsp+48h] [rbp+10h] BYREF

	if (a2 && (a2[8][83] & 2) != 0)
	{
		v4 = 0;
		if (*(_QWORD*)(a1 + 16))
		{
			v5 = 0i64;
			while (1)
			{
				v6 = *a2[8];
				v7 = *(_QWORD*)(a1 + 8) + 8 * v5;
				v8 = (__int64*)(*((__int64(__fastcall**)(_DWORD**, char*)) * a2 + 4))(a2, &v22);
				v9 = *(_QWORD*)v7;
				if (*(_DWORD*)(*(_QWORD*)v7 + 12i64) == v6)
					break;
				v5 = ++v4;
				if ((unsigned __int64)v4 >= *(_QWORD*)(a1 + 16))
					goto LABEL_7;
			}
			v15 = *v8;
			*(_BYTE*)v9 = 1;
			*(_QWORD*)(v9 + 4) = v15;
		}
		else
		{
		LABEL_7:
			v10 = sub_14018B280(24i64, 0);
			if (v10)
			{
				v11 = *a2[8];
				v12 = (int*)(*((__int64(__fastcall**)(_DWORD**, char*)) * a2 + 4))(a2, &v22);
				*(_BYTE*)v10 = 1;
				v10[1] = *v12;
				v13 = qword_140C65898;
				v10[2] = v12[1];
				v10[3] = v11;
				*((_QWORD*)v10 + 2) = 0i64;
				if (sub_1403AC780(v13 + 160, v10 + 1))
				{
					v14 = (__int64)sub_14018B280(528i64, 0);
					if (v14)
						v14 = sub_1405C7150(v14, 14);
					*((_QWORD*)v10 + 2) = v14;
					if ((int)sub_1405C7AD0(v14, v11, 0) < 0)
					{
						v16 = (void(__fastcall***)(_QWORD, __int64)) * ((_QWORD*)v10 + 2);
						if (v16)
							(**v16)(v16, 1i64);
						*((_QWORD*)v10 + 2) = 0i64;
					}
				}
			}
			else
			{
				v10 = 0i64;
			}
			v17 = *(_QWORD*)(a1 + 16);
			v18 = sub_14018DB00(*(_QWORD*)(a1 + 8), v17 + 1, 8i64);
			v19 = v18;
			*(_QWORD*)&v18[2 * v17] = v10;
			v20 = *(int**)(a1 + 8);
			if (v20 != v18)
			{
				sub_1407DB590(v18, v20, 8i64 * *(_QWORD*)(a1 + 16));
				v21 = *(_QWORD*)(a1 + 8);
				if (v21)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v21 - 16) + 8i64))(v21 - 16);
				*(_QWORD*)(a1 + 8) = v19;
			}
			*(_QWORD*)(a1 + 16) = v17 + 1;
			*(_QWORD*)a1 = v17;
			*(_BYTE*)(a1 + 24) = 1;
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

