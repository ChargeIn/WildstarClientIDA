#include "../winhttp.h"

//----- (0000000140190400) ----------------------------------------------------
void __fastcall sub_140190400(__int64 a1, int* a2, int* a3, int* a4)
{
	__int64 v4; // rbp
	unsigned __int64 v7; // r14
	__int64 v10; // rbx
	signed __int64 v11; // rbp
	int* v12; // rdi
	unsigned __int64 v13; // rbp
	__int64* v14; // rax
	int* v15; // rax
	int* v16; // rbx
	int* v17; // rbp
	int* v18; // rdi
	__int64 v19; // rbx
	int* v20; // rdi
	_BYTE* v21; // rdi
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64 v24; // [rsp+70h] [rbp+18h] BYREF
	unsigned __int64 v25; // [rsp+78h] [rbp+20h] BYREF

	if (a3 != a4)
	{
		v4 = *(_QWORD*)(a1 + 16);
		v7 = (char*)a4 - (char*)a3;
		if (*(_QWORD*)(a1 + 24) - v4 < (char*)a4 - (char*)a3 + 1)
		{
			v13 = v4 - *(_QWORD*)(a1 + 8);
			v24 = (char*)a4 - (char*)a3;
			v25 = v13;
			v14 = &v24;
			if (v13 >= v7)
				v14 = (__int64*)&v25;
			v24 = v13 + 1 + *v14;
			v15 = sub_14018B280(v24, 0);
			v16 = *(int**)(a1 + 8);
			v17 = v15;
			sub_1407DB590(v15, v16, (char*)a2 - (char*)v16);
			v18 = (int*)((char*)a2 + (char*)v17 - (char*)v16);
			sub_1407DB590(v18, a3, v7);
			v19 = *(_QWORD*)(a1 + 16);
			v20 = (int*)((char*)a4 + (char*)v18 - (char*)a3);
			sub_1407DB590(v20, a2, v19 - (_QWORD)a2);
			v21 = (_BYTE*)(v19 + (char*)v20 - (char*)a2);
			if (v21)
				*v21 = 0;
			v22 = *(_QWORD*)(a1 + 8);
			if (v22)
				sub_14018B900(v22, 0);
			v23 = v24;
			*(_QWORD*)(a1 + 8) = v17;
			*(_QWORD*)(a1 + 16) = v21;
			*(_QWORD*)(a1 + 24) = (char*)v17 + v23;
		}
		else
		{
			v10 = *(_QWORD*)(a1 + 16);
			v11 = v4 - (_QWORD)a2;
			if (v11 < (__int64)v7)
			{
				v12 = (int*)((char*)a3 + v11 + 1);
				sub_1407DB590((int*)(v10 + 1), v12, (char*)a4 - (char*)v12);
				*(_QWORD*)(a1 + 16) += v7 - v11;
				sub_14001B010(a2, v10 + 1, *(int**)(a1 + 16));
				*(_QWORD*)(a1 + 16) += v11;
				sub_1407DB590(a2, a3, (char*)v12 - (char*)a3);
			}
			else
			{
				sub_14001B010((int*)(v10 - v7 + 1), v10 + 1, (int*)(v10 + 1));
				*(_QWORD*)(a1 + 16) += v7;
				sub_1407DB590((int*)((char*)a2 + v7), a2, v11 - v7 + 1);
				sub_1407DB590(a2, a3, v7);
			}
		}
	}
}

