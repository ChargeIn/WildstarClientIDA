#include "../winhttp.h"

//----- (0000000140773E50) ----------------------------------------------------
void __fastcall sub_140773E50(__int64 a1)
{
	_QWORD** v1; // rax
	_QWORD* v2; // rbx
	unsigned __int64 i; // rdi
	__int64 v5; // rcx
	void(__fastcall * **v6)(_QWORD, __int64); // rsi
	_QWORD* v7; // rax
	_QWORD* v8; // rdi
	__int64 v9; // rcx

	v1 = *(_QWORD***)(a1 + 56);
	v2 = *v1;
	if (*v1 != v1)
	{
		do
		{
			for (i = 0i64; i < v2[4]; ++i)
			{
				v5 = *(_QWORD*)(v2[3] + 8 * i);
				if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 32i64))(v5, a1 + 32))
				{
					v6 = *(void(__fastcall****)(_QWORD, __int64))(v2[3] + 8 * i);
					sub_140007270((__int64)(v2 + 3), i);
					if (v6)
						(**v6)(v6, 1i64);
					--i;
				}
			}
			if (v2[4])
			{
				v2 = (_QWORD*)*v2;
			}
			else
			{
				v7 = (_QWORD*)v2[1];
				v8 = (_QWORD*)*v2;
				*v7 = *v2;
				v8[1] = v7;
				v9 = v2[3];
				if (v9)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
				sub_14018B900((__int64)v2, 0);
				v2 = v8;
			}
		} while (v2 != *(_QWORD**)(a1 + 56));
	}
}

