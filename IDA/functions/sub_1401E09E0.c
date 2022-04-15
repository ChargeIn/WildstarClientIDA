//----- (00000001401E09E0) ----------------------------------------------------
__int64 __fastcall sub_1401E09E0(__int64 a1, unsigned int a2, int a3)
{
	int v4; // edi
	__int64 v5; // rdx
	__int64 result; // rax
	__int64 v7; // rsi
	char v8; // di
	__int64 v9; // rcx

	if (*(_DWORD*)(a1 + 2868))
	{
		v4 = *(_DWORD*)(a1 + 3140);
		v5 = a3 & a2;
		result = (unsigned int)v5 | v4 & ~a3;
		*(_DWORD*)(a1 + 3140) = result;
		v7 = *(_QWORD*)(a1 + 488);
		v8 = (v5 | v4 & ~(_BYTE)a3) ^ v4;
		if (v7)
		{
			if ((v8 & 1) != 0)
				result = sub_1401E7C40(*(_QWORD*)(a1 + 488), v5);
			if ((v8 & 2) != 0)
				result = sub_1401E7A30(v7, v5);
		}
		if (*(_DWORD*)(a1 + 3144))
		{
			v9 = *(_QWORD*)(a1 + 384);
			if (v9)
			{
				if ((v8 & 2) != 0)
					return sub_1401E7A30(v9, v5);
			}
		}
	}
	return result;
}
// 1401E0A39: variable 'v5' is possibly undefined

