//----- (00000001400F99E0) ----------------------------------------------------
__int64 __fastcall sub_1400F99E0(__int64 a1, _WORD* a2, unsigned __int64 a3, __int64 a4)
{
	__int64 v4; // rdi
	__int64 v5; // rbx
	_WORD* v6; // rax
	_WORD* v8[3]; // [rsp+20h] [rbp-18h] BYREF

	v4 = *(_QWORD*)(a1 + 16);
	v5 = *(_QWORD*)(a1 + 8);
	if (a3 > (v4 - v5) >> 1)
		return -1i64;
	v8[0] = a2;
	v8[1] = &a2[a4];
	v6 = sub_1400F9810((_WORD*)(v5 + 2 * a3), v4, v8, a4);
	if (v6 == (_WORD*)v4)
		return -1i64;
	else
		return ((__int64)v6 - v5) >> 1;
}

