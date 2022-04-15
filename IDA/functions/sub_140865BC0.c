//----- (0000000140865BC0) ----------------------------------------------------
__int64 __fastcall sub_140865BC0(__int64 a1, int a2)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rax
	_QWORD* v5; // rcx
	unsigned int v6; // ebp
	unsigned int v7; // eax
	__int64 v8; // rdx
	unsigned __int64 v9; // rcx

	v2 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD*)(a1 + 40);
	if (v2 == v3)
		return 16i64;
	do
	{
		if (*(_DWORD*)v2 == a2)
			break;
		v2 += 40i64;
	} while (v2 != v3);
	if (v2 == v3)
		return 16i64;
	v5 = *(_QWORD**)(v2 + 16);
	v6 = 1;
	if (v5)
	{
		v7 = sub_14084D390(v5, a1);
		*(_QWORD*)(v2 + 16) = 0i64;
		v6 = v7;
	}
	*(_QWORD*)(v2 + 16) = 0i64;
	*(_DWORD*)(v2 + 8) = 0;
	v8 = *(_QWORD*)(v2 + 24);
	if (v8)
	{
		sub_140881720(dword_140C10F20, v8);
		*(_QWORD*)(v2 + 24) = 0i64;
	}
	*(_QWORD*)(v2 + 32) = 0i64;
	v9 = *(_QWORD*)(a1 + 40) - 40i64;
	if (v2 < v9)
		qmemcpy((void*)v2, (const void*)(v2 + 40), 40 * ((v9 - v2 - 1) / 0x28 + 1));
	*(_QWORD*)(a1 + 40) -= 40i64;
	return v6;
}
// 140C10F20: using guessed type int dword_140C10F20;

