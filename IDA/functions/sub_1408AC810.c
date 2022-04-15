#include "../winhttp.h"

//----- (00000001408AC810) ----------------------------------------------------
__int64 __fastcall sub_1408AC810(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6)
{
	__int64 v8; // rax
	__int64 result; // rax
	__int64 v10; // rax
	__int64 v11; // rsi
	unsigned int v12; // r14d
	__int64 v13; // rbp
	__int64 v14; // rax

	*(_DWORD*)(a1 + 732) = a4;
	*(_DWORD*)(a1 + 728) = a3;
	*(_DWORD*)(a1 + 736) = a5;
	sub_1408AEE70(a5, 0, 0i64, (unsigned __int64*)(a1 + 712));
	v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, *(_QWORD*)(a1 + 712));
	*(_QWORD*)(a1 + 696) = v8;
	if (!v8)
		return 52i64;
	sub_1408AEE70(*(_DWORD*)(a1 + 736), 1, 0i64, (unsigned __int64*)(a1 + 720));
	v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, *(_QWORD*)(a1 + 720));
	*(_QWORD*)(a1 + 704) = v10;
	if (!v10)
		return 52i64;
	sub_1408AEE70(*(_DWORD*)(a1 + 736), 0, *(_QWORD**)(a1 + 696), (unsigned __int64*)(a1 + 712));
	sub_1408AEE70(*(_DWORD*)(a1 + 736), 1, *(_QWORD**)(a1 + 704), (unsigned __int64*)(a1 + 720));
	result = sub_1408AFAD0(a1 + 336, a2, *(_DWORD*)(a1 + 736), 2, 1, 0);
	if ((_DWORD)result == 1)
	{
		v11 = 0i64;
		v12 = 0;
		if (*(_DWORD*)(a1 + 728))
		{
			while (1)
			{
				v13 = v12;
				result = sub_1408B04B0(a1 + 16 * (v12 + 22i64), a2, *(_DWORD*)(a1 + 736));
				if ((_DWORD)result != 1)
					break;
				result = sub_1408B04B0(a1 + 16 * (v12 + 28i64), a2, *(_DWORD*)(a1 + 736));
				if ((_DWORD)result != 1)
					break;
				result = sub_1408B04B0(a1 + 16 * (v12 + 34i64), a2, *(_DWORD*)(a1 + 736));
				if ((_DWORD)result != 1)
					break;
				v14 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(
					a2,
					4i64 * (unsigned int)((*(_DWORD*)(a1 + 736) >> 1) + 1));
				*(_QWORD*)(a1 + 8i64 * v12 + 640) = v14;
				if (!v14)
					return 52i64;
				++v12;
				*(_BYTE*)(a1 + v13 + 688) = 0;
				if (v12 >= *(_DWORD*)(a1 + 728))
					goto LABEL_12;
			}
		}
		else
		{
		LABEL_12:
			*(_BYTE*)(a1 + 750) = a6;
			if (*(_DWORD*)(a1 + 728))
			{
				while (1)
				{
					if (a6)
					{
						result = sub_1408AF320(a1 + 24 * v11, a2, *(_DWORD*)(a1 + 736) + (*(_DWORD*)(a1 + 736) >> 2));
						if ((_DWORD)result != 1)
							break;
					}
					result = sub_1408AF6D0(32i64 * (unsigned int)v11 + a1 + 144, a2, *(_DWORD*)(a1 + 736), *(_DWORD*)(a1 + 736));
					if ((_DWORD)result != 1)
						break;
					v11 = (unsigned int)(v11 + 1);
					if ((unsigned int)v11 >= *(_DWORD*)(a1 + 728))
						return 1i64;
				}
			}
			else
			{
				return 1i64;
			}
		}
	}
	return result;
}

