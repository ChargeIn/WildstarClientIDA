#include "../winhttp.h"

//----- (000000014071B970) ----------------------------------------------------
__int64 __fastcall sub_14071B970(__int64 a1, int a2)
{
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rbx
	unsigned int v6; // r14d
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v13; // [rsp+20h] [rbp-20h] BYREF
	__int64 v14; // [rsp+28h] [rbp-18h]
	__int64 v15; // [rsp+30h] [rbp-10h]
	__int64 v16; // [rsp+38h] [rbp-8h]

	v3 = *(_QWORD**)(a1 + 424);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 432);
	v4 = *(_QWORD*)(a1 + 432);
	if (v4)
		*(_QWORD*)(v4 + 424) = *(_QWORD*)(a1 + 424);
	*(_QWORD*)(a1 + 424) = 0i64;
	*(_QWORD*)(a1 + 432) = 0i64;
	if (*(_DWORD*)(a1 + 232))
	{
		*(_DWORD*)(a1 + 232) = 0;
		if (!a2)
		{
			v5 = qword_140C65898;
			v6 = *(_DWORD*)(a1 + 228);
			if (v6 == 4)
			{
				v7 = *(_QWORD*)(qword_140C65898 + 29240);
				if (v7)
				{
					sub_14071B880(v7);
					return sub_14071A150(a1);
				}
				(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(qword_140C65898 + 29112) + 408i64))(
					*(_QWORD*)(qword_140C65898 + 29112),
					0i64);
				v8 = *(_QWORD*)(v5 + 29112);
				v13 = 0i64;
				v14 = 1065353216i64;
				v15 = 0i64;
				v16 = 0i64;
				(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v8 + 584i64))(v8, 4i64, &v13);
				(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v5 + 29120) + 408i64))(*(_QWORD*)(v5 + 29120), 0i64);
				v9 = 4i64;
			}
			else
			{
				(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(qword_140C65898 + 29112) + 408i64))(
					*(_QWORD*)(qword_140C65898 + 29112),
					0i64);
				v10 = *(_QWORD*)(v5 + 29112);
				v13 = 0i64;
				v14 = 1065353216i64;
				v15 = 0i64;
				v16 = 0i64;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v10 + 584i64))(v10, v6, &v13);
				(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v5 + 29120) + 408i64))(*(_QWORD*)(v5 + 29120), 0i64);
				v9 = v6;
			}
			v11 = *(_QWORD*)(v5 + 29120);
			v13 = 0i64;
			v14 = 1065353216i64;
			v15 = 0i64;
			v16 = 0i64;
			(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v11 + 584i64))(v11, v9, &v13);
		}
	}
	return sub_14071A150(a1);
}
// 140C65898: using guessed type __int64 qword_140C65898;

