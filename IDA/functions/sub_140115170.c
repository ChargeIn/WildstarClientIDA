//----- (0000000140115170) ----------------------------------------------------
__int64 __fastcall sub_140115170(_QWORD* a1)
{
	__int64 v2; // r13
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned __int64 v5; // r14
	__int64 v6; // r15
	__int64 v7; // rcx
	unsigned __int64* v8; // rbp
	unsigned __int64 v9; // rsi
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rcx
	_QWORD v14[9]; // [rsp+20h] [rbp-48h] BYREF

	v2 = sub_140114A30(a1);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v3 = a1[2];
	v4 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	a1[2] += 16i64;
	v5 = 0i64;
	if (*(_QWORD*)(v2 + 1296))
	{
		v6 = 0i64;
		do
		{
			v7 = a1[2];
			*(_DWORD*)(v7 + 8) = 3;
			*(double*)v7 = (double)((int)v5 + 1);
			a1[2] += 16i64;
			v8 = (unsigned __int64*)sub_14018F0E0(v14, *(unsigned __int16**)(v6 + *(_QWORD*)(v2 + 1288) + 8))[1];
			if (v8)
			{
				v9 = -1i64;
				do
					++v9;
				while (*((_BYTE*)v8 + v9));
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v10 = a1[2];
				v11 = sub_140062650((__int64)a1, v8, v9);
				*(_DWORD*)(v10 + 8) = 4;
				*(_QWORD*)v10 = v11;
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
			}
			v12 = v14[1];
			a1[2] += 16i64;
			if (v12)
				sub_14018B900(v12, 0);
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			++v5;
			v6 += 32i64;
		} while (v5 < *(_QWORD*)(v2 + 1296));
	}
	return 1i64;
}

