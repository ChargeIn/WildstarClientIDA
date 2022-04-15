#include "../winhttp.h"

//----- (0000000140337250) ----------------------------------------------------
__int64 __fastcall sub_140337250(__int64 a1, int* a2, unsigned __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	unsigned __int64 v8; // rax
	unsigned __int64 v9; // rdi

	if (*(_QWORD*)(a1 + 16) || (result = sub_140336B00(a1), !(_DWORD)result))
	{
		if (*(_QWORD*)(a1 + 32))
		{
			++* (_QWORD*)(a1 + 24);
			*(_QWORD*)(a1 + 32) = 0i64;
		}
		if ((v7 = *(_QWORD*)(a1 + 16)) != 0 && *(_QWORD*)(a1 + 24) != *(_QWORD*)(v7 + 32)
			|| (result = sub_140336B00(a1), !(_DWORD)result))
		{
			while (a3)
			{
				v8 = sub_1403374C0(a1);
				v9 = a3;
				if (v8 < a3)
					v9 = v8;
				if (v9)
				{
					sub_1407DB590(a2, *(int**)(a1 + 24), v9);
					*(_QWORD*)(a1 + 24) += v9;
					a3 -= v9;
					a2 = (int*)((char*)a2 + v9);
				}
				else
				{
					result = sub_140336B00(a1);
					if ((_DWORD)result)
						return result;
				}
			}
			return 0i64;
		}
	}
	return result;
}

