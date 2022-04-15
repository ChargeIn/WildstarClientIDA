#include "../winhttp.h"

//----- (00000001403E5C80) ----------------------------------------------------
__int64 __fastcall sub_1403E5C80(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	int* v4; // rdi
	unsigned __int64 i; // rbx
	__int64 v6; // rcx
	wchar_t* v7; // rdx
	int v8; // eax
	__int64 v9; // rcx
	__int64 v10; // [rsp+20h] [rbp-20h] BYREF
	__int64 v11; // [rsp+28h] [rbp-18h]
	__int64 v12; // [rsp+30h] [rbp-10h]
	__int64 v13; // [rsp+38h] [rbp-8h]
	__int64 v14; // [rsp+60h] [rbp+20h] BYREF

	result = (*(__int64(__fastcall**)(_QWORD, const wchar_t*, __int64, _QWORD))(**(_QWORD**)(a1 + 29264) + 40i64))(
		*(_QWORD*)(a1 + 29264),
		L"UI\\Interface\\Selection.m3",
		a1 + 25832,
		0i64);
	if ((int)result >= 0)
	{
		v3 = *(_QWORD*)(a1 + 25832);
		v10 = 1221i64;
		v11 = 1065353216i64;
		v12 = 0i64;
		v13 = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v3 + 584i64))(v3, 0i64, &v10);
		(*(void(__fastcall**)(_QWORD, __int64(__fastcall*)(__int64, __int64, _DWORD*, int), _QWORD))(**(_QWORD**)(a1 + 25832) + 648i64))(
			*(_QWORD*)(a1 + 25832),
			sub_14055C2C0,
			0i64);
		result = sub_14062B8A0((__int64*)(a1 + 29088));
		if ((int)result >= 0)
		{
			sub_1405A6880((_QWORD*)a1);
			v4 = dword_140C65880;
			for (i = 0i64; i < 12; i += 4i64)
			{
				v6 = *(_QWORD*)(a1 + 29264);
				v7 = off_140AF6D40[i];
				v14 = 0i64;
				v8 = (*(__int64(__fastcall**)(__int64, wchar_t*, __int64*, _QWORD))(*(_QWORD*)v6 + 40i64))(
					v6,
					v7,
					&v14,
					0i64);
				v9 = v14;
				if (v8 >= 0)
				{
					v10 = 150i64;
					v11 = 1065353216i64;
					v12 = 0i64;
					v13 = 0i64;
					(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v14 + 584i64))(v14, 0i64, &v10);
					*v4 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 1160i64))(v14) + 48);
					v9 = v14;
				}
				if (v9)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
				++v4;
			}
			*(_DWORD*)qword_140C65920 = 1;
			return 0i64;
		}
	}
	return result;
}
// 140AF6D40: using guessed type wchar_t *off_140AF6D40[3];
// 140AF7408: using guessed type wchar_t aUiInterfaceSel[26];
// 140C65880: using guessed type int dword_140C65880[];
// 140C65920: using guessed type __int64 qword_140C65920;

