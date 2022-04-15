#include "../winhttp.h"

//----- (0000000140111FD0) ----------------------------------------------------
__int64 __fastcall sub_140111FD0(__int64 a1)
{
	unsigned __int64 v1; // r14
	unsigned __int64 v2; // rbp
	HWND DesktopWindow; // rax
	unsigned __int64 v5; // r15
	HGLOBAL v6; // rax
	void* v7; // rdi
	int* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rdi
	__int64 v12; // rsi
	__int64 v13; // rax
	__int64 v14; // rdi
	__int64* v15; // rsi
	__int64 v16; // rbp
	__int64 v17; // rbx
	__int64 v18; // rax
	_QWORD* v19; // rcx
	_QWORD* v20; // rax
	unsigned __int64 v21; // rbp
	_QWORD* v22; // rcx
	unsigned __int64 v23; // rdx
	__int64 v24; // rax
	int v26; // [rsp+70h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 1040);
	v2 = *(_QWORD*)(a1 + 1048);
	if (v1 >= v2)
	{
		v1 = 0i64;
		v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080));
	}
	DesktopWindow = GetDesktopWindow();
	if (OpenClipboard(DesktopWindow))
	{
		EmptyClipboard();
		if ((*(_BYTE*)(a1 + 664) & 8) == 0)
		{
			v5 = 2 * (v2 - v1);
			v6 = GlobalAlloc(0x2002u, v5 + 2);
			v7 = v6;
			if (v6)
			{
				v8 = (int*)GlobalLock(v6);
				if (v8)
				{
					v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080));
					sub_1407DB590(v8, (int*)(v9 + 2 * v1), v5);
					*(_WORD*)((char*)v8 + v5) = 0;
					GlobalUnlock(v7);
					SetClipboardData(0xDu, v7);
				}
			}
		}
		CloseClipboard();
	}
	v10 = *(_QWORD*)(a1 + 1088);
	if (!v10
		|| (v26 = 1,
			(*(void(__fastcall**)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD*)v10 + 120i64))(v10, v1, v2),
			v11 = *(_QWORD*)(a1 + 1088),
			v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080)),
			v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 64i64))(v11),
			sub_1400D4070(a1, 0x26u, (char*)a1, "SS>b", v13, v12, &v26),
			v26))
	{
		(*(void(__fastcall**)(_QWORD, unsigned __int64, unsigned __int64))(**(_QWORD**)(a1 + 1080) + 120i64))(
			*(_QWORD*)(a1 + 1080),
			v1,
			v2);
		sub_14010EF50(a1, v1, v2);
		v19 = *(_QWORD**)(a1 + 1224);
		*(_QWORD*)(a1 + 1040) = v1;
		*(_QWORD*)(a1 + 1048) = v1;
		*(_QWORD*)(a1 + 1024) = v1;
		*(_QWORD*)(a1 + 1032) = -1i64;
		v20 = (_QWORD*)*v19;
		v21 = v2 - v1;
		if ((_QWORD*)*v19 != v19)
		{
			do
			{
				v22 = (_QWORD*)v20[2];
				v23 = v22[1];
				if (v23 > v1)
				{
					*v22 -= v21;
					v22[1] = v23 - v21;
				}
				v20 = (_QWORD*)*v20;
			} while (v20 != *(_QWORD**)(a1 + 1224));
		}
		sub_14010EE40((_QWORD*)a1);
		v24 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080));
		sub_1400D4070(a1, 0x27u, (char*)a1, L"S", v24);
		*(_BYTE*)(a1 + 1065) = 1;
	}
	else
	{
		v14 = *(_QWORD*)(a1 + 1080);
		v15 = *(__int64**)(a1 + 1088);
		v16 = *v15;
		v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 72i64))(v14);
		v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 64i64))(v14);
		(*(void(__fastcall**)(__int64*, __int64, __int64))(v16 + 56))(v15, v18, v17);
	}
	return 0i64;
}
// 1409D5A04: using guessed type wchar_t aS_1[2];

