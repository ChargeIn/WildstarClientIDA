//----- (000000014092EE80) ----------------------------------------------------
__int64 __fastcall sub_14092EE80(__int64 a1, int a2, int* a3)
{
	_BYTE* v3; // r9
	int v4; // r10d
	bool v7; // zf
	int v8; // r11d
	_DWORD* v9; // rdx
	_BYTE* v10; // r9
	__int64 result; // rax
	__int64 v12; // r8

	v3 = *(_BYTE**)(a1 + 104);
	v4 = 0;
	v7 = (unsigned __int8)(a2 & *v3) == 0;
	v8 = (unsigned __int8)(a2 & *v3);
	*a3 = -1;
	v9 = a3 + 2;
	v10 = v3 + 1;
	a3[1] = !v7;
	result = 1i64;
	v12 = 0i64;
	do
	{
		if ((unsigned __int8)(a2 & *v10) != v8)
		{
			if (v12 >= 6)
				return result;
			*v9++ = result;
			++v4;
			++v12;
			v8 ^= a2;
		}
		result = (unsigned int)(result + 1);
		++v10;
	} while ((int)result < 256);
	if (v8)
	{
		if (v4 >= 6)
			return result;
		result = v4++;
		a3[result + 2] = 256;
	}
	*a3 = v4;
	return result;
}

