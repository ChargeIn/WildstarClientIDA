//----- (00000001403DA5C0) ----------------------------------------------------
__int64 __fastcall sub_1403DA5C0(__int64 a1, __int64 a2)
{
	__int64 v3; // rdi
	int* v4; // rdx
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]
	__int64 v8; // [rsp+30h] [rbp-18h]
	__int64 v9; // [rsp+38h] [rbp-10h]

	v3 = sub_1403D90D0(a1, *(_DWORD*)a2);
	if (v3)
	{
		v4 = *(int**)(a2 + 8);
		v7 = 0i64;
		v8 = 0i64;
		v9 = 0i64;
		sub_140020590(&v6, v4, (__int64)&v4[*(unsigned int*)(a2 + 4)]);
		*(_DWORD*)(v3 + 244) = 1;
		sub_14004EDB0((_QWORD*)(v3 + 3368), (__int64)&v6);
		if (v7)
			sub_14018B900(v7, 0);
	}
	return 0i64;
}

