#include "../winhttp.h"

//----- (0000000140137AD0) ----------------------------------------------------
__int64 __fastcall sub_140137AD0(__int64 a1)
{
	__int64 result; // rax
	_QWORD* v3; // rax
	_QWORD* v4; // rbx
	char v5; // si
	int v6; // eax

	if (!*(_QWORD*)(a1 + 8))
		return 0i64;
	result = *(unsigned int*)(a1 + 540);
	if (((*(_DWORD*)(a1 + 536) - 3) & 0xFFFFFFFD) != 0 && !(_DWORD)result)
	{
		v3 = *(_QWORD**)(a1 + 456);
		v4 = (_QWORD*)*v3;
		v5 = 1;
		if ((_QWORD*)*v3 != v3)
		{
			do
			{
				v6 = sub_140134D90((LARGE_INTEGER*)v4[2]);
				if (v6)
				{
					if (v6 == -1)
					{
						*(_DWORD*)(a1 + 540) = -1;
						return 0xFFFFFFFFi64;
					}
				}
				else
				{
					v5 = 0;
				}
				v4 = (_QWORD*)*v4;
			} while (v4 != *(_QWORD**)(a1 + 456));
		}
		result = v5 != 0;
		*(_DWORD*)(a1 + 540) = result;
	}
	return result;
}

