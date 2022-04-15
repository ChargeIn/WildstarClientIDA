#include "../winhttp.h"

//----- (00000001408BEE20) ----------------------------------------------------
__int64 __fastcall sub_1408BEE20(__int64 a1)
{
	__int64 result; // rax

	result = qword_140C62B00;
	if (!qword_140C62B00)
	{
		result = sub_1408819F0(dword_140C10F28, (unsigned int)(qword_140C62B00 + 32));
		if (result)
		{
			*(_QWORD*)result = a1;
			*(_DWORD*)(result + 8) = 0;
			*(_QWORD*)(result + 16) = 0i64;
			*(_QWORD*)(result + 24) = 0i64;
			qword_140C62B00 = result;
			sub_140826FF0((__int64)sub_1408BF070);
			return qword_140C62B00;
		}
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C62B00: using guessed type __int64 qword_140C62B00;

