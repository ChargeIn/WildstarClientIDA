#include "../winhttp.h"

//----- (000000014038D370) ----------------------------------------------------
int __fastcall sub_14038D370(__int64 a1, unsigned int a2, int a3, int a4)
{
	_QWORD* v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rcx
	bool v9; // zf
	int result; // eax
	_QWORD* v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // [rsp+40h] [rbp+18h] BYREF

	if (a3
		&& *(float*)(a1 + 336) > *(float*)(a1 + 320)
		&& *(float*)(a1 + 340) > *(float*)(a1 + 324)
		&& *(float*)(a1 + 344) > *(float*)(a1 + 328))
	{
		if (!*(_QWORD*)(a1 + 1136))
		{
			v6 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 5312i64);
			*(_QWORD*)(a1 + 1136) = v6;
			*(_QWORD*)(a1 + 1144) = *v6;
			*v6 = a1;
			v7 = *(_QWORD*)(a1 + 1144);
			if (v7)
				*(_QWORD*)(v7 + 1136) = a1 + 1144;
		}
		v8 = *(_QWORD*)(a1 + 984);
		if (v8
			&& *(_DWORD*)(a1 + 996)
			&& !(*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v8 + 40i64))(v8, &v14, a2))
		{
			v9 = v14 == 0;
			*(_DWORD*)(a1 + 996) = 0;
			result = v9;
			*(_DWORD*)(a1 + 1004) = v9;
		}
		else
		{
			return *(_DWORD*)(a1 + 1004);
		}
	}
	else
	{
		if (!*(_QWORD*)(a1 + 1120))
		{
			v11 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 5304i64);
			*(_QWORD*)(a1 + 1120) = v11;
			*(_QWORD*)(a1 + 1128) = *v11;
			*v11 = a1;
			v12 = *(_QWORD*)(a1 + 1128);
			if (v12)
				*(_QWORD*)(v12 + 1120) = a1 + 1128;
		}
		v13 = *(_QWORD*)(a1 + 976);
		if (v13
			&& *(_DWORD*)(a1 + 992)
			&& !(*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v13 + 40i64))(v13, &v14, a2))
		{
			v9 = v14 == 0;
			*(_DWORD*)(a1 + 992) = 0;
			result = v9;
			*(_DWORD*)(a1 + 1000) = v9;
		}
		else if (a4)
		{
			return *(_DWORD*)(a1 + 1000);
		}
		else
		{
			return 2;
		}
	}
	return result;
}

