#include "../winhttp.h"

//----- (00000001405AC4D0) ----------------------------------------------------
void __fastcall sub_1405AC4D0(__int64 a1, int a2, int a3)
{
	__int64 v3; // r15
	unsigned int v5; // ecx
	__int64 v7; // r12
	int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // rsi
	int v11; // r14d
	unsigned __int64 v12; // rax
	__int64 v13; // rcx
	unsigned __int64 v14; // rdi
	_QWORD* v15; // rbx
	__int64* v16; // rbx
	__int64* v17; // rbx
	int v18; // r14d
	__int64 v19; // rdi
	unsigned int v20; // esi
	__int64 v21; // rax
	__int64 v22; // rbp
	unsigned int v23; // esi
	__int64 v24; // rax
	int v25; // eax
	int v26; // eax
	__int64 v27; // [rsp+20h] [rbp-58h] BYREF
	__int64 v28; // [rsp+28h] [rbp-50h]
	__int64 v29; // [rsp+30h] [rbp-48h]
	__int64 v30; // [rsp+38h] [rbp-40h]
	int v31; // [rsp+80h] [rbp+8h] BYREF
	int v32; // [rsp+90h] [rbp+18h]

	v32 = a3;
	v3 = 0i64;
	v5 = *(_DWORD*)(a1 + 184);
	v28 = 0i64;
	v7 = 0i64;
	v29 = 0i64;
	v30 = 0i64;
	v8 = 0;
	v9 = sub_140205FA0(v5);
	if (v9)
		v8 = *(_DWORD*)(v9 + 4);
	v10 = qword_140C659F8;
	v11 = *(_DWORD*)(a1 + 188);
	v31 = v8;
	v12 = (*(__int64(__fastcall**)(int*))(qword_140C659F8 + 56))(&v31);
	v13 = *(_QWORD*)(v10 + 48);
	v14 = v12;
	v15 = *(_QWORD**)(v13 + 8 * (v12 % *(_QWORD*)(v10 + 40)));
	if (v15)
	{
		while (v14 != *v15 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v10 + 64))(&v31, v15 + 2))
		{
			v15 = (_QWORD*)v15[1];
			if (!v15)
				goto LABEL_11;
		}
		v16 = v15 + 3;
		if (v16)
		{
			v13 = *v16;
			if (*(_DWORD*)(*v16 + 20) == v11)
			{
				sub_1404C7CF0(v13, &v27, a2);
				v7 = v29;
				v3 = v28;
			}
		}
	}
LABEL_11:
	v17 = (__int64*)v3;
	if (v3 != v7)
	{
		v18 = v32;
		do
		{
			v19 = *v17;
			v20 = *(_DWORD*)(*v17 + 108);
			if (qword_140C63840)
			{
				v21 = qword_140C63840(off_140A6AA60, v20, qword_140C63858);
			}
			else
			{
				if (dword_140C63A64 || (int)sub_140207B00() < 0)
					goto LABEL_31;
				v21 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63E68 + 24i64))(qword_140C63E68, v20);
			}
			v22 = v21;
			if (v21)
			{
				v23 = *(_DWORD*)(v19 + 108);
				if (qword_140C63840)
				{
					v24 = qword_140C63840(off_140A6AA60, v23, qword_140C63858);
					goto LABEL_24;
				}
				if (!dword_140C63A64 && (int)sub_140207B00() >= 0)
				{
					v24 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63E68 + 24i64))(qword_140C63E68, v23);
				LABEL_24:
					if (v24)
					{
						v25 = *(_DWORD*)(v24 + 24);
						if (((v25 & 0x340) == 0 || v25 == *(_DWORD*)(v19 + 116)) && (v25 & 0x342) != 0)
						{
							v26 = *(_DWORD*)(v22 + 24);
							if ((v26 & 0x40) != 0 || (v26 & 0x200) != 0 || (v26 & 0x100) != 0)
								goto LABEL_32;
						}
					}
				}
			}
		LABEL_31:
			sub_1404C9C70(v13, v18, *(_DWORD*)(a1 + 188), *v17);
		LABEL_32:
			++v17;
		} while (v17 != (__int64*)v7);
	}
	if (v3)
		sub_14018B900(v3, 0);
}
// 1405AC686: variable 'v13' is possibly undefined
// 140A6AA60: using guessed type wchar_t *off_140A6AA60[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A64: using guessed type int dword_140C63A64;
// 140C63E68: using guessed type __int64 qword_140C63E68;
// 140C659F8: using guessed type __int64 qword_140C659F8;

