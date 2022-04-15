#include "../winhttp.h"

//----- (00000001406248A0) ----------------------------------------------------
void __fastcall sub_1406248A0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	__int64 v6; // rbx
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // r8
	void(__fastcall * v11)(__int64, __int64, __int64, int, int, __int64); // rdx
	__int64 v12; // rcx
	__int64 v13; // [rsp+20h] [rbp-20h] BYREF
	__int64 v14; // [rsp+28h] [rbp-18h]
	int v15; // [rsp+30h] [rbp-10h]
	__int64 v16; // [rsp+34h] [rbp-Ch]
	int v17; // [rsp+3Ch] [rbp-4h]

	if (!a4)
	{
		if ((*(_BYTE*)(a6 + 896) & 2) != 0
			&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a6 + 48) + 408i64))(
				*(_QWORD*)(a6 + 48),
				2017i64))
		{
			v6 = *(_QWORD*)(a6 + 48);
			LODWORD(v13) = 2017;
			v14 = 1065353216i64;
			v15 = 0;
			v16 = 3i64;
			v17 = 0;
			HIDWORD(v13) = sub_1401AE6F0(0, -1);
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v6 + 584i64))(v6, 0i64, &v13);
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a6 + 48) + 648i64))(
				*(_QWORD*)(a6 + 48),
				0i64,
				0i64);
		}
		else if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a6 + 48) + 408i64))(
			*(_QWORD*)(a6 + 48),
			2018i64))
		{
			v7 = *(_QWORD*)(a6 + 48);
			LODWORD(v13) = 2018;
			v14 = 1065353216i64;
			v15 = 0;
			v16 = 3i64;
			v17 = 0;
			HIDWORD(v13) = sub_1401AE6F0(0, -1);
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v7 + 584i64))(v7, 0i64, &v13);
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a6 + 48) + 648i64))(
				*(_QWORD*)(a6 + 48),
				sub_140624A90,
				a6);
		}
		else
		{
			sub_140622B70(a6);
		}
		v8 = *(_QWORD*)(a6 + 96);
		if (v8)
		{
			if ((*(_BYTE*)(a6 + 896) & 2) != 0
				&& (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 408i64))(v8, 2017i64))
			{
				v9 = *(_QWORD*)(a6 + 96);
				v13 = 2017i64;
				v14 = 1065353216i64;
				v15 = 0;
				v16 = 3i64;
				v17 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v9 + 584i64))(v9, 0i64, &v13);
				v10 = 0i64;
				v11 = 0i64;
			}
			else
			{
				if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a6 + 96) + 408i64))(
					*(_QWORD*)(a6 + 96),
					2018i64))
					return;
				v12 = *(_QWORD*)(a6 + 96);
				v13 = 2018i64;
				v14 = 1065353216i64;
				v15 = 0;
				v16 = 3i64;
				v17 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v12 + 584i64))(v12, 0i64, &v13);
				v10 = a6;
				v11 = sub_140624A90;
			}
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a6 + 96) + 648i64))(
				*(_QWORD*)(a6 + 96),
				v11,
				v10);
		}
	}
}

