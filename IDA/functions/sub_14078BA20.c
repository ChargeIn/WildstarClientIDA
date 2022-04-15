//----- (000000014078BA20) ----------------------------------------------------
__int64 __fastcall sub_14078BA20(__int64 a1, unsigned __int64* a2, unsigned __int64* a3)
{
	unsigned __int64 v3; // rbx
	unsigned __int64 v7; // r8
	__int64 v8; // rbp
	__int64 v9; // rax
	unsigned int* v10; // r9
	__int64 result; // rax
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	int v13; // [rsp+28h] [rbp-10h]

	v3 = -1i64;
	if (a3)
	{
		v7 = -1i64;
		do
			++v7;
		while (*((_BYTE*)a3 + v7));
		sub_140058710(a1, a3, v7);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	v8 = *(_QWORD*)(a1 + 16);
	do
		++v3;
	while (*((_BYTE*)a2 + v3));
	v9 = sub_140062650(a1, a2, v3);
	v10 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v12 = v9;
	v13 = 4;
	result = sub_14005EA50(a1, (__int64*)(v8 - 32), (int*)&v12, v10);
	*(_QWORD*)(a1 + 16) -= 16i64;
	return result;
}

