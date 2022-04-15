//----- (0000000140065210) ----------------------------------------------------
__int64 __fastcall sub_140065210(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	_QWORD* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rdx
	__int64 v8; // rdi
	int v9; // edx
	int v10; // edx
	__int64 v11; // rax
	__int64 v12; // rax

	v3 = *(_QWORD*)a1;
	if (++ * (_WORD*)(v3 + 96) > 0xC8u)
	{
		sub_14005B130(v3, (unsigned __int64*)"%s: %s in precompiled chunk", *(const char**)(a1 + 24), aCodeTooDeep);
		sub_140061040(*(_QWORD*)a1, 3);
	}
	v5 = sub_140060D90(v3);
	v6 = *(_QWORD*)a1;
	v7 = *(_QWORD*)(*(_QWORD*)a1 + 16i64);
	v8 = (__int64)v5;
	*(_QWORD*)v7 = v5;
	*(_DWORD*)(v7 + 8) = 9;
	if ((__int64)(*(_QWORD*)(v6 + 56) - *(_QWORD*)(v6 + 16)) <= 16)
	{
		v9 = *(_DWORD*)(v6 + 88);
		if (v9 < 1)
			v10 = v9 + 1;
		else
			v10 = 2 * v9;
		sub_140061210(v6, v10);
	}
	*(_QWORD*)(*(_QWORD*)a1 + 16i64) += 16i64;
	v11 = sub_140064AE0(a1);
	*(_QWORD*)(v8 + 64) = v11;
	if (!v11)
		*(_QWORD*)(v8 + 64) = a2;
	*(_DWORD*)(v8 + 96) = sub_1400648D0(a1);
	*(_DWORD*)(v8 + 100) = sub_1400648D0(a1);
	*(_BYTE*)(v8 + 112) = sub_1400647E0(a1);
	*(_BYTE*)(v8 + 113) = sub_1400647E0(a1);
	*(_BYTE*)(v8 + 114) = sub_1400647E0(a1);
	*(_BYTE*)(v8 + 115) = sub_1400647E0(a1);
	sub_140064C30(a1, v8);
	sub_140064D20(a1, v8);
	sub_140064F70(a1, v8);
	if (!(unsigned int)sub_14005A040(v8, *(_DWORD*)(v8 + 80), 255))
	{
		sub_14005B130(*(_QWORD*)a1, (unsigned __int64*)"%s: %s in precompiled chunk", *(const char**)(a1 + 24), aBadCode);
		sub_140061040(*(_QWORD*)a1, 3);
	}
	v12 = *(_QWORD*)a1;
	*(_QWORD*)(v12 + 16) -= 16i64;
	--* (_WORD*)(v12 + 96);
	return v8;
}

