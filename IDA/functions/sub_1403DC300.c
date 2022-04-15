#include "../winhttp.h"

//----- (00000001403DC300) ----------------------------------------------------
__int64 __fastcall sub_1403DC300(__int64 a1, int* a2)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // r8
	unsigned int* v11; // rcx
	unsigned int v12; // r12d
	__int64 v13; // r13
	unsigned __int64 v14; // rdi
	__int64 v15; // r14
	__int64 v16; // r15
	__int64 v17; // rsi
	unsigned __int64 v18; // rcx
	_QWORD* v19; // rax
	unsigned __int64 v20; // rcx
	_QWORD* v21; // rax
	unsigned __int64 v22; // rcx
	_QWORD* v23; // rax
	bool v24; // zf
	__int64 v26; // [rsp+40h] [rbp-38h] BYREF
	__int64 v27; // [rsp+48h] [rbp-30h]
	__int64 v28; // [rsp+50h] [rbp-28h]
	unsigned __int64 v29; // [rsp+58h] [rbp-20h]

	v2 = sub_1403D90D0(a1, *a2);
	v3 = v2;
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(v2 + 5512);
	if (v4)
	{
		v5 = *(_QWORD*)(v2 + 24);
		if (v5)
		{
			v6 = *(unsigned int*)(v5 + 268);
			if ((_DWORD)v6)
			{
			LABEL_8:
				(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v4 + 16i64))(
					v4,
					v6,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
				goto LABEL_9;
			}
			v7 = *(_QWORD*)(v3 + 208);
			if (v7)
			{
				v6 = *(unsigned int*)(v7 + 20);
				goto LABEL_8;
			}
		}
		v6 = 0i64;
		goto LABEL_8;
	}
LABEL_9:
	v8 = *(_QWORD*)(v3 + 248);
	if (v8)
	{
		v9 = *(_QWORD*)(v8 + 336);
		if (v9)
		{
			v10 = *(unsigned int*)(v9 + 16);
			if ((!(_DWORD)v10
				|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						0i64,
						v10,
						0i64,
						0i64,
						0))
				&& !*(_DWORD*)(v3 + 592)
				&& !*(_DWORD*)(v3 + 596))
			{
				v11 = *(unsigned int**)(*(_QWORD*)(v3 + 248) + 336i64);
				v12 = *v11;
				v13 = qword_140C65918;
				sub_140482A00(
					(__int64)&v26,
					*v11,
					*(_DWORD*)(v3 + 684) != 0,
					4u,
					*(_QWORD*)(qword_140C65918 + 64),
					*(unsigned int*)(qword_140C65918 + 72));
				v14 = v29;
				v15 = v26;
				v16 = v27;
				v17 = v28;
				v18 = 0i64;
				if (v29)
				{
					v19 = (_QWORD*)(v28 + 32);
					do
					{
						if (*((_DWORD*)v19 - 5))
							break;
						if (*v19)
							goto LABEL_31;
						++v18;
						v19 += 6;
					} while (v18 < v29);
				}
				sub_140482A00((__int64)&v26, v12, 2u, 4u, *(_QWORD*)(v13 + 64), *(unsigned int*)(v13 + 72));
				v14 = v29;
				v15 = v26;
				v16 = v27;
				v17 = v28;
				v20 = 0i64;
				if (v29)
				{
					v21 = (_QWORD*)(v28 + 32);
					do
					{
						if (*((_DWORD*)v21 - 5))
							break;
						if (*v21)
							goto LABEL_31;
						++v20;
						v21 += 6;
					} while (v20 < v29);
				}
				sub_140482A00(
					(__int64)&v26,
					v12,
					*(_DWORD*)(v3 + 684) != 0,
					6u,
					*(_QWORD*)(v13 + 64),
					*(unsigned int*)(v13 + 72));
				v14 = v29;
				v15 = v26;
				v16 = v27;
				v17 = v28;
				v22 = 0i64;
				if (v29)
				{
					v23 = (_QWORD*)(v28 + 32);
					do
					{
						if (*((_DWORD*)v23 - 5))
							break;
						if (*v23)
							goto LABEL_31;
						++v22;
						v23 += 6;
					} while (v22 < v29);
				}
				sub_140482A00((__int64)&v26, v12, 2u, 6u, *(_QWORD*)(v13 + 64), *(unsigned int*)(v13 + 72));
				v15 = v26;
				v16 = v27;
				v17 = v28;
				v14 = v29;
			LABEL_31:
				if (!*(_QWORD*)(v3 + 5344)
					|| (_DWORD)v15 != *(_DWORD*)(v3 + 5320)
					|| __PAIR64__(v16, HIDWORD(v15)) != *(_QWORD*)(v3 + 5324))
				{
					sub_140195D70(v3 + 5440);
					sub_140195D70(v3 + 5368);
					v24 = *(_QWORD*)(v3 + 1424) == 0i64;
					*(_QWORD*)(v3 + 5320) = v15;
					*(_QWORD*)(v3 + 5328) = v16;
					*(_QWORD*)(v3 + 5336) = v17;
					*(_DWORD*)(v3 + 5316) = 0;
					*(_QWORD*)(v3 + 5344) = v14;
					if (!v24)
					{
						do
							(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 1424) + 32i64))(*(_QWORD*)(v3 + 1424));
						while (*(_QWORD*)(v3 + 1424));
					}
					sub_14047CAB0(v3);
				}
			}
		}
	}
	return 0i64;
}
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C659A0: using guessed type __int64 qword_140C659A0;

