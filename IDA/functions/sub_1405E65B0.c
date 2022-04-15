//----- (00000001405E65B0) ----------------------------------------------------
_DWORD* __fastcall sub_1405E65B0(__int64 a1)
{
	_QWORD* v1; // rcx
	__int64 v2; // rdx
	_DWORD* result; // rax
	int v4; // xmm0_4

	v1 = (_QWORD*)(a1 + 552);
	v2 = 66i64;
	do
	{
		result = (_DWORD*)*v1;
		if (*(_DWORD*)*v1 == 3)
			v4 = 1065353216;
		else
			v4 = 0;
		++v1;
		result[1] = v4;
		result[2] = 0;
		*((_QWORD*)result + 3) = 0i64;
		--v2;
	} while (v2);
	return result;
}

