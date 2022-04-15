#include "../winhttp.h"

//----- (00000001405CA990) ----------------------------------------------------
__int64 __fastcall sub_1405CA990(__int64 a1, __int64* a2)
{
	__int64 v2; // rbx
	__int64 v3; // rdx
	__int64 v4; // rdi
	__int64 result; // rax
	_QWORD* v6; // rcx
	bool v7; // zf
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v8 = a1;
	v2 = *a2;
	if (*a2)
	{
		do
		{
			v3 = *(_QWORD*)(v2 + 256);
			v4 = *(_QWORD*)(v2 + 8);
			if (v3)
			{
				LODWORD(v8) = **(_DWORD**)(v2 + 48);
				result = sub_1400EE810(v3 + 576, &v8);
			}
			if (*(_QWORD*)v2)
			{
				result = *(_QWORD*)(v2 + 8);
				**(_QWORD**)v2 = result;
			}
			v6 = *(_QWORD**)(v2 + 8);
			if (v6)
			{
				result = *(_QWORD*)v2;
				*v6 = *(_QWORD*)v2;
			}
			v7 = *(_DWORD*)(v2 + 36) == 2;
			*(_QWORD*)v2 = 0i64;
			*(_QWORD*)(v2 + 8) = 0i64;
			*(_QWORD*)(v2 + 256) = 0i64;
			if (!v7)
			{
				result = (unsigned int)dword_140C636A8;
				*(_DWORD*)(v2 + 36) = 2;
				*(_DWORD*)(v2 + 76) = result;
			}
			v2 = v4;
		} while (v4);
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

