//----- (000000014066A9B0) ----------------------------------------------------
int* __fastcall sub_14066A9B0(_QWORD* a1, __int64 a2)
{
	_WORD* v2; // rax
	unsigned __int64 i; // rbx
	int* result; // rax
	__int64 v7; // rcx

	v2 = (_WORD*)a1[1];
	if (v2 != (_WORD*)a1[2])
	{
		*v2 = 0;
		a1[2] = a1[1];
	}
	for (i = 0i64; i < 6; ++i)
	{
		result = (int*)sub_14034BDD0((__int64)a1, *(_DWORD*)(a2 + 4 * i));
		if (!result)
			break;
		v7 = 0i64;
		if (*(_WORD*)result)
		{
			do
				++v7;
			while (*((_WORD*)result + v7));
		}
		result = (int*)sub_14001C310(a1, result, (int*)((char*)result + 2 * v7));
	}
	return result;
}
// 14066A9E7: variable 'a1' is possibly undefined

