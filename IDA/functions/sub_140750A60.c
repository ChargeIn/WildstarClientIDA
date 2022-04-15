//----- (0000000140750A60) ----------------------------------------------------
__int64 __fastcall sub_140750A60(_QWORD* a1, int a2)
{
	__int64 v3; // rdx
	__int128 v5; // xmm0
	__int128 v6; // xmm1
	__int64 v7; // r8
	__int64 v8; // rcx
	__int64 result; // rax
	__int128 v10[2]; // [rsp+20h] [rbp-68h] BYREF
	_BYTE v11[40]; // [rsp+40h] [rbp-48h]

	v3 = a1[2];
	memset(v10, 0, sizeof(v10));
	*(_DWORD*)v11 = 0;
	*(_OWORD*)&v11[12] = 0x3F800000ui64;
	*(_QWORD*)&v11[4] = 0x3F800000FFFFFFFFi64;
	*(_QWORD*)&v11[28] = 0i64;
	*(_DWORD*)&v11[36] = 0;
	if (v3 == a1[3])
	{
		sub_140753D70(a1, v3, v10);
	}
	else
	{
		if (v3)
		{
			*(_OWORD*)v3 = v10[0];
			v5 = *(_OWORD*)v11;
			*(_OWORD*)(v3 + 16) = 0i64;
			v6 = *(_OWORD*)&v11[16];
			*(_OWORD*)(v3 + 32) = v5;
			*(_QWORD*)&v5 = *(_QWORD*)&v11[32];
			*(_OWORD*)(v3 + 48) = v6;
			*(_QWORD*)(v3 + 64) = v5;
		}
		a1[2] += 72i64;
	}
	v7 = a1[1];
	v8 = 9i64 * ((*((_DWORD*)a1 + 4) - (int)v7) / 72 - 1);
	*(_DWORD*)(v7 + 8 * v8 + 52) = 1;
	*(_DWORD*)(a1[1] + 8 * v8) = a2;
	*(_DWORD*)(a1[1] + 8 * v8 + 24) = 0;
	*(_DWORD*)(a1[1] + 8 * v8 + 20) = 0;
	*(_DWORD*)(a1[1] + 8 * v8 + 32) = 0;
	*(_DWORD*)(a1[1] + 8 * v8 + 28) = 0;
	*(_DWORD*)(a1[1] + 8 * v8 + 8) = 0;
	*(_DWORD*)(a1[1] + 8 * v8 + 4) = 0;
	*(_DWORD*)(a1[1] + 8 * v8 + 16) = 0;
	result = a1[1];
	*(_DWORD*)(result + 8 * v8 + 12) = 0;
	return result;
}

