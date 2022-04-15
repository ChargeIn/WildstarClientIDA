//----- (0000000140899620) ----------------------------------------------------
__int64 __fastcall sub_140899620(__int64 a1, unsigned int a2, __int64 a3)
{
	int v3; // ebx
	__int64 v4; // r9
	__int64 v6; // rcx
	unsigned int v8; // ebp
	__int64 v9; // rcx
	__int64 result; // rax
	int v11; // eax

	v3 = 0;
	*(_DWORD*)(a1 + 12) = a2;
	*(_QWORD*)(a1 + 16) = a3;
	*(_DWORD*)(a1 + 8) = 0;
	v4 = *(_QWORD*)(a3 + 128);
	v6 = *(_QWORD*)(v4 + 304);
	if (v6)
		v8 = *(_DWORD*)(v6 + 4i64 * a2);
	else
		v8 = 0;
	v9 = *(_QWORD*)(v4 + 312);
	if (v9)
		v3 = *(unsigned __int8*)(a2 + v9);
	result = sub_14087BA30(a1, v8, v3);
	if ((_DWORD)result == 1)
	{
		v11 = sub_14087B9F0(a1, *(_QWORD*)(*(_QWORD*)(a3 + 104) + 56i64), v8, v3);
		if (!v11)
			v11 = 748895195;
		*(_DWORD*)(a1 + 8) = v11;
		return 1i64;
	}
	return result;
}

