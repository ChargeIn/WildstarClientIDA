#include "../winhttp.h"

//----- (00000001408F8FF0) ----------------------------------------------------
__int64 __fastcall sub_1408F8FF0(__int64 a1, int** a2)
{
	int* v2; // rbx
	__int64 v3; // rax
	int v5; // r8d
	unsigned __int16 v6; // di
	int* v7; // rbx
	__int64 result; // rax

	v2 = *a2;
	v3 = 0i64;
	v5 = **a2;
	if (v5)
	{
		switch (v5)
		{
		case 20:
			v3 = 1i64;
			break;
		case 23:
			v3 = 2i64;
			break;
		case 26:
			v3 = 3i64;
			break;
		}
	}
	v6 = *((_WORD*)v2 + 2);
	v7 = (int*)((char*)v2 + 6);
	if (v6)
	{
		result = sub_140837E30(16 * v3 + a1 + 8, v7, v6, 0);
		if ((_DWORD)result == 52)
			return result;
		v7 += 3 * v6;
	}
	*a2 = v7;
	return 1i64;
}

