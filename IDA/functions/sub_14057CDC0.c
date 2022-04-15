#include "../winhttp.h"

//----- (000000014057CDC0) ----------------------------------------------------
__int64 __fastcall sub_14057CDC0(__int64 a1, __int64 a2)
{
	__int64 v2; // r15
	__int64 v3; // rdx
	int v4; // r9d
	int v5; // eax
	int v6; // r8d
	__int64 v7; // r12
	__int64 v8; // r14
	__int64 v9; // rcx
	__int64 v10; // rbp
	__int64 v11; // rdi
	unsigned __int64 v12; // rsi
	_QWORD* v13; // rbx
	int* v14; // rax
	__int64 v15; // rbx
	unsigned __int64 v16; // r15
	int** v17; // r14
	int* v18; // rax
	int* v19; // rsi
	int* v20; // rcx
	__int64* v21; // rdi
	__int64 v22; // rcx
	bool v23; // zf
	__int64 v24; // rcx
	__int64 v26; // [rsp+40h] [rbp-58h]
	__int64 v27; // [rsp+48h] [rbp-50h]
	__int64 v30; // [rsp+B0h] [rbp+18h] BYREF
	__int64 v31; // [rsp+B8h] [rbp+20h] BYREF

	v2 = a2;
	v3 = a1;
	v4 = 200;
	v5 = 200;
	if (*(_DWORD*)(a1 + 16) == 1)
		v5 = 100;
	v6 = *(_DWORD*)(v2 + 16) - v5;
	if (v6 >= 0 && v6 < *(_DWORD*)(a1 + 632) && (v7 = *(_QWORD*)(*(_QWORD*)(a1 + 624) + 8i64 * v6)) != 0)
	{
		v8 = *(unsigned int*)(v2 + 20);
		v27 = v8;
		if (*(_DWORD*)(v2 + 20))
		{
			v9 = 0i64;
			v10 = v3 + 664;
			v26 = 0i64;
			do
			{
				v11 = v9 + *(_QWORD*)(v2 + 24);
				v12 = (*(__int64(__fastcall**)(__int64))(v10 + 24))(v11);
				v13 = *(_QWORD**)(*(_QWORD*)(v10 + 16) + 8 * (v12 % *(_QWORD*)(v10 + 8)));
				if (!v13)
					goto LABEL_14;
				while (v12 != *v13 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v10 + 32))(v11, v13 + 2))
				{
					v13 = (_QWORD*)v13[1];
					if (!v13)
						goto LABEL_14;
				}
				if (v13 == (_QWORD*)-24i64)
				{
				LABEL_14:
					v14 = sub_14018B280(320i64, 0);
					if (v14)
						v15 = sub_140569A60((__int64)v14);
					else
						v15 = 0i64;
					if ((int)sub_140569C90(v15, v11) >= 0)
					{
						while ((unsigned __int64)*(unsigned int*)(v11 + 24) > *(_QWORD*)(v7 + 16))
						{
							v30 = 0i64;
							sub_14058FDB0((__int64*)(v7 + 8), &v30);
							if (v30)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
						}
						v31 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 48i64))(v15);
						if (*(_QWORD*)v10 == *(_QWORD*)(v10 + 8))
							sub_1400290D0(v10);
						v16 = (*(__int64(__fastcall**)(__int64*))(v10 + 24))(&v31);
						v17 = (int**)(*(_QWORD*)(v10 + 16) + 8 * (v16 % *(_QWORD*)(v10 + 8)));
						v18 = sub_14018B280(32i64, 0);
						v19 = v18;
						if (v18)
						{
							v20 = *v17;
							*(_QWORD*)v18 = v16;
							*((_QWORD*)v18 + 1) = v20;
							*((_QWORD*)v18 + 2) = v31;
							*((_QWORD*)v18 + 3) = v15;
							(**(void(__fastcall***)(__int64))v15)(v15);
						}
						else
						{
							v19 = 0i64;
						}
						*v17 = v19;
						++* (_QWORD*)v10;
						v21 = (__int64*)(*(_QWORD*)(v7 + 8) + 8i64 * *(unsigned int*)(v11 + 24));
						if (*v21 != v15)
						{
							(**(void(__fastcall***)(__int64))v15)(v15);
							if (*v21)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)*v21 + 8i64))(*v21);
							*v21 = v15;
						}
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
						v8 = v27;
						v2 = a2;
					}
					else if (v15)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
					}
				}
				v9 = v26 + 168;
				v27 = --v8;
				v26 += 168i64;
			} while (v8);
			v3 = a1;
			v4 = 200;
		}
		v22 = qword_140C65898;
		*(_DWORD*)v7 = 1;
		v23 = *(_DWORD*)(v3 + 16) == 1;
		*(_DWORD*)(v3 + 640) = *(_DWORD*)(v2 + 16);
		v24 = *(_QWORD*)(v22 + 29504);
		if (v23)
			v4 = 100;
		sub_1400EA3E0(v24, "GuildBankTab", byte_1409EA5CC, v3, *(_DWORD*)(v2 + 16) - v4 + 1);
		return 0i64;
	}
	else
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildResult", "ZSii", a1, 0i64, 0, 64);
		return 0i64;
	}
}
// 140569C90: using guessed type __int64 __fastcall sub_140569C90(_QWORD, _QWORD);
// 1409EA5CC: using guessed type _BYTE byte_1409EA5CC[24];
// 140C65898: using guessed type __int64 qword_140C65898;

