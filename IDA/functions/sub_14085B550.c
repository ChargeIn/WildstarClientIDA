#include "../winhttp.h"

//----- (000000014085B550) ----------------------------------------------------
__int64 __fastcall sub_14085B550(__int64 a1, int a2, __int64 a3, __int64 a4)
{
	__int64* v4; // rax
	__int64* v7; // rdx
	__int64 result; // rax
	__int64* v9; // rdx

	v4 = *(__int64**)(a1 + 224);
	if (v4)
	{
		while (*((_DWORD*)v4 + 2) != a2)
		{
			v4 = (__int64*)*v4;
			if (!v4)
				goto LABEL_9;
		}
		if (v4 != (__int64*)-16i64)
		{
			v7 = (__int64*)v4[4];
			if (v7)
			{
				sub_14083AB80(qword_140C61B70, v7, 0i64, *((float*)v4 + 10), 0, 4, 1);
			}
			else
			{
				LOBYTE(a4) = 1;
				(*(void(__fastcall**)(__int64*, _QWORD, __int64, __int64))v4[2])(v4 + 2, 0i64, a3, a4);
			}
		}
	}
LABEL_9:
	result = *(_QWORD*)(a1 + 272);
	if (result)
	{
		while (*(_DWORD*)(result + 8) != a2)
		{
			result = *(_QWORD*)result;
			if (!result)
				return result;
		}
		if (result != -16)
		{
			v9 = *(__int64**)(result + 32);
			if (v9)
			{
				return sub_14083AB80(qword_140C61B70, v9, 4i64, *(float*)(result + 40), 0, 4, 1);
			}
			else
			{
				LOBYTE(a4) = 1;
				return (**(__int64(__fastcall***)(__int64, __int64, __int64, __int64))(result + 16))(
					result + 16,
					4i64,
					a3,
					a4);
			}
		}
	}
	return result;
}
// 14085B64A: variable 'a3' is possibly undefined
// 14085B64A: variable 'a4' is possibly undefined
// 140C61B70: using guessed type __int64 qword_140C61B70;

