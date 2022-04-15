#include "../winhttp.h"

//----- (00000001406AFED0) ----------------------------------------------------
__int64 __fastcall sub_1406AFED0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rdi
	__int64 v8; // rcx
	_QWORD* v9; // rax
	unsigned int v10; // ebx
	int v11; // edx
	__int64 v12; // rcx

	v1 = sub_140056AB0(a1, 1u);
	if (v1 && qword_140C659F0)
	{
		v3 = *(_QWORD*)(v1 + 16);
		v4 = v3 ? sub_1404B6E50(v2, v3) : sub_1404C9B90(v2, *(_DWORD*)(v1 + 8));
		v5 = v4;
		if (v4)
		{
			v6 = *(_QWORD*)(qword_140C659F8 + 200);
			if (v6 && v4 == (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 152i64))(v6))
			{
				v7 = qword_140C659F8;
				v8 = *(_QWORD*)(qword_140C659F8 + 200);
				if (v8)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
					*(_QWORD*)(v7 + 200) = 0i64;
				}
				v9 = (_QWORD*)sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
				if (v9)
					sub_1405AFE10(v9);
			}
			v10 = *(_DWORD*)(v5 + 496);
			v11 = *(_DWORD*)(sub_1405B1510(&qword_140C7DFB0) + 188);
			if (HIBYTE(v10) <= *(_DWORD*)(qword_140C659F8 + 216))
			{
				v12 = *(_QWORD*)(qword_140C659F8 + 112);
				if (v12)
				{
					while (*(_DWORD*)(v12 + 152) != HIBYTE(v10))
					{
						v12 = *(_QWORD*)(v12 + 8);
						if (!v12)
							return 0i64;
					}
					if (*(_DWORD*)(v12 + 20) == v11)
						sub_1404C7770(v12, v10);
				}
			}
		}
	}
	return 0i64;
}
// 1406AFFE2: conditional instruction was optimized away because rcx.8!=0
// 1406AFF07: variable 'v2' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

