#include "../winhttp.h"

//----- (00000001407744D0) ----------------------------------------------------
void __fastcall sub_1407744D0(__int64 a1, int a2)
{
	__int64* v2; // rax
	__int64 v3; // rbx
	unsigned __int64 i; // rdi
	void(__fastcall * **v5)(_QWORD, __int64); // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rax
	__int64 v8; // rcx

	if (a2)
	{
		v2 = *(__int64**)(a1 + 56);
		v3 = *v2;
		if ((__int64*)*v2 != v2)
		{
			while (*(_DWORD*)(v3 + 16) != a2)
			{
				v3 = *(_QWORD*)v3;
				if ((__int64*)v3 == v2)
					return;
			}
			for (i = 0i64; i < *(_QWORD*)(v3 + 32); ++i)
			{
				v5 = *(void(__fastcall****)(_QWORD, __int64))(*(_QWORD*)(v3 + 24) + 8 * i);
				if (v5)
					(**v5)(v5, 1i64);
			}
			v6 = *(_QWORD*)v3;
			v7 = *(_QWORD**)(v3 + 8);
			*v7 = *(_QWORD*)v3;
			*(_QWORD*)(v6 + 8) = v7;
			v8 = *(_QWORD*)(v3 + 24);
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
			sub_14018B900(v3, 0);
		}
	}
}

