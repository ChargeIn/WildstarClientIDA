//----- (0000000140059EF0) ----------------------------------------------------
__int64 __fastcall sub_140059EF0(__int64 a1, _BYTE* a2, __int64 a3)
{
	__int64 v4; // rdi
	__int64 v5; // rcx
	_BYTE* v6; // rsi
	__int64 v7; // rax
	__int64 v8; // rax
	unsigned int v9; // ebp
	__int64 v10; // rax
	int v11; // edx
	int v12; // edx

	v4 = 0i64;
	v5 = 0i64;
	v6 = a2;
	if (*a2 == 62)
	{
		v7 = *(_QWORD*)(a1 + 16);
		v6 = a2 + 1;
		v4 = *(_QWORD*)(v7 - 16);
		*(_QWORD*)(a1 + 16) = v7 - 16;
	}
	else
	{
		v8 = *(int*)(a3 + 116);
		if ((_DWORD)v8)
		{
			v5 = *(_QWORD*)(a1 + 80) + 40 * v8;
			v4 = **(_QWORD**)(v5 + 8);
		}
	}
	v9 = sub_140059D50(a1, v6, a3, v4, v5);
	if (sub_1407DE0B4((__int64)v6, 0x66u))
	{
		if (v4)
		{
			v10 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v10 = v4;
			*(_DWORD*)(v10 + 8) = 6;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		}
		if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16)) <= 16)
		{
			v11 = *(_DWORD*)(a1 + 88);
			if (v11 < 1)
				v12 = v11 + 1;
			else
				v12 = 2 * v11;
			sub_140061210(a1, v12);
		}
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (sub_1407DE0B4((__int64)v6, 0x4Cu))
		sub_140059C20(a1, v4);
	return v9;
}

