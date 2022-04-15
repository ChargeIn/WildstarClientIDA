#include "../winhttp.h"

//----- (00000001406E51A0) ----------------------------------------------------
__int64 __fastcall sub_1406E51A0(__int64 a1, _DWORD* a2)
{
	__int64 result; // rax
	int v3; // r15d
	int v4; // r12d
	int v6; // r13d
	unsigned __int64 v7; // r14
	__int64 v8; // rbp
	unsigned __int64 v9; // rdi
	_QWORD* v10; // rbx
	int v11; // ecx
	_DWORD* v12; // [rsp+58h] [rbp+10h]

	v12 = a2;
	result = *(_QWORD*)a2;
	v3 = 0;
	v4 = 1;
	v6 = 1;
	v7 = 0i64;
	if (*(_QWORD*)(*(_QWORD*)a2 + 16i64))
	{
		do
		{
			v8 = **(_QWORD**)(*(_QWORD*)(*(_QWORD*)a2 + 8i64) + 8 * v7);
			v9 = (*(__int64(__fastcall**)(__int64))(a1 + 2440))(v8);
			v10 = *(_QWORD**)(*(_QWORD*)(a1 + 2432) + 8 * (v9 % *(_QWORD*)(a1 + 2424)));
			if (v10)
			{
				while (v9 != *v10 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 2448))(v8, v10 + 2))
				{
					v10 = (_QWORD*)v10[1];
					if (!v10)
						goto LABEL_12;
				}
				if (v10 != (_QWORD*)-24i64)
				{
					v11 = *(_DWORD*)(v10[3] + 64i64);
					if (v11)
						v4 = 0;
					if (v11 != 3)
						v6 = 0;
				}
			}
		LABEL_12:
			a2 = v12;
			++v7;
			result = *(_QWORD*)v12;
		} while (v7 < *(_QWORD*)(*(_QWORD*)v12 + 16i64));
		if (!v4)
		{
			LOBYTE(v3) = v6 != 0;
			++v3;
		}
	}
	a2[16] = v3;
	return result;
}

