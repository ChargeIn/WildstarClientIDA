#include "../winhttp.h"

//----- (00000001406022C0) ----------------------------------------------------
__int64 __fastcall sub_1406022C0(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rax
	int* v4; // rdx
	__int64 v5; // rax
	unsigned __int64 v6; // rax

	v2 = *a2;
	v4 = (int*)(a2 + 1);
	*(_QWORD*)(a1 + 32) = v2;
	v5 = *((_QWORD*)v4 + 2);
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 48) = v5;
	v6 = sub_140605420(a1, v4);
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Group_Referral", byte_1409EA074, v6, a2[3]);
	return 0i64;
}
// 1409EA074: using guessed type _BYTE byte_1409EA074[32];
// 140C65898: using guessed type __int64 qword_140C65898;

