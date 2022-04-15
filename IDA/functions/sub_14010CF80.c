//----- (000000014010CF80) ----------------------------------------------------
__int64 __fastcall sub_14010CF80(__int64 a1)
{
	int v1; // ebx
	int* v3; // rax
	__int64 v4; // rsi
	__int64 v5; // rdi
	float v6; // xmm6_4
	__int64 v7; // rcx
	double v8; // xmm1_8
	__int64 v9; // rax
	int* v10; // r9
	__int64 v11; // r10
	_QWORD* v12; // rcx
	int* v13; // rax
	int v15; // [rsp+20h] [rbp-38h] BYREF
	int v16[4]; // [rsp+28h] [rbp-30h] BYREF

	v1 = 0;
	if (*(_QWORD*)(a1 + 160))
	{
		v3 = sub_14018B280(16i64, 0);
		v4 = (__int64)v3;
		if (v3)
			*(_WORD*)v3 = 0;
		v5 = *(_QWORD*)(a1 + 160);
		v6 = *(float*)&dword_140C63664;
		if (v5)
		{
			(**(void(__fastcall***)(__int64))v5)(v5);
			if ((int)((__int64)(*(_QWORD*)(v5 + 96) - *(_QWORD*)(v5 + 88)) >> 3) > 0)
				v7 = **(_QWORD**)(v5 + 88);
			else
				v7 = v5;
			*(_QWORD*)&v8 = (unsigned int)dword_140C63664;
			*(float*)&v8 = *(float*)&dword_140C63664 - v6;
			v9 = sub_140101180(v7, v8, 0i64);
			v1 = *(_DWORD*)(v9 + 12) - *(_DWORD*)(v9 + 8);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		}
		if (v4)
			sub_14018B900(v4, 0);
	}
	else
	{
		v16[0] = 0;
		v16[1] = 6;
		v16[2] = 7;
		v10 = v16;
		v11 = 3i64;
		do
		{
			v12 = *(_QWORD**)(a1 + 8i64 * *v10 + 80);
			if (v12)
			{
				v13 = sub_140101470(v12, &v15);
				if (v1 < *v13)
					v1 = *v13;
			}
			++v10;
			--v11;
		} while (v11);
	}
	return (unsigned int)v1;
}
// 14010D07C: variable 'v10' is possibly undefined
// 14010D080: variable 'v11' is possibly undefined
// 140C63664: using guessed type int dword_140C63664;

