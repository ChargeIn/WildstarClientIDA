#include "../winhttp.h"

//----- (000000014066C250) ----------------------------------------------------
__int64 __fastcall sub_14066C250(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rdx
	int v6; // ebp
	__int64 v7; // rax
	__int64 v8; // rcx
	unsigned int v9; // eax
	__int64 v10; // rax
	__int64 v11; // r14
	_DWORD* v12; // rcx
	int v13; // esi
	__int64 v14; // rbx
	unsigned int v15; // eax
	__int64 v16; // r8
	__int64 v17; // rdx
	__int64 v18; // rcx
	__int64* v19; // rax
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v25; // rax
	__int64 v26; // r8
	__int64(__fastcall * *v28)(); // [rsp+20h] [rbp-38h] BYREF
	int v29; // [rsp+28h] [rbp-30h]
	_QWORD* v30; // [rsp+30h] [rbp-28h]
	int v31; // [rsp+38h] [rbp-20h]
	__int64 v32; // [rsp+60h] [rbp+8h] BYREF
	__int64 v33; // [rsp+68h] [rbp+10h] BYREF

	v1 = (_QWORD*)a1;
	v30 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v28 = off_140B569F0;
	v31 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v6 = sub_1400578C0((__int64)v1);
	v29 = v6;
	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v7 = sub_140056AB0(v1, 1u);
		if (v7)
		{
			v8 = *(_QWORD*)(v7 + 8);
			if (v8)
			{
				v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v8 + 8) + 48i64))(*(_QWORD*)(v8 + 8));
				v10 = sub_14048D310(qword_140C65990, v9);
				v11 = v10;
				if (v10)
				{
					if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 72i64))(v10))
					{
						v12 = (_DWORD*)(v1[3] + 16i64);
						if ((unsigned __int64)v12 >= v1[2] || v12 == dword_140A12138 || *(int*)(v1[3] + 24i64) <= 0)
						{
							v13 = 0;
						}
						else
						{
							v13 = sub_140056D60(v1, 2u);
							if (v13 >= 3)
								v13 = 0;
						}
						v14 = *(_QWORD*)(*(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 24i64))(v11) + 88)
							+ 16i64);
						if (v14 != *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 24i64))(v11) + 88))
						{
							while (1)
							{
								if (v13 == 2i64)
								{
									if (!*(_DWORD*)(v14 + 32))
										goto LABEL_38;
								}
								else if (v13 == 1i64 && *(_DWORD*)(v14 + 32))
								{
									goto LABEL_38;
								}
								v15 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 40) + 48i64))(*(_QWORD*)(v14 + 40));
								v16 = *(_QWORD*)(qword_140C65990 + 16);
								v17 = v16;
								v18 = *(_QWORD*)(v16 + 8);
								while (v18)
								{
									if (*(_DWORD*)(v18 + 32) < v15)
									{
										v18 = *(_QWORD*)(v18 + 24);
									}
									else
									{
										v17 = v18;
										v18 = *(_QWORD*)(v18 + 16);
									}
								}
								if (v17 == v16 || v15 < *(_DWORD*)(v17 + 32))
								{
									v33 = *(_QWORD*)(qword_140C65990 + 16);
									v19 = &v33;
								}
								else
								{
									v32 = v17;
									v19 = &v32;
								}
								v20 = *v19;
								if (v20 != v16)
								{
									v21 = *(_QWORD*)(v20 + 40);
									if (v21)
									{
										if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v21 + 72i64))(v21))
										{
										LABEL_36:
											if ((unsigned int)sub_140432F20(v1, *(_QWORD*)(v14 + 40)))
											{
												sub_1400FB470((__int64)&v28);
												v1 = v30;
												v30[2] -= 16i64;
											}
											goto LABEL_38;
										}
									}
								}
								if ((*(_BYTE*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 40) + 40i64))(*(_QWORD*)(v14 + 40))
									+ 108) & 1) == 0)
								{
									if (*(_DWORD*)(v14 + 36))
										goto LABEL_36;
									sub_1400FAD30((__int64)&v28);
									v1 = v30;
								}
							LABEL_38:
								v22 = *(_QWORD*)(v14 + 24);
								if (v22)
								{
									v14 = *(_QWORD*)(v14 + 24);
									for (i = *(_QWORD*)(v22 + 16); i; i = *(_QWORD*)(i + 16))
										v14 = i;
								}
								else
								{
									for (j = *(_QWORD*)(v14 + 8); v14 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
										v14 = j;
									if (*(_QWORD*)(v14 + 24) != j)
										v14 = j;
								}
								if (v14 == *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 24i64))(v11) + 88))
								{
									v6 = v29;
									break;
								}
							}
						}
						v25 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v6);
						v26 = v1[2];
						*(_QWORD*)v26 = *v25;
						v5 = *((unsigned int*)v25 + 2);
						*(_DWORD*)(v26 + 8) = v5;
						v1[2] += 16i64;
					}
				}
			}
		}
	}
	sub_1400579E0((__int64)v1, v5, v6);
	return 1i64;
}
// 14066C524: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65990: using guessed type __int64 qword_140C65990;

