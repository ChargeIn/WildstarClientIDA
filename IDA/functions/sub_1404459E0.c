#include "../winhttp.h"

//----- (00000001404459E0) ----------------------------------------------------
int* __fastcall sub_1404459E0(__int64 a1, char* a2, __int64 a3)
{
	int* v6; // rax
	int* v7; // rbx
	char v8; // cl
	__int64 v9; // rdx
	__int64 v10; // rdi
	int* v11; // rbp
	int* v12; // rax
	int* v13; // rbx
	int* v14; // rsi
	__int64 v15; // rbp
	int* v16; // rax
	__int64 v17; // rcx
	__int64 v18; // r8
	__int64 v19; // rdx
	int* v22; // [rsp+48h] [rbp+10h]
	int* v23; // [rsp+50h] [rbp+18h]

	v6 = sub_14018B280(56i64, 0);
	v7 = v6;
	v23 = v6;
	if (v6 != (int*)-32i64)
	{
		v6[8] = *((_DWORD*)a2 + 8);
		sub_1403FE910((__int64*)v6 + 5, (__int64)(a2 + 40));
	}
	v8 = *a2;
	*((_QWORD*)v7 + 1) = a3;
	*((_QWORD*)v7 + 2) = 0i64;
	*((_QWORD*)v7 + 3) = 0i64;
	*(_BYTE*)v7 = v8;
	v9 = *((_QWORD*)a2 + 3);
	if (v9)
		*((_QWORD*)v7 + 3) = sub_1404459E0(a1, v9, v7);
	v10 = *((_QWORD*)a2 + 2);
	v11 = v7;
	v22 = v7;
	if (!v10)
		return v7;
	do
	{
		v12 = sub_14018B280(56i64, 0);
		v13 = v12;
		v14 = v12 + 8;
		if (v12 != (int*)-32i64)
		{
			*v14 = *(_DWORD*)(v10 + 32);
			v15 = *(_QWORD*)(v10 + 48);
			*((_QWORD*)v12 + 6) = v15;
			if (v15)
			{
				v16 = sub_14018B280(8 * v15 + 16, 0);
				if (v16)
				{
					*((_QWORD*)v16 + 1) = v15;
					*(_QWORD*)v16 = off_140B55060;
					v17 = (__int64)(v16 + 4);
				}
				else
				{
					v17 = 16i64;
				}
			}
			else
			{
				v17 = 0i64;
			}
			v18 = *((_QWORD*)v14 + 2);
			*((_QWORD*)v14 + 1) = v17;
			sub_1407DB590((int*)v17, *(int**)(v10 + 40), 8 * v18);
			v11 = v22;
		}
		*(_BYTE*)v13 = *(_BYTE*)v10;
		*((_QWORD*)v13 + 2) = 0i64;
		*((_QWORD*)v13 + 3) = 0i64;
		*((_QWORD*)v11 + 2) = v13;
		*((_QWORD*)v13 + 1) = v11;
		v19 = *(_QWORD*)(v10 + 24);
		if (v19)
			*((_QWORD*)v13 + 3) = sub_1404459E0(a1, v19, v13);
		v10 = *(_QWORD*)(v10 + 16);
		v11 = v13;
		v22 = v13;
	} while (v10);
	return v23;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

