//----- (000000014092A740) ----------------------------------------------------
__int64 __fastcall sub_14092A740(_QWORD* a1, char a2, char a3, int a4)
{
	int v7; // edi
	_QWORD* v9; // rax
	__int64 result; // rax
	char* v11; // r9

	v7 = (a2 != 0) + 5;
	v9 = sub_14092D610((__int64)a1, (a2 != 0) + 6);
	if (!v9)
		return *(unsigned int*)a1;
	*(_BYTE*)v9 = v7;
	v11 = (char*)v9 + 1;
	a1[11] += v7;
	if (a2)
	{
		*v11 = a2;
		v11 = (char*)v9 + 2;
	}
	*v11 = a3;
	result = 0i64;
	*(_DWORD*)(v11 + 1) = a4;
	return result;
}

