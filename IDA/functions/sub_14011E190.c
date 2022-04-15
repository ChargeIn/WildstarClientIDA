//----- (000000014011E190) ----------------------------------------------------
__int64 __fastcall sub_14011E190(_QWORD* a1)
{
	int* v3; // rax
	int i; // ebx
	_QWORD* v5; // rax
	__int64 v6; // r8
	_QWORD v7[4]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v8; // [rsp+40h] [rbp-28h] BYREF
	__int64 v9; // [rsp+48h] [rbp-20h]

	if (dword_140C674A0)
	{
		if (dword_140C675DC >= 2)
		{
			v3 = sub_14018B280(8i64, 0);
			v7[1] = v3;
			v7[2] = v3;
			v7[3] = v3 + 2;
			if (v3)
				*(_BYTE*)v3 = 0;
			for (i = 1; i <= (int)((__int64)(a1[2] - a1[3]) >> 4); ++i)
			{
				v5 = sub_14011D810(&v8, a1, i, 0i64);
				sub_14001B050(v7, (int*)v5[1], (int*)v5[2]);
				if (v9)
					sub_14018B900(v9, 0);
			}
			sub_140059390();
			if (v6)
				sub_14018B900(v6, 0);
		}
		return 0i64;
	}
	else
	{
		OutputDebugStringA("WARNING! Log called before CRT startup");
		return 0i64;
	}
}
// 14011E274: variable 'v6' is possibly undefined
// 140C674A0: using guessed type int dword_140C674A0;
// 140C675DC: using guessed type int dword_140C675DC;

