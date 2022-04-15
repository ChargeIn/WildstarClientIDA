//----- (00000001406644B0) ----------------------------------------------------
__int64 __fastcall sub_1406644B0(_QWORD* a1)
{
	__int64* v2; // rax
	_DWORD* v3; // rdx
	__int64 v4; // rsi
	int v5; // edi
	int v6; // ecx
	_DWORD* v7; // rax

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *v2;
		v5 = 0;
		if (!(unsigned int)sub_14054F480(*v2)
			|| !sub_14002C740((__int64)&unk_140C7E820, *(_WORD**)(qword_140C65898 + 136))
			|| (v6 = 1, dword_140C65C38 != **(_DWORD**)(v4 + 8)))
		{
			v6 = 0;
		}
		v7 = (_DWORD*)a1[2];
		LOBYTE(v5) = v6 != 0;
		v7[2] = 1;
		*v7 = v5;
	}
	else
	{
		v3 = (_DWORD*)a1[2];
		*v3 = 0;
		v3[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C38: using guessed type int dword_140C65C38;

