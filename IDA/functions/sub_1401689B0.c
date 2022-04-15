//----- (00000001401689B0) ----------------------------------------------------
void __fastcall sub_1401689B0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rbx
	__int64* v5; // rax
	float v7; // xmm1_4
	int* v8; // rbx
	__int64 v9; // [rsp+20h] [rbp-68h] BYREF
	int* v10; // [rsp+28h] [rbp-60h]
	int* v11; // [rsp+30h] [rbp-58h]
	int* v12; // [rsp+38h] [rbp-50h]
	__int64 v13; // [rsp+40h] [rbp-48h] BYREF
	int* v14; // [rsp+48h] [rbp-40h]
	int* v15; // [rsp+50h] [rbp-38h]
	__int64 v16; // [rsp+60h] [rbp-28h] BYREF
	int* v17; // [rsp+68h] [rbp-20h]
	int* v18; // [rsp+70h] [rbp-18h]

	if ((*(_BYTE*)(a1 + 664) & 1) != 0)
	{
		v2 = sub_14018B280(16i64, 0);
		v3 = 0i64;
		v4 = (__int64)v2;
		v10 = v2;
		v11 = v2;
		v12 = v2 + 4;
		if (v2)
			*(_WORD*)v2 = 0;
		sub_14018EFA0(
			&v13,
			(__int64)L"%.0f / %.0f",
			(float)(*(float*)(a1 + 1320) + *(float*)(a1 + 1328)),
			*(float*)(a1 + 1316));
		if ((*(_BYTE*)(a1 + 664) & 4) != 0)
		{
			v5 = sub_14018EFA0(&v16, (__int64)L"%.0f", (float)(*(float*)(a1 + 1320) + *(float*)(a1 + 1328)));
			if (v5 != &v13)
				sub_14001C480((__int64)&v13, (int*)v5[1], (int*)v5[2]);
			if (v17)
				sub_14018B900((__int64)v17, 0);
		}
		if ((*(_BYTE*)(a1 + 664) & 2) != 0)
		{
			sub_14001C480((__int64)&v9, v14, v15);
			if ((*(_BYTE*)(a1 + 664) & 8) != 0)
			{
				while (*((_WORD*)&unk_1409DCC64 + ++v3) != 0)
					;
				sub_14001C310(&v9, (int*)&unk_1409DCC64, (int*)((char*)&unk_1409DCC64 + 2 * v3));
			}
			v4 = (__int64)v10;
		}
		if ((*(_BYTE*)(a1 + 664) & 8) != 0)
		{
			v7 = *(float*)(a1 + 1316);
			if (v7 > 0.0)
			{
				sub_14018EFA0(
					&v16,
					(__int64)L"%.0f%%",
					(float)((float)((float)(*(float*)(a1 + 1320) + *(float*)(a1 + 1328)) * 100.0) / v7));
				v8 = v17;
				sub_14001C310(&v9, v17, v18);
				if (v8)
					sub_14018B900((__int64)v8, 0);
				v4 = (__int64)v10;
			}
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 80i64))(a1, v4);
		if (v14)
			sub_14018B900((__int64)v14, 0);
		if (v4)
			sub_14018B900(v4, 0);
	}
}
// 140A370A0: using guessed type wchar_t a0f_1[7];
// 140A370F0: using guessed type wchar_t a0f0f[12];
// 140A37128: using guessed type wchar_t a0f_0[5];

