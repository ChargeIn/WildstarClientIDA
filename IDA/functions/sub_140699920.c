//----- (0000000140699920) ----------------------------------------------------
__int64 __fastcall sub_140699920(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8))) != 0)
	{
		if (((*(_DWORD*)(v5 + 16) - 1) & 0xFFFFFFFD) != 0)
		{
			v6 = 0;
		}
		else
		{
			v7 = sub_140200220(0x284u);
			if (v7)
				v6 = *(_DWORD*)(v7 + 4);
			else
				v6 = 64;
		}
		v8 = a1[2];
		result = 1i64;
		*(_DWORD*)(v8 + 8) = 3;
		*(double*)v8 = (double)v6;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 14069994C: variable 'v3' is possibly undefined

