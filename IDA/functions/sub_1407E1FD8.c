//----- (00000001407E1FD8) ----------------------------------------------------
__int64 __fastcall sub_1407E1FD8(_OWORD* a1, int a2, __int64 a3, LCTYPE a4, LPVOID* a5)
{
	CHAR* v8; // rdi
	int v9; // r14d
	int v10; // r15d
	int v11; // eax
	int v12; // r15d
	CHAR* v13; // rax
	_BYTE* v14; // rcx
	int v16; // eax
	int v17; // edi
	WCHAR* v18; // rax
	int v19[4]; // [rsp+30h] [rbp-D8h] BYREF
	CHAR Mem[128]; // [rsp+40h] [rbp-C8h] BYREF

	if (a2 == 1)
	{
		v8 = Mem;
		v9 = 0;
		v10 = sub_1407F04BC(a1, a3, a4, Mem, 128);
		if (!v10)
		{
			if (GetLastError() != 122)
				return 0xFFFFFFFFi64;
			v11 = sub_1407F04BC(a1, a3, a4, 0i64, 0);
			v12 = v11;
			if (!v11)
				return 0xFFFFFFFFi64;
			v13 = (CHAR*)sub_1407E2BB0(v11, 1ui64);
			v8 = v13;
			if (!v13)
				return 0xFFFFFFFFi64;
			v9 = 1;
			v10 = sub_1407F04BC(a1, a3, a4, v13, v12);
			if (!v10)
				goto LABEL_9;
		}
		v14 = sub_1407E2BB0(v10, 1ui64);
		*a5 = v14;
		if (!v14)
		{
			if (!v9)
				return 0xFFFFFFFFi64;
		LABEL_9:
			sub_1407E14C0(v8);
			return 0xFFFFFFFFi64;
		}
		if ((unsigned int)sub_1407EA1F8(v14, v10, v8, v10 - 1))
		{
			sub_1407DC390();
			JUMPOUT(0x1407E21BCi64);
		}
		if (v9)
			sub_1407E14C0(v8);
	}
	else if (a2 == 2)
	{
		*a5 = 0i64;
		v16 = sub_1407E8688(a3, a4, 0i64, 0);
		v17 = v16;
		if (!v16 || (v18 = (WCHAR*)sub_1407E2BB0(v16, 2ui64), (*a5 = v18) == 0i64) || !sub_1407E8688(a3, a4, v18, v17))
		{
			sub_1407E14C0(*a5);
			*a5 = 0i64;
			return 0xFFFFFFFFi64;
		}
	}
	else
	{
		if (a2)
			return 0xFFFFFFFFi64;
		v19[0] = 0;
		if (!sub_1407E8688(a3, a4 | 0x20000000, (WCHAR*)v19, 2))
			return 0xFFFFFFFFi64;
		*(_BYTE*)a5 = v19[0];
	}
	return 0i64;
}
// 1407E21B7: control flows out of bounds to 1407E21BC
// 1407E1FD8: using guessed type int var_D8[4];

