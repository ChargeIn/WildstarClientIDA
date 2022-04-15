#include "../winhttp.h"

//----- (00000001401905C0) ----------------------------------------------------
void __fastcall sub_1401905C0(_QWORD* a1, int* a2, int* a3, int* a4)
{
	__int64 v4; // rbx
	__int64 v7; // r14
	__int64 v9; // rcx
	__int64 v10; // rbx
	_WORD* v11; // r8
	__int64 v12; // r9
	_WORD* v13; // rdx
	_WORD* j; // rcx
	int* v15; // r15
	int* v16; // rdi
	int* v17; // rdx
	_WORD* v18; // rcx
	__int64* v19; // rax
	unsigned __int64 v20; // rbx
	__int64 v21; // r13
	int* v22; // rax
	int* v23; // rdx
	int* v24; // r15
	int* i; // rdi
	unsigned __int64 v26; // r14
	int* v27; // rdx
	_WORD* v28; // rbx
	int* v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // [rsp+70h] [rbp+18h] BYREF
	unsigned __int64 v32; // [rsp+78h] [rbp+20h] BYREF

	if (a3 != a4)
	{
		v4 = a1[2];
		v7 = ((char*)a4 - (char*)a3) >> 1;
		if ((a1[3] - v4) >> 1 < v7 + 1)
		{
			v19 = &v31;
			v20 = (v4 - a1[1]) >> 1;
			v31 = ((char*)a4 - (char*)a3) >> 1;
			v32 = v20;
			if (v20 >= v7)
				v19 = (__int64*)&v32;
			v21 = 2 * (*v19 + v20 + 1);
			v22 = sub_14018B280(v21, 0);
			v23 = (int*)a1[1];
			v24 = v22;
			for (i = v22; v23 != a2; i = (int*)((char*)i + 2))
			{
				if (i)
					*(_WORD*)i = *(_WORD*)v23;
				v23 = (int*)((char*)v23 + 2);
			}
			v26 = 2 * v7;
			sub_1407DB590(i, a3, v26);
			v27 = (int*)a1[2];
			v28 = (_WORD*)((char*)i + v26);
			if (a2 != v27)
			{
				v29 = a2;
				do
				{
					if (v28)
						*v28 = *(_WORD*)v29;
					v29 = (int*)((char*)v29 + 2);
					++v28;
				} while (v29 != v27);
			}
			if (v28)
				*v28 = 0;
			v30 = a1[1];
			if (v30)
				sub_14018B900(v30, 0);
			a1[1] = v24;
			a1[2] = v28;
			a1[3] = (char*)v24 + v21;
		}
		else
		{
			v9 = a1[2];
			v10 = (v4 - (__int64)a2) >> 1;
			if (v10 < v7)
			{
				v15 = (int*)(v9 + 2);
				v16 = (int*)((char*)a3 + 2 * v10 + 2);
				sub_1407DB590((int*)(v9 + 2), v16, 2 * (((char*)a4 - (char*)v16) >> 1));
				v17 = a2;
				a1[2] += 2 * (v7 - v10);
				v18 = (_WORD*)a1[2];
				if (a2 != v15)
				{
					do
					{
						if (v18)
							*v18 = *(_WORD*)v17;
						v17 = (int*)((char*)v17 + 2);
						++v18;
					} while (v17 != v15);
				}
				a1[2] += 2 * v10;
				sub_1407DB590(a2, a3, 2 * (((char*)v16 - (char*)a3) >> 1));
			}
			else
			{
				v11 = (_WORD*)(v9 + 2);
				v12 = 2 * v7;
				v13 = v11;
				for (j = (_WORD*)(v9 - 2 * v7 + 2); j != v11; ++v13)
				{
					if (v13)
						*v13 = *j;
					++j;
				}
				a1[2] += v12;
				sub_1407DB590((int*)((char*)a2 + v12), a2, 2 * (v10 - v7) + 2);
				sub_1407DB590(a2, a3, 2 * v7);
			}
		}
	}
}

