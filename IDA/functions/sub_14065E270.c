#include "../winhttp.h"

//----- (000000014065E270) ----------------------------------------------------
__int64 __fastcall sub_14065E270(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned int v5; // ebx
	unsigned int v6; // edi
	int* v8; // rax
	__int64 v9; // rcx
	int* v10; // rdi
	int* v11; // rbx
	int v12; // r15d
	int* v13; // rax
	int* i; // rdx
	int** v15; // rcx
	int v16; // r15d
	int* v17; // rax
	__int64 v18; // rcx
	unsigned __int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	int v22; // r12d
	__int64 v23; // rdx
	__int64 v24; // r15
	unsigned __int64 v25; // rcx
	__int64 v26; // rbx
	__int64 v27; // rax
	int v28; // eax
	int* v29; // rbx
	int v30; // r14d
	__int64* v31; // rax
	__int64 v32; // r8
	__int64 v33; // rdx
	int* v34; // rbx
	__int64 v35; // rcx
	int* v36; // rax
	int* j; // rbx
	__int64 v38; // rcx
	char v39[8]; // [rsp+30h] [rbp-59h] BYREF
	int* v40; // [rsp+38h] [rbp-51h]
	__int64(__fastcall * *v41)(); // [rsp+40h] [rbp-49h] BYREF
	__int64 v42; // [rsp+48h] [rbp-41h]
	_QWORD* v43; // [rsp+50h] [rbp-39h]
	int v44; // [rsp+58h] [rbp-31h]
	__int64(__fastcall * *v45)(); // [rsp+60h] [rbp-29h] BYREF
	int v46; // [rsp+68h] [rbp-21h]
	_QWORD* v47; // [rsp+70h] [rbp-19h]
	int v48; // [rsp+78h] [rbp-11h]
	__int64 v49[6]; // [rsp+80h] [rbp-9h] BYREF

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = *(_QWORD*)(v3 + 24);
		if (v4)
		{
			v5 = *(_DWORD*)(v4 + 116);
			if (v5)
			{
				v6 = sub_140056D60(a1, 2u);
				if (v6)
				{
					v8 = sub_14018B280(24i64, 0);
					v9 = qword_140C659D0;
					v40 = v8;
					*(_QWORD*)v8 = v8;
					*((_QWORD*)v40 + 1) = v40;
					v49[1] = 1i64;
					v42 = 1i64;
					v49[2] = 0i64;
					v49[4] = 1i64;
					v49[5] = 0i64;
					v49[0] = 0i64;
					v49[3] = 0i64;
					v43 = 0i64;
					if ((int)sub_1404AD310(v9, v5, v6, (__int64)v39, v49) < 0 || *(int**)v40 == v40)
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
						a1[2] += 16i64;
					}
					else
					{
						v10 = sub_14018B280(24i64, 0);
						*(_QWORD*)v10 = v10;
						*((_QWORD*)v10 + 1) = v10;
						v11 = *(int**)v40;
						if (*(int**)v40 != v40)
						{
							v12 = ***(_DWORD***)(*((_QWORD*)v11 + 2) + 8i64);
							v13 = sub_14018B280(24i64, 0);
							if (v13 != (int*)-16i64)
								v13[4] = v12;
							*(_QWORD*)v13 = v10;
							*((_QWORD*)v13 + 1) = *((_QWORD*)v10 + 1);
							**((_QWORD**)v10 + 1) = v13;
							*((_QWORD*)v10 + 1) = v13;
							for (i = v40; v11 != i; v11 = *(int**)v11)
							{
								v15 = *(int***)(*((_QWORD*)v11 + 2) + 16i64);
								if ((~((unsigned int)(*v15)[3] >> 1) & 1) != 0)
								{
									v16 = **v15;
									v17 = sub_14018B280(24i64, 0);
									if (v17 != (int*)-16i64)
										v17[4] = v16;
									*(_QWORD*)v17 = v10;
									*((_QWORD*)v17 + 1) = *((_QWORD*)v10 + 1);
									**((_QWORD**)v10 + 1) = v17;
									*((_QWORD*)v10 + 1) = v17;
									i = v40;
								}
							}
						}
						if (*(int**)v10 == v10)
						{
							*(_DWORD*)(a1[2] + 8i64) = 0;
							a1[2] += 16i64;
						}
						else
						{
							v18 = a1[4];
							v19 = *(_QWORD*)(v18 + 112);
							v45 = off_140B569F0;
							v47 = a1;
							v48 = 1;
							if (*(_QWORD*)(v18 + 120) >= v19)
								sub_14005E2C0((__int64)a1);
							v20 = a1[2];
							v21 = sub_14005C1B0((__int64)a1, 0, 0);
							*(_DWORD*)(v20 + 8) = 5;
							*(_QWORD*)v20 = v21;
							a1[2] += 16i64;
							v22 = sub_1400578C0((__int64)a1);
							v46 = v22;
							sub_140659EB0((__int64)&v45, (__int64)L"tPriceInfo", v49);
							v23 = a1[4];
							v41 = off_140B569F0;
							v24 = (__int64)a1;
							v25 = *(_QWORD*)(v23 + 112);
							v43 = a1;
							v44 = 1;
							if (*(_QWORD*)(v23 + 120) >= v25)
								sub_14005E2C0((__int64)a1);
							v26 = a1[2];
							v27 = sub_14005C1B0((__int64)a1, 0, 0);
							*(_DWORD*)(v26 + 8) = 5;
							*(_QWORD*)v26 = v27;
							a1[2] += 16i64;
							v28 = sub_1400578C0((__int64)a1);
							v29 = *(int**)v10;
							v30 = v28;
							LODWORD(v42) = v28;
							if (v29 != v10)
							{
								do
								{
									if (v29[4])
										sub_1400FA9E0((__int64)&v41);
									v29 = *(int**)v29;
								} while (v29 != v10);
								v24 = (__int64)v43;
								v30 = v42;
							}
							sub_1400FB2A0((__int64)&v45, (__int64)L"tRoute", v30);
							v31 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v22);
							v32 = a1[2];
							v33 = *v31;
							*(_QWORD*)v32 = *v31;
							*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
							a1[2] += 16i64;
							if (v24)
								sub_1400579E0(v24, v33, v30);
							sub_1400579E0((__int64)a1, v33, v22);
						}
						v34 = *(int**)v10;
						while (v34 != v10)
						{
							v35 = (__int64)v34;
							v34 = *(int**)v34;
							sub_14018B900(v35, 0);
						}
						*(_QWORD*)v10 = v10;
						*((_QWORD*)v10 + 1) = v10;
						sub_14018B900((__int64)v10, 0);
					}
					v36 = v40;
					for (j = *(int**)v40; j != v40; v36 = v40)
					{
						v38 = (__int64)j;
						j = *(int**)j;
						sub_14018B900(v38, 0);
					}
					*(_QWORD*)v36 = v36;
					*((_QWORD*)v40 + 1) = v40;
					sub_14018B900((__int64)v40, 0);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 14065E612: variable 'v33' is possibly undefined
// 140B2D7C8: using guessed type wchar_t aTroute[7];
// 140B2D810: using guessed type wchar_t aTpriceinfo_1[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659D0: using guessed type __int64 qword_140C659D0;
// 14065E270: using guessed type char var_B0[8];

