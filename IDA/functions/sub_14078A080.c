#include "../winhttp.h"

//----- (000000014078A080) ----------------------------------------------------
__int64 __fastcall sub_14078A080(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	unsigned int v4; // eax
	__int64 v5; // rcx
	void(__fastcall * v6)(__int64, _QWORD); // rax
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	int v11[3]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v12; // [rsp+2Ch] [rbp-3Ch]
	__int64 v13; // [rsp+34h] [rbp-34h]
	int v14; // [rsp+3Ch] [rbp-2Ch]
	int v15[3]; // [rsp+40h] [rbp-28h] BYREF
	__int64 v16; // [rsp+4Ch] [rbp-1Ch]
	__int64 v17; // [rsp+54h] [rbp-14h]
	int v18; // [rsp+5Ch] [rbp-Ch]
	__int64 v19; // [rsp+70h] [rbp+8h] BYREF

	result = *(unsigned int*)(a1 + 92);
	if ((_DWORD)result == 2)
	{
		v8 = *(_QWORD*)(a1 + 24);
		*(_DWORD*)(a1 + 92) = 3;
		*(_BYTE*)(v8 + 1232) = 1;
		result = sub_14078A460(a1);
		if ((_DWORD)result)
		{
			v10 = *(_QWORD*)(v9 + 136);
			v15[0] = result;
			v15[2] = 1065353216;
			v15[1] = 0;
			v16 = 0i64;
			v17 = 0i64;
			v18 = 0;
			return (*(__int64(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v10 + 584i64))(v10, 0i64, v15);
		}
	}
	else if ((_DWORD)result == 4)
	{
		v3 = *(_QWORD*)(a1 + 24);
		*(_DWORD*)(a1 + 92) = 5;
		*(_BYTE*)(v3 + 1232) = 1;
		v4 = *(_DWORD*)(a1 + 144);
		if (v4)
		{
			v5 = *(_QWORD*)(a1 + 24);
			v19 = v4 | 0x100000000i64;
			sub_14072AFA0(v5, &v19);
		}
		v6 = *(void(__fastcall**)(__int64, _QWORD))(a1 + 56);
		if (v6)
			v6(a1, *(_QWORD*)(a1 + 72));
		result = sub_14078A460(a1);
		if ((_DWORD)result)
		{
			v7 = *(_QWORD*)(a1 + 136);
			v11[0] = result;
			v11[2] = 1065353216;
			v11[1] = 0;
			v12 = 0i64;
			v13 = 0i64;
			v14 = 0;
			return (*(__int64(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v7 + 584i64))(v7, 0i64, v11);
		}
	}
	return result;
}
// 14078A154: variable 'v9' is possibly undefined

