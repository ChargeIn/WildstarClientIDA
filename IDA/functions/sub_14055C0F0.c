//----- (000000014055C0F0) ----------------------------------------------------
__int64 __fastcall sub_14055C0F0(__int64 a1, int* a2)
{
	unsigned __int64 v2; // rsi
	unsigned int v5; // ebp
	__int64 v6; // rax
	unsigned __int64 v7; // rax
	_DWORD* v8; // rcx
	__int64 v9; // rdi
	int* v10; // rax
	int* v11; // rdx
	int* v12; // r15
	__int64 v13; // rcx
	_DWORD* v14; // r14
	__int64 v15; // rdi
	int* v16; // rax
	int* v17; // rdx
	int* v18; // r15
	__int64 v19; // rcx
	__int64 v21; // [rsp+50h] [rbp+8h]
	__int64 v22; // [rsp+50h] [rbp+8h]

	v2 = 0i64;
	*(_QWORD*)(a1 + 26352) = 0i64;
	if (a2)
	{
		v5 = 0;
		v6 = sub_1403D90D0(a1, *a2);
		if (v6)
		{
			v5 = *(_DWORD*)(v6 + 264);
			if (v5)
			{
				v21 = v5;
				v7 = 0i64;
				v8 = a2 + 1;
				while (*v8 != v5)
				{
					++v7;
					++v8;
					if (v7 >= 5)
						goto LABEL_9;
				}
				HIDWORD(v21) = a2[v7 + 6];
			LABEL_9:
				v9 = *(_QWORD*)(a1 + 26352);
				v10 = sub_14018DB00(*(_QWORD*)(a1 + 26344), v9 + 1, 8i64);
				*(_QWORD*)&v10[2 * v9] = v21;
				v11 = *(int**)(a1 + 26344);
				v12 = v10;
				if (v11 != v10)
				{
					sub_1407DB590(v10, v11, 8i64 * *(_QWORD*)(a1 + 26352));
					v13 = *(_QWORD*)(a1 + 26344);
					if (v13)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
					*(_QWORD*)(a1 + 26344) = v12;
				}
				*(_QWORD*)(a1 + 26352) = v9 + 1;
			}
		}
		v14 = a2 + 1;
		do
		{
			if (!*v14)
				break;
			if (*v14 != v5)
			{
				v15 = *(_QWORD*)(a1 + 26352);
				LODWORD(v22) = *v14;
				HIDWORD(v22) = v14[5];
				v16 = sub_14018DB00(*(_QWORD*)(a1 + 26344), v15 + 1, 8i64);
				*(_QWORD*)&v16[2 * v15] = v22;
				v17 = *(int**)(a1 + 26344);
				v18 = v16;
				if (v17 != v16)
				{
					sub_1407DB590(v16, v17, 8i64 * *(_QWORD*)(a1 + 26352));
					v19 = *(_QWORD*)(a1 + 26344);
					if (v19)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
					*(_QWORD*)(a1 + 26344) = v18;
				}
				*(_QWORD*)(a1 + 26352) = v15 + 1;
			}
			++v2;
			++v14;
		} while (v2 < 5);
	}
	return sub_14042E1F0(*(_QWORD*)(qword_140C65898 + 29504), (int**)(a1 + 26344));
}
// 140C65898: using guessed type __int64 qword_140C65898;

