#include "../winhttp.h"

//----- (0000000140643F00) ----------------------------------------------------
__int64 __fastcall sub_140643F00(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5, int a6, int a7)
{
	__int64 v7; // r15
	__int64 v10; // rdx
	__int64 v11; // rdi
	__int64 v12; // rax
	__int64 v13; // r10
	int v14; // esi
	__int64 v15; // r14
	int v16; // ebx
	__int64 v17; // rax
	__int64 result; // rax
	__int64 v19; // rdi
	int* v20; // rax
	__int64 v21; // rax
	unsigned int** v22; // rax
	__int64 v23; // rcx
	unsigned int** v24; // r15
	unsigned int* v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rcx
	int* v28; // rdx
	__int64 v29; // rax
	int* v30; // rax
	_QWORD* v31; // rdi
	int* v32; // r13
	__int64 v33; // rax
	__int64 v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rbx
	__int64 v38; // rax
	__int64 v39; // rdi
	unsigned int* v40; // rcx
	unsigned int v41; // eax
	int v42; // ecx
	int v43; // ecx
	int v44; // ecx
	int v45; // ecx
	__int64* v46; // rax
	__int64 v47; // rcx
	__int64 v48; // rax
	int v49; // eax
	int v50; // [rsp+20h] [rbp-E0h]
	int v51; // [rsp+28h] [rbp-D8h]
	__int64 v52[2]; // [rsp+40h] [rbp-C0h] BYREF
	char v53[8]; // [rsp+50h] [rbp-B0h] BYREF
	int* v54; // [rsp+58h] [rbp-A8h]
	int* v55; // [rsp+60h] [rbp-A0h]
	__int64 v56; // [rsp+68h] [rbp-98h]
	__int64 v57; // [rsp+70h] [rbp-90h] BYREF
	char v58[8]; // [rsp+78h] [rbp-88h] BYREF
	_WORD* v59; // [rsp+80h] [rbp-80h]
	_WORD* v60; // [rsp+88h] [rbp-78h]
	__int64 v61; // [rsp+130h] [rbp+30h]
	unsigned int v63; // [rsp+198h] [rbp+98h] BYREF
	int v64; // [rsp+1A0h] [rbp+A0h]

	v64 = a3;
	v63 = a2;
	v7 = a1 + 104;
	v10 = *(_QWORD*)(a1 + 112);
	v11 = a1;
	v12 = *(_QWORD*)(v10 + 8);
	v13 = v10;
	while (v12)
	{
		if (*(_DWORD*)(v12 + 32) < a2)
		{
			v12 = *(_QWORD*)(v12 + 24);
		}
		else
		{
			v13 = v12;
			v12 = *(_QWORD*)(v12 + 16);
		}
	}
	if (v13 == v10 || (v52[0] = v13, a2 < *(_DWORD*)(v13 + 32)))
		v52[0] = v10;
	v14 = 0;
	if (v52[0] == *(_QWORD*)(a1 + 112))
		v15 = 0i64;
	else
		v15 = *(_QWORD*)(v52[0] + 40);
	v16 = a7;
	if (v15)
	{
		if (a7)
		{
			(**(void(__fastcall***)(__int64, __int64))v15)(v15, 1i64);
			v15 = 0i64;
			sub_140645120(v7, &v63);
		}
		else
		{
			v17 = a5;
			*(_DWORD*)(v15 + 20) = a3;
			*(_DWORD*)(v15 + 24) = a4;
			*(_QWORD*)(v15 + 32) = v17;
		}
	}
	else if (!a7)
	{
		result = sub_140643E20(a1, a2);
		v19 = result;
		if (!result)
			return result;
		v20 = sub_14018B280(48i64, 0);
		v15 = (__int64)v20;
		if (v20)
		{
			*((_QWORD*)v20 + 1) = 0i64;
			v20[4] = a2;
			v20[5] = v64;
			v21 = a5;
			*(_DWORD*)(v15 + 24) = a4;
			*(_QWORD*)(v15 + 32) = v21;
			*(_DWORD*)(v15 + 28) = 0;
			*(_QWORD*)v15 = off_140B67218;
			*(_QWORD*)(v15 + 40) = v19;
		}
		else
		{
			v15 = 0i64;
		}
		LODWORD(v52[0]) = a2;
		v52[1] = v15;
		sub_140055F80(v7, (__int64)v53, v52);
		v11 = a1;
	}
	v22 = (unsigned int**)sub_140643E20(v11, a2);
	v24 = v22;
	if (!a6)
	{
		if (!v15)
			goto LABEL_89;
		if (!v16)
		{
			v25 = *v22;
			if ((v25[3] & 2) == 0)
			{
				if (v25[5])
				{
					if (*(_QWORD*)(v15 + 32))
					{
						if ((unsigned int)sub_1400A7FD0((_DWORD*)v11))
						{
							sub_1404DDE90(&v57);
							v28 = (int*)sub_14034BDD0(v27, 33774);
							if (v28)
							{
								v29 = 0i64;
								if (*(_WORD*)v28)
								{
									do
										++v29;
									while (*((_WORD*)v28 + v29));
								}
								sub_14001C480((__int64)v58, v28, (int*)((char*)v28 + 2 * v29));
							}
							else if (v59 != v60)
							{
								*v59 = 0;
								v60 = v59;
							}
							v30 = sub_14018B280(96i64, 0);
							if (v30)
								v31 = (_QWORD*)sub_1404DDAF0((__int64)v30, (*v24)[5]);
							else
								v31 = 0i64;
							(*(void(__fastcall**)(_QWORD*, _QWORD))(*v31 + 120i64))(
								v31,
								*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 120) + 52i64));
							v32 = 0i64;
							v54 = 0i64;
							v55 = 0i64;
							v56 = 0i64;
							v33 = 0i64;
							while (aAchievement_2[++v33] != 0)
								;
							v35 = (2 * v33) >> 1;
							v52[0] = v35;
							if ((unsigned __int64)(v35 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
							{
								v36 = 2 * (v35 + 1);
								v32 = sub_14018B280(v36, 0);
								v54 = v32;
								v55 = v32;
								v35 = v52[0];
								v56 = (__int64)v32 + v36;
							}
							v37 = 2 * v35;
							sub_1407DB590(v32, (int*)L"achievement", 2 * v35);
							v55 = (int*)((char*)v32 + v37);
							if ((int*)((char*)v32 + v37))
								*(_WORD*)((char*)v32 + v37) = 0;
							sub_1400B7480((__int64)&v57, v31);
							(*(void(__fastcall**)(_QWORD*, char*))(*v31 + 72i64))(v31, v53);
							if (v54)
								sub_14018B900((__int64)v54, 0);
							v38 = sub_1400B7660(&v57);
							Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "AlertAchievement", L"S", *(_QWORD*)(v38 + 8));
							sub_140437A10((_QWORD*)qword_140C658D8, 0x48u, 0, 0i64, 0, 0, 1);
							if (v61)
								sub_14018B900(v61, 0);
							sub_1400B7390(&v57);
						}
						if ((unsigned int)sub_140644D30(v26, (*v24)[2]) == 5)
							Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "TradeskillAchievementComplete", L"i", **v24);
					}
					else if ((unsigned int)sub_140644D30(v23, v25[2]) == 5 && (unsigned int)sub_1406428D0((__int64)v24) != 5)
					{
						v39 = *(_QWORD*)(qword_140C65898 + 29504);
						v51 = sub_14048C320(v24);
						v50 = sub_14048C3D0(v24);
						Apollo_LUAEvent(v39, "TradeskillAchievementUpdate", "aii", v24, v50, v51);
					}
				}
			}
		}
		if (*(_QWORD*)(v15 + 32))
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "AchievementGranted", byte_1409E956C, v24);
		if ((unsigned int)sub_1406428D0((__int64)v24) == 3 && qword_140C65B78)
			sub_140575DD0();
		v11 = a1;
	}
	if (v15 && *(_QWORD*)(v15 + 32))
	{
		if (qword_140C65B78)
			sub_140575DD0();
		v40 = *v24;
		v41 = (*v24)[3];
		if ((v41 & 4) == 0)
		{
			if ((v41 & 2) == 0)
			{
				v44 = v40[21] - 1;
				if (v44)
				{
					v45 = v44 - 1;
					if (v45)
					{
						if (v45 == 1)
							v14 = 50;
					}
					else
					{
						v14 = 25;
					}
				}
				else
				{
					v14 = 10;
				}
			}
			*(_DWORD*)(qword_140C65898 + 32628) += v14;
			goto LABEL_81;
		}
		if ((v41 & 2) == 0)
		{
			v42 = v40[21] - 1;
			if (v42)
			{
				v43 = v42 - 1;
				if (!v43)
				{
					*(_DWORD*)(qword_140C65898 + 32632) += 25;
					goto LABEL_81;
				}
				if (v43 == 1)
				{
					*(_DWORD*)(qword_140C65898 + 32632) += 50;
					goto LABEL_81;
				}
			}
			else
			{
				v14 = 10;
			}
		}
		*(_DWORD*)(qword_140C65898 + 32632) += v14;
	LABEL_81:
		v46 = (__int64*)sub_140643E20(v11, *(_DWORD*)(v15 + 16));
		if (v46)
		{
			v48 = *v46;
			if ((*(_BYTE*)(v48 + 12) & 2) == 0)
			{
				v49 = sub_140644D30(v47, *(_DWORD*)(v48 + 8));
				if (v49 != 5 && v49 != 46)
				{
					v63 = *(_DWORD*)(v15 + 16);
					sub_140003460((__int64*)(v11 + 256), (int*)&v63);
					sub_140029250((__int64*)(v11 + 256), (__int64)sub_140642C30, 0i64);
				}
			}
		}
		if (qword_140C63630)
		{
			if (*(_DWORD*)(qword_140C63630 + 56))
				sub_140055450(v47, a2);
		}
	}
LABEL_89:
	result = qword_140C65898;
	*(_DWORD*)(qword_140C65898 + 28568) = 1;
	return result;
}
// 1406440CE: variable 'v27' is possibly undefined
// 14064428D: variable 'v26' is possibly undefined
// 1406442C7: variable 'v23' is possibly undefined
// 140644433: variable 'v47' is possibly undefined
// 1409E956C: using guessed type _BYTE byte_1409E956C[32];
// 1409EED2C: using guessed type wchar_t aS_56[2];
// 1409EF2F4: using guessed type wchar_t aI_35[2];
// 140B29DE8: using guessed type wchar_t aAchievement_2[12];
// 140B67218: using guessed type __int64 (__fastcall *off_140B67218[14])();
// 140C63630: using guessed type __int64 qword_140C63630;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140643F00: using guessed type char var_130[8];
// 140643F00: using guessed type char var_108[8];

