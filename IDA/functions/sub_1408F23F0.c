#include "../winhttp.h"

//----- (00000001408F23F0) ----------------------------------------------------
__int64 __fastcall sub_1408F23F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5)
{
	__int64 v6; // rbx
	__int64 result; // rax

	*(_QWORD*)(a1 + 8) = a4;
	*(_QWORD*)(a1 + 16) = a2;
	v6 = a3;
	*(_DWORD*)(a1 + 44) = (*(unsigned __int16(__fastcall**)(__int64))(*(_QWORD*)a3 + 144i64))(a3);
	LODWORD(v6) = (*(unsigned __int16(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
	sub_1408F4420((float*)(a1 + 96), *(_QWORD*)(a1 + 8) + 120i64, a5);
	*(float*)(a1 + 48) = (float)(int)v6 / (float)*(int*)(a1 + 288);
	result = sub_1408F29F0(a1);
	if ((_DWORD)result == 1)
	{
		sub_1408F2D20(a1);
		result = sub_1408F2E70(a1, a2);
		*(_DWORD*)(*(_QWORD*)(a1 + 8) + 232i64) &= ~0x20u;
	}
	return result;
}

