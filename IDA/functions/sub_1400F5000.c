#include "../winhttp.h"

//----- (00000001400F5000) ----------------------------------------------------
void __fastcall sub_1400F5000(__int64 a1, __m128i* a2)
{
	int* v2; // rsi
	const __m128i* v5; // rax
	__int64 v6; // rbp
	__m128i* v7; // r14
	int* v8; // rax
	__int64 v9; // r8
	int* v10; // rdi
	__int64 v11; // rcx
	__int64 v12; // rax
	bool v13; // zf
	__int64 v14; // rax
	__int64 i; // rax
	__int64 v16; // rcx
	__int64 v17; // r8
	__int64 v18; // rax
	wchar_t* v19; // rdx
	__int64 v20; // rax
	__int64 v21; // rdx
	__int64 v22; // [rsp+20h] [rbp-2D8h] BYREF
	int* v23; // [rsp+28h] [rbp-2D0h]
	int* v24; // [rsp+30h] [rbp-2C8h]
	int* v25; // [rsp+38h] [rbp-2C0h]
	__int64 v26; // [rsp+40h] [rbp-2B8h] BYREF
	__m128i* v27; // [rsp+48h] [rbp-2B0h]
	const __m128i* v28; // [rsp+50h] [rbp-2A8h]
	const __m128i* v29; // [rsp+58h] [rbp-2A0h]
	char v30[640]; // [rsp+60h] [rbp-298h] BYREF

	v2 = *(int**)(qword_140C63650 + 784);
	v5 = (const __m128i*)sub_14018B280(16i64, 0);
	v6 = 0i64;
	v7 = (__m128i*)v5;
	v27 = (__m128i*)v5;
	v28 = v5;
	v29 = v5 + 1;
	if (v5)
		v5->m128i_i16[0] = 0;
	v8 = sub_14018B280(16i64, 0);
	v10 = v8;
	v23 = v8;
	v24 = v8;
	v11 = (__int64)(v8 + 4);
	v25 = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	if (v2 && *(_WORD*)v2)
	{
		v12 = 0i64;
		do
			v13 = *((_WORD*)v2 + ++v12) == 0;
		while (!v13);
		if ((2 * v12) >> 1)
			sub_14001C310(&v26, v2, (int*)((char*)v2 + 2 * v12));
		else
			sub_1407DB590(v7->m128i_i32, v2, 0i64);
		v14 = 0i64;
		do
			v13 = *(_WORD*)&asc_1409D43C4[2 * v14++ + 2] == 0;
		while (!v13);
		sub_14001C310(&v26, (int*)"\\", (int*)&asc_1409D43C4[2 * v14]);
		v7 = v27;
	}
	if (!*(_QWORD*)(*(_QWORD*)(a1 + 8) + 2528i64))
	{
		if (!(unsigned int)sub_1401B58D0(v11, a2, v9))
		{
			if (!v2 || !*(_WORD*)v2)
			{
				v18 = 0i64;
				v19 = L"Asset does not exist";
				do
					v13 = aAssetDoesNotEx_0[++v18] == 0;
				while (!v13);
			LABEL_27:
				if ((2 * v18) >> 1)
				{
					sub_14001C310(&v22, (int*)v19, (int*)&v19[v18]);
					v10 = v23;
					if (v23 != v24)
						goto LABEL_35;
				}
				else
				{
					sub_1407DB590(v10, (int*)v19, 0i64);
				}
				goto LABEL_30;
			}
			for (i = 0i64; a2->m128i_i16[i]; ++i)
				;
			sub_14001C310(&v26, a2->m128i_i32, (int*)((char*)a2->m128i_i32 + 2 * i));
			v7 = v27;
			a2 = v27;
			if (!(unsigned int)sub_1401B58D0(v16, v27, v17))
			{
				v18 = 0i64;
				v19 = L"Asset does not exist";
				do
					v13 = aAssetDoesNotEx[++v18] == 0;
				while (!v13);
				goto LABEL_27;
			}
		}
	LABEL_30:
		sub_1401A72E0((__int64)v30);
		if ((int)sub_1401A7BD0((__int64)v30, a2) >= 0)
		{
			v20 = sub_1401A5AE0((__int64)v30, L"Forms");
			if (v20)
				v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
			sub_1400F4CB0(a1, v21, v6);
		}
		sub_1401A76A0((__int64)v30);
	}
LABEL_35:
	if (v10)
		sub_14018B900((__int64)v10, 0);
	if (v7)
		sub_14018B900((__int64)v7, 0);
}
// 1400F5143: variable 'v11' is possibly undefined
// 1400F5143: variable 'v9' is possibly undefined
// 1400F5189: variable 'v16' is possibly undefined
// 1400F5189: variable 'v17' is possibly undefined
// 1400F5271: variable 'v21' is possibly undefined
// 140A18FA8: using guessed type wchar_t aAssetDoesNotEx_0[21];
// 140A18FD8: using guessed type wchar_t aAssetDoesNotEx[21];
// 140A31748: using guessed type wchar_t aForms[6];
// 140C63650: using guessed type __int64 qword_140C63650;

