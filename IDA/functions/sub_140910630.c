//----- (0000000140910630) ----------------------------------------------------
__int64 __fastcall sub_140910630(__int64 a1, int a2, const char** a3)
{
	char v4; // bp
	int v6; // r15d
	__int64 v7; // rdi
	__int16 v8; // r8
	unsigned __int16* v10; // r14
	__int64 v11; // rcx
	unsigned int v12; // r8d
	int v13; // eax
	int v14; // eax
	int v15; // r14d
	__int64 v16; // rax
	const char* v17; // rax
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 v20; // [rsp+20h] [rbp-118h] BYREF
	__int64 v21[22]; // [rsp+30h] [rbp-108h] BYREF
	__int64 v22; // [rsp+E0h] [rbp-58h] BYREF
	__int64 v23; // [rsp+E8h] [rbp-50h]
	__int64 v24; // [rsp+F0h] [rbp-48h]
	__int64 v25; // [rsp+F8h] [rbp-40h]

	v4 = a2;
	v6 = 0;
	v7 = 0i64;
	*a3 = 0i64;
	if (!a1 || *(_DWORD*)a1 != 1346589253)
	{
		*a3 = "argument is not a compiled regular expression";
		return 0i64;
	}
	v8 = *(_WORD*)(a1 + 12);
	if ((v8 & 2) == 0)
	{
		*a3 = "argument not compiled in 16 bit mode";
		return 0i64;
	}
	if ((a2 & 0xFFFFFFF0) != 0)
	{
		*a3 = "unknown or incorrect option bit(s) set";
		return 0i64;
	}
	v10 = (unsigned __int16*)(a1
		+ 2
		* (*(unsigned __int16*)(a1 + 24)
			+ (__int64)(*(unsigned __int16*)(a1 + 26) * *(unsigned __int16*)(a1 + 28))));
	if ((*(_BYTE*)(a1 + 8) & 0x10) == 0 && (v8 & 0x110) == 0)
	{
		v11 = *(_QWORD*)(a1 + 32);
		v20 = v11;
		if (!v11)
		{
			sub_140919D20((int*)a1, 0i64, 11, &v20);
			v11 = v20;
		}
		v12 = *(_DWORD*)(a1 + 8);
		v21[0] = v11;
		v21[1] = v11 + 256;
		v21[2] = v11 + 512;
		v21[3] = v11 + 832;
		v22 = 0i64;
		v23 = 0i64;
		v24 = 0i64;
		v25 = 0i64;
		v13 = sub_140910920(v10, &v22, (v12 >> 11) & 1, (__int64)v21);
		LOBYTE(v6) = v13 == 1;
		if (v13 == 3)
			goto LABEL_39;
	}
	v14 = sub_140910020(v10, v10, *(_DWORD*)(a1 + 8), 0);
	v15 = v14;
	if (v14 == -3)
	{
	LABEL_39:
		v17 = "internal error: opcode not recognized";
		goto LABEL_19;
	}
	if (v14 == -2)
	{
		v17 = "internal error: missing capturing bracket";
		goto LABEL_19;
	}
	if (!v6 && v14 <= 0 && (v4 & 0xF) == 0)
		return v7;
	v16 = off_140C1B1E0(108i64);
	v7 = v16;
	if (v16)
	{
		v18 = v16 + 64;
		*(_DWORD*)v16 = 1;
		*(_QWORD*)(v16 + 8) = v16 + 64;
		*(_QWORD*)(v16 + 64) = 44i64;
		if (v6)
		{
			*(_DWORD*)(v16 + 68) = 1;
			*(_QWORD*)(v16 + 72) = v22;
			*(_QWORD*)(v16 + 80) = v23;
			*(_QWORD*)(v16 + 88) = v24;
			v19 = v25;
		}
		else
		{
			v19 = 0i64;
			*(_QWORD*)(v18 + 8) = 0i64;
			*(_QWORD*)(v18 + 16) = 0i64;
			*(_QWORD*)(v18 + 24) = 0i64;
		}
		*(_QWORD*)(v18 + 32) = v19;
		if (v15 <= 0)
		{
			*(_DWORD*)(v18 + 40) = 0;
		}
		else
		{
			*(_DWORD*)(v18 + 4) |= 2u;
			*(_DWORD*)(v18 + 40) = v15;
		}
		*(_QWORD*)(v7 + 56) = 0i64;
		if ((v4 & 1) != 0)
			sub_14091A0C0(a1, v7, 0);
		if ((v4 & 2) != 0)
			sub_14091A0C0(a1, v7, 1);
		if ((v4 & 4) != 0)
			sub_14091A0C0(a1, v7, 2);
		if (!*(_DWORD*)(v18 + 4) && (*(_BYTE*)v7 & 0x40) == 0 && (v4 & 8) == 0)
		{
			sub_140910600(v7);
			return 0i64;
		}
		return v7;
	}
	v17 = "failed to get memory";
LABEL_19:
	*a3 = v17;
	return 0i64;
}
// 140C1B1E0: using guessed type __int64 (__fastcall *off_140C1B1E0)(_QWORD);

