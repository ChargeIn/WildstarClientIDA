#include "../winhttp.h"

//----- (000000014005DC50) ----------------------------------------------------
char __fastcall sub_14005DC50(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v3; // rax
	__int64 v4; // rcx
	int v5; // r12d
	__int64 v6; // r13
	__int64 v7; // rbp
	__int64 v8; // rsi
	__int64* v9; // rdi
	__int64 v10; // rbx
	int v11; // r15d
	__int64 v13; // [rsp+50h] [rbp+8h]

	v1 = *(_QWORD*)(a1 + 32);
	*(_BYTE*)(v1 + 32) = 67;
	v13 = v1;
	LOBYTE(v3) = (unsigned __int8)sub_14005D6E0(a1, (__int64*)(v1 + 40), -3i64);
	v4 = v13;
	v5 = 0;
	if (*(int*)(v13 + 12) > 0)
	{
		v6 = 0i64;
		do
		{
			v7 = *(_QWORD*)(a1 + 32);
			v8 = -3i64;
			v9 = (__int64*)(v6 + *(_QWORD*)v4);
			v10 = *v9;
			v11 = *(unsigned __int8*)(v7 + 32) ^ 3;
			if (*v9)
			{
				do
				{
					v3 = v8--;
					if (!v3)
						break;
					if (*(_BYTE*)(v10 + 8) == 8)
						sub_14005D6E0(a1, (__int64*)(v10 + 152), -3i64);
					if (((*(unsigned __int8*)(v10 + 9) ^ 3) & v11) != 0)
					{
						v9 = (__int64*)v10;
						LOBYTE(v3) = *(_BYTE*)(v10 + 9) & 0xF8 | *(_BYTE*)(v7 + 32) & 3;
						*(_BYTE*)(v10 + 9) = v3;
					}
					else
					{
						*v9 = *(_QWORD*)v10;
						if (v10 == *(_QWORD*)(v7 + 40))
							*(_QWORD*)(v7 + 40) = *(_QWORD*)v10;
						LOBYTE(v3) = sub_14005D550(a1, v10);
					}
					v10 = *v9;
				} while (*v9);
				v4 = v13;
			}
			++v5;
			v6 += 8i64;
		} while (v5 < *(_DWORD*)(v4 + 12));
	}
	return v3;
}

