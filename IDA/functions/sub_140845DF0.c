#include "../winhttp.h"

//----- (0000000140845DF0) ----------------------------------------------------
__int64 sub_140845DF0()
{
	__int64 result; // rax

	result = qword_140C61FE0;
	if (!qword_140C61FE0)
	{
		result = sub_1408819F0(dword_140C10F28, 144i64);
		qword_140C61FE0 = result;
		if (result)
		{
			*(_QWORD*)result = 0i64;
			*(_QWORD*)(result + 8) = 0i64;
			*(_DWORD*)(result + 16) = 0;
			*(_QWORD*)(result + 24) = 0i64;
			*(_QWORD*)(result + 32) = 0i64;
			*(_DWORD*)(result + 40) = 0;
			*(_QWORD*)(result + 48) = 0i64;
			*(_QWORD*)(result + 56) = 0i64;
			*(_DWORD*)(result + 64) = 0;
			*(_QWORD*)(result + 72) = 0i64;
			*(_QWORD*)(result + 80) = 0i64;
			*(_DWORD*)(result + 88) = 0;
			*(_QWORD*)(result + 96) = 0i64;
			*(_QWORD*)(result + 104) = 0i64;
			*(_DWORD*)(result + 112) = 0;
			*(_DWORD*)(result + 132) = 0;
			*(_WORD*)(result + 136) = 0;
			*(_DWORD*)(result + 120) = 0;
			*(_QWORD*)(result + 124) = 0i64;
			*(_BYTE*)(result + 124) = 15;
			return qword_140C61FE0;
		}
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61FE0: using guessed type __int64 qword_140C61FE0;

