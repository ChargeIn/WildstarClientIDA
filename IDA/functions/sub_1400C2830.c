#include "../winhttp.h"

//----- (00000001400C2830) ----------------------------------------------------
_QWORD* __fastcall sub_1400C2830(__int64 a1, _QWORD* a2, int a3, int* a4)
{
	__int64 v6; // rbx
	int* v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int* v11; // r15
	int* v12; // r14
	int* v13; // r12
	unsigned __int64 v14; // rax
	unsigned __int64 v15; // rdi
	unsigned __int64 v16; // rdi
	int* v17; // rdi
	__int64 v18; // rdi
	__int64 v19; // rdi
	int v20; // eax
	__int64 v21; // r8
	int* v22; // rdx
	bool v23; // zf
	__int64 v24; // rax
	int* v25; // rdi
	__int64 v26; // [rsp+20h] [rbp-38h] BYREF
	int* v27; // [rsp+28h] [rbp-30h]
	int* v28; // [rsp+30h] [rbp-28h]
	int* v29; // [rsp+38h] [rbp-20h]

	if (a4 && *(_WORD*)a4)
	{
		if (a3 == 1)
		{
			v6 = 0i64;
			a2[1] = 0i64;
			a2[2] = 0i64;
			a2[3] = 0i64;
			if (*(_WORD*)a4)
			{
				do
					++v6;
				while (*((_WORD*)a4 + v6));
			}
			sub_14001C1B0(a2, a4, (__int64)a4 + 2 * v6);
			return a2;
		}
		else
		{
			v8 = sub_14018B280(16i64, 0);
			v9 = 0i64;
			v27 = v8;
			v28 = v8;
			v29 = v8 + 4;
			if (v8)
				*(_WORD*)v8 = 0;
			if ((unsigned int)sub_1400B8AA0(a4, dword_1409D28DC, (__int64)&v26))
			{
				a2[1] = v27;
				a2[2] = v28;
				a2[3] = v29;
				return a2;
			}
			else
			{
				v10 = 0i64;
				if (*(_WORD*)a4)
				{
					do
						++v10;
					while (*((_WORD*)a4 + v10));
				}
				v11 = v27;
				v12 = v28;
				v13 = (int*)((char*)a4 + 2 * v10);
				v14 = ((char*)v28 - (char*)v27) >> 1;
				v15 = ((char*)v13 - (char*)a4) >> 1;
				if (v15 > v14)
				{
					v18 = 2 * v14;
					sub_1407DB590(v27, a4, 2 * v14);
					sub_14001C310(&v26, (int*)((char*)a4 + v18), v13);
					v12 = v28;
					v11 = v27;
				}
				else
				{
					v16 = 2 * v15;
					sub_1407DB590(v27, a4, v16);
					v17 = (int*)((char*)v11 + v16);
					if (v17 != v12)
					{
						sub_1407DB590(v17, v12, 2ui64);
						v12 = (int*)((char*)v12 - 2 * (((char*)v12 - (char*)v17) >> 1));
						v28 = v12;
					}
				}
				v19 = ((char*)v12 - (char*)v11) >> 1;
				v20 = (unsigned __int16)sub_140056430(*((_WORD*)v11 + v19 - 1));
				if ((unsigned __int16)v20 != 115)
				{
					if (v20 == 121)
					{
						sub_1400C2B30((__int64)&v26, v19 - 1, v21);
						v22 = (int*)L"ies";
						do
							v23 = aIes[++v9] == 0;
						while (!v23);
					}
					else
					{
						v22 = (int*)word_1409D292C;
						do
							v23 = word_1409D292C[++v9] == 0;
						while (!v23);
					}
					sub_14001C310(&v26, v22, (int*)((char*)v22 + 2 * v9));
					v11 = v27;
					v12 = v28;
				}
				v24 = (__int64)v29;
				a2[1] = v11;
				a2[3] = v24;
				a2[2] = v12;
				return a2;
			}
		}
	}
	else
	{
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		v25 = sub_14018B280(2i64, 0);
		a2[1] = v25;
		a2[3] = (char*)v25 + 2;
		a2[2] = v25;
		sub_1407DB590(v25, dword_1409D28C4, 0i64);
		a2[2] = v25;
		if (v25)
			*(_WORD*)v25 = 0;
		return a2;
	}
}
// 1400C29FA: variable 'v21' is possibly undefined
// 1409D28C4: using guessed type int dword_1409D28C4[6];
// 1409D28DC: using guessed type int dword_1409D28DC[6];
// 1409D292C: using guessed type _WORD word_1409D292C[184];
// 140A14830: using guessed type wchar_t aIes[4];

