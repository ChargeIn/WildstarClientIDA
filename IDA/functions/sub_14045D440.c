#include "../winhttp.h"

//----- (000000014045D440) ----------------------------------------------------
void __fastcall sub_14045D440(__int64 a1, __int64* a2)
{
	__int64 v2; // r14
	__int64 v5; // r15
	int v6; // edi
	int v7; // r12d
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rcx
	_QWORD* v11; // r8
	unsigned __int64 v12; // rdx
	unsigned __int64 v13; // rcx
	_DWORD* v14; // rax
	int* v15; // rax
	int* v16; // rsi
	int v17; // eax
	__int64 v18; // rax
	int v19; // eax
	__int64 v20; // rdx
	__int64 v21; // rbx
	int* v22; // rax
	int* v23; // r15
	int* v24; // rdx
	__int64 v25; // rcx
	unsigned __int64 v26; // rbx
	_QWORD* v27; // rdi
	unsigned int v28; // ecx
	__int64 v29; // rax
	__int64 v30; // rcx
	__int64 v31; // rax
	__int64 v32; // rax
	__int64 v33; // rbx
	__int64 v34; // [rsp+20h] [rbp-88h]
	__int64 v35; // [rsp+28h] [rbp-80h]
	int v36; // [rsp+30h] [rbp-78h]
	__int64 v37; // [rsp+40h] [rbp-68h]
	int v38; // [rsp+40h] [rbp-68h]
	__int64 v39; // [rsp+50h] [rbp-58h]
	__int64 v40; // [rsp+58h] [rbp-50h] BYREF
	int v41; // [rsp+60h] [rbp-48h]
	__int64 v42; // [rsp+80h] [rbp-28h]

	if (a2)
	{
		v2 = *((int*)a2 + 84);
		if ((int)v2 < 28)
		{
			v39 = *(_QWORD*)(qword_140C65A08 + 8 * v2 + 40);
			if (v39)
			{
				v5 = a2[10];
				if (v5)
				{
					v6 = *((_DWORD*)a2 + 25);
					v36 = *(_DWORD*)(a1 + 8);
					v7 = *(_DWORD*)(v5 + 92);
					LODWORD(v35) = v6;
					sub_1400035B0();
					v8 = *(_QWORD*)(a1 + 1176);
					v9 = *(_QWORD*)(v8 + 8);
					v10 = v8;
					while (v9)
					{
						if (*(_DWORD*)(v9 + 32) < (int)v2)
						{
							v9 = *(_QWORD*)(v9 + 24);
						}
						else
						{
							v10 = v9;
							v9 = *(_QWORD*)(v9 + 16);
						}
					}
					if (v10 == v8 || (v37 = v10, (int)v2 < *(_DWORD*)(v10 + 32)))
						v37 = *(_QWORD*)(a1 + 1176);
					if (v37 == v8 || (v11 = *(_QWORD**)(v37 + 40), v12 = 0i64, (v13 = v11[1]) == 0))
					{
					LABEL_18:
						sub_14045D890(a1, v2, v6);
					}
					else
					{
						v14 = (_DWORD*)*v11;
						while (*v14 != v6)
						{
							++v12;
							++v14;
							if (v12 >= v13)
								goto LABEL_18;
						}
						sub_1401C2F20((__int64)v11, v12);
						v15 = sub_14018B280(72i64, 0);
						v16 = v15;
						if (v15)
						{
							*((_QWORD*)v15 + 1) = 28i64;
							*((_QWORD*)v15 + 2) = 0i64;
							*((_QWORD*)v15 + 3) = 0i64;
							*((_QWORD*)v15 + 4) = 0i64;
							v15[10] = 0;
							*(_QWORD*)v15 = off_140B66FC8;
							*((_QWORD*)v15 + 6) = 0i64;
							*((_QWORD*)v15 + 7) = 0i64;
							*((_QWORD*)v15 + 8) = 0i64;
						}
						else
						{
							v16 = 0i64;
						}
						v16[2] = v2;
						v16[6] = v7;
						v17 = *((_DWORD*)a2 + 47);
						v16[7] = v6;
						v16[10] = v17;
						*((_QWORD*)v16 + 4) = *(_QWORD*)(v5 + 312);
						v18 = *a2;
						v41 = 0;
						v40 = 0i64;
						v19 = (*(__int64(__fastcall**)(__int64*))(v18 + 32))(a2);
						v20 = a2[22];
						v38 = v19;
						if (v20)
						{
							v16[4] = *(_DWORD*)(v20 + 92);
							v40 = *(_QWORD*)(v20 + 80);
							v41 = *(_DWORD*)(v20 + 88);
						}
						v21 = *(_QWORD*)(a1 + 16 * (v2 + 45) + 8);
						v22 = sub_14018DB00(*(_QWORD*)(a1 + 16 * (v2 + 45)), v21 + 1, 8i64);
						v23 = v22;
						*(_QWORD*)&v22[2 * v21] = v16;
						v24 = *(int**)(a1 + 16 * (v2 + 45));
						if (v24 != v22)
						{
							sub_1407DB590(v22, v24, 8i64 * *(_QWORD*)(a1 + 16 * (v2 + 45) + 8));
							v25 = *(_QWORD*)(a1 + 16 * (v2 + 45));
							if (v25)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v25 - 16) + 8i64))(v25 - 16);
							*(_QWORD*)(a1 + 16 * (v2 + 45)) = v23;
						}
						*(_QWORD*)(a1 + 16 * (v2 + 45) + 8) = v21 + 1;
						sub_14046C2C0(a1);
						v26 = 0i64;
						v27 = v16 + 12;
						do
						{
							v28 = *(_DWORD*)((char*)&v42 + 4 * v26 + v39 - (_QWORD)&v40 + 4);
							if (v28)
								v29 = sub_140248F00(v28);
							else
								v29 = 0i64;
							v30 = *((unsigned int*)&v40 + v26);
							if ((_DWORD)v30)
								v29 = sub_140248F00(v30);
							if (v29 && !*v27)
								sub_140578770(v30, *(_DWORD*)(a1 + 8), v29, 0i64, 0i64, v27);
							++v26;
							++v27;
						} while (v26 < 3);
						sub_1403D90D0(qword_140C65898, v38);
						sub_14045DE60(a1, v16);
						v31 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 192));
						if (v31 && *(_DWORD*)(v31 + 128) == 7)
						{
							sub_1403D90D0(qword_140C65898, v38);
							v32 = sub_14047B6D0(a1);
							sub_14045DE60(v32, v16);
						}
						LODWORD(v34) = *(_DWORD*)(a1 + 8);
						Apollo_LUAEvent(
							*(_QWORD*)(qword_140C65898 + 29504),
							"ApplyCCState",
							byte_1409E9C14,
							(unsigned int)v2,
							v34,
							v35,
							v36);
						if ((_DWORD)v2 == 23)
						{
							v33 = *(_QWORD*)(qword_140C65898 + 120);
							if (sub_14047DCA0(a1) == v33)
								sub_140437A10((_QWORD*)qword_140C658D8, 0x183u, 0, 0i64, 0, 0, 1);
						}
					}
				}
			}
		}
	}
}
// 14045D724: variable 'v30' is possibly undefined
// 14045D7BF: variable 'v34' is possibly undefined
// 14045D7BF: variable 'v35' is possibly undefined
// 1409E9C14: using guessed type _BYTE byte_1409E9C14[48];
// 140B66FC8: using guessed type __int64 (__fastcall *off_140B66FC8[34])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65A08: using guessed type __int64 qword_140C65A08;

