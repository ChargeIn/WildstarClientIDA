#include "../winhttp.h"

//----- (00000001403CA390) ----------------------------------------------------
__int64 __fastcall sub_1403CA390(__int64 a1, unsigned int* a2)
{
	unsigned int* v4; // rbx
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	unsigned int v8; // eax
	__int16* v9; // rax
	unsigned int v10; // edi
	unsigned int v11; // r14d
	int v12; // r15d
	int v13; // edi
	int* v14; // rax
	__int64 v15; // rdi
	int* v16; // rbx
	int* v17; // rbp
	int* v18; // rsi
	__int64 v19; // rax
	__int64 v20; // rdi
	unsigned __int64 v21; // rdi
	__int64 v23; // [rsp+40h] [rbp-38h]
	__int64 v24; // [rsp+88h] [rbp+10h] BYREF
	int* v25; // [rsp+90h] [rbp+18h] BYREF

	if (*a2)
	{
		v4 = (unsigned int*)sub_1401F1860(*a2);
		if (v4)
		{
			sub_1403CA5F0(a1, &v25, *a2);
			if (a2[2])
			{
				v5 = *(_QWORD*)(a1 + 25360);
				v6 = v5;
				v7 = *(_QWORD*)(v5 + 8);
				while (v7)
				{
					if (*(_DWORD*)(v7 + 32) < *v4)
					{
						v7 = *(_QWORD*)(v7 + 24);
					}
					else
					{
						v6 = v7;
						v7 = *(_QWORD*)(v7 + 16);
					}
				}
				if (v6 == v5 || (v8 = *(_DWORD*)(v6 + 32), v24 = v6, *v4 < v8))
					v24 = v5;
				if (v24 != v5)
					*(_DWORD*)(v24 + 60) = 1;
				v9 = sub_14034BDD0(v6, 97219);
			}
			else
			{
				v10 = v4[5];
				v11 = *v4;
				v12 = dword_140C636A8;
				if (v10)
					v13 = 1000 * v10;
				else
					v13 = 0;
				v14 = sub_1403D61D0(a1 + 25352, v4);
				v14[2] = v11;
				v14[3] = v12;
				v14[4] = v13;
				*(_QWORD*)(v14 + 5) = 0i64;
				*((_QWORD*)v14 + 4) = v23;
				v9 = sub_14034BDD0(v23, (unsigned int)(a2[1] != 0) + 95656);
			}
			v15 = (__int64)v9;
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PlayerTitleUpdate", byte_1409D10C7);
			v16 = v25;
			if (v15)
			{
				v17 = 0i64;
				v18 = (int*)*sub_14034C700(&v24, v15, v25);
				v19 = 0i64;
				if (*(_WORD*)v18)
				{
					do
						++v19;
					while (*((_WORD*)v18 + v19));
				}
				v20 = (2 * v19) >> 1;
				if ((unsigned __int64)(v20 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v17 = sub_14018B280(2 * (v20 + 1), 0);
				v21 = 2 * v20;
				sub_1407DB590(v17, v18, v21);
				if ((int*)((char*)v17 + v21))
					*(_WORD*)((char*)v17 + v21) = 0;
				if (v24)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "AlertTitle", L"S", v17);
				if (v17)
					sub_14018B900((__int64)v17, 0);
			}
			if (v16)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
		}
	}
	return 0i64;
}
// 1403CA4A2: variable 'v23' is possibly undefined
// 1409D10C7: using guessed type _BYTE byte_1409D10C7[26];
// 1409EED2C: using guessed type wchar_t aS_56[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

