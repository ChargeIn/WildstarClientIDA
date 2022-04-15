//----- (0000000140750940) ----------------------------------------------------
__int64 __fastcall sub_140750940(_QWORD* a1, int a2, float a3)
{
	__int64 v4; // rdx
	__int128 v6; // xmm0
	__int128 v7; // xmm1
	__int64 v8; // r8
	__int64 v9; // rcx
	__int64 result; // rax
	__int128 v11[2]; // [rsp+20h] [rbp-78h] BYREF
	_BYTE v12[40]; // [rsp+40h] [rbp-58h]

	v4 = a1[2];
	memset(v11, 0, sizeof(v11));
	*(_DWORD*)v12 = 0;
	*(_OWORD*)&v12[12] = 0x3F800000ui64;
	*(_QWORD*)&v12[4] = 0x3F800000FFFFFFFFi64;
	*(_QWORD*)&v12[28] = 0i64;
	*(_DWORD*)&v12[36] = 0;
	if (v4 == a1[3])
	{
		sub_140753D70(a1, v4, v11);
	}
	else
	{
		if (v4)
		{
			*(_OWORD*)v4 = v11[0];
			v6 = *(_OWORD*)v12;
			*(_OWORD*)(v4 + 16) = 0i64;
			v7 = *(_OWORD*)&v12[16];
			*(_OWORD*)(v4 + 32) = v6;
			*(_QWORD*)&v6 = *(_QWORD*)&v12[32];
			*(_OWORD*)(v4 + 48) = v7;
			*(_QWORD*)(v4 + 64) = v6;
		}
		a1[2] += 72i64;
	}
	v8 = a1[1];
	v9 = 9i64 * ((*((_DWORD*)a1 + 4) - (int)v8) / 72 - 1);
	*(_DWORD*)(v8 + 8 * v9 + 64) = 1;
	*(_DWORD*)(a1[1] + 8 * v9) = a2;
	result = a1[1];
	*(float*)(result + 8 * v9 + 40) = a3;
	return result;
}

