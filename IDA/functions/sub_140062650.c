//----- (0000000140062650) ----------------------------------------------------
__int64 __fastcall sub_140062650(__int64 a1, unsigned __int64* a2, unsigned __int64 a3)
{
	unsigned int v4; // edi
	unsigned __int64 v5; // r8
	unsigned __int64 i; // r9
	int v9; // ecx
	__int64 v10; // r15
	__int64 v11; // rbx
	__int64 v12; // rax
	char v13; // dl
	__int64 v14; // r8
	__int64 v15; // rdx
	int v16; // edx

	v4 = a3;
	v5 = (a3 >> 5) + 1;
	for (i = a3; i >= v5; v4 ^= (v4 >> 2) + 32 * v4 + v9)
	{
		v9 = *((unsigned __int8*)a2 + i - 1);
		i -= v5;
	}
	v10 = *(_QWORD*)(a1 + 32);
	v11 = *(_QWORD*)(*(_QWORD*)v10 + 8 * ((int)v4 & (unsigned __int64)(*(_DWORD*)(v10 + 12) - 1)));
	if (v11)
	{
		while (*(_QWORD*)(v11 + 16) != a3 || (unsigned int)sub_1407E6AF0(a2, v11 + 32, a3))
		{
			v11 = *(_QWORD*)v11;
			if (!v11)
				goto LABEL_7;
		}
		if ((*(_BYTE*)(v11 + 9) & 3 & (unsigned __int8)~*(_BYTE*)(v10 + 32)) != 0)
			*(_BYTE*)(v11 + 9) ^= 3u;
	}
	else
	{
	LABEL_7:
		if (a3 + 1 > 0xFFFFFFFFFFFFFFDDui64)
			sub_14005ABE0(a1, aMemoryAllocati);
		v12 = sub_140064780(a1, 0i64, 0i64);
		*(_QWORD*)(v12 + 16) = a3;
		*(_DWORD*)(v12 + 12) = v4;
		v11 = v12;
		v13 = *(_BYTE*)(*(_QWORD*)(a1 + 32) + 32i64) & 3;
		*(_BYTE*)(v12 + 8) = 4;
		*(_BYTE*)(v12 + 10) = 0;
		*(_BYTE*)(v12 + 9) = v13;
		sub_1407DB590((int*)(v12 + 32), (int*)a2, a3);
		*(_BYTE*)(v11 + a3 + 32) = 0;
		v14 = *(_QWORD*)(a1 + 32);
		v15 = 8i64 * (v4 & (*(_DWORD*)(v14 + 12) - 1));
		*(_QWORD*)v11 = *(_QWORD*)(v15 + *(_QWORD*)v14);
		*(_QWORD*)(v15 + *(_QWORD*)v14) = v11;
		v16 = *(_DWORD*)(v14 + 12);
		if (++ * (_DWORD*)(v14 + 8) > (unsigned int)v16 && v16 <= 1073741822)
			sub_140062450(a1, 2 * v16);
	}
	return v11;
}
// 14005ABE0: using guessed type void __fastcall __noreturn sub_14005ABE0(_QWORD, _QWORD);
// 140064780: using guessed type __int64 __fastcall sub_140064780(_QWORD, _QWORD, _QWORD);

