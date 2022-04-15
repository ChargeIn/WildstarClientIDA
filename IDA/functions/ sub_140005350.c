//----- (0000000140005350) ----------------------------------------------------
__int64 __fastcall sub_140005350(__int64 a1, unsigned int* a2)
{
	__int64* v4; // rsi
	unsigned int i; // ebp
	unsigned __int64 v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rdx
	struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp+18h] BYREF

	if (*(_DWORD*)(qword_140C635F0 + 5896))
		return 2147500037i64;
	v4 = (__int64*)(a1 + 168);
	sub_1400076E0((__int64*)(a1 + 168), *a2);
	for (i = 0; i < *a2; *(_QWORD*)(*v4 + v6 + 16) = *(_QWORD*)(*((_QWORD*)a2 + 1) + v6 + 56))
	{
		v6 = (unsigned __int64)i << 6;
		*(_DWORD*)(v6 + *v4) = *(_DWORD*)(v6 + *((_QWORD*)a2 + 1));
		*(_DWORD*)(*v4 + v6 + 4) = *(_DWORD*)(*((_QWORD*)a2 + 1) + v6 + 4);
		v7 = *((_QWORD*)a2 + 1);
		v8 = *v4;
		*(_QWORD*)(v8 + v6 + 24) = *(_QWORD*)(v7 + v6 + 16);
		*(_QWORD*)(v8 + v6 + 32) = *(_QWORD*)(v7 + v6 + 24);
		v9 = *((_QWORD*)a2 + 1);
		v10 = *v4;
		*(_QWORD*)(v10 + v6 + 40) = *(_QWORD*)(v9 + v6 + 32);
		*(_QWORD*)(v10 + v6 + 48) = *(_QWORD*)(v9 + v6 + 40);
		*(_QWORD*)(*v4 + v6 + 56) = *(_QWORD*)(*((_QWORD*)a2 + 1) + v6 + 48);
		GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
		++i;
		*(_QWORD*)(*v4 + v6 + 8) = *(_QWORD*)&SystemTimeAsFileTime
			+ 600000000i64 * *(unsigned int*)(*((_QWORD*)a2 + 1) + v6 + 8);
	}
	if (qword_140C65898)
		sub_14042C760(*(_QWORD*)(qword_140C65898 + 29504), v4);
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

