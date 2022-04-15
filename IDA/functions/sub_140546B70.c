#include "../winhttp.h"

//----- (0000000140546B70) ----------------------------------------------------
void __fastcall sub_140546B70(__int64 a1, __int64* a2)
{
	__int64 v2; // rbx
	__int64 v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	bool v8; // zf
	int v9; // eax
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF

	v10 = a1;
	v2 = *a2;
	if (*a2)
	{
		do
		{
			v3 = *(_QWORD*)(v2 + 8);
			if (*(_DWORD*)(v2 + 128)
				|| (v4 = *(_QWORD*)(v2 + 48), (*(_DWORD*)(v4 + 68) & 0x100) != 0)
				|| !*(_DWORD*)(v4 + 40))
			{
				v5 = *(_QWORD*)(v2 + 48);
				if ((*(_BYTE*)(v5 + 88) & 8) == 0)
				{
					v6 = *(_QWORD*)(v2 + 256);
					if (v6)
					{
						LODWORD(v10) = *(_DWORD*)v5;
						sub_1400EE810(v6 + 576, &v10);
					}
					if (*(_QWORD*)v2)
						**(_QWORD**)v2 = *(_QWORD*)(v2 + 8);
					v7 = *(_QWORD**)(v2 + 8);
					if (v7)
						*v7 = *(_QWORD*)v2;
					v8 = *(_DWORD*)(v2 + 36) == 2;
					*(_QWORD*)v2 = 0i64;
					*(_QWORD*)(v2 + 8) = 0i64;
					*(_QWORD*)(v2 + 256) = 0i64;
					if (!v8)
					{
						v9 = dword_140C636A8;
						*(_DWORD*)(v2 + 36) = 2;
						*(_DWORD*)(v2 + 76) = v9;
					}
				}
			}
			v2 = v3;
		} while (v3);
	}
}
// 140C636A8: using guessed type int dword_140C636A8;

