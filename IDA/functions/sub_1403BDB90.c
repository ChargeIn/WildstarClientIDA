#include "../winhttp.h"

//----- (00000001403BDB90) ----------------------------------------------------
void __fastcall sub_1403BDB90(__int64* a1, int a2, __int64 a3)
{
	__int64 v3; // rax
	unsigned int v4; // ebx
	unsigned int v6; // ebp
	BOOL v8; // edx
	__int64 v9; // rcx
	__int64 v10; // r10
	__int64 v11; // r14
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // eax
	int v15; // r8d
	unsigned __int64 v16; // rdx
	__int64 v17; // rcx
	__int64* i; // rax
	__int64 v19; // rdi
	int v20; // eax
	__int64 v21; // rcx
	__int64 v22; // rax
	int v23; // edx
	__int64 v24; // rax
	unsigned int v25; // ebp
	__int64 v26; // rax
	__int64 v27; // rdx
	__int64 v28; // rcx
	int v29; // ecx
	unsigned int v30; // eax
	int v31; // r15d
	__int64 v32; // r9
	unsigned __int64 v33; // rcx
	__int64 v34; // rax
	__int64 v35; // rax
	__int64 v36; // [rsp+60h] [rbp+8h] BYREF

	if (!a2)
		return;
	v3 = a1[15];
	v4 = 0;
	v6 = a2;
	if (!v3)
		goto LABEL_11;
	v8 = *(_QWORD*)(qword_140C65898 + 120) == v3 || *(_QWORD*)(qword_140C65898 + 25744) == v3;
	v9 = 0i64;
	if (v8)
		v9 = qword_140C65898;
	if (!v9 || (v11 = sub_1405A5B90(v9, v6)) == 0)
	{
		a2 = v6;
	LABEL_11:
		v12 = sub_1407A0FD0(qword_140C65B70, a2);
		v10 = qword_140C65898;
		v11 = v12;
	}
	if (v11)
	{
		v13 = *(_QWORD*)(v11 + 112);
		v14 = *(_DWORD*)(v13 + 24);
		if (v14 == 7 || v14 == 2)
		{
			v15 = *(_DWORD*)(v13 + 4);
			if (v15)
			{
				v16 = a1[339];
				v17 = 0i64;
				if (v16)
				{
					for (i = (__int64*)a1[338]; ; ++i)
					{
						v19 = *i;
						if (*i)
						{
							if (*(_DWORD*)(v19 + 64) == v15)
								break;
						}
						if (++v17 >= v16)
							return;
					}
					v20 = sub_14039A040(v10, *(_DWORD*)(v19 + 36), 0i64, 1, 0, 0i64);
					if (!v20 || v20 == 317)
					{
						v21 = a1[3506];
						if (v21)
						{
							v11 = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v21 + 24i64))(
								v21,
								v11,
								a1[15],
								0i64);
							v6 = **(_DWORD**)(v11 + 112);
						}
						v22 = a1[3218];
						if (v22 && (v23 = *(_DWORD*)(v22 + 264)) != 0)
							v24 = sub_1403D90D0((__int64)a1, v23);
						else
							v24 = 0i64;
						v25 = sub_1403D3520(v21, v6, a1[15], v24);
						if ((unsigned int)sub_1403C0760((__int64)a1, v25))
						{
							v26 = a1[697];
							v27 = v26;
							v28 = *(_QWORD*)(v26 + 8);
							while (v28)
							{
								if (*(_DWORD*)(v28 + 32) < v25)
								{
									v28 = *(_QWORD*)(v28 + 24);
								}
								else
								{
									v27 = v28;
									v28 = *(_QWORD*)(v28 + 16);
								}
							}
							if (v27 == v26 || (v36 = v27, v25 < *(_DWORD*)(v27 + 32)))
								v36 = v26;
							if (v36 != a1[697])
								sub_1403D5FD0((__int64)(a1 + 696), &v36);
						}
						else
						{
							v29 = *(_DWORD*)(*(_QWORD*)(v11 + 112) + 24i64);
							if (v29 == 2 || v29 == 7)
							{
								v30 = sub_14039A040(qword_140C65898, *(_DWORD*)(v19 + 36), 0i64, 0, 0, 0i64);
								v31 = v30;
								if (!v30 || v30 == 317)
								{
									sub_1403C07C0((__int64)a1, v25, 1u);
									sub_1405CA390(a3, *(_DWORD*)(*(_QWORD*)(v11 + 112) + 4i64));
									v32 = a1[3693];
									v33 = *(_QWORD*)(v32 + 16);
									if (v33)
									{
										v34 = 0i64;
										while (1)
										{
											v35 = *(_QWORD*)(*(_QWORD*)(v32 + 8) + 8 * v34);
											if (*(_DWORD*)(v35 + 4) == 4 && *(_DWORD*)(v35 + 8) == *(_DWORD*)(v19 + 36))
												break;
											v34 = ++v4;
											if (v4 >= v33)
												return;
										}
										*(_BYTE*)(v32 + 24) = 1;
										*(_QWORD*)v32 = v4;
									}
								}
								else
								{
									sub_1403B5250(v30);
									sub_1400035B0();
									*(_DWORD*)(a3 + 328) = 1;
									sub_1403A12A0((__int64)a1, v31, v11, 0);
								}
							}
						}
					}
					else
					{
						sub_1403A12A0((__int64)a1, v20, v11, 0);
					}
				}
			}
		}
	}
}
// 1403BDC97: variable 'v10' is possibly undefined
// 1403BDD0D: variable 'v21' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

