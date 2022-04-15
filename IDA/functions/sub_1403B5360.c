//----- (00000001403B5360) ----------------------------------------------------
__int64 __fastcall sub_1403B5360(__int64 a1, __int64 a2, __int64 a3, float a4)
{
	unsigned int v4; // ecx
	__int64 v5; // rcx
	__int64 result; // rax
	int v7; // eax

	v4 = 0;
	if (a4 < 0.0)
		v4 = 0x80000000;
	v5 = v4 - LODWORD(a4);
	if ((int)abs32(v5) <= 84)
		return 0i64;
	v7 = sub_1403B5400(v5, a2, a3);
	if (!v7)
		return 0i64;
	result = (unsigned int)(int)(float)((float)((float)v7 * a4) + 0.5);
	if (!(_DWORD)result)
		return 1i64;
	return result;
}

