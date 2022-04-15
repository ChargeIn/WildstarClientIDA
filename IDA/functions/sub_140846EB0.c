#include "../winhttp.h"

//----- (0000000140846EB0) ----------------------------------------------------
__int64 __fastcall sub_140846EB0(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rax
	__int64 result; // rax

	v2 = (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) / 36i64;
	if (v2 >= *(unsigned int*)(a1 + 16) && !sub_1408486C0((__int64*)a1, 1) || v2 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
	{
		*(_BYTE*)(v3 + 16) &= 0xFCu;
		*(_DWORD*)(v3 + 20) = 1065353216;
		*(_QWORD*)(v3 + 8) = 0i64;
		*(_QWORD*)v3 = 0i64;
		*(_BYTE*)(v3 + 17) = 0;
		*(_DWORD*)(v3 + 24) = 1065353216;
		*(_DWORD*)(v3 + 28) = 1065353216;
		*(_DWORD*)(v3 + 32) = 1065353216;
	}
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 36;
	return result;
}

