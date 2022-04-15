#include "../winhttp.h"

//----- (00000001407BEB20) ----------------------------------------------------
__int64 __fastcall sub_1407BEB20(__int64* a1, const __m128i* a2)
{
	__int64 v5; // rax
	int* v6; // rsi
	__int64 v7; // rax
	__int64 i; // rbp
	__int64 v10; // rdi
	__int64 v11; // rdx
	__int64 v12; // r14
	__int64 j; // rdi
	unsigned __int64 v14; // r8
	__int64 v15; // r9
	__int64 k; // r10
	__int64 v17; // rdx
	__int16 v18; // ax
	unsigned int m; // edx
	_QWORD* v20; // rcx
	unsigned int n; // r8d
	unsigned __int64 v22; // rdx
	__int64 v23; // rcx
	__int64 v24; // rax
	int v25; // eax
	unsigned int v26; // edi
	unsigned int ii; // r8d
	int v28; // eax
	__int64 v29; // rcx
	unsigned int jj; // ebp
	__int64 v31; // rdx
	__int64 v32; // rdi
	__int64 v33; // r14
	__int64 v34; // rcx
	int v35; // edi
	__int64 v36; // rbx
	__int64 v37; // rcx
	__int64 v38; // [rsp+20h] [rbp-48h] BYREF
	__int64 v39[3]; // [rsp+28h] [rbp-40h] BYREF

	if (!a2)
		return 2147500037i64;
	v5 = *a1;
	LODWORD(v38) = -1;
	if (!(*(unsigned int(__fastcall**)(__int64*, __int64*))(v5 + 64))(a1, &v38))
		return 2147500037i64;
	v6 = sub_14018B280(88i64, 0);
	if (v6)
	{
		*((_QWORD*)v6 + 1) = 0i64;
		*((_QWORD*)v6 + 2) = 0i64;
		*((_QWORD*)v6 + 4) = 0i64;
		*((_QWORD*)v6 + 5) = 0i64;
		*((_QWORD*)v6 + 7) = 0i64;
		*((_QWORD*)v6 + 8) = 0i64;
		*((_QWORD*)v6 + 9) = 0i64;
		*((_QWORD*)v6 + 10) = 0i64;
	}
	else
	{
		v6 = 0i64;
	}
	sub_1407E4830(v6, 0i64, 0x58ui64);
	*v6 = 1146372684;
	v7 = -1i64;
	while (*(_WORD*)(*(_QWORD*)a1[3] + 2 * v7++ + 2) != 0)
		;
	sub_1407BFFF0((unsigned int*)v6 + 2, v7 + 1);
	sub_1407DB590(*((int**)v6 + 2), *(int**)a1[3], 2i64 * (unsigned int)v6[2]);
	v6[6] = *(_DWORD*)(a1[3] + 8);
	sub_1407C0090((int**)v6 + 4, *(_DWORD*)(a1[3] + 12));
	for (i = 0i64;
		(unsigned int)i < v6[8];
		*(_DWORD*)(v12 + *((_QWORD*)v6 + 5) + 20) = *(_DWORD*)(*(_QWORD*)(a1[3] + 16) + v10 + 24))
	{
		v10 = 40 * i;
		v11 = -1i64;
		v12 = 24 * i;
		do
			++v11;
		while (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1[3] + 16) + 40 * i) + 2 * v11));
		sub_1407BFFF0((unsigned int*)(v12 + *((_QWORD*)v6 + 5)), v11 + 1);
		sub_1407DB590(
			*(int**)(*((_QWORD*)v6 + 5) + 24 * i + 8),
			*(int**)(*(_QWORD*)(a1[3] + 16) + 40 * i),
			2i64 * *(unsigned int*)(*((_QWORD*)v6 + 5) + 24 * i));
		i = (unsigned int)(i + 1);
		*(_WORD*)(v12 + *((_QWORD*)v6 + 5) + 16) = *(_WORD*)(*(_QWORD*)(a1[3] + 16) + v10 + 8);
	}
	v6[12] = *((_DWORD*)a1 + 18);
	sub_1407C0180((unsigned int*)v6 + 14, *((_DWORD*)a1 + 12));
	for (j = 0i64; (unsigned int)j < *((_DWORD*)a1 + 18); j = (unsigned int)(j + 1))
	{
		v14 = *(unsigned int*)(a1[3] + 8);
		sub_1407DB590(
			(int*)(*((_QWORD*)v6 + 8) + (unsigned int)(j * v14)),
			(int*)(a1[7] + (unsigned int)(v14 * *(_DWORD*)(a1[8] + 4 * j))),
			v14);
	}
	v15 = (unsigned int)(*((_DWORD*)a1 + 18) * *(_DWORD*)(a1[3] + 8));
	sub_1407DB590((int*)(v15 + *((_QWORD*)v6 + 8)), (int*)(v15 + a1[7]), (unsigned int)(*((_DWORD*)a1 + 12) - v15));
	for (k = 0i64; (unsigned int)k < v6[8]; k = (unsigned int)(k + 1))
	{
		v17 = *((_QWORD*)v6 + 5) + 24 * k;
		v18 = *(_WORD*)(v17 + 16);
		if (v18 == 130)
		{
			for (m = 0; m < *((_DWORD*)a1 + 18); *v20 -= a1[7])
			{
				v20 = (_QWORD*)(*((_QWORD*)v6 + 8)
					+ *(_DWORD*)(*(_QWORD*)(a1[3] + 16) + 40 * k + 12)
					+ m * *(_DWORD*)(a1[3] + 8));
				++m;
			}
		}
		else if (v18 == 128 && (*(_BYTE*)(v17 + 20) & 0x10) == 0)
		{
			for (n = 0; n < *((_DWORD*)a1 + 18); ++n)
			{
				v22 = *((_QWORD*)v6 + 8)
					+ *(unsigned int*)(*(_QWORD*)(a1[3] + 16) + 40 * k + 12)
					+ (unsigned __int64)(n * *(_DWORD*)(a1[3] + 8));
				if (v22)
				{
					v23 = *(_QWORD*)v22;
					if (*(_QWORD*)v22)
					{
						if (v23 + (unsigned __int64)*(unsigned int*)(v22 + 8) <= qword_140C3FE70)
							v24 = v23 + qword_140C3FE68;
						else
							v24 = 0i64;
					}
					else
					{
						v24 = 0i64;
					}
					*(_QWORD*)v22 = v24 - a1[7];
				}
			}
		}
	}
	v25 = *((_DWORD*)a1 + 18);
	if (v25)
	{
		v26 = *(_DWORD*)((unsigned int)(*(_DWORD*)(a1[3] + 8) * *(_DWORD*)(a1[8] + 4i64 * (unsigned int)(v25 - 1)))
			+ a1[7])
			+ 1;
		sub_1407C0210((unsigned int*)v6 + 18, v26);
		sub_1407E4830(*((int**)v6 + 10), 255i64, 4i64 * v26);
		for (ii = 0; ii < *((_DWORD*)a1 + 18); ++ii)
			*(_DWORD*)(*((_QWORD*)v6 + 10) + 4i64 * *(unsigned int*)(ii * *(_DWORD*)(a1[3] + 8) + *((_QWORD*)v6 + 8))) = ii;
	}
	v38 = 0i64;
	v39[0] = 0i64;
	v39[1] = (__int64)v39;
	v28 = sub_1407C0310((__int64)&v38, a2, (__int64)v6);
	v29 = v39[0];
	for (jj = v28; v39[0]; v29 = v39[0])
	{
		v39[0] = *(_QWORD*)(v29 + 40);
		sub_14018B900(v29, 0);
	}
	sub_14018B900(*((_QWORD*)v6 + 10), 0);
	sub_14018B900(*((_QWORD*)v6 + 8), 0);
	v31 = *((_QWORD*)v6 + 5);
	if (v31)
	{
		v32 = *(int*)(v31 - 8);
		v33 = v31 - 8;
		v34 = 2 * v32 + 1;
		v35 = v32 - 1;
		if (v35 >= 0)
		{
			v36 = v31 + 8 * (v34 + *(int*)(v31 - 8));
			do
			{
				v37 = *(_QWORD*)(v36 - 24);
				v36 -= 24i64;
				sub_14018B900(v37, 0);
				--v35;
			} while (v35 >= 0);
		}
		sub_14018B900(v33, 0);
	}
	sub_14018B900(*((_QWORD*)v6 + 2), 0);
	sub_14018B900((__int64)v6, 0);
	return jj;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

