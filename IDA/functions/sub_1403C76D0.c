#include "../winhttp.h"

//----- (00000001403C76D0) ----------------------------------------------------
void __fastcall sub_1403C76D0(__int64 a1)
{
	unsigned int* v1; // r12
	__int64 v3; // r13
	__int64 v4; // rcx
	unsigned int v5; // edx
	__int64 v6; // rax
	__int64 v7; // rcx
	int* v8; // rdx
	__int64 v9; // rax
	int* v10; // rbp
	int* v11; // rdi
	__int64 v12; // rax
	__int64 v13; // rbx
	unsigned __int64 v14; // rbx
	int* v15; // rax
	_QWORD* v16; // r14
	int* v17; // rdi
	__int64 v18; // rax
	__int64 v20; // r15
	int* v21; // rax
	__int64 v22; // rax
	unsigned int* v23; // rbx
	__int64 v24; // rdi
	__int64 v25; // rax
	__int64 v26; // r9
	__int64 v27; // rdx
	__int128 v28; // [rsp+60h] [rbp-128h] BYREF
	int* v29; // [rsp+70h] [rbp-118h]
	__int64 v30; // [rsp+78h] [rbp-110h]
	__int64 v31; // [rsp+80h] [rbp-108h] BYREF
	char v32[8]; // [rsp+88h] [rbp-100h] BYREF
	_WORD* v33; // [rsp+90h] [rbp-F8h]
	_WORD* v34; // [rsp+98h] [rbp-F0h]
	__int64 v35; // [rsp+140h] [rbp-48h]
	__int64 v36; // [rsp+190h] [rbp+8h] BYREF

	v1 = *(unsigned int**)(a1 + 48);
	v3 = sub_1401F4B60(v1[4]);
	if (v3)
	{
		if (!*(_DWORD*)(a1 + 40))
		{
			v4 = *(_QWORD*)(a1 + 16);
			if (!v4 || (v5 = *(_DWORD*)(v4 + 8)) == 0 || dword_140C636A8 - *(_DWORD*)(a1 + 24) <= v5)
			{
				v6 = qword_140C65898;
				if (qword_140C65898)
				{
					if (*(_DWORD*)(v3 + 8) && *(_QWORD*)(qword_140C65898 + 29504))
					{
						sub_1404DDE90(&v31);
						v8 = (int*)sub_14034BDD0(v7, *(_DWORD*)(v3 + 8));
						if (v8)
						{
							v9 = 0i64;
							if (*(_WORD*)v8)
							{
								do
									++v9;
								while (*((_WORD*)v8 + v9));
							}
							sub_14001C480((__int64)v32, v8, (int*)((char*)v8 + 2 * v9));
						}
						else if (v33 != v34)
						{
							*v33 = 0;
							v34 = v33;
						}
						v10 = 0i64;
						v11 = (int*)*sub_14034C700(&v36, (__int64)L"%d", *((_QWORD*)v1 + 1));
						v12 = 0i64;
						if (*(_WORD*)v11)
						{
							do
								++v12;
							while (*((_WORD*)v11 + v12));
						}
						v13 = (2 * v12) >> 1;
						if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
							v10 = sub_14018B280(2 * (v13 + 1), 0);
						v14 = 2 * v13;
						sub_1407DB590(v10, v11, v14);
						if ((int*)((char*)v10 + v14))
							*(_WORD*)((char*)v10 + v14) = 0;
						if (v36)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v36 - 16) + 8i64))(v36 - 16);
						v15 = sub_14018B280(96i64, 0);
						if (v15)
							v16 = (_QWORD*)sub_1404DDB40((__int64)v15, v10);
						else
							v16 = 0i64;
						v17 = 0i64;
						*((_QWORD*)&v28 + 1) = 0i64;
						v29 = 0i64;
						v30 = 0i64;
						v18 = 0i64;
						while (aCombatbuff[++v18] != 0)
							;
						v20 = (2 * v18) >> 1;
						if ((unsigned __int64)(v20 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v17 = sub_14018B280(2 * (v20 + 1), 0);
							*((_QWORD*)&v28 + 1) = v17;
							v29 = v17;
							v30 = (__int64)v17 + 2 * v20 + 2;
						}
						sub_1407DB590(v17, (int*)L"combatbuff", 2 * v20);
						v21 = (int*)((char*)v17 + 2 * v20);
						v29 = v21;
						if (v21)
							*(_WORD*)v21 = 0;
						sub_1400B7480((__int64)&v31, v16);
						(*(void(__fastcall**)(_QWORD*, __int128*))(*v16 + 72i64))(v16, &v28);
						if (*((_QWORD*)&v28 + 1))
							sub_14018B900(*((__int64*)&v28 + 1), 0);
						v22 = sub_1400B7660(&v31);
						sub_1400EA3E0(
							*(_QWORD*)(qword_140C65898 + 29504),
							"CombatMomentum",
							"iiS",
							*v1,
							v1[2],
							*(_QWORD*)(v22 + 8));
						if (v10)
							sub_14018B900((__int64)v10, 0);
						if (v35)
							sub_14018B900(v35, 0);
						sub_1400B7390(&v31);
						v6 = qword_140C65898;
					}
					if (*(_QWORD*)(v6 + 25744))
					{
						v23 = (unsigned int*)(v3 + 16);
						v24 = 2i64;
						do
						{
							v25 = sub_140248F00(*v23);
							if (v25)
							{
								v27 = *(_QWORD*)(qword_140C65898 + 25744);
								v28 = 0i64;
								sub_1405787D0((__int64)&v28, 0, *(_DWORD*)(v27 + 8), v26, v25, 0i64, 0i64, 0, 0i64, &v28, 1);
							}
							++v23;
							--v24;
						} while (v24);
					}
				}
			}
		}
	}
	sub_14018B900((__int64)v1, 0);
	if (*(_QWORD*)a1)
		sub_1403D6480(*(_QWORD*)a1, (_QWORD*)a1);
	sub_14018B900(a1, 0);
}
// 1403C778E: variable 'v7' is possibly undefined
// 1403C7A59: variable 'v26' is possibly undefined
// 140AEBD04: using guessed type wchar_t aD_21[3];
// 140AF6268: using guessed type wchar_t aCombatbuff[11];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403C76D0: using guessed type char var_100[8];

