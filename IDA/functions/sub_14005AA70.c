#include "../winhttp.h"

//----- (000000014005AA70) ----------------------------------------------------
__int64 __fastcall sub_14005AA70(__int64 a1, const char* a2)
{
	__int64 v3; // rdx
	__int64 result; // rax
	unsigned int v6; // eax
	__int64 v7; // rdx
	__int64* v8; // rcx
	unsigned int v9; // edi
	__int64 v10; // rcx
	__int64 v11; // rdx
	char v12[64]; // [rsp+30h] [rbp-58h] BYREF

	v3 = *(_QWORD*)(a1 + 40);
	result = *(_QWORD*)(v3 + 8);
	if (*(_DWORD*)(result + 8) == 6)
	{
		result = *(_QWORD*)result;
		if (!*(_BYTE*)(result + 10))
		{
			v6 = sub_140059A60(a1, v3);
			v8 = *(__int64**)(v7 + 8);
			v9 = v6;
			if (*((_DWORD*)v8 + 2) != 6 || (v10 = *v8, *(_BYTE*)(v10 + 10)))
				v11 = 0i64;
			else
				v11 = *(_QWORD*)(v10 + 32);
			sub_14005B160(v12, (char*)(*(_QWORD*)(v11 + 64) + 32i64), 0x3Cui64);
			return sub_14005B130(a1, (unsigned __int64*)"%s:%d: %s", v12, v9, a2);
		}
	}
	return result;
}
// 14005AAB6: variable 'v7' is possibly undefined

