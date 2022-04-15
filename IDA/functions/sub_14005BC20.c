//----- (000000014005BC20) ----------------------------------------------------
__int64 __fastcall sub_14005BC20(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rsi
	int v6; // ebp
	__int64 v7; // rax
	int i; // ecx
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 result; // rax

	LODWORD(v3) = a3;
	if (a3)
	{
		v7 = (unsigned int)(a3 - 1);
		for (i = -1; (unsigned int)v7 >= 0x100; i += 8)
			v7 = (unsigned int)v7 >> 8;
		v6 = byte_140A122B0[v7] + i + 1;
		if (v6 > 26)
			sub_14005ABE0(a1, aTableOverflow);
		v3 = 1i64 << v6;
		if ((unsigned __int64)(int)((1i64 << v6) + 1) > 0x666666666666666i64)
			sub_14005ABE0(a1, aMemoryAllocati);
		*(_QWORD*)(a2 + 32) = sub_140064780(a1, 0i64, 0i64, 40i64 * (int)v3);
		v9 = (int)v3;
		if ((int)v3 > 0)
		{
			v10 = 0i64;
			do
			{
				v11 = *(_QWORD*)(a2 + 32);
				v10 += 40i64;
				*(_QWORD*)(v10 + v11 - 8) = 0i64;
				*(_DWORD*)(v10 + v11 - 16) = 0;
				*(_DWORD*)(v10 + v11 - 32) = 0;
				--v9;
			} while (v9);
		}
	}
	else
	{
		*(_QWORD*)(a2 + 32) = &unk_140A12148;
		LOBYTE(v6) = 0;
	}
	result = *(_QWORD*)(a2 + 32);
	*(_BYTE*)(a2 + 11) = v6;
	*(_QWORD*)(a2 + 40) = result + 40i64 * (int)v3;
	return result;
}
// 14005ABE0: using guessed type void __noreturn sub_14005ABE0(_QWORD, const char *, ...);
// 140A122B0: using guessed type unsigned __int8 byte_140A122B0[256];

