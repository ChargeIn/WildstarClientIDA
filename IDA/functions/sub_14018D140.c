#include "../winhttp.h"

//----- (000000014018D140) ----------------------------------------------------
__int64 __fastcall sub_14018D140(int* a1, unsigned __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // rbp
	int* v6; // rax
	int* v7; // rbx
	int* v8; // rax

	if (a1)
	{
		if (a2 > (unsigned __int64)(sub_14018A370((__int64)(a1 - 4)) - 18) >> 1)
		{
			v5 = sub_14018A3E0(2 * a2 + 18);
			if ((**((unsigned int(__fastcall***)(__int64, __int64))a1 - 2))((__int64)(a1 - 4), v5))
			{
				*((_QWORD*)a1 - 1) = a2;
				return (__int64)a1;
			}
			else
			{
				v6 = sub_14018B280(v5, 0);
				if (v6)
				{
					*((_QWORD*)v6 + 1) = a2;
					*(_QWORD*)v6 = off_140B55060;
				}
				v7 = v6 + 4;
				sub_1407DB590(v6 + 4, a1, 2i64 * *((_QWORD*)a1 - 1));
				return (__int64)v7;
			}
		}
		else
		{
			*((_QWORD*)a1 - 1) = a2;
			return (__int64)a1;
		}
	}
	else
	{
		v8 = sub_14018B280(2 * a2 + 18, 0);
		if (v8)
		{
			*((_QWORD*)v8 + 1) = a2;
			result = (__int64)(v8 + 4);
			*(_QWORD*)(result - 16) = off_140B55060;
		}
		else
		{
			return 16i64;
		}
	}
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

