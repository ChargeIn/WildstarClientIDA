#include "../winhttp.h"

//----- (00000001407D0620) ----------------------------------------------------
__int64 __fastcall sub_1407D0620(__int64 a1, _OWORD* a2)
{
	__int64 v2; // rbx
	_QWORD* v3; // rdi
	float v5; // xmm6_4
	unsigned int v6; // eax
	_QWORD* v7; // rbx
	__int128 v8; // xmm0
	__int64 result; // rax
	char v10[16]; // [rsp+20h] [rbp-28h] BYREF

	v2 = *(_QWORD*)(a1 + 1328);
	v3 = 0i64;
	v5 = 0.0;
	if (!v2)
		return 0i64;
	do
	{
		if (((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 176i64))(v2) & 1) != 0 && *(float*)(v2 + 264) > v5)
		{
			v5 = *(float*)(v2 + 264);
			v3 = (_QWORD*)v2;
		}
		v2 = *(_QWORD*)(v2 + 136);
	} while (v2);
	if (!v3)
		return 0i64;
	v6 = (*(__int64(__fastcall**)(_QWORD*))(*v3 + 184i64))(v3);
	if (v6 == -1)
		return 0i64;
	if (v3[36] <= (unsigned __int64)v6)
		return 0i64;
	v7 = (_QWORD*)(v3[35] + 32i64 * v6);
	if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v7 + 848i64))(*v7, 21i64))
		return 0i64;
	v8 = *(_OWORD*)(*(__int64(__fastcall**)(_QWORD, char*, __int64))(*(_QWORD*)*v7 + 856i64))(*v7, v10, 21i64);
	result = 1i64;
	*a2 = v8;
	return result;
}
// 1407D0620: using guessed type char var_28[16];

