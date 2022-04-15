#include "../winhttp.h"

//----- (00000001408CD110) ----------------------------------------------------
__int64 __fastcall sub_1408CD110(__int64 a1)
{
	__int64 result; // rax

	sub_1408C3AF0((_DWORD*)a1);
	sub_1408C3AF0((_DWORD*)(a1 + 24));
	result = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 384) = 0i64;
	*(_QWORD*)(a1 + 392) = 0i64;
	return result;
}

