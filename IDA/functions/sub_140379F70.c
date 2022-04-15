#include "../winhttp.h"

//----- (0000000140379F70) ----------------------------------------------------
int __fastcall sub_140379F70(__int64 a1, unsigned int a2, int a3, int a4)
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
		&& *(float*)(a1 + 704) > *(float*)(a1 + 688)
		&& *(float*)(a1 + 708) > *(float*)(a1 + 692)
		&& *(float*)(a1 + 712) > *(float*)(a1 + 696))
	{
		if (!*(_QWORD*)(a1 + 1264))
		{
			v6 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 5072i64);
			*(_QWORD*)(a1 + 1264) = v6;
			*(_QWORD*)(a1 + 1272) = *v6;
			*v6 = a1;
			v7 = *(_QWORD*)(a1 + 1272);
			if (v7)
				*(_QWORD*)(v7 + 1264) = a1 + 1272;
		}
		v8 = *(_QWORD*)(a1 + 1144);
		if (v8
			&& *(_DWORD*)(a1 + 1156)
			&& !(*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v8 + 40i64))(v8, &v14, a2))
		{
			v9 = v14 == 0;
			*(_DWORD*)(a1 + 1156) = 0;
			result = v9;
			*(_DWORD*)(a1 + 1164) = v9;
		}
		else
		{
			return *(_DWORD*)(a1 + 1164);
		}
	}
	else
	{
		if (!*(_QWORD*)(a1 + 1248))
		{
			v11 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 5064i64);
			*(_QWORD*)(a1 + 1248) = v11;
			*(_QWORD*)(a1 + 1256) = *v11;
			*v11 = a1;
			v12 = *(_QWORD*)(a1 + 1256);
			if (v12)
				*(_QWORD*)(v12 + 1248) = a1 + 1256;
		}
		v13 = *(_QWORD*)(a1 + 1136);
		if (v13
			&& *(_DWORD*)(a1 + 1152)
			&& !(*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v13 + 40i64))(v13, &v14, a2))
		{
			v9 = v14 == 0;
			*(_DWORD*)(a1 + 1152) = 0;
			result = v9;
			*(_DWORD*)(a1 + 1160) = v9;
		}
		else if (a4)
		{
			return *(_DWORD*)(a1 + 1160);
		}
		else
		{
			return 2;
		}
	}
	return result;
}

