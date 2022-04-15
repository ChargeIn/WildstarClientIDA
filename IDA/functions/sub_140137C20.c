#include "../winhttp.h"

//----- (0000000140137C20) ----------------------------------------------------
void __fastcall sub_140137C20(__int64* a1, int a2, char a3, char a4, int* a5)
{
	_QWORD** v9; // r10
	__int64 v10; // rbx
	_QWORD* v11; // rax
	__int64 i; // r9
	int* v13; // rax
	__int64 v14; // rbp
	int* v15; // rsi
	int* v16; // rdx
	__int64 v17; // rbx
	int* v18; // rax
	char v19; // [rsp+20h] [rbp-48h]
	__int64 v20; // [rsp+30h] [rbp-38h] BYREF
	int* v21; // [rsp+38h] [rbp-30h]

	if (a1[1])
	{
		v9 = (_QWORD**)a1[57];
		v10 = 0i64;
		v11 = *v9;
		for (i = 0i64; v11 != v9; ++i)
			v11 = (_QWORD*)*v11;
		sub_14018EFA0(&v20, (__int64)L"%s_%d", a1[3], i);
		v13 = sub_14018B280(256i64, 0);
		if (v13)
			v14 = sub_140134570((__int64)v13, a1[1], (__int64)a1);
		else
			v14 = 0i64;
		v19 = a4;
		v15 = v21;
		sub_140134800(v14, v21, a2, a3, v19);
		if (*(_QWORD*)a1[57] == a1[57])
		{
			v16 = (int*)a1[3];
			if (a5)
				v16 = a5;
			if (*(_WORD*)v16)
			{
				do
					++v10;
				while (*((_WORD*)v16 + v10));
			}
			sub_14001C480((__int64)(a1 + 6), v16, (int*)((char*)v16 + 2 * v10));
		}
		v17 = a1[57];
		v18 = sub_14018B280(24i64, 0);
		if (v18 != (int*)-16i64)
			*((_QWORD*)v18 + 2) = v14;
		*(_QWORD*)v18 = v17;
		*((_QWORD*)v18 + 1) = *(_QWORD*)(v17 + 8);
		**(_QWORD**)(v17 + 8) = v18;
		*(_QWORD*)(v17 + 8) = v18;
		if (v15)
			sub_14018B900((__int64)v15, 0);
	}
}
// 140A22B18: using guessed type wchar_t aSD_2[6];

