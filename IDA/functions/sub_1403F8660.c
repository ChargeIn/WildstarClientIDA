#include "../winhttp.h"

//----- (00000001403F8660) ----------------------------------------------------
void __fastcall sub_1403F8660(__int64 a1, int a2, __int64* a3, __int64* a4)
{
	__int64 v4; // rbp
	int** v8; // rsi
	__int64 v9; // rax
	int v10; // r15d
	int* v11; // rax
	int* v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rax
	__int64 v18; // [rsp+20h] [rbp-38h] BYREF
	__int64 v19; // [rsp+28h] [rbp-30h]
	__int64 v20; // [rsp+30h] [rbp-28h]

	v4 = qword_140C65898;
	if (*a4 || a4[1])
	{
		v8 = (int**)(qword_140C65898 + 26640);
		v9 = *(_QWORD*)(qword_140C65898 + 26640);
		v10 = 1;
		if (v9)
		{
			while (*(_DWORD*)(v9 + 32) != *(_DWORD*)a3 || *(_QWORD*)(v9 + 40) != a3[1] || *(_DWORD*)(v9 + 56) != a2)
			{
				v9 = *(_QWORD*)(v9 + 24);
				if (!v9)
					goto LABEL_10;
			}
			v10 = 0;
		}
	LABEL_10:
		v11 = sub_14018B280(64i64, 0);
		v12 = v11;
		if (v11)
		{
			v13 = a4[1];
			v14 = *a4;
			*((_QWORD*)v11 + 2) = 0i64;
			*((_QWORD*)v11 + 3) = 0i64;
			v11[8] = 0;
			*((_QWORD*)v11 + 5) = 0i64;
			*((_QWORD*)v11 + 1) = v13;
			*(_QWORD*)v11 = v14;
			*((_QWORD*)v11 + 4) = *a3;
			v15 = a3[1];
			*((_QWORD*)v12 + 6) = 0i64;
			v12[14] = a2;
			*((_QWORD*)v12 + 5) = v15;
			if (!*((_QWORD*)v12 + 2))
			{
				*((_QWORD*)v12 + 2) = v8;
				*((_QWORD*)v12 + 3) = *v8;
				*v8 = v12;
				v16 = *((_QWORD*)v12 + 3);
				if (v16)
					*(_QWORD*)(v16 + 16) = v12 + 6;
			}
		}
		if (v10)
		{
			if ((*(_BYTE*)(v4 + 31560) & 0x10) != 0)
			{
				v18 = 0i64;
				v19 = 0i64;
				v20 = 0i64;
				v17 = *a3;
				LODWORD(v18) = a2;
				v19 = v17;
				v20 = a3[1];
				sub_1403F4740(v4, 0x597u, (__int64)&v18);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

