#include "../winhttp.h"

//----- (0000000140572C30) ----------------------------------------------------
__int64 __fastcall sub_140572C30(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	int* v5; // rax
	void(__fastcall * v6)(__int64, __int64, int); // rbx
	__int64 v7; // rax

	v4 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 128i64))(a1, 1347241296i64);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4);
		return 0i64;
	}
	else
	{
		v5 = sub_14018B280(120i64, 0);
		v6 = (void(__fastcall*)(__int64, __int64, int))v5;
		if (v5)
		{
			*((_QWORD*)v5 + 2) = a2;
			*(_QWORD*)v5 = off_140B6CA40;
			*((_QWORD*)v5 + 3) = 0i64;
			*((_QWORD*)v5 + 4) = 0i64;
			*((_QWORD*)v5 + 5) = 0i64;
			*((_QWORD*)v5 + 8) = 0i64;
			*((_QWORD*)v5 + 9) = 0i64;
			*((_QWORD*)v5 + 11) = 0i64;
			*((_QWORD*)v5 + 12) = 0i64;
			v5[12] = 1414420037;
			v5[29] = 0;
			v7 = *((_QWORD*)v5 + 2);
			if (*(_DWORD*)(v7 + 20))
			{
				if (*(_DWORD*)(v7 + 16))
					sub_14056B870(v6);
			}
		}
		else
		{
			v6 = 0i64;
		}
		(*(void(__fastcall**)(__int64, void(__fastcall*)(__int64, __int64, int)))(*(_QWORD*)a1 + 96i64))(a1, v6);
		return 0i64;
	}
}
// 140B6CA40: using guessed type __int64 (__fastcall *off_140B6CA40[9])();

