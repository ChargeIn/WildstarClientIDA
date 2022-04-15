#include "../winhttp.h"

//----- (00000001406F87C0) ----------------------------------------------------
__int64 sub_1406F87C0()
{
	__int64 v0; // rbx
	int v1; // eax
	float v2; // xmm0_4
	__int64 v3; // rax
	float v5; // [rsp+38h] [rbp+10h] BYREF

	v0 = qword_140C65898;
	v1 = *(_DWORD*)(qword_140C65898 + 29816);
	*(_DWORD*)(qword_140C65898 + 29696) = 3;
	*(_DWORD*)(v0 + 29812) = v1;
	v2 = (**(float(__fastcall***)(__int64))(v0 + 29704))(v0 + 29704);
	v3 = *(_QWORD*)(v0 + 29704);
	v5 = v2;
	(*(void(__fastcall**)(__int64, float*))(v3 + 8))(v0 + 29704, &v5);
	sub_1400F9C30(v0 + 29704, 0.0, 1000.0 / (float)*(int*)(v0 + 29812));
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

