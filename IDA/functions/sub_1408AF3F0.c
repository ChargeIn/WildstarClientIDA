//----- (00000001408AF3F0) ----------------------------------------------------
__int64 __fastcall sub_1408AF3F0(_DWORD* a1, unsigned int a2)
{
	unsigned int v2; // r9d
	unsigned int v3; // r8d
	unsigned int v4; // edx
	__int64 result; // rax

	v2 = a1[3];
	v3 = v2;
	if (a2 < v2)
		v3 = a2;
	v4 = (v3 + a1[2]) % *a1;
	a1[3] = v2 - v3;
	result = v3;
	a1[2] = v4;
	return result;
}

