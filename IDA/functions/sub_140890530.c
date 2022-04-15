//----- (0000000140890530) ----------------------------------------------------
__int64 __fastcall sub_140890530(__int64 a1, __int64 a2, int a3, _DWORD* a4, char a5, char a6, __int64* a7)
{
	__int64 v11; // r15
	__int64 v12; // r15
	__int64 v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 result; // rax
	unsigned int v17; // edi
	bool v18; // zf
	__int64 v19; // rbx
	__int64 v20; // r8
	unsigned int v21; // [rsp+60h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 264))
	{
		v11 = sub_1408904A0(a1, 0);
		v12 = sub_14088FDA0((_QWORD*)(a1 + 264)) + v11;
	}
	else
	{
		v12 = 0x7FFFFFFFFFFFFFFFi64;
	}
	if (a2 < v12)
		a2 = v12;
	v13 = sub_1408904A0(a1, 0);
	v14 = sub_14088FAE0((_QWORD*)(a1 + 264), a2 - v13);
	v15 = *(_QWORD*)(*(_QWORD*)(a1 + 264) + 24i64);
	if (!v15 || *(_BYTE*)(a1 + 297))
	{
		v18 = a6 == 0;
		*a4 = 0;
		if (v18 && a3)
			return 2i64;
		v17 = 1;
	}
	else
	{
		result = sub_140891B60(*(_QWORD*)(v15 + 128), v14, a3, a4, a5, &v21);
		v14 = v21;
		v17 = result;
		if ((_DWORD)result != 1)
			return result;
	}
	v19 = sub_140890350((_QWORD*)(a1 + 264), v14);
	v20 = v19 + sub_1408904A0(a1, 0);
	*a7 = v20;
	if (!*(_BYTE*)(a1 + 296) && v20 > v12 + *(_QWORD*)(a1 + 288))
		return 3;
	return v17;
}

