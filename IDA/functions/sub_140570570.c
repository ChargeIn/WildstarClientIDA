//----- (0000000140570570) ----------------------------------------------------
__int64 __fastcall sub_140570570(__int64 a1, unsigned int a2, int a3)
{
	__int64 result; // rax
	unsigned __int64 v4; // r9
	unsigned __int64 v6; // r10
	__int64 v7; // rbx
	unsigned int v8; // edx
	__int64 v9; // rcx

	result = qword_140C65970;
	v4 = 0i64;
	v6 = *(_QWORD*)(qword_140C65970 + 208);
	if (!v6)
		return result;
	v7 = *(_QWORD*)(qword_140C65970 + 200);
	while (1)
	{
		result = v4 + ((v6 - v4) >> 1);
		v8 = *(_DWORD*)(v7 + 16 * result);
		if (a2 < v8)
		{
			v4 = result + 1;
			goto LABEL_7;
		}
		if (v8 >= a2)
			break;
		v6 = v4 + ((v6 - v4) >> 1);
	LABEL_7:
		if (v4 >= v6)
			return result;
	}
	result *= 2i64;
	v9 = *(_QWORD*)(v7 + 8 * result + 8);
	if (*(_DWORD*)(v9 + 8) != a3)
	{
		*(_DWORD*)(v9 + 8) = a3;
		if (a3)
			*(_DWORD*)(v9 + 20) = 1;
	}
	return result;
}
// 140C65970: using guessed type __int64 qword_140C65970;

