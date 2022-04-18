#include "../winhttp.h"

//----- (000000014062A080) ----------------------------------------------------
__int64 __fastcall sub_14062A080(__int64 a1, int a2, unsigned int* a3)
{
	unsigned __int64 i; // rbx
	__int64 v6; // r9
	__int64 result; // rax
	__int64 v8; // rdi
	char v9[64]; // [rsp+20h] [rbp-58h] BYREF

	if (!a2)
	{
		for (i = 0i64; i < *(_QWORD*)(a1 + 40); ++i)
		{
			v6 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * i);
			result = *a3;
			if (*(_DWORD*)(v6 + 80) == (_DWORD)result)
			{
				result = *((_QWORD*)a3 + 1);
				if (*(_QWORD*)(v6 + 88) == result)
				{
					v8 = *(_QWORD*)(qword_140C65898 + 29504);
					sub_14001B370(v9, 30i64, L"%I64u", *(_QWORD*)(v6 + 8));
					result = Apollo_LUAEvent(v8, "RefreshMail", L"S", v9);
				}
			}
		}
	}
	return result;
}
// 1409EEC7C: using guessed type wchar_t aS_36[2];
// 140B01478: using guessed type wchar_t aI64u_2[6];
// 140C65898: using guessed type __int64 qword_140C65898;

