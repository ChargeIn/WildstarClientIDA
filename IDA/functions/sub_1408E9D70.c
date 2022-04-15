//----- (00000001408E9D70) ----------------------------------------------------
__int64 __fastcall sub_1408E9D70(__int64 a1)
{
	unsigned int v1; // eax
	__int64 v3; // rax
	unsigned int v5; // eax
	unsigned __int16* v6; // rdx
	__int64 v7; // r8
	unsigned int v8; // ecx
	_QWORD* v9; // rax
	int v10; // ecx
	int v11; // edx
	unsigned __int16* v12; // [rsp+20h] [rbp-28h] BYREF
	unsigned int v13; // [rsp+28h] [rbp-20h]
	char v14; // [rsp+30h] [rbp-18h]

	v1 = *(_DWORD*)(a1 + 300);
	if (v1)
	{
		v3 = sub_1408819F0(dword_140C10F28, v1);
		*(_QWORD*)(a1 + 336) = v3;
		if (!v3)
			return 52i64;
	}
	v5 = *(_DWORD*)(a1 + 300);
	*(_DWORD*)(a1 + 96) = 1;
	if (v5)
	{
		sub_1407DB590(*(int**)(a1 + 336), *(int**)(a1 + 352), v5);
		*(_QWORD*)(a1 + 352) += *(unsigned int*)(a1 + 300);
	}
	v6 = *(unsigned __int16**)(a1 + 352);
	v7 = *(_QWORD*)(a1 + 24);
	v8 = *v6;
	v14 = 0;
	v13 = v8;
	v12 = v6 + 1;
	*(_QWORD*)(a1 + 352) = (char*)v6 + v8 + 2;
	v9 = (_QWORD*)sub_1408EBE00((__int64)&unk_140C63340, a1 + 88, v7, (__int64)&v12);
	if (!v9)
		return 2i64;
	v10 = *(_DWORD*)(a1 + 272);
	v11 = 0;
	for (*(_QWORD*)(a1 + 136) = *v9; v10; v10 &= v10 - 1)
		++v11;
	if ((unsigned int)sub_1408EB8A0(a1 + 104, v11))
		return 2i64;
	*(_DWORD*)(a1 + 96) = 3;
	return 1i64;
}
// 140C10F28: using guessed type int dword_140C10F28;

