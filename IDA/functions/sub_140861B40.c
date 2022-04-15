#include "../winhttp.h"

//----- (0000000140861B40) ----------------------------------------------------
__int64 __fastcall sub_140861B40(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rdi
	int v4; // ecx
	int v5; // eax
	__int64 result; // rax
	int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rax
	bool v10; // zf
	__int64 v11; // [rsp+40h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 200);
	v3 = *(_QWORD*)(*(_QWORD*)(v1 + 24) + 24i64);
	v4 = *(_DWORD*)(v3 + 408);
	if (v4 > 0)
	{
		v5 = *(_DWORD*)(v3 + 408);
		if (*(unsigned __int16*)(a1 + 160) - *(unsigned __int16*)(a1 + 162) < v4)
			v5 = *(unsigned __int16*)(a1 + 160) - *(unsigned __int16*)(a1 + 162);
		*(_DWORD*)(v3 + 408) = v4 - v5;
		return 17i64;
	}
	v7 = sub_140861310(*(_BYTE**)(v1 + 24));
	if (v7 == 63)
		return 17i64;
	if (v7 != 1)
		return 2i64;
	v8 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 192i64);
	v11 = *(_QWORD*)(v3 + 192);
	if (((HIDWORD(v8) ^ HIDWORD(v11)) & 0x3FFFF) != 0)
		return 17i64;
	sub_140849210(*(_QWORD*)(a1 + 200));
	v9 = *(_QWORD*)(a1 + 200);
	*(_QWORD*)(a1 + 208) = v3;
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(v9 + 16);
	if ((*(_BYTE*)(v3 + 380) & 0x20) == 0)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 120i64))(v3);
	sub_140872910(a1 + 16, (int*)&v11, *(float*)(v3 + 208), a1 + 144, *(_DWORD*)(*(_QWORD*)(a1 + 200) + 472i64));
	v10 = *(unsigned __int16*)(a1 + 162) == *(_DWORD*)(a1 + 68);
	result = 45i64;
	*(_BYTE*)(a1 + 216) = 0;
	if (!v10)
		return 43i64;
	return result;
}
// 140861B78: conditional instruction was optimized away because ecx.4>=1

