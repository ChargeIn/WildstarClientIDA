//----- (00000001400F2610) ----------------------------------------------------
_QWORD* __fastcall sub_1400F2610(__int64 a1, _QWORD* a2, unsigned int a3, unsigned __int16* a4)
{
	_QWORD* v4; // rsi
	_DWORD* v7; // rax
	char* v8; // r10
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	v4 = *(_QWORD**)(a1 + 16);
	sub_14018F0E0(&v10, a4);
	v7 = sub_1400580E0((__int64)v4, a3);
	if (v7 != dword_140A12138 && (int)v7[2] > 0)
		v8 = (char*)sub_140056BB0(v4, a3, 0i64);
	sub_14018F2D0(a2, v8);
	if (v11)
		sub_14018B900(v11, 0);
	return a2;
}
// 1400F266C: variable 'v8' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

