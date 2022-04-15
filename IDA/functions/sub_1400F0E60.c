//----- (00000001400F0E60) ----------------------------------------------------
_DWORD* __fastcall sub_1400F0E60(__int64 a1, __int64 a2, int a3, _QWORD* a4)
{
	_DWORD* result; // rax
	_DWORD* v5; // r11
	int v6; // ecx

	*a4 += 8i64;
	result = sub_1400580E0(a2, a3);
	v6 = result[2];
	*v5 = v6 && (v6 != 1 || *result);
	return result;
}
// 1400F0E8B: variable 'v5' is possibly undefined

