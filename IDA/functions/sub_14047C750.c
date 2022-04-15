#include "../winhttp.h"

//----- (000000014047C750) ----------------------------------------------------
void __fastcall sub_14047C750(__int64 a1, signed int a2)
{
	__int64 v2; // rax
	__int64 v5; // rax
	__int64 v6; // r8
	unsigned int v7; // r13d
	unsigned int v8; // r8d
	unsigned int v9; // edx
	unsigned int v10; // r9d
	unsigned __int64 v11; // rdi
	__int64 v12; // r15
	__int64 v13; // r12
	__int64 v14; // r14
	unsigned __int64 v15; // rcx
	_QWORD* v16; // rax
	unsigned __int64 v17; // rcx
	_QWORD* v18; // rax
	unsigned __int64 v19; // rcx
	_QWORD* v20; // rax
	unsigned __int64 v21; // rcx
	_QWORD* v22; // rax
	bool v23; // zf
	__int64 v24; // [rsp+20h] [rbp-50h]
	unsigned __int64 v25; // [rsp+28h] [rbp-48h]
	__int64 v26; // [rsp+30h] [rbp-40h] BYREF
	__int64 v27; // [rsp+38h] [rbp-38h]
	__int64 v28; // [rsp+40h] [rbp-30h]
	unsigned __int64 v29; // [rsp+48h] [rbp-28h]
	__int64* v30; // [rsp+90h] [rbp+20h]
	unsigned int* v31; // [rsp+A0h] [rbp+30h]

	v2 = *(_QWORD*)(a1 + 248);
	if (v2)
	{
		v5 = *(_QWORD*)(v2 + 336);
		if (v5)
		{
			if (a2 < 7)
			{
				v6 = *(unsigned int*)(v5 + 16);
				if ((!(_DWORD)v6
					|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
						+ 24i64))(
							qword_140C659A0,
							0i64,
							v6,
							0i64,
							0i64,
							0))
					&& (!*(_DWORD*)(a1 + 592) && !*(_DWORD*)(a1 + 596) || a2 == 1))
				{
					v7 = **(_DWORD**)(*(_QWORD*)(a1 + 248) + 336i64);
					v8 = 0;
					v25 = *(unsigned int*)(qword_140C65918 + 72);
					v31 = (unsigned int*)(qword_140C65918 + 72);
					v30 = (__int64*)(qword_140C65918 + 64);
					v24 = *(_QWORD*)(qword_140C65918 + 64);
					v9 = v7;
					if (a2 == 1)
					{
						sub_140482A00((__int64)&v26, v7, 0, 1u, v24, v25);
						v11 = v29;
						v12 = v26;
						v13 = v27;
						v14 = v28;
						v15 = 0i64;
						if (v29)
						{
							v16 = (_QWORD*)(v28 + 32);
							do
							{
								if (*((_DWORD*)v16 - 5))
									break;
								if (*v16)
									goto LABEL_18;
								++v15;
								v16 += 6;
							} while (v15 < v29);
						}
						v10 = 1;
						v9 = v7;
						v8 = 1;
						v25 = *v31;
						v24 = *v30;
					}
					else
					{
						v10 = a2;
						LOBYTE(v8) = *(_DWORD*)(a1 + 684) != 0;
					}
					sub_140482A00((__int64)&v26, v9, v8, v10, v24, v25);
					v11 = v29;
					v14 = v28;
					v13 = v27;
					v12 = v26;
				LABEL_18:
					v17 = 0i64;
					if (v11)
					{
						v18 = (_QWORD*)(v14 + 32);
						do
						{
							if (*((_DWORD*)v18 - 5))
								break;
							if (*v18)
								goto LABEL_34;
							++v17;
							v18 += 6;
						} while (v17 < v11);
					}
					sub_140482A00((__int64)&v26, v7, 2u, a2, *v30, *v31);
					v11 = v29;
					v12 = v26;
					v13 = v27;
					v14 = v28;
					v19 = 0i64;
					if (v29)
					{
						v20 = (_QWORD*)(v28 + 32);
						do
						{
							if (*((_DWORD*)v20 - 5))
								break;
							if (*v20)
								goto LABEL_34;
							++v19;
							v20 += 6;
						} while (v19 < v29);
					}
					sub_140482A00((__int64)&v26, v7, *(_DWORD*)(a1 + 684) != 0, 6u, *v30, *v31);
					v11 = v29;
					v12 = v26;
					v13 = v27;
					v14 = v28;
					v21 = 0i64;
					if (v29)
					{
						v22 = (_QWORD*)(v28 + 32);
						do
						{
							if (*((_DWORD*)v22 - 5))
								break;
							if (*v22)
								goto LABEL_34;
							++v21;
							v22 += 6;
						} while (v21 < v29);
					}
					sub_140482A00((__int64)&v26, v7, 2u, 6u, *v30, *v31);
					v12 = v26;
					v13 = v27;
					v14 = v28;
					v11 = v29;
				LABEL_34:
					if (!*(_QWORD*)(a1 + 5344)
						|| (_DWORD)v12 != *(_DWORD*)(a1 + 5320)
						|| __PAIR64__(v13, HIDWORD(v12)) != *(_QWORD*)(a1 + 5324))
					{
						sub_140195D70(a1 + 5440);
						sub_140195D70(a1 + 5368);
						v23 = *(_QWORD*)(a1 + 1424) == 0i64;
						*(_QWORD*)(a1 + 5320) = v12;
						*(_QWORD*)(a1 + 5328) = v13;
						*(_QWORD*)(a1 + 5336) = v14;
						*(_DWORD*)(a1 + 5316) = 0;
						*(_QWORD*)(a1 + 5344) = v11;
						if (!v23)
						{
							do
								(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1424) + 32i64))(*(_QWORD*)(a1 + 1424));
							while (*(_QWORD*)(a1 + 1424));
						}
						sub_14047CAB0(a1);
					}
				}
			}
		}
	}
}
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C659A0: using guessed type __int64 qword_140C659A0;

