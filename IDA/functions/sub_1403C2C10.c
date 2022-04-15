//----- (00000001403C2C10) ----------------------------------------------------
__int64 __fastcall sub_1403C2C10(__int64 a1)
{
	int* v1; // r9
	int v2; // edx
	int v4; // ecx
	int v5; // ecx
	__int64 result; // rax

	v1 = (int*)qword_140C63750;
	*(_DWORD*)(a1 + 31648) = 1;
	v2 = dword_140C45EC0;
	if (*v1 < dword_140C45EC0)
		v2 = *v1;
	if (*((_BYTE*)&dword_140C45ED0 + v2))
		*(_DWORD*)(a1 + 31648) = 5;
	v4 = dword_140C45E80;
	if (*v1 < dword_140C45E80)
		v4 = *v1;
	if (*((_BYTE*)&dword_140C45E90 + v4))
		*(_DWORD*)(a1 + 31648) |= 2u;
	v5 = dword_140C45E40;
	if (*v1 < dword_140C45E40)
		v5 = *v1;
	result = v5;
	if (*((_BYTE*)&dword_140C45E50 + v5))
		*(_DWORD*)(a1 + 31648) |= 8u;
	return result;
}
// 140C45E40: using guessed type int dword_140C45E40;
// 140C45E50: using guessed type int dword_140C45E50;
// 140C45E80: using guessed type int dword_140C45E80;
// 140C45E90: using guessed type int dword_140C45E90;
// 140C45EC0: using guessed type int dword_140C45EC0;
// 140C45ED0: using guessed type int dword_140C45ED0;
// 140C63750: using guessed type __int64 qword_140C63750;

