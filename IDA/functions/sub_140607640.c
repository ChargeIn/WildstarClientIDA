#include "../winhttp.h"

//----- (0000000140607640) ----------------------------------------------------
int* __fastcall sub_140607640(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rdi
	int* result; // rax
	int* v5; // rbx
	unsigned __int64 v6; // r14
	__int64 v7; // rbp

	v3 = *(_QWORD*)(a1 + 8) - 1i64;
	result = sub_1407DB590((int*)(*(_QWORD*)a1 + 16 * a2), (int*)(*(_QWORD*)a1 + 16 * a2 + 16), 16 * (v3 - a2));
	v5 = *(int**)a1;
	if (v3)
	{
		if (v5)
		{
			if (v3 <= *((_QWORD*)v5 - 1))
				goto LABEL_10;
			v6 = (unsigned __int64)(sub_14018A3E0(16 * (v3 + 1)) - 16) >> 4;
			v7 = 16 * (v6 + 1);
			result = (int*)(**((__int64(__fastcall***)(__int64, __int64))v5 - 2))((__int64)(v5 - 4), v7);
			if ((_DWORD)result)
			{
				*((_QWORD*)v5 - 1) = v6;
				goto LABEL_10;
			}
		}
		else
		{
			v6 = v3;
			v7 = 16 * (v3 + 1);
		}
		result = sub_14018B280(v7, 0);
		if (result)
		{
			*((_QWORD*)result + 1) = v6;
			*(_QWORD*)result = off_140B55060;
		}
		v5 = result + 4;
	}
LABEL_10:
	if (*(int**)a1 != v5)
	{
		result = sub_1407DB590(v5, *(int**)a1, 16 * v3);
		if (*(_QWORD*)a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 - 16i64) + 8i64))(*(_QWORD*)a1 - 16i64);
		*(_QWORD*)a1 = v5;
	}
	*(_QWORD*)(a1 + 8) = v3;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

