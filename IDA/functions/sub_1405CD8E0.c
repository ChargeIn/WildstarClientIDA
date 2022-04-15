#include "../winhttp.h"

//----- (00000001405CD8E0) ----------------------------------------------------
int* __fastcall sub_1405CD8E0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	int v3; // edi
	int* result; // rax
	int* v6; // r14
	int* v7; // rdx
	__int64 v8; // rcx

	v2 = *(_QWORD*)(a1 + 736);
	v3 = *(_DWORD*)(a2 + 8);
	result = sub_14018DB00(*(_QWORD*)(a1 + 728), v2 + 1, 4i64);
	v6 = result;
	result[v2] = v3;
	v7 = *(int**)(a1 + 728);
	if (v7 != result)
	{
		result = sub_1407DB590(result, v7, 4i64 * *(_QWORD*)(a1 + 736));
		v8 = *(_QWORD*)(a1 + 728);
		if (v8)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
		*(_QWORD*)(a1 + 728) = v6;
	}
	*(_QWORD*)(a1 + 736) = v2 + 1;
	return result;
}

