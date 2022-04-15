#include "../winhttp.h"

//----- (00000001404FA0B0) ----------------------------------------------------
__int64 __fastcall sub_1404FA0B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rsi
	__int64* v6; // rax
	__int64* v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rax
	unsigned int v11; // eax
	__int64 v12; // rcx
	__int64 v13; // r9
	__int64 v14; // rdx
	__int64 v15; // rax
	unsigned int v16; // eax

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 2328);
		if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
		v5 = *(_QWORD*)(v3 + 2168);
		if (v5)
		{
			v6 = (__int64*)sub_140417660((__int64)a1, 2);
			v7 = v6;
			if (v6)
			{
				v8 = *v6;
				if (*v6)
				{
					if (*(_QWORD*)v8)
					{
						v9 = 0i64;
						if (*(_DWORD*)(v8 + 1184))
							v10 = *(_QWORD*)(v8 + 8);
						else
							v10 = 0i64;
						v11 = sub_140445140(*(_DWORD*)(v10 + 392), *(_DWORD*)(*(_QWORD*)v8 + 136i64), 0);
						v12 = *v7;
						v13 = v11;
						if (*v7 && *(_DWORD*)(v12 + 1184))
						{
							v14 = *(_QWORD*)(v12 + 8);
							goto LABEL_24;
						}
					}
					else
					{
						if (!*(_DWORD*)(v8 + 1184) || !*(_QWORD*)(v8 + 8))
							return 0i64;
						v9 = 0i64;
						if (*(_DWORD*)(v8 + 1184))
							v15 = *(_QWORD*)(v8 + 8);
						else
							v15 = 0i64;
						v16 = sub_140445140(*(_DWORD*)(v15 + 392), 0, 0);
						v12 = *v7;
						v13 = v16;
						if (*v7 && *(_DWORD*)(v12 + 1184))
						{
							v14 = *(_QWORD*)(v12 + 8);
							goto LABEL_24;
						}
					}
					v14 = 0i64;
				LABEL_24:
					if (v12 && *(_DWORD*)(v12 + 1184))
						v9 = *(_QWORD*)(v12 + 8);
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v5 + 80i64))(
						v5,
						*(unsigned int*)(v9 + 380),
						*(unsigned int*)(v14 + 388),
						v13);
				}
			}
		}
	}
	return 0i64;
}

