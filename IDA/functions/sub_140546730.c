#include "../winhttp.h"

//----- (0000000140546730) ----------------------------------------------------
_QWORD* __fastcall sub_140546730(__int64* a1, int a2)
{
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64* v6; // rdx
	_QWORD* v7; // rsi
	__int64 v8; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64* v13; // rdx
	_QWORD* v14; // rsi
	__int64 v15; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v18; // rsi
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rbx
	__int64* v22; // rdx
	_QWORD* v23; // rsi
	__int64 v24; // rax
	__int64 n; // rax
	__int64 ii; // rax
	__int64 v27; // rsi
	__int64 v28; // rbx
	_QWORD* result; // rax
	_QWORD* v30; // rbx
	__int64* v31; // rdx
	_QWORD* v32; // rsi
	__int64 v33; // rax
	__int64 v34; // rsi
	__int64 v35; // rdi
	__int64 v36; // rbx

	sub_140195D70((__int64)(a1 + 96));
	sub_140008410((__int64)(a1 + 72));
	sub_1405465F0((__int64)a1, a1 + 76, a2);
	sub_1405465F0((__int64)a1, a1 + 77, a2);
	sub_1405465F0((__int64)a1, a1 + 78, a2);
	v4 = a1[80];
	v5 = *(_QWORD*)(v4 + 16);
	if (v5 != v4)
	{
		do
		{
			v6 = *(__int64**)(v5 + 40);
			if (v6)
			{
				sub_1405465F0((__int64)a1, v6, a2);
				v7 = *(_QWORD**)(v5 + 40);
				if (v7)
				{
					if (*v7)
						sub_1401A4A00(*(const void****)(v5 + 40));
					sub_14018B900((__int64)v7, 0);
				}
			}
			v8 = *(_QWORD*)(v5 + 24);
			if (v8)
			{
				v5 = *(_QWORD*)(v5 + 24);
				for (i = *(_QWORD*)(v8 + 16); i; i = *(_QWORD*)(i + 16))
					v5 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v5 + 8); v5 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v5 = j;
				if (*(_QWORD*)(v5 + 24) != j)
					v5 = j;
			}
		} while (v5 != a1[80]);
	}
	sub_140008410((__int64)(a1 + 79));
	v11 = a1[88];
	v12 = *(_QWORD*)(v11 + 16);
	if (v12 != v11)
	{
		do
		{
			v13 = *(__int64**)(v12 + 40);
			if (v13)
			{
				sub_1405465F0((__int64)a1, v13, a2);
				v14 = *(_QWORD**)(v12 + 40);
				if (v14)
				{
					if (*v14)
						sub_1401A4A00(*(const void****)(v12 + 40));
					sub_14018B900((__int64)v14, 0);
				}
			}
			v15 = *(_QWORD*)(v12 + 24);
			if (v15)
			{
				v12 = *(_QWORD*)(v12 + 24);
				for (k = *(_QWORD*)(v15 + 16); k; k = *(_QWORD*)(k + 16))
					v12 = k;
			}
			else
			{
				for (m = *(_QWORD*)(v12 + 8); v12 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
					v12 = m;
				if (*(_QWORD*)(v12 + 24) != m)
					v12 = m;
			}
		} while (v12 != a1[88]);
	}
	if (a1[89])
	{
		v18 = *(_QWORD*)(a1[88] + 8);
		if (v18)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 87), *(_QWORD*)(v18 + 24));
				v19 = *(_QWORD*)(v18 + 16);
				sub_14018B900(v18, 0);
				v18 = v19;
			} while (v19);
		}
		*(_QWORD*)(a1[88] + 16) = a1[88];
		*(_QWORD*)(a1[88] + 8) = 0i64;
		*(_QWORD*)(a1[88] + 24) = a1[88];
		a1[89] = 0i64;
	}
	v20 = a1[84];
	v21 = *(_QWORD*)(v20 + 16);
	if (v21 != v20)
	{
		do
		{
			v22 = *(__int64**)(v21 + 40);
			if (v22)
			{
				sub_1405465F0((__int64)a1, v22, a2);
				v23 = *(_QWORD**)(v21 + 40);
				if (v23)
				{
					if (*v23)
						sub_1401A4A00(*(const void****)(v21 + 40));
					sub_14018B900((__int64)v23, 0);
				}
			}
			v24 = *(_QWORD*)(v21 + 24);
			if (v24)
			{
				v21 = *(_QWORD*)(v21 + 24);
				for (n = *(_QWORD*)(v24 + 16); n; n = *(_QWORD*)(n + 16))
					v21 = n;
			}
			else
			{
				for (ii = *(_QWORD*)(v21 + 8); v21 == *(_QWORD*)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v21 = ii;
				if (*(_QWORD*)(v21 + 24) != ii)
					v21 = ii;
			}
		} while (v21 != a1[84]);
	}
	if (a1[85])
	{
		v27 = *(_QWORD*)(a1[84] + 8);
		if (v27)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 83), *(_QWORD*)(v27 + 24));
				v28 = *(_QWORD*)(v27 + 16);
				sub_14018B900(v27, 0);
				v27 = v28;
			} while (v28);
		}
		*(_QWORD*)(a1[84] + 16) = a1[84];
		*(_QWORD*)(a1[84] + 8) = 0i64;
		*(_QWORD*)(a1[84] + 24) = a1[84];
		a1[85] = 0i64;
	}
	result = (_QWORD*)a1[92];
	v30 = (_QWORD*)result[2];
	if (v30 != result)
	{
		do
		{
			v31 = (__int64*)v30[5];
			if (v31)
			{
				sub_1405465F0((__int64)a1, v31, a2);
				v32 = (_QWORD*)v30[5];
				if (v32)
				{
					if (*v32)
						sub_1401A4A00((const void***)v30[5]);
					sub_14018B900((__int64)v32, 0);
				}
			}
			v33 = v30[3];
			if (v33)
			{
				v30 = (_QWORD*)v30[3];
				for (result = *(_QWORD**)(v33 + 16); result; result = (_QWORD*)result[2])
					v30 = result;
			}
			else
			{
				for (result = (_QWORD*)v30[1]; v30 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v30 = result;
				if ((_QWORD*)v30[3] != result)
					v30 = result;
			}
		} while (v30 != (_QWORD*)a1[92]);
	}
	v34 = (__int64)(a1 + 91);
	if (a1[93])
	{
		v35 = *(_QWORD*)(a1[92] + 8);
		if (v35)
		{
			do
			{
				sub_1400083B0(v34, *(_QWORD*)(v35 + 24));
				v36 = *(_QWORD*)(v35 + 16);
				sub_14018B900(v35, 0);
				v35 = v36;
			} while (v36);
		}
		*(_QWORD*)(*(_QWORD*)(v34 + 8) + 16i64) = *(_QWORD*)(v34 + 8);
		*(_QWORD*)(*(_QWORD*)(v34 + 8) + 8i64) = 0i64;
		result = *(_QWORD**)(v34 + 8);
		result[3] = result;
		*(_QWORD*)(v34 + 16) = 0i64;
	}
	return result;
}

