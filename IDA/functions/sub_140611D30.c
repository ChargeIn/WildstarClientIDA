//----- (0000000140611D30) ----------------------------------------------------
__int64 __fastcall sub_140611D30(__int64 a1, int a2, int a3)
{
	unsigned __int64 v6; // rdi
	unsigned int v7; // ebx
	__int64 v8; // rsi
	__int64 v9; // r15
	__int64 v10; // r9
	__int64 v11; // rax
	__int64 v12; // rax

	sub_1406119E0(a1);
	v6 = *(_QWORD*)(a1 + 16);
	v7 = 0;
	if (!v6)
		return 0i64;
	v8 = *(_QWORD*)(a1 + 8);
	v9 = qword_140C65898;
	v10 = 0i64;
	while (1)
	{
		v11 = sub_1403AC780(v9 + 160, (int*)(*(_QWORD*)(v8 + 8 * v10) + 4i64));
		if (v11)
		{
			v12 = *(_QWORD*)(v11 + 64);
			if (*(_DWORD*)(v12 + 436) == a2 && *(_DWORD*)(v12 + 440) == a3)
				break;
		}
		v10 = ++v7;
		if (v7 >= v6)
			return 0i64;
	}
	return *(unsigned int*)(*(_QWORD*)(v8 + 8i64 * v7) + 12i64);
}
// 140C65898: using guessed type __int64 qword_140C65898;

