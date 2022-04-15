//----- (000000014070E5D0) ----------------------------------------------------
__int64 __fastcall sub_14070E5D0(__int64 a1)
{
	_DWORD* v1; // rax
	_DWORD* v3; // rcx
	int v4; // esi
	int v5; // eax
	int v6; // ebx
	__int64 v7; // r14
	int v8; // ebp
	_DWORD* v9; // rcx
	int v11; // [rsp+40h] [rbp+8h] BYREF

	v1 = *(_DWORD**)(a1 + 24);
	v3 = dword_140A12138;
	if ((unsigned __int64)v1 < *(_QWORD*)(a1 + 16))
		v3 = v1;
	v4 = 0;
	v5 = v3[2];
	v6 = v5 && (v5 != 1 || *v3);
	v7 = qword_140C65898;
	v8 = *(_DWORD*)(qword_140C65898 + 27360);
	if (v6 != v8 && (unsigned int)sub_1405DF7C0(qword_140C65898 + 26680))
	{
		v11 = v6;
		sub_1400161D0(qword_140C635F0, 0x39Eu, (__int64)&v11);
		v8 = v6;
		*(_DWORD*)(v7 + 27360) = v6;
	}
	v9 = *(_DWORD**)(a1 + 16);
	LOBYTE(v4) = v8 != 0;
	v9[2] = 1;
	*v9 = v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

