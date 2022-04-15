//----- (000000014019AF30) ----------------------------------------------------
_QWORD* __fastcall sub_14019AF30(__int64 a1, _QWORD* a2, int a3)
{
	__int64 v4; // r8
	int v6; // [rsp+20h] [rbp-18h]

	v4 = 3i64 * a3;
	v6 = *(_DWORD*)(a1 + 4 * v4 + 40);
	sub_14018EFA0(a2, (__int64)L"%i,%i,%i", *(unsigned int*)(a1 + 4 * v4 + 32), *(unsigned int*)(a1 + 4 * v4 + 36), v6);
	return a2;
}
// 140A441B8: using guessed type wchar_t aIII[9];

