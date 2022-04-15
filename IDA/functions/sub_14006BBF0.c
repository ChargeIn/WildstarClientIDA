#include "../winhttp.h"

//----- (000000014006BBF0) ----------------------------------------------------
__int64 __fastcall sub_14006BBF0(__int64 a1, int a2, int a3)
{
	__int64 v3; // rdi
	int v7; // eax
	__int64 result; // rax

	v3 = *(_QWORD*)a1;
	sub_14006A230((__int64*)a1, *(_DWORD*)(a1 + 56), *(_DWORD*)(a1 + 48), 255, *(_DWORD*)(a1 + 48));
	v7 = *(_DWORD*)(a1 + 48);
	*(_DWORD*)(a1 + 56) = -1;
	if (v7 + 1 > *(_DWORD*)(v3 + 80))
		*(_QWORD*)(v3 + 24) = sub_140064690(
			*(_QWORD*)(a1 + 32),
			*(_QWORD*)(v3 + 24),
			(int*)(v3 + 80),
			4ui64,
			2147483645,
			aCodeSizeOverfl);
	*(_DWORD*)(*(_QWORD*)(v3 + 24) + 4i64 * *(int*)(a1 + 48)) = a2;
	if (*(_DWORD*)(a1 + 48) + 1 > *(_DWORD*)(v3 + 84))
		*(_QWORD*)(v3 + 40) = sub_140064690(
			*(_QWORD*)(a1 + 32),
			*(_QWORD*)(v3 + 40),
			(int*)(v3 + 84),
			4ui64,
			2147483645,
			aCodeSizeOverfl_0);
	*(_DWORD*)(*(_QWORD*)(v3 + 40) + 4i64 * *(int*)(a1 + 48)) = a3;
	result = *(unsigned int*)(a1 + 48);
	*(_DWORD*)(a1 + 48) = result + 1;
	return result;
}

