//----- (00000001400FD770) ----------------------------------------------------
__int64 __fastcall sub_1400FD770(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // r8
	int v4; // eax
	__int64 v5; // rdx
	__int64(__fastcall * v6)(__int64, __int64, __int64, __int64(__fastcall**)()); // rax
	__int64 result; // rax

	v2 = (unsigned int)dword_140C3CB80;
	v3 = *(unsigned int*)qword_140C63750;
	v4 = dword_140C3CB80;
	if ((int)v3 < dword_140C3CB80)
		v4 = *(_DWORD*)qword_140C63750;
	v5 = v4;
	if (!*((_BYTE*)&off_140C3CB70 + v4 + 32) || !*(_QWORD*)(a1 + 32) || !*(_DWORD*)(a1 + 44))
		return 2147500037i64;
	if ((int)v3 < dword_140C3CB80)
		v2 = (unsigned int)v3;
	if (!*((_BYTE*)&off_140C3CB70 + (int)v2 + 32))
		return 2147500037i64;
	v6 = *(__int64(__fastcall**)(__int64, __int64, __int64, __int64(__fastcall**)()))(a1 + 72);
	if (!v6)
		return 2147500037i64;
	result = v6(v2, v5, v3, &off_140C3CB70);
	if ((_DWORD)result)
		return 2147500037i64;
	*(_DWORD*)(a1 + 48) = 1;
	return result;
}
// 140C3CB70: using guessed type __int64 (__fastcall *off_140C3CB70)();
// 140C3CB80: using guessed type int dword_140C3CB80;
// 140C63750: using guessed type __int64 qword_140C63750;

