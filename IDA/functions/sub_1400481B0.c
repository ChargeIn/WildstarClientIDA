#include "../winhttp.h"

//----- (00000001400481B0) ----------------------------------------------------
__int64 __fastcall sub_1400481B0(__int64 a1, __int64 a2, void(__fastcall*** a3)(_QWORD))
{
	int* v6; // rax
	__int64 v7; // rbx
	int v8; // edi
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 24))
	{
		v6 = sub_14018B280(112i64, 0);
		v7 = (__int64)v6;
		if (v6)
		{
			*(_QWORD*)v6 = off_140B55048;
			v6[2] = 1;
			*((_QWORD*)v6 + 3) = 0i64;
			*((_QWORD*)v6 + 4) = 0i64;
			*((_QWORD*)v6 + 6) = 0i64;
			v6[14] = 0;
			*((_QWORD*)v6 + 2) = 0i64;
			v6[10] = 0;
			*(_QWORD*)v6 = off_140B55540;
			v6[19] = 0;
			*((_QWORD*)v6 + 11) = 0i64;
			*((_QWORD*)v6 + 10) = 0i64;
			*((_QWORD*)v6 + 13) = 0i64;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = sub_140033780(v7, a2, a3);
		if (v8 < 0 || (v8 = sub_140048100(a1, v7, 2), v8 < 0))
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			return (unsigned int)v8;
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	}
	else
	{
		result = sub_140015EC0(qword_140C635F0, a2, a3, 0);
		if ((int)result < 0)
			return result;
	}
	return 0i64;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55540: using guessed type __int64 (__fastcall *off_140B55540[9])();
// 140C635F0: using guessed type __int64 qword_140C635F0;

