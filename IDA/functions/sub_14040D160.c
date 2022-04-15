//----- (000000014040D160) ----------------------------------------------------
__int64 __fastcall sub_14040D160(_QWORD* a1, __int64 a2)
{
	float v4; // xmm1_4
	_DWORD* v5; // rax
	__int64 v6; // rcx
	int v7; // edx
	__int64 v8; // rcx
	_DWORD* v9; // rax
	__int64 result; // rax

	v4 = (float)(*(float*)(a1[31] + 24i64) * *(float*)(a1[30] + 16i64)) * *(float*)(a1[29] + 24i64);
	*(float*)(a2 + 144) = v4;
	v5 = (_DWORD*)a1[28];
	if (v5[34] || v5[35])
	{
		*(_QWORD*)(a2 + 40) = (unsigned int)v5[36];
		v7 = *(_DWORD*)(a1[28] + 136i64);
		*(_DWORD*)(a2 + 48) = v7;
		*(_QWORD*)(a2 + 64) = *(unsigned int*)(a1[28] + 148i64);
		v6 = *(unsigned int*)(a1[28] + 140i64);
		*(_DWORD*)(a2 + 72) = v6;
		if ((*(_DWORD*)(a1[28] + 124i64) & 0x200) != 0)
		{
			*(_DWORD*)(a2 + 52) = v7;
			*(_DWORD*)(a2 + 48) = 15;
		}
	}
	else
	{
		*(_QWORD*)(a2 + 40) = (unsigned int)sub_14040BEE0((__int64)a1, v4, *(_DWORD*)(a2 + 4), *(_DWORD*)a2);
		*(_QWORD*)(a2 + 48) = 1i64;
		*(_QWORD*)(a2 + 56) = 0i64;
		*(_QWORD*)(a2 + 64) = 0i64;
		v6 = 0i64;
		*(_QWORD*)(a2 + 72) = 1i64;
		*(_QWORD*)(a2 + 80) = 0i64;
	}
	*(_QWORD*)(a2 + 136) = (unsigned int)sub_14040BEE0(v6, *(float*)(a2 + 144), *(_DWORD*)(a2 + 4), *(_DWORD*)a2);
	v9 = (_DWORD*)a1[28];
	if (v9[38] || v9[39])
	{
		*(_QWORD*)(a2 + 88) = (unsigned int)v9[40];
		*(_DWORD*)(a2 + 96) = *(_DWORD*)(a1[28] + 152i64);
		*(_QWORD*)(a2 + 112) = *(unsigned int*)(a1[28] + 164i64);
		*(_DWORD*)(a2 + 120) = *(_DWORD*)(a1[28] + 156i64);
	}
	else
	{
		*(_QWORD*)(a2 + 88) = (unsigned int)sub_14040BFB0(v8, *(float*)(a2 + 144), *(_DWORD*)(a2 + 4), *(_DWORD*)a2);
		*(_QWORD*)(a2 + 96) = 1i64;
		*(_QWORD*)(a2 + 104) = 0i64;
		*(_QWORD*)(a2 + 112) = 0i64;
		*(_QWORD*)(a2 + 120) = 1i64;
		*(_QWORD*)(a2 + 128) = 0i64;
	}
	result = a1[2];
	if ((*(_BYTE*)(result + 340) & 0x20) == 0 || *(_DWORD*)(result + 320) == 24)
	{
		if (*(_QWORD*)(a2 + 88)
			&& ((result = *(unsigned int*)(a2 + 96), (int)result < 15)
				|| (_DWORD)result == 15 && (*(_DWORD*)(a2 + 104) || *(_DWORD*)(a2 + 100) == 1 || *(_DWORD*)(a2 + 108)))
			|| *(_QWORD*)(a2 + 112)
			&& ((result = *(unsigned int*)(a2 + 120), (int)result < 15)
				|| (_DWORD)result == 15 && (*(_DWORD*)(a2 + 128) || *(_DWORD*)(a2 + 124) == 1 || *(_DWORD*)(a2 + 132))))
		{
			*(_QWORD*)(a2 + 88) = 0i64;
			*(_QWORD*)(a2 + 96) = 15i64;
			*(_QWORD*)(a2 + 104) = 0i64;
			*(_QWORD*)(a2 + 112) = 0i64;
			*(_QWORD*)(a2 + 120) = 15i64;
			*(_QWORD*)(a2 + 128) = 0i64;
		}
	}
	return result;
}
// 14040D2A9: variable 'v8' is possibly undefined

