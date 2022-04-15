#include "../winhttp.h"

//----- (0000000140137860) ----------------------------------------------------
__int64 __fastcall sub_140137860(__int64 a1)
{
	int* v2; // r15
	int* v3; // r14
	_QWORD* v4; // rax
	_QWORD* v5; // rbx
	int* v6; // rax
	int* v7; // rsi
	__int64 v8; // rax
	bool v9; // zf
	int* v10; // r12
	unsigned __int64 v11; // rax
	unsigned __int64 v12; // rdi
	unsigned __int64 v13; // rdi
	int* v14; // rdi
	int* v15; // rdx
	__int64 v16; // rbx
	__int64 v18; // rdi
	__int64 v19; // rax
	__int64 v20; // [rsp+20h] [rbp-48h] BYREF
	int* v21; // [rsp+28h] [rbp-40h]
	int* v22; // [rsp+30h] [rbp-38h]
	__int64 v23; // [rsp+38h] [rbp-30h]

	if (!*(_QWORD*)(a1 + 8) || ((*(_DWORD*)(a1 + 536) - 3) & 0xFFFFFFFD) == 0)
		return 0i64;
	*(_DWORD*)(a1 + 536) = 8;
	v2 = sub_14018B280(2i64, 0);
	v23 = (__int64)v2 + 2;
	v21 = v2;
	sub_1407DB590(v2, dword_1409D8F24, 0i64);
	v3 = v2;
	v22 = v2;
	if (v2)
		*(_WORD*)v2 = 0;
	v4 = *(_QWORD**)(a1 + 456);
	v5 = (_QWORD*)*v4;
	if ((_QWORD*)*v4 != v4)
	{
		do
		{
			v6 = (int*)sub_140134CA0(v5[2]);
			v7 = v6;
			if (v6 && *(_WORD*)v6)
			{
				v8 = 0i64;
				if (v2 == v3)
				{
					do
						v9 = *((_WORD*)v7 + ++v8) == 0;
					while (!v9);
					v10 = (int*)((char*)v7 + 2 * v8);
					v11 = ((char*)v3 - (char*)v2) >> 1;
					v12 = ((char*)v10 - (char*)v7) >> 1;
					if (v12 > v11)
					{
						v18 = 2 * v11;
						sub_1407DB590(v2, v7, 2 * v11);
						sub_14001C310(&v20, (int*)((char*)v7 + v18), v10);
						v3 = v22;
						v2 = v21;
					}
					else
					{
						v13 = 2 * v12;
						sub_1407DB590(v2, v7, v13);
						v14 = (int*)((char*)v2 + v13);
						if (v14 != v3)
						{
							sub_1407DB590(v14, v3, 2ui64);
							v3 = (int*)((char*)v3 - 2 * (((char*)v3 - (char*)v14) >> 1));
							v22 = v3;
						}
					}
				}
				else
				{
					do
						v9 = *((_WORD*)&unk_1409D90D4 + ++v8) == 0;
					while (!v9);
					sub_14001C310(&v20, (int*)&unk_1409D90D4, (int*)((char*)&unk_1409D90D4 + 2 * v8));
					v19 = 0i64;
					if (*(_WORD*)v7)
					{
						do
							++v19;
						while (*((_WORD*)v7 + v19));
					}
					sub_14001C310(&v20, v7, (int*)((char*)v7 + 2 * v19));
					v3 = v22;
					v2 = v21;
				}
			}
			v5 = (_QWORD*)*v5;
		} while (v5 != *(_QWORD**)(a1 + 456));
	}
	if (&v20 != (__int64*)(a1 + 216))
		sub_14001C480(a1 + 216, v2, v3);
	if (*(_QWORD*)(a1 + 224) != *(_QWORD*)(a1 + 232))
	{
		v15 = *(int**)(a1 + 224);
		*(_DWORD*)(a1 + 536) = 5;
		sub_140137280(a1, v15);
	}
	v16 = *(_QWORD*)(a1 + 224);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	return v16;
}
// 1409D8F24: using guessed type int dword_1409D8F24[14];

