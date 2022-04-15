#include "../winhttp.h"

//----- (0000000140058F00) ----------------------------------------------------
__int64 __fastcall sub_140058F00(__int64 a1, int a2, unsigned int a3, __int64 a4, int a5)
{
	__int64 result; // rax
	__int64 v9; // rcx
	unsigned __int64 v10; // rdx
	unsigned __int64 v11; // rcx
	unsigned int v12; // edi
	unsigned int v13; // edi

	switch (a5)
	{
	case 0:
		*(_QWORD*)(a4 + 112) = -3i64;
		result = a3;
		break;
	case 1:
		*(_QWORD*)(a4 + 112) = *(_QWORD*)(a4 + 120);
		result = a3;
		break;
	case 2:
		sub_14005E4E0(a1);
		result = a3;
		break;
	case 3:
		result = (unsigned int)(*(_QWORD*)(a4 + 120) >> 10);
		break;
	case 4:
		result = *(_DWORD*)(a4 + 120) & 0x3FF;
		break;
	case 5:
		v9 = a2;
		v10 = *(_QWORD*)(a4 + 120);
		v11 = v9 << 10;
		if (v11 > v10)
			*(_QWORD*)(a4 + 112) = 0i64;
		else
			*(_QWORD*)(a4 + 112) = v10 - v11;
		if (*(_QWORD*)(a4 + 112) > v10)
		{
			result = a3;
		}
		else
		{
			while (1)
			{
				sub_14005E2C0(a1);
				if (!*(_BYTE*)(a4 + 33))
					break;
				if (*(_QWORD*)(a4 + 112) > *(_QWORD*)(a4 + 120))
					return a3;
			}
			result = 1i64;
		}
		break;
	case 6:
		v12 = *(_DWORD*)(a4 + 144);
		*(_DWORD*)(a4 + 144) = a2;
		result = v12;
		break;
	case 7:
		v13 = *(_DWORD*)(a4 + 148);
		*(_DWORD*)(a4 + 148) = a2;
		result = v13;
		break;
	}
	return result;
}

