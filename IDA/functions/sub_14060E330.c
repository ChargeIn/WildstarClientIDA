//----- (000000014060E330) ----------------------------------------------------
void __fastcall sub_14060E330(__int64 a1, __int64 a2)
{
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rdi
	int v7; // esi
	int v8; // ebp
	int v9; // r14d
	int v10; // r15d
	int v11; // r12d
	int* v12; // rax
	__int64 v13; // rcx
	int* v14; // rdx
	__int64 v15; // rcx
	int* v16; // [rsp+20h] [rbp-48h]
	unsigned __int64 v17; // [rsp+80h] [rbp+18h]
	__int64 v18; // [rsp+88h] [rbp+20h]

	if ((unsigned int)sub_14060B170(a1))
	{
		if (a2 != -40)
		{
			*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 44);
			*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 48);
			*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 52);
		}
		*(_DWORD*)(a1 + 32) = *(_DWORD*)a2;
		*(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 4);
		*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 8);
		*(_DWORD*)(a1 + 52) = *(_DWORD*)(a2 + 20);
		*(_DWORD*)(a1 + 44) = *(_DWORD*)(a2 + 12);
		*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 16);
		*(_DWORD*)(a1 + 56) = *(_DWORD*)(a2 + 24);
		v17 = 0i64;
		if (*(_DWORD*)(a2 + 28))
		{
			v4 = 0i64;
			v18 = 0i64;
			do
			{
				v5 = *(_QWORD*)(a2 + 32);
				v6 = *(_QWORD*)(a1 + 72);
				v7 = *(_DWORD*)(v5 + v4);
				v8 = *(_DWORD*)(v5 + v4 + 4);
				v9 = *(_DWORD*)(v5 + v4 + 8);
				v10 = *(_DWORD*)(v5 + v4 + 12);
				v11 = *(_DWORD*)(v5 + v4 + 16);
				v12 = sub_14018DB00(*(_QWORD*)(a1 + 64), v6 + 1, 20i64);
				v13 = 5 * v6;
				v12[v13] = v7;
				v12[v13 + 1] = v8;
				v12[v13 + 2] = v9;
				v12[v13 + 3] = v10;
				v12[v13 + 4] = v11;
				v14 = *(int**)(a1 + 64);
				v16 = v12;
				if (v14 != v12)
				{
					sub_1407DB590(v12, v14, 20i64 * *(_QWORD*)(a1 + 72));
					v15 = *(_QWORD*)(a1 + 64);
					if (v15)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
					*(_QWORD*)(a1 + 64) = v16;
				}
				v4 = v18 + 20;
				*(_QWORD*)(a1 + 72) = v6 + 1;
				++v17;
				v18 += 20i64;
			} while (v17 < *(unsigned int*)(a2 + 28));
		}
		sub_14060E4E0(a1);
	}
}

