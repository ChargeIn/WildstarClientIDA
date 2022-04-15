#include "../winhttp.h"

//----- (00000001400ED370) ----------------------------------------------------
void __fastcall sub_1400ED370(_QWORD* a1, __int64 a2)
{
	unsigned __int64 i; // r12
	__int64 v5; // rsi
	__int64 v6; // r15
	_QWORD* v7; // rax
	_QWORD* v8; // rdi
	__int64 v9; // r14
	int v10; // ecx
	__int64 v11; // rcx
	__int64 v12; // r9
	_DWORD* v13; // rdx
	__int64 v14; // rcx
	_QWORD* v15; // rax
	_QWORD* v16; // rbx
	_QWORD* v17; // rax
	_QWORD* v18; // rdi
	__int64 v19; // r14
	int v20; // ecx
	__int64 v21; // rcx
	__int64 v22; // r9
	_DWORD* v23; // rdx
	__int64 v24; // rcx
	_QWORD* v25; // rax
	_QWORD* v26; // rbx
	double v27; // [rsp+60h] [rbp+8h]
	double v28; // [rsp+60h] [rbp+8h]

	for (i = 0i64; i < a1[401]; ++i)
	{
		v5 = a1[50];
		v6 = *(_QWORD*)(a1[400] + 8 * i);
		v7 = *(_QWORD**)(v6 + 56);
		v8 = (_QWORD*)*v7;
		if ((_QWORD*)*v7 != v7)
		{
			do
			{
				v9 = v8[2];
				v10 = *(_DWORD*)(v9 + 808);
				if (v10 == -2)
				{
					v11 = *(_QWORD*)(v9 + 16);
					if (v11)
						v10 = sub_1400D45B0(v11);
					else
						v10 = -2;
				}
				v12 = *(_QWORD*)(*(_QWORD*)(v5 + 32) + 160i64);
				if ((unsigned int)(v10 - 1) >= *(_DWORD*)(v12 + 56))
				{
					if ((double)v10 == 0.0)
					{
						v13 = *(_DWORD**)(v12 + 32);
					}
					else
					{
						v27 = (double)v10;
						v13 = (_DWORD*)(*(_QWORD*)(v12 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v27) + HIDWORD(v27)) % (((1i64 << *(_BYTE*)(v12 + 11)) - 1) | 1)));
					}
					while (v13[6] != 3 || (double)v10 != *((double*)v13 + 2))
					{
						v13 = (_DWORD*)*((_QWORD*)v13 + 4);
						if (!v13)
						{
							v13 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v13 = (_DWORD*)(*(_QWORD*)(v12 + 24) + 16i64 * (v10 - 1));
				}
				v14 = *(_QWORD*)(v5 + 16);
				*(_QWORD*)v14 = *(_QWORD*)v13;
				*(_DWORD*)(v14 + 8) = v13[2];
				*(_QWORD*)(v5 + 16) += 16i64;
				v15 = *(_QWORD**)(a2 + 456);
				v16 = (_QWORD*)*v15;
				if ((_QWORD*)*v15 != v15)
				{
					while (!sub_140134C00(v16[2], v5, -1))
					{
						v16 = (_QWORD*)*v16;
						if (v16 == *(_QWORD**)(a2 + 456))
							goto LABEL_21;
					}
					sub_1400C6B20(v9);
				}
			LABEL_21:
				*(_QWORD*)(v5 + 16) -= 16i64;
				v8 = (_QWORD*)*v8;
			} while (v8 != *(_QWORD**)(v6 + 56));
		}
		v17 = *(_QWORD**)(v6 + 88);
		v18 = (_QWORD*)*v17;
		if ((_QWORD*)*v17 != v17)
		{
			do
			{
				v19 = v18[2];
				v20 = *(_DWORD*)(v19 + 808);
				if (v20 == -2)
				{
					v21 = *(_QWORD*)(v19 + 16);
					if (v21)
						v20 = sub_1400D45B0(v21);
					else
						v20 = -2;
				}
				v22 = *(_QWORD*)(*(_QWORD*)(v5 + 32) + 160i64);
				if ((unsigned int)(v20 - 1) >= *(_DWORD*)(v22 + 56))
				{
					if ((double)v20 == 0.0)
					{
						v23 = *(_DWORD**)(v22 + 32);
					}
					else
					{
						v28 = (double)v20;
						v23 = (_DWORD*)(*(_QWORD*)(v22 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v28) + HIDWORD(v28)) % (((1i64 << *(_BYTE*)(v22 + 11)) - 1) | 1)));
					}
					while (v23[6] != 3 || (double)v20 != *((double*)v23 + 2))
					{
						v23 = (_DWORD*)*((_QWORD*)v23 + 4);
						if (!v23)
						{
							v23 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v23 = (_DWORD*)(*(_QWORD*)(v22 + 24) + 16i64 * (v20 - 1));
				}
				v24 = *(_QWORD*)(v5 + 16);
				*(_QWORD*)v24 = *(_QWORD*)v23;
				*(_DWORD*)(v24 + 8) = v23[2];
				*(_QWORD*)(v5 + 16) += 16i64;
				v25 = *(_QWORD**)(a2 + 456);
				v26 = (_QWORD*)*v25;
				if ((_QWORD*)*v25 != v25)
				{
					while (!sub_140134C00(v26[2], v5, -1))
					{
						v26 = (_QWORD*)*v26;
						if (v26 == *(_QWORD**)(a2 + 456))
							goto LABEL_41;
					}
					sub_1400C6B20(v19);
				}
			LABEL_41:
				*(_QWORD*)(v5 + 16) -= 16i64;
				v18 = (_QWORD*)*v18;
			} while (v18 != *(_QWORD**)(v6 + 88));
		}
	}
}
// 1400C6B20: using guessed type __int64 __fastcall sub_1400C6B20(_QWORD);
// 140A12138: using guessed type _DWORD dword_140A12138[4];

