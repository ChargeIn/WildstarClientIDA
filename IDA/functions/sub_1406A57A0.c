//----- (00000001406A57A0) ----------------------------------------------------
__int64 __fastcall sub_1406A57A0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rax
	unsigned __int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rax
	double v8; // xmm0_8

	v2 = sub_140056AB0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v4 = sub_1405B15C0(*(_QWORD*)(qword_140C659F0 + 824), *(_DWORD*)(*(_QWORD*)(v2 + 8) + 4i64));
		if (v4
			&& (v5 = **(unsigned int**)(v3 + 8), v5 < (__int64)(*(_QWORD*)(v4 + 256) - *(_QWORD*)(v4 + 248)) >> 3)
			&& (v6 = *(_QWORD*)(*(_QWORD*)(v4 + 248) + 8 * v5)) != 0)
		{
			v7 = a1[2];
			v8 = (double)*(int*)(v6 + 8);
			*(_DWORD*)(v7 + 8) = 3;
			*(double*)v7 = v8;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

