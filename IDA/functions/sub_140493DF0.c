#include "../winhttp.h"

//----- (0000000140493DF0) ----------------------------------------------------
__int64 __fastcall sub_140493DF0(__int64 a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v3; // r15
	__int64 v4; // rax
	__int64 v5; // r8
	_QWORD* v6; // rdi
	_QWORD* v8; // rax
	_QWORD* v9; // rbx
	void(__fastcall * **v10)(_QWORD, __int64); // rcx
	__int64 v11; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v14; // rax
	_QWORD* v15; // rbx
	void(__fastcall * **v16)(_QWORD, __int64); // rcx
	__int64 v17; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v20; // r14
	__int64 v21; // rbx
	_QWORD* v22; // rax
	_QWORD* v23; // rbx
	void(__fastcall * **v24)(_QWORD, __int64); // rcx
	__int64 v25; // rax
	_QWORD* n; // rax
	__int64 ii; // rax
	__int64 v28; // rsi
	__int64 v29; // rbx
	__int64 v30; // rsi
	__int64 v31; // rbx
	_QWORD* v32; // [rsp+50h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 16);
	v3 = a1 + 8;
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v2 || (v32 = (_QWORD*)v5, a2 < *(_DWORD*)(v5 + 32)))
		v32 = (_QWORD*)v2;
	v6 = v32;
	if (v32 == *(_QWORD**)(a1 + 16))
		return 2147500037i64;
	v8 = (_QWORD*)v32[14];
	v9 = (_QWORD*)v8[2];
	if (v9 != v8)
	{
		do
		{
			v10 = (void(__fastcall***)(_QWORD, __int64))v9[5];
			if (v10)
				(**v10)(v10, 1i64);
			v11 = v9[3];
			if (v11)
			{
				v9 = (_QWORD*)v9[3];
				for (i = *(_QWORD**)(v11 + 16); i; i = (_QWORD*)i[2])
					v9 = i;
			}
			else
			{
				for (j = v9[1]; v9 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v9 = (_QWORD*)j;
				if (v9[3] != j)
					v9 = (_QWORD*)j;
			}
		} while (v9 != (_QWORD*)v6[14]);
	}
	sub_140008410((__int64)(v6 + 13));
	sub_140008410((__int64)(v6 + 17));
	v14 = (_QWORD*)v6[22];
	v15 = (_QWORD*)v14[2];
	if (v15 != v14)
	{
		do
		{
			v16 = (void(__fastcall***)(_QWORD, __int64))v15[5];
			if (v16)
				(**v16)(v16, 1i64);
			v17 = v15[3];
			if (v17)
			{
				v15 = (_QWORD*)v15[3];
				for (k = *(_QWORD**)(v17 + 16); k; k = (_QWORD*)k[2])
					v15 = k;
			}
			else
			{
				for (m = v15[1]; v15 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v15 = (_QWORD*)m;
				if (v15[3] != m)
					v15 = (_QWORD*)m;
			}
		} while (v15 != (_QWORD*)v6[22]);
	}
	if (v6[23])
	{
		v20 = *(_QWORD*)(v6[22] + 8i64);
		if (v20)
		{
			do
			{
				sub_1400083B0((__int64)(v6 + 21), *(_QWORD*)(v20 + 24));
				v21 = *(_QWORD*)(v20 + 16);
				sub_14018B900(v20, 0);
				v20 = v21;
			} while (v21);
		}
		*(_QWORD*)(v6[22] + 16i64) = v6[22];
		*(_QWORD*)(v6[22] + 8i64) = 0i64;
		*(_QWORD*)(v6[22] + 24i64) = v6[22];
		v6[23] = 0i64;
	}
	v22 = (_QWORD*)v6[6];
	v23 = (_QWORD*)v22[2];
	if (v23 != v22)
	{
		do
		{
			v24 = (void(__fastcall***)(_QWORD, __int64))v23[5];
			if (v24)
				(**v24)(v24, 1i64);
			v25 = v23[3];
			if (v25)
			{
				v23 = (_QWORD*)v23[3];
				for (n = *(_QWORD**)(v25 + 16); n; n = (_QWORD*)n[2])
					v23 = n;
			}
			else
			{
				for (ii = v23[1]; v23 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v23 = (_QWORD*)ii;
				if (v23[3] != ii)
					v23 = (_QWORD*)ii;
			}
		} while (v23 != (_QWORD*)v6[6]);
	}
	if (v6[7])
	{
		v28 = *(_QWORD*)(v6[6] + 8i64);
		if (v28)
		{
			do
			{
				sub_1400083B0((__int64)(v6 + 5), *(_QWORD*)(v28 + 24));
				v29 = *(_QWORD*)(v28 + 16);
				sub_14018B900(v28, 0);
				v28 = v29;
			} while (v29);
		}
		*(_QWORD*)(v6[6] + 16i64) = v6[6];
		*(_QWORD*)(v6[6] + 8i64) = 0i64;
		*(_QWORD*)(v6[6] + 24i64) = v6[6];
		v6[7] = 0i64;
	}
	if (v6[11])
	{
		v30 = *(_QWORD*)(v6[10] + 8i64);
		if (v30)
		{
			do
			{
				sub_1400083B0((__int64)(v6 + 9), *(_QWORD*)(v30 + 24));
				v31 = *(_QWORD*)(v30 + 16);
				sub_14018B900(v30, 0);
				v30 = v31;
			} while (v31);
		}
		*(_QWORD*)(v6[10] + 16i64) = v6[10];
		*(_QWORD*)(v6[10] + 8i64) = 0i64;
		*(_QWORD*)(v6[10] + 24i64) = v6[10];
		v6[11] = 0i64;
	}
	v32 = v6;
	sub_1404955D0(v3, (__int64*)&v32);
	return 0i64;
}

