#include "../winhttp.h"

//----- (000000014043F640) ----------------------------------------------------
void __fastcall sub_14043F640(_QWORD* a1, unsigned __int64 a2)
{
	unsigned int v2; // r8d
	unsigned __int64 v4; // r14
	__int64 v5; // rdx
	wchar_t** v6; // rdi
	unsigned int v7; // eax
	unsigned __int64 v8; // rbp
	unsigned __int64 v9; // rbx
	__int64 v10; // rdi
	int* v11; // r8
	int* v12; // r10
	int* v13; // r9
	__int64 v14; // rax
	__int64 v15; // rcx
	_QWORD* i; // rdi
	unsigned __int64 v17; // rdx
	__int64 v18; // rax
	__int64 v19; // rcx

	v2 = a2;
	v4 = (__int64)(a1[3] - a1[2]) >> 3;
	if (a2 > v4)
	{
		v5 = 28i64;
		v6 = (wchar_t**)&unk_140AF6CD0;
		do
		{
			if (*((_DWORD*)v6 + (v5 >> 1)) >= v2)
			{
				v5 >>= 1;
			}
			else
			{
				v6 = (wchar_t**)((char*)v6 + 4 * (v5 >> 1) + 4);
				v5 += -1 - (v5 >> 1);
			}
		} while (v5 > 0);
		v7 = -5;
		if (v6 != off_140AF6D40)
			v7 = *(_DWORD*)v6;
		v8 = v7;
		if (v7 > v4)
		{
			v9 = 0i64;
			if (v7)
			{
				v10 = 2i64 * v7;
				v11 = sub_14018B280(v10 * 4, 0);
				v12 = &v11[v10];
			}
			else
			{
				v11 = 0i64;
				v12 = 0i64;
			}
			v13 = v11;
			if (v8)
			{
				memset(v11, 0, 8 * v8);
				v13 = &v11[2 * v8];
			}
			if (v4)
			{
				do
				{
					v14 = a1[2];
					v15 = *(_QWORD*)(v14 + 8 * v9);
					for (i = (_QWORD*)(v14 + 8 * v9); v15; i = (_QWORD*)(v18 + 8 * v9))
					{
						v17 = *(unsigned int*)(v15 + 8) % v8;
						*i = *(_QWORD*)v15;
						*(_QWORD*)v15 = *(_QWORD*)&v11[2 * v17];
						*(_QWORD*)&v11[2 * v17] = v15;
						v18 = a1[2];
						v15 = *(_QWORD*)(v18 + 8 * v9);
					}
					++v9;
				} while (v9 < v4);
			}
			v19 = a1[2];
			a1[2] = v11;
			a1[3] = v13;
			a1[4] = v12;
			if (v19)
				sub_14018B900(v19, 0);
		}
	}
}
// 140AF6D40: using guessed type wchar_t *off_140AF6D40[3];

