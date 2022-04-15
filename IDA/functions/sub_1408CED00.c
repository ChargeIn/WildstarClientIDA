//----- (00000001408CED00) ----------------------------------------------------
__int64 __fastcall sub_1408CED00(_DWORD* a1, _DWORD* a2)
{
	__int64 result; // rax

	*a2 = a1[2];
	a2[1] = a1[3];
	a2[2] = a1[4];
	result = (unsigned int)a1[5];
	a2[3] = result;
	return result;
}

