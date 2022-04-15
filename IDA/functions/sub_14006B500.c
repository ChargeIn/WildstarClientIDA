//----- (000000014006B500) ----------------------------------------------------
__int64 __fastcall sub_14006B500(__int64 a1, int a2, int a3, _DWORD* a4, _DWORD* a5)
{
	int v9; // edi
	int v10; // r8d
	int v11; // edx
	int v12; // ecx
	int v13; // eax
	__int64 result; // rax

	v9 = sub_14006ABD0(a1, (__int64)a4);
	v10 = sub_14006ABD0(a1, (__int64)a5);
	if (*a5 == 12)
	{
		v11 = a5[2];
		if ((v11 & 0x100) == 0 && v11 >= *(unsigned __int8*)(a1 + 74))
			--* (_DWORD*)(a1 + 60);
	}
	if (*a4 == 12)
	{
		v12 = a4[2];
		if ((v12 & 0x100) == 0 && v12 >= *(unsigned __int8*)(a1 + 74))
			--* (_DWORD*)(a1 + 60);
	}
	if (!a3 && a2 != 23)
	{
		v13 = v9;
		v9 = v10;
		a3 = 1;
		v10 = v13;
	}
	sub_14006BBF0(a1, a2 | ((a3 | ((v10 | (v9 << 9)) << 8)) << 6), *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
	result = sub_14006A030((__int64*)a1);
	a4[2] = result;
	*a4 = 10;
	return result;
}

