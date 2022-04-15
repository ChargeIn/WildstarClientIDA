#include "../winhttp.h"

//----- (0000000140853B00) ----------------------------------------------------
__int64 __fastcall sub_140853B00(unsigned int a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	__int64 result; // rax
	unsigned int v4; // edi

	v1 = sub_140830F00(qword_140C61BA8, a1, 0);
	v2 = v1;
	if (!v1)
		return 2i64;
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 320i64))(v1);
	v4 = result;
	if ((_DWORD)result != 1)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2);
		return v4;
	}
	return result;
}

