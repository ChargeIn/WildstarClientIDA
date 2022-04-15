#include "../winhttp.h"

//----- (000000014044E0D0) ----------------------------------------------------
__int64 __fastcall sub_14044E0D0(_QWORD* a1)
{
	unsigned __int64 v2; // rdx
	unsigned __int64 v3; // r8
	struct _FILETIME v4; // r12
	__int64 i; // rsi
	__int64 j; // rbx
	__int64 v7; // rcx
	_QWORD* v8; // rax
	__int64 v9; // rcx
	_QWORD* v10; // rax
	unsigned __int64 k; // rdi
	__int64 m; // rbx
	__int64 v13; // rcx
	__int64 v14; // r8
	__int64 v15; // rcx
	__int64* v16; // r15
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rdi
	__int64 v22; // rbx
	__int64 v23; // rbp
	__int64 v24; // r9
	_QWORD* v25; // rbx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rcx
	int v31; // esi
	__int64 v32; // rbx
	int v33; // r14d
	__int64 v34; // rdi
	__int64 v35; // rcx
	__int64 v36; // r8
	__int64 v37; // rcx
	int v38; // eax
	int v39; // eax
	int v40; // eax
	struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp+8h] BYREF

	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v4 = SystemTimeAsFileTime;
	for (i = a1[12] - 1i64; i >= 0; --i)
	{
		for (j = *(_QWORD*)(*(_QWORD*)(a1[11] + 8 * i) + 72i64) - 1i64; j >= 0; --j)
		{
			v7 = *(_QWORD*)(a1[11] + 8 * i);
			v8 = *(_QWORD**)(*(_QWORD*)(v7 + 64) + 8 * j);
			v9 = v7 + 64;
			if (v8[7] > *(unsigned __int64*)&v4 && (v3 = v8[5], v2 = 0i64, v3))
			{
				v10 = (_QWORD*)(v8[4] + 24i64);
				while (*v10 <= *(unsigned __int64*)&v4)
				{
					++v2;
					v10 += 4;
					if (v2 >= v3)
						goto LABEL_8;
				}
			}
			else
			{
			LABEL_8:
				sub_140007270(v9, j);
			}
		}
		if (!*(_QWORD*)(*(_QWORD*)(a1[11] + 8 * i) + 72i64))
		{
			for (k = 0i64; k < a1[10]; ++k)
			{
				for (m = *(_QWORD*)(*(_QWORD*)(a1[9] + 8 * k) + 40i64) - 1i64; m >= 0; --m)
				{
					v13 = *(_QWORD*)(a1[9] + 8 * k);
					v14 = *(_QWORD*)(v13 + 32);
					v15 = v13 + 32;
					if (*(_QWORD*)(v14 + 8 * m) == *(_QWORD*)(a1[11] + 8 * i))
						sub_140007270(v15, m);
				}
			}
			v16 = *(__int64**)(a1[11] + 8 * i);
			if (v16)
			{
				v17 = v16[10];
				if (v17)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
				v18 = v16[8];
				if (v18)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
				v19 = v16[7];
				if (v19)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
				v20 = v16[6];
				if (v20)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
				if (v16[4])
				{
					v21 = *(_QWORD*)(v16[3] + 8);
					if (v21)
					{
						do
						{
							sub_1400083B0((__int64)(v16 + 2), *(_QWORD*)(v21 + 24));
							v22 = *(_QWORD*)(v21 + 16);
							sub_14018B900(v21, 0);
							v21 = v22;
						} while (v22);
					}
					*(_QWORD*)(v16[3] + 16) = v16[3];
					*(_QWORD*)(v16[3] + 8) = 0i64;
					*(_QWORD*)(v16[3] + 24) = v16[3];
					v16[4] = 0i64;
				}
				sub_14018B900(v16[3], 0);
				sub_14018B900((__int64)v16, 0);
			}
			sub_140007270((__int64)(a1 + 11), i);
		}
	}
	v23 = a1[14] - 1i64;
	if (v23 >= 0)
	{
		v24 = 1i64;
		do
		{
			v25 = *(_QWORD**)(a1[13] + 8 * v23);
			if (*(unsigned __int64*)&v4 < v25[7])
			{
				v31 = 0;
				v32 = v25[5] - 1i64;
				v33 = 0;
				if (v32 >= 0)
				{
					v34 = 32 * v32;
					do
					{
						v35 = *(_QWORD*)(a1[13] + 8 * v23);
						v36 = *(_QWORD*)(v35 + 32);
						v37 = v35 + 32;
						if (*(_QWORD*)(v34 + v36 + 24) > *(unsigned __int64*)&v4)
						{
							v2 = *(unsigned int*)(qword_140C635F0 + 5896);
							if ((_DWORD)v2)
							{
								if ((_DWORD)v2 == 1)
									v38 = 8;
								else
									v38 = 19;
							}
							else
							{
								v38 = 6;
							}
							v3 = *(unsigned int*)(v34 + v36);
							if ((_DWORD)v3 == v38)
							{
								v33 = 1;
							}
							else
							{
								if (!(_DWORD)v2 || (v39 = 19, (_DWORD)v2 == 1))
									v39 = 11;
								if ((_DWORD)v3 == v39)
								{
									v31 = 1;
								}
								else
								{
									v40 = 7;
									if ((_DWORD)v2)
										v40 = 19;
									if ((_DWORD)v3 == v40)
										v31 = 1;
								}
							}
						}
						else
						{
							sub_140451A80(v37, v32);
						}
						v34 -= 32i64;
						--v32;
					} while (v32 >= 0);
				}
				if (!v33)
					*(_DWORD*)(*(_QWORD*)(a1[13] + 8 * v23) + 28i64) = 0;
				if (!v31)
					*(_DWORD*)(*(_QWORD*)(a1[13] + 8 * v23) + 24i64) = 0;
			}
			else
			{
				if (v25)
				{
					v26 = v25[11];
					if (v26)
						(*(void(__fastcall**)(__int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD*)(v26 - 16) + 8i64))(
							v26 - 16,
							v2,
							v3,
							1i64);
					v27 = v25[10];
					if (v27)
						(*(void(__fastcall**)(__int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD*)(v27 - 16) + 8i64))(
							v27 - 16,
							v2,
							v3,
							v24);
					v28 = v25[9];
					if (v28)
						(*(void(__fastcall**)(__int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD*)(v28 - 16) + 8i64))(
							v28 - 16,
							v2,
							v3,
							v24);
					v29 = v25[4];
					if (v29)
						(*(void(__fastcall**)(__int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD*)(v29 - 16) + 8i64))(
							v29 - 16,
							v2,
							v3,
							v24);
					v30 = v25[1];
					if (v30)
						(*(void(__fastcall**)(__int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD*)(v30 - 16) + 8i64))(
							v30 - 16,
							v2,
							v3,
							v24);
					sub_14018B900((__int64)v25, 0);
				}
				sub_140007270((__int64)(a1 + 13), v23);
			}
			--v23;
			v24 = 1i64;
		} while (v23 >= 0);
	}
	sub_14044DBD0();
	return sub_14044DA90(a1);
}
// 14044E31A: variable 'v2' is possibly undefined
// 14044E31A: variable 'v3' is possibly undefined
// 14044E32E: variable 'v24' is possibly undefined
// 14044DA90: using guessed type __int64 __fastcall sub_14044DA90(_QWORD);
// 140C635F0: using guessed type __int64 qword_140C635F0;

