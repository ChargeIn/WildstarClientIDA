//----- (000000014010D2F0) ----------------------------------------------------
__int64 __fastcall sub_14010D2F0(__int64 a1)
{
	int* v2; // rax
	int v3; // ebx
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

	if (*(_QWORD*)(a1 + 160))
	{
		v2 = sub_14018B280(16i64, 0);
		v3 = 0;
		v4 = (__int64)v2;
		if (v2)
			*(_WORD*)v2 = 0;
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
			v3 = *(_DWORD*)(v9 + 52) - *(_DWORD*)(v9 + 48);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		}
		if (v4)
			sub_14018B900(v4, 0);
	}
	else
	{
		v3 = 0;
		v16[0] = 4;
		v16[1] = 5;
		v16[2] = 6;
		v10 = v16;
		v11 = 3i64;
		do
		{
			v12 = *(_QWORD**)(a1 + 8i64 * *v10 + 80);
			if (v12)
			{
				v13 = sub_140101470(v12, &v15);
				if (v3 < v13[1])
					v3 = v13[1];
			}
			++v10;
			--v11;
		} while (v11);
	}
	return (unsigned int)v3;
}
// 14010D3FE: variable 'v10' is possibly undefined
// 14010D402: variable 'v11' is possibly undefined
// 140C63664: using guessed type int dword_140C63664;

