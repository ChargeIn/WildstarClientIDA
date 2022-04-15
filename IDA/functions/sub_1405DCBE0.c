#include "../winhttp.h"

//----- (00000001405DCBE0) ----------------------------------------------------
void __fastcall sub_1405DCBE0(unsigned int* a1, unsigned int a2, __int64 a3)
{
	__int64 v4; // r12
	__int64 v5; // rdi
	unsigned __int64 v6; // r9
	unsigned __int64 v7; // rdx
	__int64 v8; // r8
	int* v9; // rax
	int** v10; // rbp
	__int64 v11; // rax
	int v12; // r8d
	int v13; // ecx
	__int64 v14; // rbx
	int* v15; // rax
	int* v16; // r14
	int* v17; // rdx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // r9
	__int64 v21; // rdx
	__int64 v22[2]; // [rsp+20h] [rbp-38h] BYREF

	if (a2)
	{
		v4 = a2;
		v5 = a3 + 8;
		do
		{
			v6 = *((_QWORD*)a1 + 14);
			v7 = 0i64;
			if (v6)
			{
				v8 = *((_QWORD*)a1 + 13);
				while (*(_DWORD*)(*(_QWORD*)v8 + 8i64) != *(_DWORD*)v5
					|| *(_QWORD*)(*(_QWORD*)v8 + 16i64) != *(_QWORD*)(v5 + 8))
				{
					++v7;
					v8 += 8i64;
					if (v7 >= v6)
						goto LABEL_8;
				}
				v11 = *(_QWORD*)(*((_QWORD*)a1 + 13) + 8 * v7);
				v12 = *(_DWORD*)(v5 + 28);
				v13 = *(_DWORD*)(v5 + 32);
				if (*(_DWORD*)(v11 + 36) != v12 || *(_DWORD*)(v11 + 40) != v13)
				{
					*(_DWORD*)(v11 + 36) = v12;
					*(_DWORD*)(v11 + 40) = v13;
				}
			}
			else
			{
			LABEL_8:
				v9 = sub_14018B280(64i64, 0);
				if (v9)
					v10 = sub_1405DBC40((int**)v9, (__int64)a1, (int**)(v5 - 8));
				else
					v10 = 0i64;
				v14 = *((_QWORD*)a1 + 14);
				v15 = sub_14018DB00(*((_QWORD*)a1 + 13), v14 + 1, 8i64);
				v16 = v15;
				*(_QWORD*)&v15[2 * v14] = v10;
				v17 = (int*)*((_QWORD*)a1 + 13);
				if (v17 != v15)
				{
					sub_1407DB590(v15, v17, 8i64 * *((_QWORD*)a1 + 14));
					v18 = *((_QWORD*)a1 + 13);
					if (v18)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
					*((_QWORD*)a1 + 13) = v16;
				}
				v19 = qword_140C65898;
				*((_QWORD*)a1 + 14) = v14 + 1;
				v20 = *a1;
				v21 = *((unsigned int*)v10 + 2);
				v22[0] = v19 + 26680;
				v22[1] = (__int64)sub_1405E2C10;
				sub_1403F87B0(v19, v21, v22, v20);
			}
			v5 += 48i64;
			--v4;
		} while (v4);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

