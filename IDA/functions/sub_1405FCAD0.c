//----- (00000001405FCAD0) ----------------------------------------------------
void __fastcall sub_1405FCAD0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v4; // rdx
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v8; // rcx
	unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 40);
	v6 = *(_QWORD*)(v4 + 8);
	v7 = v4;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v7 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v7 == v4 || (v9 = v7, a2 < *(_DWORD*)(v7 + 32)))
		v9 = v4;
	v8 = 0i64;
	if (v9 != v4)
		LOBYTE(v8) = *(_DWORD*)(v9 + 36) == 7;
	if (a3 != (_DWORD)v8)
	{
		if (sub_1405A8A40(v8, a2))
		{
			v9 = __PAIR64__(a3, a2);
			sub_1403F4900(qword_140C65898, 0x35Eu, (__int64)&v9);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

